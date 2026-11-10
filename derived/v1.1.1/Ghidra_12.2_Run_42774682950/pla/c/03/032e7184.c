/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e7184; name: FUN_032e7184
 */


undefined4 FUN_032e7184(undefined8 *param_1,char *param_2,char *param_3)

{
  undefined4 uVar1;
  undefined8 local_c8 [19];
  char *local_30;
  char *pcStack_28;
  
  uVar1 = 0x80040200;
  if ((((param_2 != param_3) && (*param_2 == '\"')) && (local_30 = param_2 + 1, local_30 != param_3)
      ) && (pcStack_28 = param_3 + -1, *pcStack_28 == '\"')) {
    FUN_032c4e24(local_c8,&local_30);
    uVar1 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                      ((long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1],local_c8[0]);
    FUN_032c4ce8(local_c8);
  }
  return uVar1;
}


