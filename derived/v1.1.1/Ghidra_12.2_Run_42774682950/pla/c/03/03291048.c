/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03291048; name: FUN_03291048
 */


void FUN_03291048(float *param_1,undefined8 *param_2)

{
  undefined8 local_18;
  
  local_18 = CONCAT44((float)((ulong)*param_2 >> 0x20) * *param_1,(float)*param_2 * *param_1);
  FUN_0328fa28(param_1,&local_18);
  return;
}


