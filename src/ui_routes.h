/*
 * Web UI Routes
 *
 * Compressed Size Summary:
 * ui_app_immutable_assets_css: 23,962 bytes
 * ui_html: 3,906 bytes
 * ui_app_immutable_entry_js: 62,565 bytes
 * ui_app_immutable_nodes_js: 590 bytes
 * ui_svg: 456 bytes
 * Total: 91,479 bytes
 */

#pragma once

#include <ESPAsyncWebServer.h>
#include "ui_app_immutable_assets_css.h"
#include "ui_html.h"
#include "ui_app_immutable_entry_js.h"
#include "ui_app_immutable_nodes_js.h"
#include "ui_svg.h"

inline void setupRoutes(AsyncWebServer* server) {
    server->on("/app/immutable/assets/internal.C_uWwSbL.css", HTTP_GET, serveAppImmutableAssetsInternalCUWwSbLCss);
    server->on("/app/immutable/assets/start.C_uWwSbL.css", HTTP_GET, serveAppImmutableAssetsStartCUWwSbLCss);
    server->on("/app/immutable/entry/app.BJxnAKYh.js", HTTP_GET, serveAppImmutableEntryAppBJxnAkYhJs);
    server->on("/app/immutable/entry/start.MJfxuO6V.js", HTTP_GET, serveAppImmutableEntryStartMJfxuO6VJs);
    server->on("/app/immutable/nodes/0.YmcSueJ-.js", HTTP_GET, serveAppImmutableNodes_0YmcSueJJs);
    server->on("/app/immutable/nodes/1.MG5pIrZB.js", HTTP_GET, serveAppImmutableNodes_1Mg5pIrZbJs);
    server->on("/app/immutable/nodes/2.D2z95owv.js", HTTP_GET, serveAppImmutableNodes_2D2z95owvJs);
    server->on("/app/immutable/nodes/3.CnCVaHIP.js", HTTP_GET, serveAppImmutableNodes_3CnCVaHipJs);
    server->on("/app/immutable/nodes/4.D8lRAqq-.js", HTTP_GET, serveAppImmutableNodes_4D8lRAqqJs);
    server->on("/app/immutable/nodes/5.CPngEPyD.js", HTTP_GET, serveAppImmutableNodes_5CPngEPyDJs);
    server->on("/app/immutable/nodes/6.-YWLNDrb.js", HTTP_GET, serveAppImmutableNodes_6YwlnDrbJs);
    server->on("/app/immutable/nodes/7.UufzTpp1.js", HTTP_GET, serveAppImmutableNodes_7UufzTpp1Js);
    server->on("/favicon.svg", HTTP_GET, serveFaviconSvg);
    // HTML routes
    server->on("/devices", HTTP_GET, serveDevicesHtml);
    server->on("/devices.html", HTTP_GET, serveDevicesHtml);
    server->on("/fingerprints", HTTP_GET, serveFingerprintsHtml);
    server->on("/fingerprints.html", HTTP_GET, serveFingerprintsHtml);
    server->on("/hardware", HTTP_GET, serveHardwareHtml);
    server->on("/hardware.html", HTTP_GET, serveHardwareHtml);
    server->on("/", HTTP_GET, serveIndexHtml);
    server->on("/network", HTTP_GET, serveNetworkHtml);
    server->on("/network.html", HTTP_GET, serveNetworkHtml);
    server->on("/settings", HTTP_GET, serveSettingsHtml);
    server->on("/settings.html", HTTP_GET, serveSettingsHtml);
}
