//This file is part of FingerText, a notepad++ snippet plugin.
//
//FingerText is released under MIT License.
//
//MIT license
//
//Copyright (C) 2011 by Tom Lam
//
//Permission is hereby granted, free of charge, to any person 
//obtaining a copy of this software and associated documentation 
//files (the "Software"), to deal in the Software without 
//restriction, including without limitation the rights to use, 
//copy, modify, merge, publish, distribute, sublicense, and/or 
//sell copies of the Software, and to permit persons to whom the 
//Software is furnished to do so, subject to the following 
//conditions:
//
//The above copyright notice and this permission notice shall be 
//included in all copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
//EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES 
//OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
//NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT 
//HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
//WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
//DEALINGS IN THE SOFTWARE.

//#define TESTING

#define VERSION_TEXT "0.5.61"
#define VERSION_NUM 0,5,61,0
#define VERSION_LINEAR 561
#define VERSION_KEEP_CONFIG_START 549
#define VERSION_STAGE "(Alpha)"
#ifdef TESTING
#define VERSION_STAGE_ADD " Nightly"
#else
#define VERSION_STAGE_ADD ""
#endif
#define SNIPPET_RESOURCE 301
#define DEFAULTSNIPPETPATH "DefaultSnippetPackage\\Default_Snippet_Package-0.2.0.ftd"


#define AUTHOR_NAME "erinata"
#define PLUGIN_NAME "FingerText"
#define COPYRIGHT_TEXT "Copyright (C) 2011-2012"
#define DESCRIPTION_TEXT "A snippet plugin for notepad++"

#define DATE_TEXT "April 2012"
#define AUTHOR_TEXT "Author: Tom Lam\r\n"
#define EMAIL_TEXT "Email: erinata@gmail.com\r\n"
#define ABOUT_TEXT "\
Update to the lastest version:\r\n\
           http://sourceforge.net/projects/fingertext/ \r\n\
Usage Guide and Source code:\r\n\
           http://github.com/erinata/FingerText \r\n\r\n\
"
#ifdef TESTING
#define MENU_LENGTH 22
#else
#define MENU_LENGTH 17
#endif
