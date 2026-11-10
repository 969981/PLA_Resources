/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0114e70c; name: FUN_0114e70c
 */


void FUN_0114e70c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int param3;
  ulong uVar1;
  long *local_40 [2];
  long *local_28;
  
  uVar1 = FUN_0114e8dc();
  if ((uVar1 & 1) == 0) {
    param3 = FUN_02a8f1c8(param_2);
    if (param3 == -1) {
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = 0;
      param_1[1] = &DAT_cbf29ce484222645;
      param_1[2] = &DAT_03996322;
      param_1[3] = 0;
      return;
    }
    snprintf((char *)local_40,0xf,s_save_d___0427f796,param3);
    FUN_0114e998(&local_28,local_40,param_3);
    FUN_02a8ea98(param_1,&local_28,3);
    local_40[0] = local_28;
  }
  else {
    FUN_0114e93c(local_40,param_3);
    FUN_02a8ea98(param_1,local_40,3);
  }
  if (local_40[0] != (long *)0x0) {
    (**(code **)(*local_40[0] + 0x20))();
  }
  return;
}


