/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00155050; name: FUN_00155050
 */


void FUN_00155050(long param_1,long *param_2,undefined8 param_3)

{
  param_2[2] = 0;
  param_2[3] = param_1;
  *param_2 = (long)(param_2 + 4);
  param_2[1] = 0x2000;
  FUN_00154c30(param_2,param_3);
  return;
}


