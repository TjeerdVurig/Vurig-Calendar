//
//  ViewController.m
//  Vurig-Calendar
//
//  Created by in 't Veen Tjeerd on 5/29/12.
//  Copyright (c) 2012 Vurig. All rights reserved.
//
//  Modified by XueFei Yang on 2015-02-15.
//  Copyright (c) 2015 XueFei Yang. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    //Initialize Calendar View
    VRGCalendarView *calendar = [[VRGCalendarView alloc] init];
    [calendar setFrame:CGRectMake(0.0f, 16.0f, self.view.frame.size.width, 320.0f)];
    //[calendar setTimeZone:[NSTimeZone timeZoneWithAbbreviation:@"CST"]];
    calendar.delegate=self;
    [self.view addSubview:calendar];
}


-(void)calendarView:(VRGCalendarView *)calendarView switchedToMonth:(int)month targetHeight:(float)targetHeight animated:(BOOL)animated {

}

-(void)calendarView:(VRGCalendarView *)calendarView dateSelected:(NSDate *)date {
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
