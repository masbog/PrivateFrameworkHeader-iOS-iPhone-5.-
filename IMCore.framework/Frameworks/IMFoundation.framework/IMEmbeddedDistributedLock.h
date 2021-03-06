/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class CPExclusiveLock;

@interface IMEmbeddedDistributedLock : IMDistributedLock  {
    CPExclusiveLock *_lock;
}


- (BOOL)tryLock;
- (void)unlock;
- (void)lock;
- (id)name;
- (id)initWithName:(id)arg1;
- (void)dealloc;

@end
