/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7c070; name: FUN_02e7c070
 */


void FUN_02e7c070(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_042a71e8;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_4 + 0x14);
  param_1[4] = param_4[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_4 + 2);
  piVar2 = (int *)*param_4;
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
    param_2 = param_1[2];
  }
  param_1[3] = piVar2;
  uVar3 = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[6] = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined4 *)((long)param_1 + 0x3c) = param_5;
  *(undefined4 *)((long)param_1 + 0x4c) = 1;
  *(undefined1 *)(param_1 + 10) = 0;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  }
  return;
}


