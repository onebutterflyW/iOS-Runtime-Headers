/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class UIColor, UIImage;

@interface RUCountdownFillView : UIView {
    struct CGSize { 
        float width; 
        float height; 
    } _shadowOffset;
    float _value;
}

@property(retain) UIImage * fillImage;
@property float shadowBlur;
@property(retain) UIColor * shadowColor;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property float value;

+ (Class)layerClass;

- (id)fillImage;
- (void)setFillImage:(id)arg1;
- (void)setShadowBlur:(float)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)setValue:(float)arg1;
- (float)shadowBlur;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (float)value;

@end