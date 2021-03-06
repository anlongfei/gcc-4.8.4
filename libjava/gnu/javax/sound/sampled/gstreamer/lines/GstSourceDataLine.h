
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_sound_sampled_gstreamer_lines_GstSourceDataLine__
#define __gnu_javax_sound_sampled_gstreamer_lines_GstSourceDataLine__

#pragma interface

#include <gnu/javax/sound/sampled/gstreamer/lines/GstDataLine.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace sound
      {
        namespace sampled
        {
          namespace gstreamer
          {
            namespace lines
            {
                class GstPipeline;
                class GstSourceDataLine;
            }
          }
        }
      }
    }
  }
  namespace javax
  {
    namespace sound
    {
      namespace sampled
      {
          class AudioFormat;
      }
    }
  }
}

class gnu::javax::sound::sampled::gstreamer::lines::GstSourceDataLine : public ::gnu::javax::sound::sampled::gstreamer::lines::GstDataLine
{

public:
  GstSourceDataLine(::javax::sound::sampled::AudioFormat *);
  virtual void open();
  virtual void open(::javax::sound::sampled::AudioFormat *);
  virtual void open(::javax::sound::sampled::AudioFormat *, jint);
  virtual jint write(JArray< jbyte > *, jint, jint);
  virtual jint available();
  virtual void drain();
  virtual void flush();
  virtual jint getFramePosition();
  virtual jlong getLongFramePosition();
  virtual jlong getMicrosecondPosition();
  virtual jboolean isActive();
  virtual void start();
  virtual void stop();
  virtual void close();
  virtual jboolean isRunning();
private:
  ::gnu::javax::sound::sampled::gstreamer::lines::GstPipeline * __attribute__((aligned(__alignof__( ::gnu::javax::sound::sampled::gstreamer::lines::GstDataLine)))) pipeline;
  jboolean open__;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_sound_sampled_gstreamer_lines_GstSourceDataLine__
