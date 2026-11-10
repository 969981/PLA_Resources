/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea4c7c; name: FUN_02ea4c7c
 */


void FUN_02ea4c7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_042a8c10;
  param_1[3] = &PTR_LAB_042a8e70;
  param_1[6] = &PTR_FUN_042a8f08;
  if ((undefined8 *)param_1[0x17] != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (param_1 + 0x16 != (undefined8 *)param_1[0x17]) {
      (*DAT_0442d158)(0);
    }
    param_1[0x17] = 0;
    *(undefined4 *)((long)param_1 + 0xc4) = 0;
  }
  FUN_02ed41a8(param_1);
  return;
}


