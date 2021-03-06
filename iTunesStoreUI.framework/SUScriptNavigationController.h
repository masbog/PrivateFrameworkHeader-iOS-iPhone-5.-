/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UINavigationController, SUScriptNavigationBar, SUScriptViewController;

@interface SUScriptNavigationController : SUScriptViewController  {
    UINavigationController *_navController;
}

@property(readonly) SUScriptNavigationBar * navigationBar;
@property BOOL navigationBarHidden;
@property(copy) id toolbarHidden;
@property(readonly) SUScriptViewController * topViewController;
@property(retain) id viewControllers;

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (void)initialize;

- (id)attributeKeys;
- (void)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)setToolbarHidden:(id)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setViewControllers:(id)arg1;
- (id)viewControllers;
- (void)popViewControllerAnimated:(BOOL)arg1;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)topViewController;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setNavigationBar:(id)arg1;
- (id)navigationBar;
- (void)dealloc;
- (id)toolbarHidden;
- (void)setTopViewController:(id)arg1;
- (BOOL)navigationBarHidden;
- (id)_copyNativeViewControllersFromScriptViewControllers:(id)arg1;
- (id)_filteredViewControllers;
- (id)_copyViewControllers;
- (id)_copyTopViewController;
- (BOOL)_isNavigationBarHidden;
- (id)_copyNavigationBar;
- (void)_setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)_setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_popViewControllerAnimated:(BOOL)arg1;
- (void)_popToRootViewControllerAnimated:(BOOL)arg1;
- (void)willPerformBatchedInvocations;
- (id)_navigationController;
- (void)didPerformBatchedInvocations;
- (void)_initWithRootScriptViewController:(id)arg1;
- (id)newNativeViewController;
- (id)initWithRootScriptViewController:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;

@end
