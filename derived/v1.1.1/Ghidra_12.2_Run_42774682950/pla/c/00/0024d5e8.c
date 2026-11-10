/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024d5e8; name: FUN_0024d5e8
 */


void FUN_0024d5e8(long *param_1,float *param_2)

{
  byte bVar1;
  float local_28;
  float local_24;
  
  (**(code **)(*param_1 + 0x60))(param_1,&local_28);
  if ((*(byte *)((long)param_1 + 0x5b) & 3) == 2) {
    *param_2 = -local_28;
    bVar1 = *(byte *)((long)param_1 + 0x5b);
  }
  else if ((*(byte *)((long)param_1 + 0x5b) & 3) == 0) {
    *param_2 = local_28 * -0.5;
    bVar1 = *(byte *)((long)param_1 + 0x5b);
  }
  else {
    *param_2 = 0.0;
    bVar1 = *(byte *)((long)param_1 + 0x5b);
  }
  if ((bVar1 >> 2 & 3) == 0) {
    param_2[1] = local_24 * 0.5;
    return;
  }
  if ((bVar1 >> 2 & 3) == 2) {
    param_2[1] = local_24;
    return;
  }
  param_2[1] = 0.0;
  return;
}


