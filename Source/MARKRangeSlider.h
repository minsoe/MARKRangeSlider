#import <UIKit/UIKit.h>
@protocol MARKRangeSliderDelegate;

@interface MARKRangeSlider : UIControl

// Values
@property (nonatomic, assign, readonly) CGFloat minimumValue;
@property (nonatomic, assign, readonly) CGFloat maximumValue;

@property (nonatomic, assign, readonly) CGFloat leftValue;
@property (nonatomic, assign, readonly) CGFloat rightValue;

@property (nonatomic, readonly) UIView *leftThumbView;
@property (nonatomic, readonly) UIView *rightThumbView;

@property (nonatomic, assign) CGFloat minimumDistance;

@property (nonatomic) BOOL pushable;
@property (nonatomic) BOOL disableOverlapping;

// Images
@property (nonatomic) UIImage *trackImage;
@property (nonatomic) UIImage *rangeImage;

@property (nonatomic) UIImage *leftThumbImage;
@property (nonatomic) UIImage *rightThumbImage;

@property (nonatomic, weak) IBOutlet id<MARKRangeSliderDelegate> delegate;

// Configuration
- (void)setMinValue:(CGFloat)minValue maxValue:(CGFloat)maxValue;
- (void)setLeftValue:(CGFloat)leftValue rightValue:(CGFloat)rightValue;

@end

@protocol MARKRangeSliderDelegate <NSObject>

@optional
- (void)MARKRangeSliderValueDidChange:(MARKRangeSlider*)slider;

@end
