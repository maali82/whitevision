[Variables]

; --- Column positions (RAM / SWAP / HDD skins) ---
headerxpos=330
percentxpos=530
absvaluexpos=420

; --- Extra panel column positions (expanded hover panels) ---
extraheaderxpos=622
extraxpos=755

; --- Separator lines ---
seplincolor=255,255,255,255
seplinheight=0
seplinwidth=472

; --- Background ---
transparcolor=255,0,0,128

; --- Menu bar buttons ---
hoverbarcolor=20,20,20,255
clickbarcolor=20,20,20,255
clickhovbarH=20
relbargap=1R
relbartext=2r

; --- Graph colors ---
graphoutlinecolor=8,8,8,24
baroutlinecolor=8,8,8,24
bargraphempty=8,8,8,24
bargraphfill=250,250,250,200
lingraphcolor=250,250,250,200
lingraphcolor2=255,0,0,255
GRIDCOLOR=8,8,8,24

; --- Normal graph dimensions ---
lingraphheight=100
lingraphwidth=315
longlingraphwidth=605
bargraphheight=20
bargraphwidth=315

; --- Normal grid line dimensions ---
initialX=3
initialY=20
horizgapY=10
horizGRIDH=1
horizGRIDW=315
longhorizGRIDW=605

; --- Small graph dimensions (removable drives) ---
SMlingraphheight=70
SMlingraphwidth=250
SMbargraphheight=15
SMbargraphwidth=250

; --- Small grid line dimensions (removable drives) ---
SMinitialX=15
SMinitialY=37
SMhorizgapY=7
SMhorizGRIDH=1
SMhorizGRIDW=250


; =============================================================
;  METER STYLES
;  Reference these with MeterStyle= instead of repeating the
;  five font properties on every string meter.
; =============================================================

; Base text style — apply to every STRING meter
[DefaultText]
FontColor=8,8,8,128
FontSize=8
FontFace="Noto Sans"
StringEffect=Border
StringStyle=Bold
FontEffectColor=200,200,200,24
AntiAlias=1

; Grid line style — apply to every background grid IMAGE meter
[DefaultGridLine]
Meter=Image
H=#horizGRIDH#
W=#horizGRIDW#
SolidColor=#GRIDCOLOR#
AntiAlias=1
UpdateDivider=-1

; Wide grid line style — for network skins
[DefaultGridLineLong]
Meter=Image
H=#horizGRIDH#
W=#longhorizGRIDW#
SolidColor=#GRIDCOLOR#
AntiAlias=1
UpdateDivider=-1
