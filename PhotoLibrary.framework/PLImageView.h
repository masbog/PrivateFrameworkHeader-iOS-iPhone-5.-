/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIView, PLVideoView, NSString, UILabel;

@interface PLImageView : UIImageView  {
    NSString *_name;
    UIView *_borderView;
    PLVideoView *_videoView;
    UILabel *_textBadge;
    unsigned int _shadowEnabled : 1;
    unsigned int _suppressShadowDrawing : 1;
    unsigned int _borderIsVisible : 1;
    float _aspectRatio;
    double _lastBorderAlphaTime;
    double _lastShadowAlphaTime;
    float _transitionProgress;
    BOOL _edgeAntialiasingEnabled;
}

@property(copy) NSString * name;
@property(getter=isDimmed) BOOL dimmed;
@property(getter=isBorderVisible) BOOL borderVisible;
@property float borderAlpha;
@property(getter=isShadowEnabled) BOOL shadowEnabled;
@property float transitionProgress;
@property(retain) PLVideoView * videoView;

+ (void)initialize;
+ (BOOL)shouldDrawShadows;
+ (id)textBadgeForString:(id)arg1 photoSize:(struct CGSize { float x1; float x2; })arg2;

- (void)setVideoView:(id)arg1;
- (id)videoView;
- (void)setEdgeAntialiasingEnabled:(BOOL)arg1;
- (id)name;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDimmed:(BOOL)arg1;
- (BOOL)isDimmed;
- (void)setBorderWidthScale:(float)arg1 heightScale:(float)arg2;
- (float)borderAlpha;
- (void)parentDidLayout;
- (id)textBadgeString;
- (void)_setShadowEnabled:(BOOL)arg1 force:(BOOL)arg2;
- (void)_updateShadowPath;
- (void)renderSnapshotInContext:(struct CGContext { }*)arg1;
- (void)setTextBadgeString:(id)arg1;
- (float)transitionProgress;
- (void)setTransitionProgress:(float)arg1;
- (BOOL)isShadowEnabled;
- (void)setShadowEnabled:(BOOL)arg1;
- (BOOL)isBorderVisible;
- (void)setBorderAlpha:(float)arg1 forced:(BOOL)arg2;
- (void)setBorderAlpha:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 allowRounding:(BOOL)arg2;
- (void)setBorderVisible:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)dealloc;

@end
