/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275d1c0; name: FUN_0275d1c0
 */


undefined8 FUN_0275d1c0(PosixTime *param_1)

{
  CalendarAdditionalInfo aCStack_30 [24];
  undefined8 local_18;
  
  nn::time::ToCalendarTime((CalendarTime *)&local_18,aCStack_30,param_1);
  return local_18;
}


