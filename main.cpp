#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {

    // Load pre-trained face detection model
    cv::CascadeClassifier face_cascade;
    if (!face_cascade.load("Resources/haarcascade_frontalface_alt.xml")) {
        std::cerr << "Error loading face detection model" << std::endl;
        return -1;
    }

    // Open the default camera (usually 0)
    cv::VideoCapture cap(0);

    // Check if camera opened successfully
    if (!cap.isOpened()) {
        std::cerr << "Error opening video stream or file" << std::endl;
        return -1;
    }

    // Create a window to display the frames
    cv::namedWindow("Webcam", cv::WINDOW_AUTOSIZE);

    while (true) {
        cv::Mat frame;
           
        // Capture frame-by-frame
        cap >> frame;
           
        // If the frame is empty, break immediately
        if (frame.empty())
            break;

        // Convert frame to grayscale for face detection
        cv::Mat gray;
        cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);

        // Detect faces in the frame
        std::vector<cv::Rect> faces;
        face_cascade.detectMultiScale(gray, faces);
            
        // Add text to the image
        std::string text = "sad";
        int fontFace = cv::FONT_HERSHEY_SIMPLEX;
        double fontScale = 0.9;
        cv::Scalar color(36, 255, 12); // Text color in BGR format (here: green)
        int thickness = 2; // Thickness of the text
            

        // Draw rectangles around detected faces
        for (const auto& face : faces) {
            int x = face.x;
            int y = face.y - 10;
            cv::Point org(x, y);
            cv::rectangle(frame, face, cv::Scalar(36, 255, 12), 1);
            cv::putText(frame, text, org, fontFace, fontScale, color, thickness);
        }

        // Display the resulting frame
        cv::imshow("Webcam", frame);

        // Press ESC to exit the loop
        if (cv::waitKey(1) == 27)
            break;
    }

    // When everything done, release the capture object
    cap.release();
    // Close all OpenCV windows
    cv::destroyAllWindows();

    return 0;
    
}