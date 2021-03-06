/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSString, SWVicFileLogger;

@interface SWAccessory : NSObject  {
    NSString *_transportType;
    NSString *_serialNumber;
    NSString *_linkState;
    NSString *_searchState;
    SWVicFileLogger *_vicFileLogger;
}

@property(readonly) NSString * transportType;
@property(readonly) NSString * serialNumber;
@property(readonly) NSString * linkState;
@property(readonly) NSString * searchState;
@property(retain) SWVicFileLogger * vicFileLogger;


- (void)setVicFileLogger:(id)arg1;
- (id)vicFileLogger;
- (id)searchState;
- (id)serialNumber;
- (id)transportType;
- (void)unlink;
- (void)cancelSearching;
- (void)beginSearching;
- (void)cancelLinking;
- (void)beginLinking;
- (id)linkState;
- (void)deactivate;
- (id)init;
- (void)dealloc;

@end
