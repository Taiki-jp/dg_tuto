#include "TestCtrl.h"

void TestCtrl::asyncHandleHttpRequest(const HttpRequestPtr &req, std::function<void(const HttpResponsePtr &)> &&callback)
{
    // write your application logic here
    // 新しいレスポンスインスタンスを生成
    auto resp = HttpResponse::newHttpResponse();
    // HTTPステータスコード 200 に設定
    resp->setStatusCode(k200OK);
    resp->setContentTypeCode(CT_TEXT_HTML);
    resp->setBody("<h1>Hello World!</h1>");
    callback(resp);
}
