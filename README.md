# Machine Vision Projects

3 Machine vision projects. Quick Face recognition, document scanner, and depth tracker with a real-time webcam.

## Getting Started

To get started fetch the repo.

#### Getting Started for Depth Tracker
* read the Depth tracking markdown file with sources from the IPF judging guide
* Place 2D camera at the appropriate locations for judging

### Prerequisites

* OpenCV 4.9.0
* Webcam/or 2D video capture input

### Installing

#### Change or update path environement variables:
* `C:\opencv\build\x64\vc16\bin`

#### Change/update project properties VC++ directories
* Inculde directories: `C:\opencv\build\include`
* Library directories: `C:\opencv\build\x64\vc16\lib`

#### Change/update project properties Linker > Input
`opencv_world490d.lib` (I'm using the debug mode)

### Notes

You might need to change the default webcam/video capture device

 `cv::VideoCapture cap(0);`

## Examples
todo

## Running the Tests
todo

## Built With

[OpenCV 4.9.0](https://opencv.org/releases/) - Machine Vision API


## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* [Pysource](https://pysource.com/2021/08/16/face-recognition-in-real-time-with-opencv-and-python/) - opencv and python
* [Addison](https://automaticaddison.com/real-time-object-tracking-using-opencv-and-a-webcam/) - opencv face tracking
* [Youtube](https://youtu.be/2FYm3GOonhk?si=P0I5RKQTtOZpYi34&t=10980) - Document scanner






