/*
 * Adium is the legal property of its developers, whose names are listed in the copyright file included
 * with this source distribution.
 *
 * This program is free software; you can redistribute it and/or modify it under the terms of the GNU
 * General Public License as published by the Free Software Foundation; either version 2 of the License,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
 * the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
 * Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program; if not,
 * write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#import "AIMessageViewTopBarController.h"
#import "AITopBarGradientView.h"

#import <Adium/AIAccountMenu.h>
#import <Adium/AIContactMenu.h>

#import <Adium/AIChat.h>

@interface AIAccountSelectionViewController : AIMessageViewTopBarController <AIAccountMenuDelegate, AIContactMenuDelegate> {
    IBOutlet AITopBarGradientView *view_backgroundView;
    IBOutlet NSPopUpButton		*popUp_accounts;
	IBOutlet NSTextField		*label_accounts;
    
	IBOutlet NSPopUpButton   	*popUp_contacts;
	IBOutlet NSTextField		*label_contacts;
	
	AIAccountMenu		*accountMenu;
	AIContactMenu		*contactMenu;
    
    BOOL                choicesForContact;
    BOOL                choicesForAccount;
}

@end
