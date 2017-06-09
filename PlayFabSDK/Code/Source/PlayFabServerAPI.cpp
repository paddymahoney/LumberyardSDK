#include "StdAfx.h"
#include "PlayFabServerApi.h"
#include "PlayFabSettings.h"

using namespace PlayFab;
using namespace ServerModels;

// PlayFabServer Api
PlayFabServerApi::PlayFabServerApi() {}

void PlayFabServerApi::AuthenticateSessionTicket(
    AuthenticateSessionTicketRequest& request,
    ProcessApiCallback<AuthenticateSessionTicketResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/AuthenticateSessionTicket"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnAuthenticateSessionTicketResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnAuthenticateSessionTicketResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        AuthenticateSessionTicketResult* outResult = new AuthenticateSessionTicketResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<AuthenticateSessionTicketResult> successCallback = reinterpret_cast<ProcessApiCallback<AuthenticateSessionTicketResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::BanUsers(
    BanUsersRequest& request,
    ProcessApiCallback<BanUsersResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/BanUsers"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnBanUsersResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnBanUsersResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        BanUsersResult* outResult = new BanUsersResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<BanUsersResult> successCallback = reinterpret_cast<ProcessApiCallback<BanUsersResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetPlayerProfile(
    GetPlayerProfileRequest& request,
    ProcessApiCallback<GetPlayerProfileResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetPlayerProfile"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetPlayerProfileResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetPlayerProfileResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetPlayerProfileResult* outResult = new GetPlayerProfileResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetPlayerProfileResult> successCallback = reinterpret_cast<ProcessApiCallback<GetPlayerProfileResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetPlayFabIDsFromFacebookIDs(
    GetPlayFabIDsFromFacebookIDsRequest& request,
    ProcessApiCallback<GetPlayFabIDsFromFacebookIDsResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetPlayFabIDsFromFacebookIDs"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetPlayFabIDsFromFacebookIDsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetPlayFabIDsFromFacebookIDsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetPlayFabIDsFromFacebookIDsResult* outResult = new GetPlayFabIDsFromFacebookIDsResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetPlayFabIDsFromFacebookIDsResult> successCallback = reinterpret_cast<ProcessApiCallback<GetPlayFabIDsFromFacebookIDsResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetPlayFabIDsFromSteamIDs(
    GetPlayFabIDsFromSteamIDsRequest& request,
    ProcessApiCallback<GetPlayFabIDsFromSteamIDsResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetPlayFabIDsFromSteamIDs"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetPlayFabIDsFromSteamIDsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetPlayFabIDsFromSteamIDsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetPlayFabIDsFromSteamIDsResult* outResult = new GetPlayFabIDsFromSteamIDsResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetPlayFabIDsFromSteamIDsResult> successCallback = reinterpret_cast<ProcessApiCallback<GetPlayFabIDsFromSteamIDsResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetUserAccountInfo(
    GetUserAccountInfoRequest& request,
    ProcessApiCallback<GetUserAccountInfoResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetUserAccountInfo"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetUserAccountInfoResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetUserAccountInfoResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetUserAccountInfoResult* outResult = new GetUserAccountInfoResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetUserAccountInfoResult> successCallback = reinterpret_cast<ProcessApiCallback<GetUserAccountInfoResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetUserBans(
    GetUserBansRequest& request,
    ProcessApiCallback<GetUserBansResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetUserBans"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetUserBansResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetUserBansResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetUserBansResult* outResult = new GetUserBansResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetUserBansResult> successCallback = reinterpret_cast<ProcessApiCallback<GetUserBansResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::RevokeAllBansForUser(
    RevokeAllBansForUserRequest& request,
    ProcessApiCallback<RevokeAllBansForUserResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/RevokeAllBansForUser"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnRevokeAllBansForUserResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnRevokeAllBansForUserResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        RevokeAllBansForUserResult* outResult = new RevokeAllBansForUserResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<RevokeAllBansForUserResult> successCallback = reinterpret_cast<ProcessApiCallback<RevokeAllBansForUserResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::RevokeBans(
    RevokeBansRequest& request,
    ProcessApiCallback<RevokeBansResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/RevokeBans"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnRevokeBansResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnRevokeBansResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        RevokeBansResult* outResult = new RevokeBansResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<RevokeBansResult> successCallback = reinterpret_cast<ProcessApiCallback<RevokeBansResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::SendPushNotification(
    SendPushNotificationRequest& request,
    ProcessApiCallback<SendPushNotificationResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/SendPushNotification"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnSendPushNotificationResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnSendPushNotificationResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        SendPushNotificationResult* outResult = new SendPushNotificationResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<SendPushNotificationResult> successCallback = reinterpret_cast<ProcessApiCallback<SendPushNotificationResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdateAvatarUrl(
    UpdateAvatarUrlRequest& request,
    ProcessApiCallback<EmptyResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdateAvatarUrl"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdateAvatarUrlResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdateAvatarUrlResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        EmptyResult* outResult = new EmptyResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<EmptyResult> successCallback = reinterpret_cast<ProcessApiCallback<EmptyResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdateBans(
    UpdateBansRequest& request,
    ProcessApiCallback<UpdateBansResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdateBans"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdateBansResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdateBansResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UpdateBansResult* outResult = new UpdateBansResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UpdateBansResult> successCallback = reinterpret_cast<ProcessApiCallback<UpdateBansResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::DeleteUsers(
    DeleteUsersRequest& request,
    ProcessApiCallback<DeleteUsersResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/DeleteUsers"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnDeleteUsersResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnDeleteUsersResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        DeleteUsersResult* outResult = new DeleteUsersResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<DeleteUsersResult> successCallback = reinterpret_cast<ProcessApiCallback<DeleteUsersResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetFriendLeaderboard(
    GetFriendLeaderboardRequest& request,
    ProcessApiCallback<GetLeaderboardResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetFriendLeaderboard"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetFriendLeaderboardResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetFriendLeaderboardResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetLeaderboardResult* outResult = new GetLeaderboardResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetLeaderboardResult> successCallback = reinterpret_cast<ProcessApiCallback<GetLeaderboardResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetLeaderboard(
    GetLeaderboardRequest& request,
    ProcessApiCallback<GetLeaderboardResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetLeaderboard"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetLeaderboardResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetLeaderboardResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetLeaderboardResult* outResult = new GetLeaderboardResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetLeaderboardResult> successCallback = reinterpret_cast<ProcessApiCallback<GetLeaderboardResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetLeaderboardAroundUser(
    GetLeaderboardAroundUserRequest& request,
    ProcessApiCallback<GetLeaderboardAroundUserResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetLeaderboardAroundUser"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetLeaderboardAroundUserResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetLeaderboardAroundUserResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetLeaderboardAroundUserResult* outResult = new GetLeaderboardAroundUserResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetLeaderboardAroundUserResult> successCallback = reinterpret_cast<ProcessApiCallback<GetLeaderboardAroundUserResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetPlayerCombinedInfo(
    GetPlayerCombinedInfoRequest& request,
    ProcessApiCallback<GetPlayerCombinedInfoResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetPlayerCombinedInfo"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetPlayerCombinedInfoResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetPlayerCombinedInfoResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetPlayerCombinedInfoResult* outResult = new GetPlayerCombinedInfoResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetPlayerCombinedInfoResult> successCallback = reinterpret_cast<ProcessApiCallback<GetPlayerCombinedInfoResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetPlayerStatistics(
    GetPlayerStatisticsRequest& request,
    ProcessApiCallback<GetPlayerStatisticsResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetPlayerStatistics"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetPlayerStatisticsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetPlayerStatisticsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetPlayerStatisticsResult* outResult = new GetPlayerStatisticsResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetPlayerStatisticsResult> successCallback = reinterpret_cast<ProcessApiCallback<GetPlayerStatisticsResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetPlayerStatisticVersions(
    GetPlayerStatisticVersionsRequest& request,
    ProcessApiCallback<GetPlayerStatisticVersionsResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetPlayerStatisticVersions"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetPlayerStatisticVersionsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetPlayerStatisticVersionsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetPlayerStatisticVersionsResult* outResult = new GetPlayerStatisticVersionsResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetPlayerStatisticVersionsResult> successCallback = reinterpret_cast<ProcessApiCallback<GetPlayerStatisticVersionsResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetUserData(
    GetUserDataRequest& request,
    ProcessApiCallback<GetUserDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetUserData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetUserDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetUserDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetUserDataResult* outResult = new GetUserDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetUserDataResult> successCallback = reinterpret_cast<ProcessApiCallback<GetUserDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetUserInternalData(
    GetUserDataRequest& request,
    ProcessApiCallback<GetUserDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetUserInternalData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetUserInternalDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetUserInternalDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetUserDataResult* outResult = new GetUserDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetUserDataResult> successCallback = reinterpret_cast<ProcessApiCallback<GetUserDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetUserPublisherData(
    GetUserDataRequest& request,
    ProcessApiCallback<GetUserDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetUserPublisherData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetUserPublisherDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetUserPublisherDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetUserDataResult* outResult = new GetUserDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetUserDataResult> successCallback = reinterpret_cast<ProcessApiCallback<GetUserDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetUserPublisherInternalData(
    GetUserDataRequest& request,
    ProcessApiCallback<GetUserDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetUserPublisherInternalData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetUserPublisherInternalDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetUserPublisherInternalDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetUserDataResult* outResult = new GetUserDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetUserDataResult> successCallback = reinterpret_cast<ProcessApiCallback<GetUserDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetUserPublisherReadOnlyData(
    GetUserDataRequest& request,
    ProcessApiCallback<GetUserDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetUserPublisherReadOnlyData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetUserPublisherReadOnlyDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetUserPublisherReadOnlyDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetUserDataResult* outResult = new GetUserDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetUserDataResult> successCallback = reinterpret_cast<ProcessApiCallback<GetUserDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetUserReadOnlyData(
    GetUserDataRequest& request,
    ProcessApiCallback<GetUserDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetUserReadOnlyData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetUserReadOnlyDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetUserReadOnlyDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetUserDataResult* outResult = new GetUserDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetUserDataResult> successCallback = reinterpret_cast<ProcessApiCallback<GetUserDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdatePlayerStatistics(
    UpdatePlayerStatisticsRequest& request,
    ProcessApiCallback<UpdatePlayerStatisticsResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdatePlayerStatistics"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdatePlayerStatisticsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdatePlayerStatisticsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UpdatePlayerStatisticsResult* outResult = new UpdatePlayerStatisticsResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UpdatePlayerStatisticsResult> successCallback = reinterpret_cast<ProcessApiCallback<UpdatePlayerStatisticsResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdateUserData(
    UpdateUserDataRequest& request,
    ProcessApiCallback<UpdateUserDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdateUserData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdateUserDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdateUserDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UpdateUserDataResult* outResult = new UpdateUserDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UpdateUserDataResult> successCallback = reinterpret_cast<ProcessApiCallback<UpdateUserDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdateUserInternalData(
    UpdateUserInternalDataRequest& request,
    ProcessApiCallback<UpdateUserDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdateUserInternalData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdateUserInternalDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdateUserInternalDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UpdateUserDataResult* outResult = new UpdateUserDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UpdateUserDataResult> successCallback = reinterpret_cast<ProcessApiCallback<UpdateUserDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdateUserPublisherData(
    UpdateUserDataRequest& request,
    ProcessApiCallback<UpdateUserDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdateUserPublisherData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdateUserPublisherDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdateUserPublisherDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UpdateUserDataResult* outResult = new UpdateUserDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UpdateUserDataResult> successCallback = reinterpret_cast<ProcessApiCallback<UpdateUserDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdateUserPublisherInternalData(
    UpdateUserInternalDataRequest& request,
    ProcessApiCallback<UpdateUserDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdateUserPublisherInternalData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdateUserPublisherInternalDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdateUserPublisherInternalDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UpdateUserDataResult* outResult = new UpdateUserDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UpdateUserDataResult> successCallback = reinterpret_cast<ProcessApiCallback<UpdateUserDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdateUserPublisherReadOnlyData(
    UpdateUserDataRequest& request,
    ProcessApiCallback<UpdateUserDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdateUserPublisherReadOnlyData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdateUserPublisherReadOnlyDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdateUserPublisherReadOnlyDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UpdateUserDataResult* outResult = new UpdateUserDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UpdateUserDataResult> successCallback = reinterpret_cast<ProcessApiCallback<UpdateUserDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdateUserReadOnlyData(
    UpdateUserDataRequest& request,
    ProcessApiCallback<UpdateUserDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdateUserReadOnlyData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdateUserReadOnlyDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdateUserReadOnlyDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UpdateUserDataResult* outResult = new UpdateUserDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UpdateUserDataResult> successCallback = reinterpret_cast<ProcessApiCallback<UpdateUserDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetCatalogItems(
    GetCatalogItemsRequest& request,
    ProcessApiCallback<GetCatalogItemsResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetCatalogItems"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetCatalogItemsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetCatalogItemsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetCatalogItemsResult* outResult = new GetCatalogItemsResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetCatalogItemsResult> successCallback = reinterpret_cast<ProcessApiCallback<GetCatalogItemsResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetPublisherData(
    GetPublisherDataRequest& request,
    ProcessApiCallback<GetPublisherDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetPublisherData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetPublisherDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetPublisherDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetPublisherDataResult* outResult = new GetPublisherDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetPublisherDataResult> successCallback = reinterpret_cast<ProcessApiCallback<GetPublisherDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetTime(

    ProcessApiCallback<GetTimeResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetTime"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, "", customData, callback, errorCallback, OnGetTimeResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetTimeResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetTimeResult* outResult = new GetTimeResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetTimeResult> successCallback = reinterpret_cast<ProcessApiCallback<GetTimeResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetTitleData(
    GetTitleDataRequest& request,
    ProcessApiCallback<GetTitleDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetTitleData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetTitleDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetTitleDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetTitleDataResult* outResult = new GetTitleDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetTitleDataResult> successCallback = reinterpret_cast<ProcessApiCallback<GetTitleDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetTitleInternalData(
    GetTitleDataRequest& request,
    ProcessApiCallback<GetTitleDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetTitleInternalData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetTitleInternalDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetTitleInternalDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetTitleDataResult* outResult = new GetTitleDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetTitleDataResult> successCallback = reinterpret_cast<ProcessApiCallback<GetTitleDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetTitleNews(
    GetTitleNewsRequest& request,
    ProcessApiCallback<GetTitleNewsResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetTitleNews"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetTitleNewsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetTitleNewsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetTitleNewsResult* outResult = new GetTitleNewsResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetTitleNewsResult> successCallback = reinterpret_cast<ProcessApiCallback<GetTitleNewsResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::SetPublisherData(
    SetPublisherDataRequest& request,
    ProcessApiCallback<SetPublisherDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/SetPublisherData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnSetPublisherDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnSetPublisherDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        SetPublisherDataResult* outResult = new SetPublisherDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<SetPublisherDataResult> successCallback = reinterpret_cast<ProcessApiCallback<SetPublisherDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::SetTitleData(
    SetTitleDataRequest& request,
    ProcessApiCallback<SetTitleDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/SetTitleData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnSetTitleDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnSetTitleDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        SetTitleDataResult* outResult = new SetTitleDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<SetTitleDataResult> successCallback = reinterpret_cast<ProcessApiCallback<SetTitleDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::SetTitleInternalData(
    SetTitleDataRequest& request,
    ProcessApiCallback<SetTitleDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/SetTitleInternalData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnSetTitleInternalDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnSetTitleInternalDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        SetTitleDataResult* outResult = new SetTitleDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<SetTitleDataResult> successCallback = reinterpret_cast<ProcessApiCallback<SetTitleDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::AddCharacterVirtualCurrency(
    AddCharacterVirtualCurrencyRequest& request,
    ProcessApiCallback<ModifyCharacterVirtualCurrencyResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/AddCharacterVirtualCurrency"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnAddCharacterVirtualCurrencyResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnAddCharacterVirtualCurrencyResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        ModifyCharacterVirtualCurrencyResult* outResult = new ModifyCharacterVirtualCurrencyResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<ModifyCharacterVirtualCurrencyResult> successCallback = reinterpret_cast<ProcessApiCallback<ModifyCharacterVirtualCurrencyResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::AddUserVirtualCurrency(
    AddUserVirtualCurrencyRequest& request,
    ProcessApiCallback<ModifyUserVirtualCurrencyResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/AddUserVirtualCurrency"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnAddUserVirtualCurrencyResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnAddUserVirtualCurrencyResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        ModifyUserVirtualCurrencyResult* outResult = new ModifyUserVirtualCurrencyResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<ModifyUserVirtualCurrencyResult> successCallback = reinterpret_cast<ProcessApiCallback<ModifyUserVirtualCurrencyResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::ConsumeItem(
    ConsumeItemRequest& request,
    ProcessApiCallback<ConsumeItemResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/ConsumeItem"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnConsumeItemResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnConsumeItemResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        ConsumeItemResult* outResult = new ConsumeItemResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<ConsumeItemResult> successCallback = reinterpret_cast<ProcessApiCallback<ConsumeItemResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::EvaluateRandomResultTable(
    EvaluateRandomResultTableRequest& request,
    ProcessApiCallback<EvaluateRandomResultTableResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/EvaluateRandomResultTable"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnEvaluateRandomResultTableResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnEvaluateRandomResultTableResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        EvaluateRandomResultTableResult* outResult = new EvaluateRandomResultTableResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<EvaluateRandomResultTableResult> successCallback = reinterpret_cast<ProcessApiCallback<EvaluateRandomResultTableResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetCharacterInventory(
    GetCharacterInventoryRequest& request,
    ProcessApiCallback<GetCharacterInventoryResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetCharacterInventory"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetCharacterInventoryResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetCharacterInventoryResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetCharacterInventoryResult* outResult = new GetCharacterInventoryResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetCharacterInventoryResult> successCallback = reinterpret_cast<ProcessApiCallback<GetCharacterInventoryResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetRandomResultTables(
    GetRandomResultTablesRequest& request,
    ProcessApiCallback<GetRandomResultTablesResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetRandomResultTables"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetRandomResultTablesResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetRandomResultTablesResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetRandomResultTablesResult* outResult = new GetRandomResultTablesResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetRandomResultTablesResult> successCallback = reinterpret_cast<ProcessApiCallback<GetRandomResultTablesResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetUserInventory(
    GetUserInventoryRequest& request,
    ProcessApiCallback<GetUserInventoryResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetUserInventory"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetUserInventoryResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetUserInventoryResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetUserInventoryResult* outResult = new GetUserInventoryResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetUserInventoryResult> successCallback = reinterpret_cast<ProcessApiCallback<GetUserInventoryResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GrantItemsToCharacter(
    GrantItemsToCharacterRequest& request,
    ProcessApiCallback<GrantItemsToCharacterResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GrantItemsToCharacter"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGrantItemsToCharacterResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGrantItemsToCharacterResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GrantItemsToCharacterResult* outResult = new GrantItemsToCharacterResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GrantItemsToCharacterResult> successCallback = reinterpret_cast<ProcessApiCallback<GrantItemsToCharacterResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GrantItemsToUser(
    GrantItemsToUserRequest& request,
    ProcessApiCallback<GrantItemsToUserResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GrantItemsToUser"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGrantItemsToUserResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGrantItemsToUserResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GrantItemsToUserResult* outResult = new GrantItemsToUserResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GrantItemsToUserResult> successCallback = reinterpret_cast<ProcessApiCallback<GrantItemsToUserResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GrantItemsToUsers(
    GrantItemsToUsersRequest& request,
    ProcessApiCallback<GrantItemsToUsersResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GrantItemsToUsers"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGrantItemsToUsersResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGrantItemsToUsersResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GrantItemsToUsersResult* outResult = new GrantItemsToUsersResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GrantItemsToUsersResult> successCallback = reinterpret_cast<ProcessApiCallback<GrantItemsToUsersResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::ModifyItemUses(
    ModifyItemUsesRequest& request,
    ProcessApiCallback<ModifyItemUsesResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/ModifyItemUses"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnModifyItemUsesResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnModifyItemUsesResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        ModifyItemUsesResult* outResult = new ModifyItemUsesResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<ModifyItemUsesResult> successCallback = reinterpret_cast<ProcessApiCallback<ModifyItemUsesResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::MoveItemToCharacterFromCharacter(
    MoveItemToCharacterFromCharacterRequest& request,
    ProcessApiCallback<MoveItemToCharacterFromCharacterResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/MoveItemToCharacterFromCharacter"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnMoveItemToCharacterFromCharacterResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnMoveItemToCharacterFromCharacterResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        MoveItemToCharacterFromCharacterResult* outResult = new MoveItemToCharacterFromCharacterResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<MoveItemToCharacterFromCharacterResult> successCallback = reinterpret_cast<ProcessApiCallback<MoveItemToCharacterFromCharacterResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::MoveItemToCharacterFromUser(
    MoveItemToCharacterFromUserRequest& request,
    ProcessApiCallback<MoveItemToCharacterFromUserResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/MoveItemToCharacterFromUser"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnMoveItemToCharacterFromUserResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnMoveItemToCharacterFromUserResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        MoveItemToCharacterFromUserResult* outResult = new MoveItemToCharacterFromUserResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<MoveItemToCharacterFromUserResult> successCallback = reinterpret_cast<ProcessApiCallback<MoveItemToCharacterFromUserResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::MoveItemToUserFromCharacter(
    MoveItemToUserFromCharacterRequest& request,
    ProcessApiCallback<MoveItemToUserFromCharacterResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/MoveItemToUserFromCharacter"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnMoveItemToUserFromCharacterResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnMoveItemToUserFromCharacterResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        MoveItemToUserFromCharacterResult* outResult = new MoveItemToUserFromCharacterResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<MoveItemToUserFromCharacterResult> successCallback = reinterpret_cast<ProcessApiCallback<MoveItemToUserFromCharacterResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::RedeemCoupon(
    RedeemCouponRequest& request,
    ProcessApiCallback<RedeemCouponResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/RedeemCoupon"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnRedeemCouponResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnRedeemCouponResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        RedeemCouponResult* outResult = new RedeemCouponResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<RedeemCouponResult> successCallback = reinterpret_cast<ProcessApiCallback<RedeemCouponResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::ReportPlayer(
    ReportPlayerServerRequest& request,
    ProcessApiCallback<ReportPlayerServerResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/ReportPlayer"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnReportPlayerResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnReportPlayerResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        ReportPlayerServerResult* outResult = new ReportPlayerServerResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<ReportPlayerServerResult> successCallback = reinterpret_cast<ProcessApiCallback<ReportPlayerServerResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::RevokeInventoryItem(
    RevokeInventoryItemRequest& request,
    ProcessApiCallback<RevokeInventoryResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/RevokeInventoryItem"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnRevokeInventoryItemResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnRevokeInventoryItemResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        RevokeInventoryResult* outResult = new RevokeInventoryResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<RevokeInventoryResult> successCallback = reinterpret_cast<ProcessApiCallback<RevokeInventoryResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::SubtractCharacterVirtualCurrency(
    SubtractCharacterVirtualCurrencyRequest& request,
    ProcessApiCallback<ModifyCharacterVirtualCurrencyResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/SubtractCharacterVirtualCurrency"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnSubtractCharacterVirtualCurrencyResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnSubtractCharacterVirtualCurrencyResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        ModifyCharacterVirtualCurrencyResult* outResult = new ModifyCharacterVirtualCurrencyResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<ModifyCharacterVirtualCurrencyResult> successCallback = reinterpret_cast<ProcessApiCallback<ModifyCharacterVirtualCurrencyResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::SubtractUserVirtualCurrency(
    SubtractUserVirtualCurrencyRequest& request,
    ProcessApiCallback<ModifyUserVirtualCurrencyResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/SubtractUserVirtualCurrency"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnSubtractUserVirtualCurrencyResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnSubtractUserVirtualCurrencyResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        ModifyUserVirtualCurrencyResult* outResult = new ModifyUserVirtualCurrencyResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<ModifyUserVirtualCurrencyResult> successCallback = reinterpret_cast<ProcessApiCallback<ModifyUserVirtualCurrencyResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UnlockContainerInstance(
    UnlockContainerInstanceRequest& request,
    ProcessApiCallback<UnlockContainerItemResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UnlockContainerInstance"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUnlockContainerInstanceResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUnlockContainerInstanceResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UnlockContainerItemResult* outResult = new UnlockContainerItemResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UnlockContainerItemResult> successCallback = reinterpret_cast<ProcessApiCallback<UnlockContainerItemResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UnlockContainerItem(
    UnlockContainerItemRequest& request,
    ProcessApiCallback<UnlockContainerItemResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UnlockContainerItem"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUnlockContainerItemResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUnlockContainerItemResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UnlockContainerItemResult* outResult = new UnlockContainerItemResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UnlockContainerItemResult> successCallback = reinterpret_cast<ProcessApiCallback<UnlockContainerItemResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdateUserInventoryItemCustomData(
    UpdateUserInventoryItemDataRequest& request,
    ProcessApiCallback<EmptyResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdateUserInventoryItemCustomData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdateUserInventoryItemCustomDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdateUserInventoryItemCustomDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        EmptyResult* outResult = new EmptyResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<EmptyResult> successCallback = reinterpret_cast<ProcessApiCallback<EmptyResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::AddFriend(
    AddFriendRequest& request,
    ProcessApiCallback<EmptyResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/AddFriend"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnAddFriendResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnAddFriendResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        EmptyResult* outResult = new EmptyResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<EmptyResult> successCallback = reinterpret_cast<ProcessApiCallback<EmptyResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetFriendsList(
    GetFriendsListRequest& request,
    ProcessApiCallback<GetFriendsListResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetFriendsList"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetFriendsListResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetFriendsListResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetFriendsListResult* outResult = new GetFriendsListResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetFriendsListResult> successCallback = reinterpret_cast<ProcessApiCallback<GetFriendsListResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::RemoveFriend(
    RemoveFriendRequest& request,
    ProcessApiCallback<EmptyResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/RemoveFriend"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnRemoveFriendResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnRemoveFriendResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        EmptyResult* outResult = new EmptyResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<EmptyResult> successCallback = reinterpret_cast<ProcessApiCallback<EmptyResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::SetFriendTags(
    SetFriendTagsRequest& request,
    ProcessApiCallback<EmptyResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/SetFriendTags"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnSetFriendTagsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnSetFriendTagsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        EmptyResult* outResult = new EmptyResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<EmptyResult> successCallback = reinterpret_cast<ProcessApiCallback<EmptyResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::DeregisterGame(
    DeregisterGameRequest& request,
    ProcessApiCallback<DeregisterGameResponse> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/DeregisterGame"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnDeregisterGameResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnDeregisterGameResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        DeregisterGameResponse* outResult = new DeregisterGameResponse;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<DeregisterGameResponse> successCallback = reinterpret_cast<ProcessApiCallback<DeregisterGameResponse>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::NotifyMatchmakerPlayerLeft(
    NotifyMatchmakerPlayerLeftRequest& request,
    ProcessApiCallback<NotifyMatchmakerPlayerLeftResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/NotifyMatchmakerPlayerLeft"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnNotifyMatchmakerPlayerLeftResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnNotifyMatchmakerPlayerLeftResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        NotifyMatchmakerPlayerLeftResult* outResult = new NotifyMatchmakerPlayerLeftResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<NotifyMatchmakerPlayerLeftResult> successCallback = reinterpret_cast<ProcessApiCallback<NotifyMatchmakerPlayerLeftResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::RedeemMatchmakerTicket(
    RedeemMatchmakerTicketRequest& request,
    ProcessApiCallback<RedeemMatchmakerTicketResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/RedeemMatchmakerTicket"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnRedeemMatchmakerTicketResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnRedeemMatchmakerTicketResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        RedeemMatchmakerTicketResult* outResult = new RedeemMatchmakerTicketResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<RedeemMatchmakerTicketResult> successCallback = reinterpret_cast<ProcessApiCallback<RedeemMatchmakerTicketResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::RefreshGameServerInstanceHeartbeat(
    RefreshGameServerInstanceHeartbeatRequest& request,
    ProcessApiCallback<RefreshGameServerInstanceHeartbeatResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/RefreshGameServerInstanceHeartbeat"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnRefreshGameServerInstanceHeartbeatResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnRefreshGameServerInstanceHeartbeatResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        RefreshGameServerInstanceHeartbeatResult* outResult = new RefreshGameServerInstanceHeartbeatResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<RefreshGameServerInstanceHeartbeatResult> successCallback = reinterpret_cast<ProcessApiCallback<RefreshGameServerInstanceHeartbeatResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::RegisterGame(
    RegisterGameRequest& request,
    ProcessApiCallback<RegisterGameResponse> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/RegisterGame"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnRegisterGameResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnRegisterGameResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        RegisterGameResponse* outResult = new RegisterGameResponse;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<RegisterGameResponse> successCallback = reinterpret_cast<ProcessApiCallback<RegisterGameResponse>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::SetGameServerInstanceData(
    SetGameServerInstanceDataRequest& request,
    ProcessApiCallback<SetGameServerInstanceDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/SetGameServerInstanceData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnSetGameServerInstanceDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnSetGameServerInstanceDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        SetGameServerInstanceDataResult* outResult = new SetGameServerInstanceDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<SetGameServerInstanceDataResult> successCallback = reinterpret_cast<ProcessApiCallback<SetGameServerInstanceDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::SetGameServerInstanceState(
    SetGameServerInstanceStateRequest& request,
    ProcessApiCallback<SetGameServerInstanceStateResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/SetGameServerInstanceState"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnSetGameServerInstanceStateResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnSetGameServerInstanceStateResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        SetGameServerInstanceStateResult* outResult = new SetGameServerInstanceStateResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<SetGameServerInstanceStateResult> successCallback = reinterpret_cast<ProcessApiCallback<SetGameServerInstanceStateResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::SetGameServerInstanceTags(
    SetGameServerInstanceTagsRequest& request,
    ProcessApiCallback<SetGameServerInstanceTagsResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/SetGameServerInstanceTags"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnSetGameServerInstanceTagsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnSetGameServerInstanceTagsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        SetGameServerInstanceTagsResult* outResult = new SetGameServerInstanceTagsResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<SetGameServerInstanceTagsResult> successCallback = reinterpret_cast<ProcessApiCallback<SetGameServerInstanceTagsResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::WriteCharacterEvent(
    WriteServerCharacterEventRequest& request,
    ProcessApiCallback<WriteEventResponse> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/WriteCharacterEvent"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnWriteCharacterEventResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnWriteCharacterEventResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        WriteEventResponse* outResult = new WriteEventResponse;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<WriteEventResponse> successCallback = reinterpret_cast<ProcessApiCallback<WriteEventResponse>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::WritePlayerEvent(
    WriteServerPlayerEventRequest& request,
    ProcessApiCallback<WriteEventResponse> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/WritePlayerEvent"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnWritePlayerEventResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnWritePlayerEventResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        WriteEventResponse* outResult = new WriteEventResponse;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<WriteEventResponse> successCallback = reinterpret_cast<ProcessApiCallback<WriteEventResponse>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::WriteTitleEvent(
    WriteTitleEventRequest& request,
    ProcessApiCallback<WriteEventResponse> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/WriteTitleEvent"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnWriteTitleEventResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnWriteTitleEventResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        WriteEventResponse* outResult = new WriteEventResponse;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<WriteEventResponse> successCallback = reinterpret_cast<ProcessApiCallback<WriteEventResponse>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::AddSharedGroupMembers(
    AddSharedGroupMembersRequest& request,
    ProcessApiCallback<AddSharedGroupMembersResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/AddSharedGroupMembers"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnAddSharedGroupMembersResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnAddSharedGroupMembersResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        AddSharedGroupMembersResult* outResult = new AddSharedGroupMembersResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<AddSharedGroupMembersResult> successCallback = reinterpret_cast<ProcessApiCallback<AddSharedGroupMembersResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::CreateSharedGroup(
    CreateSharedGroupRequest& request,
    ProcessApiCallback<CreateSharedGroupResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/CreateSharedGroup"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnCreateSharedGroupResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnCreateSharedGroupResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        CreateSharedGroupResult* outResult = new CreateSharedGroupResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<CreateSharedGroupResult> successCallback = reinterpret_cast<ProcessApiCallback<CreateSharedGroupResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::DeleteSharedGroup(
    DeleteSharedGroupRequest& request,
    ProcessApiCallback<EmptyResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/DeleteSharedGroup"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnDeleteSharedGroupResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnDeleteSharedGroupResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        EmptyResult* outResult = new EmptyResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<EmptyResult> successCallback = reinterpret_cast<ProcessApiCallback<EmptyResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetSharedGroupData(
    GetSharedGroupDataRequest& request,
    ProcessApiCallback<GetSharedGroupDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetSharedGroupData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetSharedGroupDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetSharedGroupDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetSharedGroupDataResult* outResult = new GetSharedGroupDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetSharedGroupDataResult> successCallback = reinterpret_cast<ProcessApiCallback<GetSharedGroupDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::RemoveSharedGroupMembers(
    RemoveSharedGroupMembersRequest& request,
    ProcessApiCallback<RemoveSharedGroupMembersResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/RemoveSharedGroupMembers"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnRemoveSharedGroupMembersResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnRemoveSharedGroupMembersResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        RemoveSharedGroupMembersResult* outResult = new RemoveSharedGroupMembersResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<RemoveSharedGroupMembersResult> successCallback = reinterpret_cast<ProcessApiCallback<RemoveSharedGroupMembersResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdateSharedGroupData(
    UpdateSharedGroupDataRequest& request,
    ProcessApiCallback<UpdateSharedGroupDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdateSharedGroupData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdateSharedGroupDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdateSharedGroupDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UpdateSharedGroupDataResult* outResult = new UpdateSharedGroupDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UpdateSharedGroupDataResult> successCallback = reinterpret_cast<ProcessApiCallback<UpdateSharedGroupDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::ExecuteCloudScript(
    ExecuteCloudScriptServerRequest& request,
    ProcessApiCallback<ExecuteCloudScriptResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/ExecuteCloudScript"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnExecuteCloudScriptResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnExecuteCloudScriptResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        ExecuteCloudScriptResult* outResult = new ExecuteCloudScriptResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<ExecuteCloudScriptResult> successCallback = reinterpret_cast<ProcessApiCallback<ExecuteCloudScriptResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetContentDownloadUrl(
    GetContentDownloadUrlRequest& request,
    ProcessApiCallback<GetContentDownloadUrlResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetContentDownloadUrl"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetContentDownloadUrlResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetContentDownloadUrlResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetContentDownloadUrlResult* outResult = new GetContentDownloadUrlResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetContentDownloadUrlResult> successCallback = reinterpret_cast<ProcessApiCallback<GetContentDownloadUrlResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::DeleteCharacterFromUser(
    DeleteCharacterFromUserRequest& request,
    ProcessApiCallback<DeleteCharacterFromUserResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/DeleteCharacterFromUser"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnDeleteCharacterFromUserResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnDeleteCharacterFromUserResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        DeleteCharacterFromUserResult* outResult = new DeleteCharacterFromUserResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<DeleteCharacterFromUserResult> successCallback = reinterpret_cast<ProcessApiCallback<DeleteCharacterFromUserResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetAllUsersCharacters(
    ListUsersCharactersRequest& request,
    ProcessApiCallback<ListUsersCharactersResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetAllUsersCharacters"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetAllUsersCharactersResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetAllUsersCharactersResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        ListUsersCharactersResult* outResult = new ListUsersCharactersResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<ListUsersCharactersResult> successCallback = reinterpret_cast<ProcessApiCallback<ListUsersCharactersResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetCharacterLeaderboard(
    GetCharacterLeaderboardRequest& request,
    ProcessApiCallback<GetCharacterLeaderboardResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetCharacterLeaderboard"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetCharacterLeaderboardResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetCharacterLeaderboardResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetCharacterLeaderboardResult* outResult = new GetCharacterLeaderboardResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetCharacterLeaderboardResult> successCallback = reinterpret_cast<ProcessApiCallback<GetCharacterLeaderboardResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetCharacterStatistics(
    GetCharacterStatisticsRequest& request,
    ProcessApiCallback<GetCharacterStatisticsResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetCharacterStatistics"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetCharacterStatisticsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetCharacterStatisticsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetCharacterStatisticsResult* outResult = new GetCharacterStatisticsResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetCharacterStatisticsResult> successCallback = reinterpret_cast<ProcessApiCallback<GetCharacterStatisticsResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetLeaderboardAroundCharacter(
    GetLeaderboardAroundCharacterRequest& request,
    ProcessApiCallback<GetLeaderboardAroundCharacterResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetLeaderboardAroundCharacter"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetLeaderboardAroundCharacterResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetLeaderboardAroundCharacterResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetLeaderboardAroundCharacterResult* outResult = new GetLeaderboardAroundCharacterResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetLeaderboardAroundCharacterResult> successCallback = reinterpret_cast<ProcessApiCallback<GetLeaderboardAroundCharacterResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetLeaderboardForUserCharacters(
    GetLeaderboardForUsersCharactersRequest& request,
    ProcessApiCallback<GetLeaderboardForUsersCharactersResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetLeaderboardForUserCharacters"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetLeaderboardForUserCharactersResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetLeaderboardForUserCharactersResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetLeaderboardForUsersCharactersResult* outResult = new GetLeaderboardForUsersCharactersResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetLeaderboardForUsersCharactersResult> successCallback = reinterpret_cast<ProcessApiCallback<GetLeaderboardForUsersCharactersResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GrantCharacterToUser(
    GrantCharacterToUserRequest& request,
    ProcessApiCallback<GrantCharacterToUserResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GrantCharacterToUser"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGrantCharacterToUserResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGrantCharacterToUserResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GrantCharacterToUserResult* outResult = new GrantCharacterToUserResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GrantCharacterToUserResult> successCallback = reinterpret_cast<ProcessApiCallback<GrantCharacterToUserResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdateCharacterStatistics(
    UpdateCharacterStatisticsRequest& request,
    ProcessApiCallback<UpdateCharacterStatisticsResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdateCharacterStatistics"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdateCharacterStatisticsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdateCharacterStatisticsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UpdateCharacterStatisticsResult* outResult = new UpdateCharacterStatisticsResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UpdateCharacterStatisticsResult> successCallback = reinterpret_cast<ProcessApiCallback<UpdateCharacterStatisticsResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetCharacterData(
    GetCharacterDataRequest& request,
    ProcessApiCallback<GetCharacterDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetCharacterData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetCharacterDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetCharacterDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetCharacterDataResult* outResult = new GetCharacterDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetCharacterDataResult> successCallback = reinterpret_cast<ProcessApiCallback<GetCharacterDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetCharacterInternalData(
    GetCharacterDataRequest& request,
    ProcessApiCallback<GetCharacterDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetCharacterInternalData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetCharacterInternalDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetCharacterInternalDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetCharacterDataResult* outResult = new GetCharacterDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetCharacterDataResult> successCallback = reinterpret_cast<ProcessApiCallback<GetCharacterDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetCharacterReadOnlyData(
    GetCharacterDataRequest& request,
    ProcessApiCallback<GetCharacterDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetCharacterReadOnlyData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetCharacterReadOnlyDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetCharacterReadOnlyDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetCharacterDataResult* outResult = new GetCharacterDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetCharacterDataResult> successCallback = reinterpret_cast<ProcessApiCallback<GetCharacterDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdateCharacterData(
    UpdateCharacterDataRequest& request,
    ProcessApiCallback<UpdateCharacterDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdateCharacterData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdateCharacterDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdateCharacterDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UpdateCharacterDataResult* outResult = new UpdateCharacterDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UpdateCharacterDataResult> successCallback = reinterpret_cast<ProcessApiCallback<UpdateCharacterDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdateCharacterInternalData(
    UpdateCharacterDataRequest& request,
    ProcessApiCallback<UpdateCharacterDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdateCharacterInternalData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdateCharacterInternalDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdateCharacterInternalDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UpdateCharacterDataResult* outResult = new UpdateCharacterDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UpdateCharacterDataResult> successCallback = reinterpret_cast<ProcessApiCallback<UpdateCharacterDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::UpdateCharacterReadOnlyData(
    UpdateCharacterDataRequest& request,
    ProcessApiCallback<UpdateCharacterDataResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/UpdateCharacterReadOnlyData"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnUpdateCharacterReadOnlyDataResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnUpdateCharacterReadOnlyDataResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        UpdateCharacterDataResult* outResult = new UpdateCharacterDataResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<UpdateCharacterDataResult> successCallback = reinterpret_cast<ProcessApiCallback<UpdateCharacterDataResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::AddPlayerTag(
    AddPlayerTagRequest& request,
    ProcessApiCallback<AddPlayerTagResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/AddPlayerTag"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnAddPlayerTagResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnAddPlayerTagResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        AddPlayerTagResult* outResult = new AddPlayerTagResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<AddPlayerTagResult> successCallback = reinterpret_cast<ProcessApiCallback<AddPlayerTagResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetAllActionGroups(

    ProcessApiCallback<GetAllActionGroupsResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetAllActionGroups"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, "", customData, callback, errorCallback, OnGetAllActionGroupsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetAllActionGroupsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetAllActionGroupsResult* outResult = new GetAllActionGroupsResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetAllActionGroupsResult> successCallback = reinterpret_cast<ProcessApiCallback<GetAllActionGroupsResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetAllSegments(

    ProcessApiCallback<GetAllSegmentsResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetAllSegments"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, "", customData, callback, errorCallback, OnGetAllSegmentsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetAllSegmentsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetAllSegmentsResult* outResult = new GetAllSegmentsResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetAllSegmentsResult> successCallback = reinterpret_cast<ProcessApiCallback<GetAllSegmentsResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetPlayerSegments(
    GetPlayersSegmentsRequest& request,
    ProcessApiCallback<GetPlayerSegmentsResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetPlayerSegments"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetPlayerSegmentsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetPlayerSegmentsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetPlayerSegmentsResult* outResult = new GetPlayerSegmentsResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetPlayerSegmentsResult> successCallback = reinterpret_cast<ProcessApiCallback<GetPlayerSegmentsResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetPlayersInSegment(
    GetPlayersInSegmentRequest& request,
    ProcessApiCallback<GetPlayersInSegmentResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetPlayersInSegment"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetPlayersInSegmentResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetPlayersInSegmentResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetPlayersInSegmentResult* outResult = new GetPlayersInSegmentResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetPlayersInSegmentResult> successCallback = reinterpret_cast<ProcessApiCallback<GetPlayersInSegmentResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::GetPlayerTags(
    GetPlayerTagsRequest& request,
    ProcessApiCallback<GetPlayerTagsResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/GetPlayerTags"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnGetPlayerTagsResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnGetPlayerTagsResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        GetPlayerTagsResult* outResult = new GetPlayerTagsResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<GetPlayerTagsResult> successCallback = reinterpret_cast<ProcessApiCallback<GetPlayerTagsResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::RemovePlayerTag(
    RemovePlayerTagRequest& request,
    ProcessApiCallback<RemovePlayerTagResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/RemovePlayerTag"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnRemovePlayerTagResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnRemovePlayerTagResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        RemovePlayerTagResult* outResult = new RemovePlayerTagResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<RemovePlayerTagResult> successCallback = reinterpret_cast<ProcessApiCallback<RemovePlayerTagResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

void PlayFabServerApi::AwardSteamAchievement(
    AwardSteamAchievementRequest& request,
    ProcessApiCallback<AwardSteamAchievementResult> callback,
    ErrorCallback errorCallback,
    void* customData
    )
{

    PlayFabRequest* newRequest = new PlayFabRequest(PlayFabSettings::playFabSettings.getURL("/Server/AwardSteamAchievement"), Aws::Http::HttpMethod::HTTP_POST, "X-SecretKey", PlayFabSettings::playFabSettings.developerSecretKey, request.toJSONString(), customData, callback, errorCallback, OnAwardSteamAchievementResult);
    PlayFabRequestManager::playFabHttp.AddRequest(newRequest);
}

void PlayFabServerApi::OnAwardSteamAchievementResult(PlayFabRequest* request)
{
    if (PlayFabBaseModel::DecodeRequest(request))
    {
        AwardSteamAchievementResult* outResult = new AwardSteamAchievementResult;
        outResult->readFromValue(request->mResponseJson->FindMember("data")->value);


        if (request->mResultCallback != nullptr)
        {
            ProcessApiCallback<AwardSteamAchievementResult> successCallback = reinterpret_cast<ProcessApiCallback<AwardSteamAchievementResult>>(request->mResultCallback);
            successCallback(*outResult, request->mCustomData);
        }
        delete outResult;
        delete request;
    }
}

