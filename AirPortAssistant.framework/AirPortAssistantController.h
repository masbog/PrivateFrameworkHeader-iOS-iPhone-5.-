/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class <AirPortAssistantControllerDelegate>;

@interface AirPortAssistantController : NSObject  {
    id _delegate;
    id _viewController;
}

@property <AirPortAssistantControllerDelegate> * delegate;
@property(retain) id viewController;

+ (id)uniqueBaseStationName:(id)arg1 withBssid:(id)arg2;
+ (id)unconfiguredBaseStationName:(unsigned char)arg1;
+ (BOOL)isUnconfiguredBaseStation:(id)arg1 productID:(char *)arg2 productFamily:(unsigned int*)arg3;
+ (void)cancelAirPortAssistantController;
+ (id)assistantUIViewControllerWithParameters:(id)arg1;
+ (id)sharedInstance;

- (void)setDelegate:(id)arg1;
- (void)assistantComplete;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
