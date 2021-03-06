//
//  Constants.h
//  SocketTest_walkieTalkie
//
//  Created by salahuddin yousuf on 4/27/16.
//  Copyright © 2016 salahuddin yousuf. All rights reserved.
//

#ifndef Constants_h
#define Constants_h

#define kBufferByteSize 8096
#define kReceivedBufferByteSize 65508

#define kDatagramSize 7000



#define WTNOTIFICATION_PORT_ACTIVE ((uint16_t) 27823)

#define WTNOTIFICATION_PORT_NORMAL ((uint16_t) 43321)
#define WTNOTIFICATION_PORT_FILE ((uint16_t) 43322)


#define WALKIETALKIE_UINT_PORT ((uint16_t) 43321)
#define WALKIETALKIE_UINT_PORT_sender ((uint16_t) 43324)
#define WALKIETALKIE_VOICE_LISTENER ((uint16_t) 43322)
#define WALKIETALKIE_TCP_SENDER ((uint16_t) 43325)
#define WALKIETALKIE_TCP_LISTENER ((uint16_t) 43326)
#define WALKIETALKIE_VOICE_STREAMER_PORT ((uint16_t) 43327)

#define CHUNKSIZE ((int) 3000)




#define TYPE_REQUEST_INFO ((int) 3)
#define TYPE_RECEIVE_INFO ((int) 4)
#define TYPE_POST_INFO ((int) 14)



#define TYPE_MESSAGE ((int) 1)
#define TYPE_ADD_CLIENT ((int) 2)

#define TYPE_CREATE_CHANNEL ((int) 5)
#define TYPE_JOIN_CHANNEL ((int) 6)
#define TYPE_JOIN_CHANNEL_CONFIRM ((int) 7)
#define TYPE_CHANNEL_DUPLICATE ((int) 8)
#define TYPE_LEFT_CHANNEL ((int) 9)
#define TYPE_DESTROY_CHANNEL ((int) 99)





#define TYPE_LEFT_APPLICATION ((int) 10)



#define TYPE_ONE_TO_ONE_CHAT_REQUEST ((int) 11)
#define TYPE_ONE_TO_ONE_CHAT_ACCEPT ((int) 12)
#define TYPE_ONE_TO_ONE_CHAT_DECLINE ((int) 13)


#define TYPE_FILE_MESSAGE ((int) 15)
#define TYPE_FILE_REPEAT_REQUEST ((int) 16)


#define TYPE_VOICE_MESSAGE ((int) 31)
#define TYPE_VOICE_MESSAGE_REPEAT_REQUEST ((int) 32)
#define TYPE_VOICE_STREAM ((int) 33)


#define TYPE_IMAGE_MESSAGE ((int) 21)
#define TYPE_IMAGE_MESSAGE_REPEAT_REQUEST ((int) 22)
#define TYPE_IMAGE_STREAM ((int) 23)




#define JSON_KEY_IP_ADDRESS @"ip_address"
#define JSON_KEY_DEVICE_ID @"device_id"
#define JSON_KEY_PROFILE_NAME @"device_name"
#define JSON_KEY_PROFILE_STATUS @"status"
#define JSON_KEY_PROFILE_STATUS_CHANNEL @"status_channel"
#define JSON_KEY_PROFILE_IMAGE @"base64image"


#define JSON_KEY_DEVICE_NAME @"device_name"
#define JSON_KEY_MESSAGE @"message"
#define JSON_KEY_PORT @"port"
#define JSON_KEY_TYPE @"type"
#define JSON_KEY_CLIENT_IP @"client_ip"
#define JSON_KEY_CLIENT_PORT @"client_port"
#define JSON_KEY_CHANNEL @"channel_id"
#define JSON_KEY_CHANNEL_MEMBERS @"channel_members"
#define JSON_KEY_HOST @"host"


#define JSON_KEY_FILE_TYPE @"file_type"
#define JSON_KEY_FILE_NAME @"file_name"
#define JSON_KEY_FILE_MESSAGE @"file_message"
#define JSON_KEY_FILE_CHUNK_COUNT @"file_chunk_count"
#define JSON_KEY_FILE_CURRENT_CHUNK @"file_current_chunk"


#define JSON_KEY_VOICE_MESSAGE @"voice_message"
#define JSON_KEY_VOICE_MESSAGE_CHUNKCOUNT @"voice_message_chunkCount"
#define JSON_KEY_VOICE_MESSAGE_CURRENT_CHUNK @"voice_message_current_chunk"
#define JSON_KEY_VOICE_MESSAGE_FILE_NAME @"voice_message_file_name"



#define kFileTypeAudio ((int) 1)
#define kFileTypeVideo ((int) 2)
#define kFileTypePhoto ((int) 3)
#define kFileTypeOthers ((int) 4)


#define kChannelIDPersonal ((int) 0)
#define kChannelIDPublicA ((int) 1)
#define kChannelIDPublicB ((int) 2)

#define kChannelTypePublic ((int) 0)
#define kChannelTypePersonal ((int) 1)
#define kChannelTypePrivate ((int) 2)





#define USERDEFAULTS_KEY_NAME @"UserNameKey"
#define USERDEFAULTS_KEY_IMAGE @"UserImageKey"
#define USERDEFAULTS_KEY_STATUS @"UserStatusKey"
#define USERDEFAULTS_KEY_STATUS_CHANNEL @"UserStatusChannelKey"

#define USERDEFAULTS_KEY_UUID @"UUIDkey"


#pragma mark - Notification Key

#define NOTIFICATIONKEY_NEW_DEVICE_JOINED @"newDeviceCreatedNotification"
#define NOTIFICATIONKEY_NEW_DEVICE_CONFIRMED @"newDeviceConfirmedNotification"
#define NOTIFICATIONKEY_UPDATE_PROFILE_INFO @"updateProfileInfoNotification"



#define NOTIFICATIONKEY_CHAT_MESSAGE_RECEIVED @"ChatMessageReceivedNotification"

#define NOTIFICATIONKEY_CHANNEL_JOINED @"JoinedChannelNotification"
#define NOTIFICATIONKEY_CHANNEL_JOIN_CONFIRMED  @"JoinChannelConfirmedNotification"
#define NOTIFICATIONKEY_CHANNEL_LEFT @"leftChannelNotification"



#define NOTIFICATIONKEY_DEVICE_LEFT_SYSTEM @"deviceLeftSystemNotification"
//#define NEW_DEVICE_CONFIRMED_NOTIFICATIONKEY @"newdeviceConfirmedNotification"





#define NOTIFICATIONKEY_NEW_DEVICE_JOINED_APPDELEGATE @"newDeviceCreatedNotificationAppDelegate"
#define NOTIFICATIONKEY_NEW_DEVICE_CONFIRMED_APPDELEGATE @"newDeviceConfirmedNotificationAppDelegate"
#define NOTIFICATIONKEY_UPDATE_PROFILE_INFO_APPDELEGATE @"updateProfileInfoNotificationAppDelegate"



#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]






#endif /* Constants_h */
