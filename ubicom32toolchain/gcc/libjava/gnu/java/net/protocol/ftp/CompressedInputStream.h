
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_protocol_ftp_CompressedInputStream__
#define __gnu_java_net_protocol_ftp_CompressedInputStream__

#pragma interface

#include <gnu/java/net/protocol/ftp/DTPInputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace protocol
        {
          namespace ftp
          {
              class CompressedInputStream;
              class DTP;
          }
        }
      }
    }
  }
}

class gnu::java::net::protocol::ftp::CompressedInputStream : public ::gnu::java::net::protocol::ftp::DTPInputStream
{

public: // actually package-private
  CompressedInputStream(::gnu::java::net::protocol::ftp::DTP *, ::java::io::InputStream *);
public:
  virtual jint read();
  virtual jint read(JArray< jbyte > *);
  virtual jint read(JArray< jbyte > *, jint, jint);
public: // actually package-private
  virtual void readHeader();
  virtual void readCodeHeader();
  static const jint EOF = 64;
  static const jint RAW = 0;
  static const jint COMPRESSED = 128;
  static const jint FILLER = 192;
  jint __attribute__((aligned(__alignof__( ::gnu::java::net::protocol::ftp::DTPInputStream)))) descriptor;
  jint max;
  jint count;
  jint state;
  jint rep;
  jint n;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_net_protocol_ftp_CompressedInputStream__