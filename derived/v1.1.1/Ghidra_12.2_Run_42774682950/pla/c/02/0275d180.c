/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275d180; name: FUN_0275d180
 */


void FUN_0275d180(undefined1 *param_1)

{
  int iVar1;
  undefined8 local_18;
  
  iVar1 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_18);
  *param_1 = 0;
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 8) = local_18;
    *param_1 = 1;
  }
  return;
}


