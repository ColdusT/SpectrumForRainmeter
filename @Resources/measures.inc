[mAudio]
Measure=Plugin
Plugin=Win7AudioPlugin

[mAudioIcon]
Measure=Calc
Formula=((100 >= mAudio) && (66 <= mAudio) ? 3 : ((66 >= mAudio) && (33 <= mAudio) ? 2 : ((33 >= mAudio) && (0 <= mAudio) ? 1 : 0)))
DynamicVariables=1

[mSignal]
Measure=Plugin
Plugin=WiFiStatus
WifiInfoType=Quality

[mBatteryPercent]
Measure=Plugin
Plugin=PowerPlugin
PowerState=Percent

[mWifiIcon]
Measure=Calc
Formula=((100 >= mSignal) && (75 <= mSignal) ? 4 : ((75 >= mSignal) && (50 <= mSignal) ? 3 : ((50 >= mSignal) && (25 <= mSignal) ? 2 : ((25 >= mSignal) && (1 <= mSignal) ? 1 : 0))))
DynamicVariables=1

[mOS]
Measure=Plugin
Plugin=SysInfo
SysInfoType=OS_VERSION
IfMatch=Windows 10
IfMatchAction=[!SetOption Win10Settings Hidden 0 "Spectrum V3"]
IfNotMatchAction=[!SetOption Win10Settings Hidden 1 "Spectrum V3"]
UpdateDivider=-1

;=========================================================================================================================

;Time measures============================================================================================================

;=========================================================================================================================

[mTimeShort]
Measure=Time
Format=%H:%M

[mTimeHMS]
Measure=Time
Format=%H:%M:%S

[mTimeH]
Measure=Time
Format=%H

[mTimeM]
Measure=Time
Format=%M

[mTimeS]
Measure=Time
Format=%S

[mDay]
Measure=Time
Format=%A

[mDayShort]
Measure=Time
Format=%a

[mDate]
Measure=Time
Format=%d
Substitute="01":"1st","02":"2nd","03":"3rd","04":"4th","05":"5th","06":"6th","07":"7th","08":"8th","09":"9th","10":"10th","11":"11th","12":"12th","13":"13th","14":"14th","15":"15th","16":"16th","17":"17th","18":"18th","19":"19th","20":"20th","21":"21st","22":"22nd","23":"23rd","24":"24th","25":"25th","26":"26th","27":"27th","28":"28th","29":"29th","30":"30th","31":"31st","32":"wat"

[mDateShort]
Measure=Time
Format=%d

[mMonth]
Measure=Time
Format=%B

[mMonthShort]
Measure=Time
Format=%m

[mYear]
Measure=Time
Format=%Y

;=========================================================================================================================

;System measures==========================================================================================================

;=========================================================================================================================

[mCPUAvgUsage]
Measure=Plugin
Plugin=MSIAfterburner.dll
DataSource=CPU usage
MaxValue=100
MinValue=0

[mCPUAvgTemp]
Measure=Plugin
Plugin=MSIAfterburner.dll
DataSource=CPU temperature

[mGPUUsage]
Measure=Plugin
Plugin=MSIAfterburner.dll
DataSource=GPU usage
MaxValue=100
MinValue=0

[mGPUTemp]
Measure=Plugin
Plugin=MSIAfterburner.dll
DataSource=GPU temperature

[mRAMUsage]
Measure=PhysicalMemory

[mRAMTotal]
Measure=PhysicalMemory
Total=1
