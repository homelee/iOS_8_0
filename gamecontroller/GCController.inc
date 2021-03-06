{ Parsed from GameController.framework (iPhoneOS8.2) GCController.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  GCControllerPtr = ^GCController;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  GCControllerDidConnectNotification: NSString; cvar; external;
  GCControllerDidDisconnectNotification: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
const
  GCControllerPlayerIndexUnset = -1;
{$endif}

{$ifdef CLASSES}

type
  GCController = objcclass external (NSObject)
  public
    procedure setControllerPausedHandler(newValue: OpaqueCBlock); message 'setControllerPausedHandler:';
    function controllerPausedHandler: OpaqueCBlock; message 'controllerPausedHandler';
    function vendorName: NSString; message 'vendorName';
    function isAttachedToDevice: boolean; message 'isAttachedToDevice';
    procedure setPlayerIndex(newValue: NSInteger); message 'setPlayerIndex:';
    function playerIndex: NSInteger; message 'playerIndex';
    function gamepad: GCGamepad; message 'gamepad';
    function extendedGamepad: GCExtendedGamepad; message 'extendedGamepad';
    function motion: GCMotion; message 'motion';
    class function controllers: NSArray; message 'controllers';
    class procedure startWirelessControllerDiscoveryWithCompletionHandler (completionHandler: OpaqueCBlock); message 'startWirelessControllerDiscoveryWithCompletionHandler:';
    class procedure stopWirelessControllerDiscovery; message 'stopWirelessControllerDiscovery';
  end;
{$endif}

