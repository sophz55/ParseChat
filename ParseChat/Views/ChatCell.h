//
//  ChatCell.h
//  ParseChat
//
//  Created by Sophia Zheng on 7/9/18.
//

#import <UIKit/UIKit.h>

@interface ChatCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *chatMessageLabel;

- (void)configureCellWithText:(NSString *)text;

@end
