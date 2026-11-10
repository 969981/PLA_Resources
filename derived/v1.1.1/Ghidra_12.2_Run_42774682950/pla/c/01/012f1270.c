/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f1270; name: FUN_012f1270
 */


void FUN_012f1270(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  FUN_00d40044(param_1,param_2,param_3 & 1);
  *param_1 = &PTR_LAB_04203328;
  param_1[9] = &PTR_LAB_04203430;
  param_1[10] = &PTR_LAB_04203478;
  FUN_012f12d8(param_1 + 0xae);
  *(undefined2 *)(param_1 + 0xe4) = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  if ((param_3 & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0x721) = 1;
  }
  return;
}


