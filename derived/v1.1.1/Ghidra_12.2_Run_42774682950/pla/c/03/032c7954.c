/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c7954; name: FUN_032c7954
 */


void FUN_032c7954(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                 int param_5)

{
  undefined8 uVar1;
  
  if (param_5 == 2) {
    uVar1 = *param_2;
  }
  else {
    if (param_5 != 1) {
      *param_1 = *param_2;
      param_1[1] = param_3;
      param_3 = param_3 + 1;
      goto LAB_032c7978;
    }
    uVar1 = *param_2;
    param_3 = param_3 + 1;
  }
  *param_1 = uVar1;
  param_1[1] = param_3;
LAB_032c7978:
  uVar1 = param_2[1];
  param_1[2] = param_3;
  param_1[3] = uVar1;
  return;
}


