{ Configuration GMLib file }

// delphi 6
{$IFDEF VER140}
  {$DEFINE DELPHI6}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi 7
{$IFDEF VER150}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi 2005
{$IFDEF VER170}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi 2006
{$IFDEF VER180}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi 2007
{$IFDEF VER185}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi 2009
{$IFDEF VER200}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi 2010
{$IFDEF VER210}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE DELPHI2010}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi XE
{$IFDEF VER220}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE DELPHI2010}
  {$DEFINE DELPHIXE}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi XE2
{$IFDEF VER230}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE DELPHI2010}
  {$DEFINE DELPHIXE}
  {$DEFINE DELPHIXE2}
  {$DEFINE WEBBROWSER}
  {$IFDEF WIN32}
    {.$DEFINE CHROMIUM}
    {.$DEFINE CHROMIUMFMX}
  {$ENDIF}	
{$ENDIF}

// delphi XE3
{$IFDEF VER240}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE DELPHI2010}
  {$DEFINE DELPHIXE}
  {$DEFINE DELPHIXE2}
  {$DEFINE DELPHIXE3}
  {$DEFINE WEBBROWSER}
  {$IFDEF WIN32}
    {.$DEFINE CHROMIUM}
    {.$DEFINE CHROMIUMFMX}
  {$ENDIF}
{$ENDIF}

// delphi XE4
{$IFDEF VER250}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE DELPHI2010}
  {$DEFINE DELPHIXE}
  {$DEFINE DELPHIXE2}
  {$DEFINE DELPHIXE3}
  {$DEFINE DELPHIXE4}
  {$DEFINE WEBBROWSER}
  {$IFDEF WIN32}
    {.$DEFINE CHROMIUM}
    {.$DEFINE CHROMIUMFMX}
  {$ENDIF}
{$ENDIF}

// delphi XE5
{$IFDEF VER260}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE DELPHI2010}
  {$DEFINE DELPHIXE}
  {$DEFINE DELPHIXE2}
  {$DEFINE DELPHIXE3}
  {$DEFINE DELPHIXE4}
  {$DEFINE DELPHIXE5}
  {$DEFINE WEBBROWSER}
  {$IFDEF WIN32}
    {.$DEFINE CHROMIUM}
    {.$DEFINE CHROMIUMFMX}
  {$ENDIF}
{$ENDIF}

// delphi XE6
{$IFDEF VER270}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE DELPHI2010}
  {$DEFINE DELPHIXE}
  {$DEFINE DELPHIXE2}
  {$DEFINE DELPHIXE3}
  {$DEFINE DELPHIXE4}
  {$DEFINE DELPHIXE5}
  {$DEFINE DELPHIXE6}
  {$DEFINE WEBBROWSER}
  {$IFDEF WIN32}
    {.$DEFINE CHROMIUM}
    {.$DEFINE CHROMIUMFMX}
  {$ENDIF}
{$ENDIF}

// delphi XE7
{$IFDEF VER280}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE DELPHI2010}
  {$DEFINE DELPHIXE}
  {$DEFINE DELPHIXE2}
  {$DEFINE DELPHIXE3}
  {$DEFINE DELPHIXE4}
  {$DEFINE DELPHIXE5}
  {$DEFINE DELPHIXE6}
  {$DEFINE DELPHIXE7}
  {$DEFINE WEBBROWSER}
  {$IFDEF WIN32}
    {.$DEFINE CHROMIUM}
    {.$DEFINE CHROMIUMFMX}
  {$ENDIF}
{$ENDIF}

// delphi XE8
{$IFDEF VER290}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE DELPHI2010}
  {$DEFINE DELPHIXE}
  {$DEFINE DELPHIXE2}
  {$DEFINE DELPHIXE3}
  {$DEFINE DELPHIXE4}
  {$DEFINE DELPHIXE5}
  {$DEFINE DELPHIXE6}
  {$DEFINE DELPHIXE7}
  {$DEFINE DELPHIXE8}
  {$DEFINE WEBBROWSER}
  {$IFDEF WIN32}
    {.$DEFINE CHROMIUM}
    {.$DEFINE CHROMIUMFMX}
  {$ENDIF}
{$ENDIF}

