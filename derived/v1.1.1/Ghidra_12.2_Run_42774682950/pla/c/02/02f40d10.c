/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f40d10; name: FUN_02f40d10
 */


void FUN_02f40d10(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_042adf38;
  param_1[-0x60] = &PTR_FUN_042aa198;
  param_1[-0x5e] = &PTR_LAB_042aa270;
  param_1[-0x5d] = &PTR_LAB_042aa288;
  if ((undefined8 *)param_1[-3] != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + -2) = 0;
    if (param_1 + -4 != (undefined8 *)param_1[-3]) {
      (*DAT_0442d158)(0);
    }
    param_1[-3] = 0;
    *(undefined4 *)((long)param_1 + -0xc) = 0;
  }
  if (*(long *)((long)param_1 + -0x104) != 0) {
    FUN_02e771a8();
  }
  FUN_02e9bb28(param_1 + -0x5d);
  return;
}


