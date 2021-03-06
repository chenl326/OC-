//
//  Person+Eat.h
//  Category
//
//  Created by app on 2022/7/1.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Person (Eat)
-(void)eat;
@property(nonatomic,strong)NSString *age;

@property(nonatomic,assign)CGFloat height;

@property(nonatomic,copy)NSString *name;
@end

NS_ASSUME_NONNULL_END
