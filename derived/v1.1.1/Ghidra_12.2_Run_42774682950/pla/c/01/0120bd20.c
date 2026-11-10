/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120bd20; name: FUN_0120bd20
 */


void FUN_0120bd20(long *param_1)

{
  long lVar1;
  
  nn::os::GetSystemTick();
  lVar1 = nn::os::ConvertToTimeSpan();
  param_1[1] = lVar1 - *param_1;
  return;
}


