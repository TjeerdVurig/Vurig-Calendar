//
//  VRGCalendarView.h
//  Vurig
//
//  Created by in 't Veen Tjeerd on 5/8/12.
//  Copyright (c) 2012 Vurig Media. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "UIColor+expanded.h"

#define kVRGCalendarViewCurrentMonthLabelFrameY 32

#define kVRGCalendarViewMonthArrowTopMargin 24
#define kVRGCalendarViewMonthArrowWidth 50
#define kVRGCalendarViewMonthArrowHeight 40

#define kVRGCalendarViewTopBarHeight 84
#define kVRGCalendarViewWidth 320

#define kVRGCalendarViewDayWidth 44
#define kVRGCalendarViewDayHeight 44

#define kVRGCalendarViewTodayColor @"0x383838"
#define kVRGCalendarViewADayColor @"aaaaaa"
#define kVRGCalendarViewSelectedDayColor @"0x006dbc"
#define kVRGCalendarViewADayBackground @"0xf3f3f3"

#define kVRGCalendarViewDayFontType @"HelveticaNeue-Bold"
#define kVRGCalendarViewWeekdayFontType @"HelveticaNeue"

#define kVRGCalendarViewFontSize 17
#define kVRGCalendarViewWeekdayFontSize 12

@protocol VRGCalendarViewDelegate;
@interface VRGCalendarView : UIView {
    id <VRGCalendarViewDelegate> delegate;
    
    NSDate *currentMonth;
    
    UILabel *labelCurrentMonth;
    
    BOOL isAnimating;
    BOOL prepAnimationPreviousMonth;
    BOOL prepAnimationNextMonth;
    
    UIImageView *animationView_A;
    UIImageView *animationView_B;
    
    NSArray *markedDates;
    NSArray *markedColors;
}

@property (nonatomic, retain) id <VRGCalendarViewDelegate> delegate;
@property (nonatomic, retain) NSDate *currentMonth;
@property (nonatomic, retain) UILabel *labelCurrentMonth;
@property (nonatomic, retain) UIImageView *animationView_A;
@property (nonatomic, retain) UIImageView *animationView_B;
@property (nonatomic, retain) NSArray *markedDates;
@property (nonatomic, retain) NSArray *markedColors;
@property (nonatomic, getter = calendarHeight) float calendarHeight;
@property (nonatomic, retain, getter = selectedDate) NSDate *selectedDate;

-(void)selectDate:(int)date;
-(void)reset;

-(void)markDates:(NSArray *)dates;
-(void)markDates:(NSArray *)dates withColors:(NSArray *)colors;

-(void)showNextMonth;
-(void)showPreviousMonth;

-(int)numRows;
-(void)updateSize;
-(UIImage *)drawCurrentState;

@end

@protocol VRGCalendarViewDelegate <NSObject>
-(void)calendarView:(VRGCalendarView *)calendarView switchedToMonth:(int)month targetHeight:(float)targetHeight animated:(BOOL)animated;
-(void)calendarView:(VRGCalendarView *)calendarView dateSelected:(NSDate *)date;
@end
