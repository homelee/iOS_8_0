{ Parsed from SceneKit.framework (iPhoneOS8.2) SCNPhysicsField.h }
{ Created on Fri Mar 20 2:11:17 2015 }


{ Types from SCNPhysicsField }
{$ifdef TYPES}

type
  SCNFieldForceEvaluator = OpaqueCBlock;
{$endif}


{$ifdef TYPES}
type
  SCNPhysicsFieldPtr = ^SCNPhysicsField;
{$endif}

{$ifdef TYPES}
type
  SCNPhysicsFieldScope = NSInteger;
  SCNPhysicsFieldScopePtr = ^SCNPhysicsFieldScope;

const
  SCNPhysicsFieldScopeInsideExtent = 0;
  SCNPhysicsFieldScopeOutsideExtent = 1;
{$endif}

{$ifdef CLASSES}

type
  SCNPhysicsField = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _reserved: pointer;
  public
    procedure setStrength(newValue: CGFloat); message 'setStrength:';
    function strength: CGFloat; message 'strength';
    procedure setFalloffExponent(newValue: CGFloat); message 'setFalloffExponent:';
    function falloffExponent: CGFloat; message 'falloffExponent';
    procedure setMinimumDistance(newValue: CGFloat); message 'setMinimumDistance:';
    function minimumDistance: CGFloat; message 'minimumDistance';
    procedure setActive(newValue: boolean); message 'setActive:';
    function isActive: boolean; message 'isActive';
    procedure setExclusive(newValue: boolean); message 'setExclusive:';
    function isExclusive: boolean; message 'isExclusive';
    procedure setHalfExtent(newValue: SCNVector3); message 'setHalfExtent:';
    function halfExtent: SCNVector3; message 'halfExtent';
    procedure setUsesEllipsoidalExtent(newValue: boolean); message 'setUsesEllipsoidalExtent:';
    function usesEllipsoidalExtent: boolean; message 'usesEllipsoidalExtent';
    procedure setScope(newValue: SCNPhysicsFieldScope); message 'setScope:';
    function scope: SCNPhysicsFieldScope; message 'scope';
    procedure setOffset(newValue: SCNVector3); message 'setOffset:';
    function offset: SCNVector3; message 'offset';
    procedure setDirection(newValue: SCNVector3); message 'setDirection:';
    function direction: SCNVector3; message 'direction';
    procedure setCategoryBitMask(newValue: NSUInteger); message 'setCategoryBitMask:';
    function categoryBitMask: NSUInteger; message 'categoryBitMask';
    class function dragField: SCNPhysicsField; message 'dragField';
    class function vortexField: SCNPhysicsField; message 'vortexField';
    class function radialGravityField: SCNPhysicsField; message 'radialGravityField';
    class function linearGravityField: SCNPhysicsField; message 'linearGravityField';
    class function noiseFieldWithSmoothness_animationSpeed (smoothness: CGFloat; speed: CGFloat): SCNPhysicsField; message 'noiseFieldWithSmoothness:animationSpeed:';
    class function turbulenceFieldWithSmoothness_animationSpeed (smoothness: CGFloat; speed: CGFloat): SCNPhysicsField; message 'turbulenceFieldWithSmoothness:animationSpeed:';
    class function springField: SCNPhysicsField; message 'springField';
    class function electricField: SCNPhysicsField; message 'electricField';
    class function magneticField: SCNPhysicsField; message 'magneticField';
    class function customFieldWithEvaluationBlock (block: SCNFieldForceEvaluator): SCNPhysicsField; message 'customFieldWithEvaluationBlock:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