// delphi Seattle 10
{$IFDEF VER300}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE DELPHI2010}
  {$DEFINE DELPHIXE}
  {$DEFINE DELPHIXE2}
  {$DEFINE DELPHIXE3}
  {$DEFINE DELPHIXE4}
  {$DEFINE DELPHIXE5}
  {$DEFINE DELPHIXE6}
  {$DEFINE DELPHIXE7}
  {$DEFINE DELPHIXE8}
  {$DEFINE DELPHISE10}
  {$DEFINE WEBBROWSER}
  {$IFDEF WIN32}
    {.$DEFINE CHROMIUM}
    {.$DEFINE CHROMIUMFMX}
  {$ENDIF}
{$ENDIF}

// delphi Berlin
{$IFDEF VER310}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE DELPHI2010}
  {$DEFINE DELPHIXE}
  {$DEFINE DELPHIXE2}
  {$DEFINE DELPHIXE3}
  {$DEFINE DELPHIXE4}
  {$DEFINE DELPHIXE5}
  {$DEFINE DELPHIXE6}
  {$DEFINE DELPHIXE7}
  {$DEFINE DELPHIXE8}
  {$DEFINE DELPHISE10}
  {$DEFINE DELPHIBERLIN}
  {$DEFINE WEBBROWSER}
  {$IFDEF WIN32}
    {.$DEFINE CHROMIUM}
    {.$DEFINE CHROMIUMFMX}
  {$ENDIF}
{$ENDIF}


// delphi Tokyo
{$IFDEF VER320}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE DELPHI2010}
  {$DEFINE DELPHIXE}
  {$DEFINE DELPHIXE2}
  {$DEFINE DELPHIXE3}
  {$DEFINE DELPHIXE4}
  {$DEFINE DELPHIXE5}
  {$DEFINE DELPHIXE6}
  {$DEFINE DELPHIXE7}
  {$DEFINE DELPHIXE8}
  {$DEFINE DELPHISE10}
  {$DEFINE DELPHIBERLIN}
  {$DEFINE DELPHITOKYO}
  {$DEFINE WEBBROWSER}
  {$IFDEF WIN32}
    {.$DEFINE CHROMIUM}
    {.$DEFINE CHROMIUMFMX}
  {$ENDIF}
{$ENDIF}


// delphi Rio
{$IFDEF VER330}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE DELPHI2010}
  {$DEFINE DELPHIXE}
  {$DEFINE DELPHIXE2}
  {$DEFINE DELPHIXE3}
  {$DEFINE DELPHIXE4}
  {$DEFINE DELPHIXE5}
  {$DEFINE DELPHIXE6}
  {$DEFINE DELPHIXE7}
  {$DEFINE DELPHIXE8}
  {$DEFINE DELPHISE10}
  {$DEFINE DELPHIBERLIN}
  {$DEFINE DELPHITOKYO}
  {$DEFINE DELPHIRIO}
  {$DEFINE WEBBROWSER}
  {$IFDEF WIN32}
    {.$DEFINE CHROMIUM}
    {.$DEFINE CHROMIUMFMX}
  {$ENDIF}
{$ENDIF}

// delphi Sydney
{$IFDEF VER340}
  {$DEFINE DELPHI6}
  {$DEFINE DELPHI7}
  {$DEFINE DELPHI2005}
  {$DEFINE DELPHI2006}
  {$DEFINE DELPHI2007}
  {$DEFINE DELPHI2009}
  {$DEFINE DELPHI2010}
  {$DEFINE DELPHIXE}
  {$DEFINE DELPHIXE2}
  {$DEFINE DELPHIXE3}
  {$DEFINE DELPHIXE4}
  {$DEFINE DELPHIXE5}
  {$DEFINE DELPHIXE6}
  {$DEFINE DELPHIXE7}
  {$DEFINE DELPHIXE8}
  {$DEFINE DELPHISE10}
  {$DEFINE DELPHIBERLIN}
  {$DEFINE DELPHITOKYO}
  {$DEFINE DELPHIRIO}
  {$DEFINE DELPHISYDNEY}
  {$DEFINE WEBBROWSER}
  {$IFDEF WIN32}
    {.$DEFINE CHROMIUM}
    {.$DEFINE CHROMIUMFMX}
  {$ENDIF}
{$ENDIF}
