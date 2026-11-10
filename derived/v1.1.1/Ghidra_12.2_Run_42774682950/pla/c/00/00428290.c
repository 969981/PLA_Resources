/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00428290; name: FUN_00428290
 */


bool FUN_00428290(undefined8 *param_1)

{
  int iVar1;
  undefined8 local_18;
  
  iVar1 = nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_18);
  if (iVar1 != 0) {
    local_18 = 0;
  }
  *param_1 = local_18;
  return iVar1 != 0;
}


