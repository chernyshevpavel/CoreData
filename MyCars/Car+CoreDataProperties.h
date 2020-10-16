//
//  Car+CoreDataProperties.h
//  MyCars
//
//  Created by Павел Чернышев on 16.10.2020.
//  Copyright © 2020 Ivan Akulov. All rights reserved.
//
//

#import "Car+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Car (CoreDataProperties)

+ (NSFetchRequest<Car *> *)fetchRequest;

@property (nullable, nonatomic, retain) NSData *imageData;
@property (nullable, nonatomic, copy) NSDate *lastStarted;
@property (nullable, nonatomic, copy) NSString *mark;
@property (nullable, nonatomic, copy) NSString *model;
@property (nullable, nonatomic, copy) NSNumber *myChoice;
@property (nullable, nonatomic, copy) NSNumber *raiting;
@property (nullable, nonatomic, copy) NSNumber *timesDriven;
@property (nullable, nonatomic, retain) NSObject *tintCollor;

@end

NS_ASSUME_NONNULL_END
