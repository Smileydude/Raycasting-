/*
created with obj2opengl.pl

source file    : ./figure.obj
vertices       : 58
faces          : 110
normals        : 0
texture coords : 0


// include generated arrays
#import "./figure.h"

// set input data to arrays
glVertexPointer(3, GL_FLOAT, 0, figureVerts);

// draw data
glDrawArrays(GL_TRIANGLES, 0, figureNumVerts);
*/

//File created from a wavefront .obj file exported from blender of a simple 3D model, used a script called obj2opengl.pl to convert it from .obj to .h

unsigned int figureNumVerts = 330;

float figureVerts [] = {
  // f 25 29 3 32
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, 0.399001161291145,
  -0.23090423606023, -0.545834256991257, 0.399001161291145,
  // f 25 29 3 32
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, 0.399001161291145,
  // f 5 30 8
  0.338987094211458, 0.248726472196098, -0.170889884034877,
  -0.23090423606023, 0.248726472196098, -0.170890168980542,
  -0.23090423606023, 0.248726472196098, -0.170890168980542,
  // f 5 8 9
  0.338987094211458, 0.248726472196098, -0.170889884034877,
  -0.23090423606023, 0.248726472196098, -0.170890168980542,
  -0.23090423606023, 0.0240570732804297, 0.114055496155302,
  // f 5 9 10
  0.338987094211458, 0.248726472196098, -0.170889884034877,
  -0.23090423606023, 0.0240570732804297, 0.114055496155302,
  0.338987094211458, 0.0240570732804297, 0.114055781100967,
  // f 9 7 10
  -0.23090423606023, 0.0240570732804297, 0.114055496155302,
  -0.23090423606023, 0.0240570732804297, 0.399001161291145,
  0.338987094211458, 0.0240570732804297, 0.114055781100967,
  // f 7 11 10
  -0.23090423606023, 0.0240570732804297, 0.399001161291145,
  0.0540411441299488, 0.0240570732804297, 0.399001161291145,
  0.338987094211458, 0.0240570732804297, 0.114055781100967,
  // f 11 6 10
  0.0540411441299488, 0.0240570732804297, 0.399001161291145,
  0.338986809265792, 0.0240570732804297, 0.39900144623681,
  0.338987094211458, 0.0240570732804297, 0.114055781100967,
  // f 26 5 10
  0.338987094211458, 0.107523072566356, -0.170890168980542,
  0.338987094211458, 0.248726472196098, -0.170889884034877,
  0.338987094211458, 0.0240570732804297, 0.114055781100967,
  // f 12 26 10
  0.338987094211458, -0.243776179935681, -0.170890168980542,
  0.338987094211458, 0.107523072566356, -0.170890168980542,
  0.338987094211458, 0.0240570732804297, 0.114055781100967,
  // f 10 6 2
  0.338987094211458, 0.0240570732804297, 0.114055781100967,
  0.338986809265792, 0.0240570732804297, 0.39900144623681,
  0.338987094211458, -0.545834256991257, 0.399001161291145,
  // f 12 10 2
  0.338987094211458, -0.243776179935681, -0.170890168980542,
  0.338987094211458, 0.0240570732804297, 0.114055781100967,
  0.338987094211458, -0.545834256991257, 0.399001161291145,
  // f 17 12 2
  0.338987094211458, -0.407750727449088, -0.170890168980542,
  0.338987094211458, -0.243776179935681, -0.170890168980542,
  0.338987094211458, -0.545834256991257, 0.399001161291145,
  // f 17 2 33
  0.338987094211458, -0.407750727449088, -0.170890168980542,
  0.338987094211458, -0.545834256991257, 0.399001161291145,
  0.338987094211458, -0.545834256991257, -0.170890168980542,
  // f 11 7 3
  0.0540411441299488, 0.0240570732804297, 0.399001161291145,
  -0.23090423606023, 0.0240570732804297, 0.399001161291145,
  -0.23090423606023, -0.545834256991257, 0.399001161291145,
  // f 6 11 3
  0.338986809265792, 0.0240570732804297, 0.39900144623681,
  0.0540411441299488, 0.0240570732804297, 0.399001161291145,
  -0.23090423606023, -0.545834256991257, 0.399001161291145,
  // f 2 6 3
  0.338987094211458, -0.545834256991257, 0.399001161291145,
  0.338986809265792, 0.0240570732804297, 0.39900144623681,
  -0.23090423606023, -0.545834256991257, 0.399001161291145,
  // f 9 8 27
  -0.23090423606023, 0.0240570732804297, 0.114055496155302,
  -0.23090423606023, 0.248726472196098, -0.170890168980542,
  -0.23090423606023, 0.107523072566356, -0.170890168980542,
  // f 9 27 13
  -0.23090423606023, 0.0240570732804297, 0.114055496155302,
  -0.23090423606023, 0.107523072566356, -0.170890168980542,
  -0.23090423606023, -0.243776179935681, -0.170890168980542,
  // f 3 7 9
  -0.23090423606023, -0.545834256991257, 0.399001161291145,
  -0.23090423606023, 0.0240570732804297, 0.399001161291145,
  -0.23090423606023, 0.0240570732804297, 0.114055496155302,
  // f 3 9 13
  -0.23090423606023, -0.545834256991257, 0.399001161291145,
  -0.23090423606023, 0.0240570732804297, 0.114055496155302,
  -0.23090423606023, -0.243776179935681, -0.170890168980542,
  // f 3 13 16
  -0.23090423606023, -0.545834256991257, 0.399001161291145,
  -0.23090423606023, -0.243776179935681, -0.170890168980542,
  -0.23090423606023, -0.407750727449088, -0.170890168980542,
  // f 3 16 4
  -0.23090423606023, -0.545834256991257, 0.399001161291145,
  -0.23090423606023, -0.407750727449088, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  // f 3 4 32
  -0.23090423606023, -0.545834256991257, 0.399001161291145,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  // f 37 28 4 16
  -0.23090423606023, -0.407750727449088, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  // f 37 28 4 16
  -0.23090423606023, -0.407750727449088, -0.170890168980542,
  -0.23090423606023, -0.407750727449088, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  // f 36 31 13 27
  -0.23090423606023, 0.107523072566356, -0.170890168980542,
  -0.23090423606023, -0.243776179935681, -0.170890168980542,
  -0.23090423606023, -0.243776179935681, -0.170890168980542,
  // f 36 31 13 27
  -0.23090423606023, 0.107523072566356, -0.170890168980542,
  -0.23090423606023, 0.107523072566356, -0.170890168980542,
  -0.23090423606023, -0.243776179935681, -0.170890168980542,
  // f 37 16 19 23
  -0.23090423606023, -0.407750727449088, -0.170890168980542,
  -0.23090423606023, -0.407750727449088, -0.170890168980542,
  -0.23090423606023, -0.407750727449088, -0.290193784570603,
  // f 37 16 19 23
  -0.23090423606023, -0.407750727449088, -0.170890168980542,
  -0.23090423606023, -0.407750727449088, -0.290193784570603,
  -0.23090423606023, -0.407750727449088, -0.290193784570603,
  // f 24 35 8 30
  -0.23090423606023, 0.248726472196098, -0.274324590587858,
  -0.23090423606023, 0.248726472196098, -0.274324590587858,
  -0.23090423606023, 0.248726472196098, -0.170890168980542,
  // f 24 35 8 30
  -0.23090423606023, 0.248726472196098, -0.274324590587858,
  -0.23090423606023, 0.248726472196098, -0.170890168980542,
  -0.23090423606023, 0.248726472196098, -0.170890168980542,
  // f 36 27 14 38
  -0.23090423606023, 0.107523072566356, -0.170890168980542,
  -0.23090423606023, 0.107523072566356, -0.170890168980542,
  -0.23090423606023, 0.107523357512021, -0.274324875533523,
  // f 36 27 14 38
  -0.23090423606023, 0.107523072566356, -0.170890168980542,
  -0.23090423606023, 0.107523357512021, -0.274324875533523,
  -0.23090423606023, 0.107523357512021, -0.274324875533523,
  // f 15 34 5 26
  0.338987094211458, 0.107523357512021, -0.274324590587858,
  0.338987379157123, 0.248726472196098, -0.274324590587858,
  0.338987094211458, 0.248726472196098, -0.170889884034877,
  // f 15 34 5 26
  0.338987094211458, 0.107523357512021, -0.274324590587858,
  0.338987094211458, 0.107523072566356, -0.170890168980542,
  0.338987094211458, 0.248726472196098, -0.170889884034877,
  // f 24 38 14 35
  -0.23090423606023, 0.248726472196098, -0.274324590587858,
  -0.23090423606023, 0.107523357512021, -0.274324875533523,
  -0.23090423606023, 0.107523357512021, -0.274324875533523,
  // f 24 38 14 35
  -0.23090423606023, 0.248726472196098, -0.274324590587858,
  -0.23090423606023, 0.248726472196098, -0.274324590587858,
  -0.23090423606023, 0.107523357512021, -0.274324875533523,
  // f 27 8 35 14
  -0.23090423606023, 0.107523072566356, -0.170890168980542,
  -0.23090423606023, 0.248726472196098, -0.170890168980542,
  -0.23090423606023, 0.248726472196098, -0.274324590587858,
  // f 27 8 35 14
  -0.23090423606023, 0.107523072566356, -0.170890168980542,
  -0.23090423606023, 0.107523357512021, -0.274324875533523,
  -0.23090423606023, 0.248726472196098, -0.274324590587858,
  // f 22 23 19 20
  -0.23090423606023, -0.243776179935681, -0.290193784570603,
  -0.23090423606023, -0.407750727449088, -0.290193784570603,
  -0.23090423606023, -0.407750727449088, -0.290193784570603,
  // f 22 23 19 20
  -0.23090423606023, -0.243776179935681, -0.290193784570603,
  -0.23090423606023, -0.243776179935681, -0.290193784570603,
  -0.23090423606023, -0.407750727449088, -0.290193784570603,
  // f 16 13 20 19
  -0.23090423606023, -0.407750727449088, -0.170890168980542,
  -0.23090423606023, -0.243776179935681, -0.170890168980542,
  -0.23090423606023, -0.243776179935681, -0.290193784570603,
  // f 16 13 20 19
  -0.23090423606023, -0.407750727449088, -0.170890168980542,
  -0.23090423606023, -0.407750727449088, -0.290193784570603,
  -0.23090423606023, -0.243776179935681, -0.290193784570603,
  // f 18 21 12 17
  0.338987094211458, -0.407750727449088, -0.290193499624938,
  0.338987094211458, -0.243776179935681, -0.290193499624938,
  0.338987094211458, -0.243776179935681, -0.170890168980542,
  // f 18 21 12 17
  0.338987094211458, -0.407750727449088, -0.290193499624938,
  0.338987094211458, -0.407750727449088, -0.170890168980542,
  0.338987094211458, -0.243776179935681, -0.170890168980542,
  // f 22 20 13 31
  -0.23090423606023, -0.243776179935681, -0.290193784570603,
  -0.23090423606023, -0.243776179935681, -0.290193784570603,
  -0.23090423606023, -0.243776179935681, -0.170890168980542,
  // f 22 20 13 31
  -0.23090423606023, -0.243776179935681, -0.290193784570603,
  -0.23090423606023, -0.243776179935681, -0.170890168980542,
  -0.23090423606023, -0.243776179935681, -0.170890168980542,
  // f 28 25 32 4
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  // f 28 25 32 4
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  // f 33 2 29 25
  0.338987094211458, -0.545834256991257, -0.170890168980542,
  0.338987094211458, -0.545834256991257, 0.399001161291145,
  -0.23090423606023, -0.545834256991257, 0.399001161291145,
  // f 33 2 29 25
  0.338987094211458, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, 0.399001161291145,
  // f 17 37 23 18
  0.338987094211458, -0.407750727449088, -0.170890168980542,
  -0.23090423606023, -0.407750727449088, -0.170890168980542,
  -0.23090423606023, -0.407750727449088, -0.290193784570603,
  // f 17 37 23 18
  0.338987094211458, -0.407750727449088, -0.170890168980542,
  0.338987094211458, -0.407750727449088, -0.290193499624938,
  -0.23090423606023, -0.407750727449088, -0.290193784570603,
  // f 17 1 28 37
  0.338987094211458, -0.407750727449088, -0.170890168980542,
  0.338987094211458, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  // f 17 1 28 37
  0.338987094211458, -0.407750727449088, -0.170890168980542,
  -0.23090423606023, -0.407750727449088, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  // f 26 12 31 36
  0.338987094211458, 0.107523072566356, -0.170890168980542,
  0.338987094211458, -0.243776179935681, -0.170890168980542,
  -0.23090423606023, -0.243776179935681, -0.170890168980542,
  // f 26 12 31 36
  0.338987094211458, 0.107523072566356, -0.170890168980542,
  -0.23090423606023, 0.107523072566356, -0.170890168980542,
  -0.23090423606023, -0.243776179935681, -0.170890168980542,
  // f 24 30 41 40
  -0.23090423606023, 0.248726472196098, -0.274324590587858,
  -0.23090423606023, 0.248726472196098, -0.170890168980542,
  -0.23090423606023, 0.325486560198717, -0.170890168980542,
  // f 24 30 41 40
  -0.23090423606023, 0.248726472196098, -0.274324590587858,
  -0.23090423606023, 0.325486560198717, -0.274324590587858,
  -0.23090423606023, 0.325486560198717, -0.170890168980542,
  // f 26 36 38 15
  0.338987094211458, 0.107523072566356, -0.170890168980542,
  -0.23090423606023, 0.107523072566356, -0.170890168980542,
  -0.23090423606023, 0.107523357512021, -0.274324875533523,
  // f 26 36 38 15
  0.338987094211458, 0.107523072566356, -0.170890168980542,
  0.338987094211458, 0.107523357512021, -0.274324590587858,
  -0.23090423606023, 0.107523357512021, -0.274324875533523,
  // f 34 15 38 24
  0.338987379157123, 0.248726472196098, -0.274324590587858,
  0.338987094211458, 0.107523357512021, -0.274324590587858,
  -0.23090423606023, 0.107523357512021, -0.274324875533523,
  // f 34 15 38 24
  0.338987379157123, 0.248726472196098, -0.274324590587858,
  -0.23090423606023, 0.248726472196098, -0.274324590587858,
  -0.23090423606023, 0.107523357512021, -0.274324875533523,
  // f 21 18 23 22
  0.338987094211458, -0.243776179935681, -0.290193499624938,
  0.338987094211458, -0.407750727449088, -0.290193499624938,
  -0.23090423606023, -0.407750727449088, -0.290193784570603,
  // f 21 18 23 22
  0.338987094211458, -0.243776179935681, -0.290193499624938,
  -0.23090423606023, -0.243776179935681, -0.290193784570603,
  -0.23090423606023, -0.407750727449088, -0.290193784570603,
  // f 21 22 31 12
  0.338987094211458, -0.243776179935681, -0.290193499624938,
  -0.23090423606023, -0.243776179935681, -0.290193784570603,
  -0.23090423606023, -0.243776179935681, -0.170890168980542,
  // f 21 22 31 12
  0.338987094211458, -0.243776179935681, -0.290193499624938,
  0.338987094211458, -0.243776179935681, -0.170890168980542,
  -0.23090423606023, -0.243776179935681, -0.170890168980542,
  // f 1 33 25 28
  0.338987094211458, -0.545834256991257, -0.170890168980542,
  0.338987094211458, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  // f 1 33 25 28
  0.338987094211458, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  -0.23090423606023, -0.545834256991257, -0.170890168980542,
  // f 42 40 41 39
  0.338987379157123, 0.325486560198717, -0.274324590587858,
  -0.23090423606023, 0.325486560198717, -0.274324590587858,
  -0.23090423606023, 0.325486560198717, -0.170890168980542,
  // f 42 40 41 39
  0.338987379157123, 0.325486560198717, -0.274324590587858,
  0.338987094211458, 0.325486560198717, -0.170889884034877,
  -0.23090423606023, 0.325486560198717, -0.170890168980542,
  // f 5 34 42 39
  0.338987094211458, 0.248726472196098, -0.170889884034877,
  0.338987379157123, 0.248726472196098, -0.274324590587858,
  0.338987379157123, 0.325486560198717, -0.274324590587858,
  // f 5 34 42 39
  0.338987094211458, 0.248726472196098, -0.170889884034877,
  0.338987094211458, 0.325486560198717, -0.170889884034877,
  0.338987379157123, 0.325486560198717, -0.274324590587858,
  // f 45 43 5 39
  0.338987094211458, 0.325486560198717, 0.211959977239326,
  0.338987094211458, 0.248726472196098, 0.211959977239326,
  0.338987094211458, 0.248726472196098, -0.170889884034877,
  // f 45 43 5 39
  0.338987094211458, 0.325486560198717, 0.211959977239326,
  0.338987094211458, 0.325486560198717, -0.170889884034877,
  0.338987094211458, 0.248726472196098, -0.170889884034877,
  // f 40 42 34 24
  -0.23090423606023, 0.325486560198717, -0.274324590587858,
  0.338987379157123, 0.325486560198717, -0.274324590587858,
  0.338987379157123, 0.248726472196098, -0.274324590587858,
  // f 40 42 34 24
  -0.23090423606023, 0.325486560198717, -0.274324590587858,
  -0.23090423606023, 0.248726472196098, -0.274324590587858,
  0.338987379157123, 0.248726472196098, -0.274324590587858,
  // f 49 47 43 45
  0.338987094211458, 0.325486560198717, 0.311084025770132,
  0.338987094211458, 0.248726187250432, 0.311084025770132,
  0.338987094211458, 0.248726472196098, 0.211959977239326,
  // f 49 47 43 45
  0.338987094211458, 0.325486560198717, 0.311084025770132,
  0.338987094211458, 0.325486560198717, 0.211959977239326,
  0.338987094211458, 0.248726472196098, 0.211959977239326,
  // f 30 5 43 44
  -0.23090423606023, 0.248726472196098, -0.170890168980542,
  0.338987094211458, 0.248726472196098, -0.170889884034877,
  0.338987094211458, 0.248726472196098, 0.211959977239326,
  // f 30 5 43 44
  -0.23090423606023, 0.248726472196098, -0.170890168980542,
  -0.23090423606023, 0.248726472196098, 0.211959692293661,
  0.338987094211458, 0.248726472196098, 0.211959977239326,
  // f 44 46 41 30
  -0.23090423606023, 0.248726472196098, 0.211959692293661,
  -0.23090423606023, 0.325486560198717, 0.211959692293661,
  -0.23090423606023, 0.325486560198717, -0.170890168980542,
  // f 44 46 41 30
  -0.23090423606023, 0.248726472196098, 0.211959692293661,
  -0.23090423606023, 0.248726472196098, -0.170890168980542,
  -0.23090423606023, 0.325486560198717, -0.170890168980542,
  // f 46 45 39 41
  -0.23090423606023, 0.325486560198717, 0.211959692293661,
  0.338987094211458, 0.325486560198717, 0.211959977239326,
  0.338987094211458, 0.325486560198717, -0.170889884034877,
  // f 46 45 39 41
  -0.23090423606023, 0.325486560198717, 0.211959692293661,
  -0.23090423606023, 0.325486560198717, -0.170890168980542,
  0.338987094211458, 0.325486560198717, -0.170889884034877,
  // f 57 55 47 49
  0.338987094211458, 0.325486560198717, 0.398295350878604,
  0.338987094211458, 0.248726187250432, 0.398295350878604,
  0.338987094211458, 0.248726187250432, 0.311084025770132,
  // f 57 55 47 49
  0.338987094211458, 0.325486560198717, 0.398295350878604,
  0.338987094211458, 0.325486560198717, 0.311084025770132,
  0.338987094211458, 0.248726187250432, 0.311084025770132,
  // f 44 43 47 48
  -0.23090423606023, 0.248726472196098, 0.211959692293661,
  0.338987094211458, 0.248726472196098, 0.211959977239326,
  0.338987094211458, 0.248726187250432, 0.311084025770132,
  // f 44 43 47 48
  -0.23090423606023, 0.248726472196098, 0.211959692293661,
  -0.23090423606023, 0.248726187250432, 0.311083740824467,
  0.338987094211458, 0.248726187250432, 0.311084025770132,
  // f 46 50 54 52
  -0.23090423606023, 0.325486560198717, 0.211959692293661,
  -0.23090423606023, 0.325486560198717, 0.311083740824467,
  -0.23090423606023, 0.454165743008743, 0.311083740824467,
  // f 46 50 54 52
  -0.23090423606023, 0.325486560198717, 0.211959692293661,
  -0.23090423606023, 0.454165743008743, 0.211959692293661,
  -0.23090423606023, 0.454165743008743, 0.311083740824467,
  // f 48 50 46 44
  -0.23090423606023, 0.248726187250432, 0.311083740824467,
  -0.23090423606023, 0.325486560198717, 0.311083740824467,
  -0.23090423606023, 0.325486560198717, 0.211959692293661,
  // f 48 50 46 44
  -0.23090423606023, 0.248726187250432, 0.311083740824467,
  -0.23090423606023, 0.248726472196098, 0.211959692293661,
  -0.23090423606023, 0.325486560198717, 0.211959692293661,
  // f 54 53 51 52
  -0.23090423606023, 0.454165743008743, 0.311083740824467,
  0.338987094211458, 0.454165743008743, 0.311084025770132,
  0.338987094211458, 0.454165743008743, 0.211959977239326,
  // f 54 53 51 52
  -0.23090423606023, 0.454165743008743, 0.311083740824467,
  -0.23090423606023, 0.454165743008743, 0.211959692293661,
  0.338987094211458, 0.454165743008743, 0.211959977239326,
  // f 50 49 53 54
  -0.23090423606023, 0.325486560198717, 0.311083740824467,
  0.338987094211458, 0.325486560198717, 0.311084025770132,
  0.338987094211458, 0.454165743008743, 0.311084025770132,
  // f 50 49 53 54
  -0.23090423606023, 0.325486560198717, 0.311083740824467,
  -0.23090423606023, 0.454165743008743, 0.311083740824467,
  0.338987094211458, 0.454165743008743, 0.311084025770132,
  // f 52 51 45 46
  -0.23090423606023, 0.454165743008743, 0.211959692293661,
  0.338987094211458, 0.454165743008743, 0.211959977239326,
  0.338987094211458, 0.325486560198717, 0.211959977239326,
  // f 52 51 45 46
  -0.23090423606023, 0.454165743008743, 0.211959692293661,
  -0.23090423606023, 0.325486560198717, 0.211959692293661,
  0.338987094211458, 0.325486560198717, 0.211959977239326,
  // f 51 53 49 45
  0.338987094211458, 0.454165743008743, 0.211959977239326,
  0.338987094211458, 0.454165743008743, 0.311084025770132,
  0.338987094211458, 0.325486560198717, 0.311084025770132,
  // f 51 53 49 45
  0.338987094211458, 0.454165743008743, 0.211959977239326,
  0.338987094211458, 0.325486560198717, 0.211959977239326,
  0.338987094211458, 0.325486560198717, 0.311084025770132,
  // f 56 55 57 58
  -0.230904521005895, 0.248726187250432, 0.398295350878604,
  0.338987094211458, 0.248726187250432, 0.398295350878604,
  0.338987094211458, 0.325486560198717, 0.398295350878604,
  // f 56 55 57 58
  -0.230904521005895, 0.248726187250432, 0.398295350878604,
  -0.230904521005895, 0.325486560198717, 0.398295350878604,
  0.338987094211458, 0.325486560198717, 0.398295350878604,
  // f 58 57 49 50
  -0.230904521005895, 0.325486560198717, 0.398295350878604,
  0.338987094211458, 0.325486560198717, 0.398295350878604,
  0.338987094211458, 0.325486560198717, 0.311084025770132,
  // f 58 57 49 50
  -0.230904521005895, 0.325486560198717, 0.398295350878604,
  -0.23090423606023, 0.325486560198717, 0.311083740824467,
  0.338987094211458, 0.325486560198717, 0.311084025770132,
  // f 56 58 50 48
  -0.230904521005895, 0.248726187250432, 0.398295350878604,
  -0.230904521005895, 0.325486560198717, 0.398295350878604,
  -0.23090423606023, 0.325486560198717, 0.311083740824467,
  // f 56 58 50 48
  -0.230904521005895, 0.248726187250432, 0.398295350878604,
  -0.23090423606023, 0.248726187250432, 0.311083740824467,
  -0.23090423606023, 0.325486560198717, 0.311083740824467,
  // f 48 47 55 56
  -0.23090423606023, 0.248726187250432, 0.311083740824467,
  0.338987094211458, 0.248726187250432, 0.311084025770132,
  0.338987094211458, 0.248726187250432, 0.398295350878604,
  // f 48 47 55 56
  -0.23090423606023, 0.248726187250432, 0.311083740824467,
  -0.230904521005895, 0.248726187250432, 0.398295350878604,
  0.338987094211458, 0.248726187250432, 0.398295350878604,
};

