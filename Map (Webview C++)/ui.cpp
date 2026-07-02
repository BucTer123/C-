#include <webview.h>
#include "ui.h"

void starting_ui() {
	webview::webview w(true, nullptr);
	
	w.set_title("UI");
	w.set_size(800, 600, WEBVIEW_HINT_NONE);
	
	w.set_html(R"(
	<!DOCTYPE html>
	<html lang="en">
	<head>
		<meta charset="UTF-8" >
		<title>Map</title>
		<link rel="stylesheet" href="https://unpkg.com/leaflet/dist/leaflet.css" />
	</head>
	<style>
		#map {
			width: 100%;
			height: 100vh;
		}
	</style>
	<body>
	<div id="map"></div>
	<script src="https://unpkg.com/leaflet/dist/leaflet.js"></script>
	<script>
		var map = L.map('map').setView([48.29569960648587, 25.933912477867402], 13);
	
		L.tileLayer('https://{s}.basemaps.cartocdn.com/light_all/{z}/{x}/{y}{r}.png', {
			attribution: '&copy; OpenStreetMap & CartoDB'
		}).addTo(map);
	</script>
	</body>
	</html>
	)");
	w.run();
	return 0;
}