{ Parsed from OpenGLES.framework (iPhoneOS8.2) EAGLDrawable.h }
{ Created on Fri Mar 20 2:10:59 2015 }


{$ifdef TYPES}
type
  EAGLDrawableProtocolPtr = ^EAGLDrawableProtocol;
{$endif}

{$ifndef _EAGL_DRAWABLE_H_}
{$ifdef EXTERNAL_SYMBOLS}
var
  kEAGLDrawablePropertyRetainedBacking: NSString; cvar; external;
  kEAGLDrawablePropertyColorFormat: NSString; cvar; external;
  kEAGLColorFormatRGBA8: NSString; cvar; external;
  kEAGLColorFormatRGB565: NSString; cvar; external;
  kEAGLColorFormatSRGBA8: NSString { available in 7_0 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  EAGLDrawableProtocol = objcprotocol external name 'EAGLDrawable'
    procedure setDrawableProperties(newValue: NSDictionary); message 'setDrawableProperties:';
    function drawableProperties: NSDictionary; message 'drawableProperties';
  end;
{$endif}

{$ifdef CLASSES}

type
  EAGLContextDrawableAdditions = objccategory external (EAGLContext)
    function renderbufferStorage_fromDrawable (target: NSUInteger; drawable: EAGLDrawableProtocol): boolean; message 'renderbufferStorage:fromDrawable:';
    function presentRenderbuffer (target: NSUInteger): boolean; message 'presentRenderbuffer:';
  end;
{$endif}

{$endif}
