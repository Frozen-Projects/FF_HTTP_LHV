# FF_HTTP_LHV

## GOAL
Our short-term goal is implementing non-blocking and Async HTTP/HTTPS server to Unreal Engine 5 and running them on `FRunnableThread` to make high performance (both Unreal project and HTTP server) services with 3D capabilities.
Our long-term goal is integrating HTTP/2 server to UE5. For this reason, we will develope multiple plugins with different third party libraries. You can say that each plugin will be that library's experiment. After achieving our HTTP/2 goal, only that library will be the main one. But blueprint workflow will be same.

## THIRD PARTY LIBRARY
Ithewei LibHv
https://github.com/ithewei/libhv

## DEPENDENCIES
- MBedTLS </br>
- NGHTTP2 (Optional) </br>
Instructions
	- Copy contents of dependencies include to ``libhv/include``
	- Create a folder with name ``lib`` in libhv's root directory.
	- Copy all .lib files to created ``lib`` folder.

## ROADMAP
- HTTPS Server implementation
- More advance response (for example, response headers)

## NOT-SUPPORTED FEATURES
We won't integrate any database and JSON libraries to this plugin. Because we believe that accessing datasources and parsing message formats are NOT HTTP server plugin's job. Unreal Engine has lots of JSON plugins in its ecosystem.

## BASIC INTRODUCTION
(We will improve this after finishing implementation.)<br />

- Spawn HTTP_Server_LHV actor
- Define its properties (port, server name and etc.)
- Create "Bind Event to Delegate HTTP Lib Hv"
- Create correct custom event and attach it to delegate (HTTP Connection LHV object referance)
- HTTP Connection LHV has lots of helper functions to "Get Body, Get Path, Get Headers, Find Header, Get Content Type". You can use these to parse request and create correct response for your needs.
- Use "Send Response" node from HTTP Connection LHV object to send response.
- You can use "Cancel Request" to cancel HTTP request.
- Execution chain will be on FRunnableThread. So, if you need to use functions which requires specific threads such as "Game Thread, Render Thread or Audio Thread", it will cause crash.

## PLATFORM SUPPORT
We won't have a plan to support other platforms than Windows like Linux, Mac, Android and iOS. If you need other platforms, build your library and implement it to your fork.

## ENGINE SUPPORT
We support "only" current engine release. We update our plugin "after one month" when there is a new one.

## DEVELOPMENT SUPPORT
If you need support about "HTTP Server libraries", post issue on their GitHub repo. We just implement their library to Unreal Engine.
But we can help you about Unreal Engine related problems.
