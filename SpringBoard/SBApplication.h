/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBDisplay.h"

@class NSDictionary, NSMutableSet, UIRemoteApplication, NSString, NSMutableArray, NSArray, SBCFBundle, NSTimer, SBAppContextHostView;

@interface SBApplication : SBDisplay {
	NSString* _bundleIdentifier;
	NSString* _roleIdentifier;
	NSString* _displayIdentifier;
	NSString* _path;
	NSString* _iconPath;
	NSString* _smallIconPath;
	NSDictionary* _spotlightIcons;
	NSString* _bundleVersion;
	NSString* _longDisplayName;
	NSDictionary* _searchDomainLaunchInfo;
	SBCFBundle* _cachedBundle;
	NSString* _launchdJobLabel;
	int _pid;
	SBApplicationTimes* _times;
	NSString* _displayName;
	NSString* _demoRole;
	NSMutableSet* _statusBarItemSet;
	NSMutableArray* _tags;
	UIRemoteApplication* _remoteApplication;
	SBAppContextHostView* _contextHostView;
	NSDictionary* _seatbeltEnvVars;
	NSString* _signerIdentity;
	unsigned _eventPort;
	unsigned _activationEventSequenceNumber;
	NSTimer* _watchdogTimer;
	unsigned _watchdogType : 4;
	unsigned _doingBackgroundNetworking : 16;
	unsigned _failedLaunchCount : 8;
	unsigned _provisioningProfileValidated : 1;
	unsigned _enabled : 1;
	unsigned _useDemoRole : 1;
	unsigned _isDefaultRole : 1;
	unsigned _isSystemApplication : 1;
	unsigned _isSystemProvisioningApplication : 1;
	unsigned _hasMiniAlerts : 1;
	unsigned _isRevealable : 1;
	unsigned _uiPrerederedIcon : 1;
	unsigned _uiRequiresPersistentWiFi : 1;
	unsigned _dataFlagsIsSet : 1;
	unsigned _defaultStatusBarStyle : 8;
	unsigned _defaultInterfaceOrientaton : 8;
	unsigned _sbUsesNetwork : 8;
	unsigned _dataFlags : 8;
	unsigned _launchAlerts : 8;
	int _jetsamPriority;
	int _ratingRank;
	Class _iconClass;
	NSArray* _customMachServices;
	NSArray* _externalAccessoryProtocols;
}
+(NSString*)snapshotsDirectory;
+(void)flushLaunchAlertsOfType:(int)type;
+(void)userElapsedCPUTime:(NSTimeInterval*)time systemElapsedCPUTime:(NSTimeInterval*)time2 idleElapsedCPUTime:(NSTimeInterval*)time3;
-(id)initWithBundleIdentifier:(NSString*)bundleIdentifier roleIdentifier:(NSString*)identifier path:(NSString*)path bundle:(id)bundle infoDictionary:(NSDictionary*)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated;
-(void)_watchdogFired;
-(void)_watchdogFiredFired;
-(void)_startWatchdogTimerType:(int)type;
-(void)_cancelWatchdogTimer;
-(void)_markWatchdogCPUTimes;
-(void)startWatchdogTimerForPhoneSlideIfNecessary;
-(void)_scheduleWatchdogAssertionWithTimeout:(NSTimeInterval*)timeout token:(unsigned)token;
-(unsigned)addWatchdogAssertionWithTimeout:(NSTimeInterval*)timeout;
-(void)renewWatchdogAssertionWithToken:(unsigned)token timeout:(NSTimeInterval*)timeout;
-(void)_clearWatchdogAssertions;
-(void)removeWatchdogAssertionWithToken:(unsigned)token;
-(void)_watchdogAssertExpired:(id)assertion;
-(BOOL)shouldWatchdog;
-(BOOL)isBeingDebugged;
// inherited: -(double)autoDimTime;
// inherited: -(double)autoLockTime;
// inherited: -(void)dealloc;
-(unsigned)activationEventSequenceNumber;
-(BOOL)isSameExecutableAsApplication:(SBApplication*)application;
-(NSString*)bundleIdentifier;
-(void)setRoleIdentifier:(NSString*)identifier;
-(NSString*)roleIdentifier;
-(void)setIsDefaultRole:(BOOL)role;
-(BOOL)isDefaultRole;
-(NSString*)path;
-(id)bundleVersion;
-(SBCFBundle*)bundle;
-(void)purgeBundleCaches;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)enabled;
-(NSString*)demoRole;
-(void)setDemoRole:(NSString*)role;
-(void)setUseDemoRole:(BOOL)role;
-(void)setTags:(id)tags;
-(id)tags;
-(void)_addInternalDebugVariablesToEnvironment;
-(BOOL)hasMiniAlerts;
-(void)setHasMiniAlerts:(BOOL)alerts;
-(int)dataUsage;
-(void)_setDataUsage:(int)usage;
-(void)setUsesBackgroundNetwork:(BOOL)network;
-(void)_setDoingBackgroundNetworking:(unsigned)networking;
-(void)setUsesEdgeNetwork:(BOOL)network;
-(void)setUsesWiFiNetwork:(BOOL)network;
-(void)_resetDataUsage;
// inherited: -(id)displayIdentifier;
-(NSString*)pathForIcon;
-(NSString*)pathForSmallIcon;
-(id)spotlightIcons;
-(BOOL)isSystemApplication;
-(BOOL)isSystemProvisioningApplication;
-(BOOL)isWidgetApplication;
-(BOOL)isUserRatable;
-(void)validateSystemProvisioningEntitlements:(XXStruct_kUSYWB*)entitlements;
-(void)flushSnapshotsForAllRoles;
-(BOOL)shouldLaunchPNGless;
-(id)_additionalDisplayQualification;
-(id)defaultImage:(BOOL*)image;
-(Class)iconClass;
-(BOOL)isRevealable;
-(BOOL)isPrerenderedIcon;
-(NSString*)displayName;
-(void)setDisplayName:(NSString*)name;
-(NSString*)longDisplayName;
-(void)_sendCurrentDeviceOrientation;
-(int)ratingRank;
-(void)markLaunchTime;
-(BOOL)launch;
// inherited: -(void)activate;
// inherited: -(void)deactivate;
// inherited: -(void)deactivated;
// inherited: -(void)kill;
-(BOOL)_shouldAutoLaunchOnBoot:(BOOL)boot;
-(void)autoLaunchIfNecessaryOnBoot:(BOOL)boot;
-(void)_cancelAutoRelaunch;
-(void)_relaunchAfterExit;
-(void)removeStatusBarItems;
// inherited: -(int)defaultStatusBarMode;
// inherited: -(int)defaultStatusBarOrientation;
-(void)_resetEventPort;
-(void)willActivateOtherRole:(NSString*)role;
-(void)exitedCommon;
// inherited: -(void)exitedAbnormally;
// inherited: -(void)exitedNormally;
-(unsigned)jetsamPriority;
-(pid_t)pid;
-(void)setPid:(pid_t)pid;
-(mach_port_t)eventPort;
-(SBAppContextHostView*)contextHostView;
-(void)_clearContextHostView;
-(void)_setContextHostView:(id)view;
-(void)_hideContextHostView;
-(void)_unregisterRemoteViewsAndSheets;
-(NSString*)launchdJobLabel;
-(void)setLaunchdJobLabel:(id)label;
-(NSDictionary*)seatbeltEnvironmentVariables;
-(void)setSeatbeltEnvironmentVariables:(id)variables;
-(NSString*)signerIdentity;	// e.g. "Apple iPhone OS Application Signing"
-(int)applicationSignatureState;
-(BOOL)_signatureNeedsExplicitUserTrust;
-(BOOL)_doesProfileMatchSignerIdentity:(MISProfileRef)identity;
-(id)_expirationDateForProvisioningProfile;
-(void)markApplicationIdentityAsTrusted;
-(BOOL)provisioningProfileValidated;
-(id)externalAccessoryProtocols;
-(int)failedLaunchCount;
-(void)launchFailed;
// inherited: -(void)launchSucceeded:(BOOL)succeeded;
-(void)prepareForUninstallation;
-(void)noteAddedStatusBarItem:(id)item;
-(void)noteRemovedStatusBarItem:(id)item;
-(UIRemoteApplication*)remoteApplication;
-(void)_purgeRemoteApplication;
-(BOOL)showLaunchAlertForType:(int)type;
-(void)resetLaunchAlertForType:(int)type;
-(NSTimeInterval)elapsedCPUTime;
@end

