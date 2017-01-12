/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUViewControllerTableViewCell : UITableViewCell <HUViewControllerCell> {
    BOOL  _hasValidHeight;
    UIViewController * _parentViewController;
    UIViewController * _viewController;
    NSArray * _viewControllerConstraints;
    NSLayoutConstraint * _viewControllerHeightConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasValidHeight;
@property (readonly) unsigned int hash;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;
@property (nonatomic, retain) NSArray *viewControllerConstraints;
@property (nonatomic, retain) NSLayoutConstraint *viewControllerHeightConstraint;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_removeFromParentViewControllerAndClearProperty:(BOOL)arg1;
- (void)_updateHeightConstraint;
- (void)addToParentViewController:(id)arg1;
- (BOOL)hasValidHeight;
- (id)parentViewController;
- (void)prepareForReuse;
- (void)removeFromParentViewController;
- (void)setHasValidHeight:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setViewControllerConstraints:(id)arg1;
- (void)setViewControllerHeightConstraint:(id)arg1;
- (void)updateConstraints;
- (id)viewController;
- (id)viewControllerConstraints;
- (id)viewControllerHeightConstraint;

@end