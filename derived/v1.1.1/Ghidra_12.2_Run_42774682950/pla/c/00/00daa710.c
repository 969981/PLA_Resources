/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00daa710; name: FUN_00daa710
 */


void FUN_00daa710(CalendarAdditionalInfo *param_1)

{
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0;
  nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_18);
  local_28 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  nn::time::ToCalendarTime((CalendarTime *)&local_28,param_1,(PosixTime *)&local_18);
  return;
}


