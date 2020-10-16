//
//  Car+CoreDataProperties.m
//  MyCars
//
//  Created by Павел Чернышев on 16.10.2020.
//  Copyright © 2020 Ivan Akulov. All rights reserved.
//
//

#import "Car+CoreDataProperties.h"

@implementation Car (CoreDataProperties)

+ (NSFetchRequest<Car *> *)fetchRequest {
	return [NSFetchRequest fetchRequestWithEntityName:@"Car"];
}

@dynamic imageData;
@dynamic lastStarted;
@dynamic mark;
@dynamic model;
@dynamic myChoice;
@dynamic raiting;
@dynamic timesDriven;
@dynamic tintCollor;

@end
