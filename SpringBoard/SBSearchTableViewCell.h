/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UITableViewCell.h>

@class NSString, UIFont, NSArray;

@interface SBSearchTableViewCell : UITableViewCell {
	NSString* _title;
	UIFont* _titleFont;
	NSArray* _subtitleComponents;
	UIFont* _subtitleFont;
	BOOL _badged;
	BOOL _usesAlternateBackgroundColor;
	BOOL _isFirstInTableView;
	BOOL _isFirstInSection;
	float _sectionHeaderWidth;
	float _edgeInset;
}
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSArray* subtitleComponents;
@property(assign, nonatomic, getter=isBadged) BOOL badged;
@property(assign, nonatomic) BOOL usesAlternateBackgroundColor;
@property(assign, nonatomic, getter=isFirstInTableView) BOOL firstInTableView;
@property(assign, nonatomic, getter=isFirstInSection) BOOL firstInSection;
@property(assign, nonatomic) float sectionHeaderWidth;
@property(assign, nonatomic) float edgeInset;
+(id)backgroundColor;
+(id)alternateBackgroundColor;
+(id)lineColor;
+(id)alternateLineColor;
+(id)topLineShadowColor;
// inherited: -(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
// inherited: -(void)dealloc;
-(BOOL)_drawsContent;
// inherited: -(void)_drawContentInRect:(CGRect)rect selected:(BOOL)selected;
-(void)drawRect:(CGRect)rect;
-(id)_scriptingInfo;
@end

