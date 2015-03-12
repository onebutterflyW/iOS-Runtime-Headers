/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, NSString;

@interface UIUserNotificationActionSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDictionary *_actionsByContext;
    NSString *_category;
}

@property(copy) NSDictionary * actionsByContext;
@property(copy) NSString * category;

+ (BOOL)supportsSecureCoding;

- (unsigned int)_maximumActionsForContext:(unsigned int)arg1;
- (id)actions;
- (id)actionsByContext;
- (id)actionsForContext:(unsigned int)arg1;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCategory:(id)arg1 actionsByContext:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setActionsByContext:(id)arg1;
- (void)setCategory:(id)arg1;
- (id)validatedSettings;

@end