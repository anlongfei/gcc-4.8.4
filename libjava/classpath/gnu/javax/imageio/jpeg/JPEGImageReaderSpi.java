/* JPEGImageReaderSpi.java --
   Copyright (C)  2006  Free Software Foundation, Inc.

This file is part of GNU Classpath.

GNU Classpath is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU Classpath is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Classpath; see the file COPYING.  If not, write to the
Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA.

Linking this library statically or dynamically with other modules is
making a combined work based on this library.  Thus, the terms and
conditions of the GNU General Public License cover the whole
combination.

As a special exception, the copyright holders of this library give you
permission to link this library with independent modules to produce an
executable, regardless of the license terms of these independent
modules, and to copy and distribute the resulting executable under
terms of your choice, provided that you also meet, for each linked
independent module, the terms and conditions of the license of that
module.  An independent module is a module which is not derived from
or based on this library.  If you modify this library, you may extend
this exception to your version of the library, but you are not
obligated to do so.  If you do not wish to do so, delete this
exception statement from your version. */

package gnu.javax.imageio.jpeg;

import java.io.IOException;
import java.util.Locale;
import javax.imageio.ImageReader;
import javax.imageio.spi.ImageReaderSpi;
import javax.imageio.spi.IIORegistry;
import javax.imageio.stream.ImageInputStream;

public class JPEGImageReaderSpi extends ImageReaderSpi
{
  static final String vendorName = "GNU";
  static final String version = "0.1";
  static final String readerClassName =
    "gnu.javax.imageio.jpeg.JPEGImageReader";
  static final String[] names = { "JPEG" };
  static final String[] suffixes = { ".jpeg", ".jpg", ".jpe" };
  static final String[] MIMETypes = { "image/jpeg" };
  static final String[] writerSpiNames =
    { "gnu.javax.imageio.jpeg.JPEGImageWriterSpi" };

  static final boolean supportsStandardStreamMetadataFormat = false;
  static final String nativeStreamMetadataFormatName = null;
  static final String nativeStreamMetadataFormatClassName = null;
  static final String[] extraStreamMetadataFormatNames = null;
  static final String[] extraStreamMetadataFormatClassNames = null;
  static final boolean supportsStandardImageMetadataFormat = false;
  static final String nativeImageMetadataFormatName = null;
  static final String nativeImageMetadataFormatClassName = null;
  static final String[] extraImageMetadataFormatNames = null;
  static final String[] extraImageMetadataFormatClassNames = null;

  private static JPEGImageReaderSpi readerSpi;

  public JPEGImageReaderSpi()
  {
    super(vendorName, version,
          names, suffixes, MIMETypes,
          readerClassName,
          STANDARD_INPUT_TYPE, // Accept ImageInputStreams
          writerSpiNames,
          supportsStandardStreamMetadataFormat,
          nativeStreamMetadataFormatName,
          nativeStreamMetadataFormatClassName,
          extraStreamMetadataFormatNames,
          extraStreamMetadataFormatClassNames,
          supportsStandardImageMetadataFormat,
          nativeImageMetadataFormatName,
          nativeImageMetadataFormatClassName,
          extraImageMetadataFormatNames,
          extraImageMetadataFormatClassNames);
    System.out.println ("JPEGImageReaderSPI!!!");
  }

  public String getDescription(Locale locale)
  {
    return "JPEG ISO 10918-1, JFIF V1.02";
  }

  public boolean canDecodeInput(Object input)
    throws IOException
  {
    if (!(input instanceof ImageInputStream))
      return false;

    ImageInputStream in = (ImageInputStream) input;
    boolean retval;

    in.mark();
    try
      {
        new JPEGDecoder(in);
        retval = true;
      }
    catch(JPEGException e)
      {
        retval = false;
      }
    in.reset();

    return retval;
  }

  public ImageReader createReaderInstance(Object extension)
  {
    return new JPEGImageReader(this);
  }

  public static void registerSpis(IIORegistry reg)
  {
    reg.registerServiceProvider(getReaderSpi(), ImageReaderSpi.class);
  }

  public static synchronized JPEGImageReaderSpi getReaderSpi()
  {
    if (readerSpi == null)
      readerSpi = new JPEGImageReaderSpi();
    return readerSpi;
  }
}
