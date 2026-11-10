/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bd4a14; name: FUN_02bd4a14
 */


void FUN_02bd4a14(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_40 = (double)(float)*param_3;
  dStack_38 = (double)(float)((ulong)*param_3 >> 0x20);
  dStack_28 = (double)(float)((ulong)param_3[1] >> 0x20);
  local_30 = (double)(float)param_3[1];
  (**(code **)(*param_1 + 0x90))(param_1,param_2,&local_40);
  return;
}


