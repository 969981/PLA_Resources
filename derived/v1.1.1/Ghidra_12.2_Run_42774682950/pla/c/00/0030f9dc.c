/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030f9dc; name: FUN_0030f9dc
 */


undefined8 FUN_0030f9dc(long *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    *param_1 = *param_1 + (long)param_3;
    return 0;
  }
  param_2 = param_2 - param_3;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_1[6];
  if ((int)param_1[5] <= (int)param_1[6]) {
    iVar1 = (int)param_1[5];
  }
  iVar2 = iVar1 - (int)param_1[3];
  if (iVar2 < param_2) {
    if (iVar2 < 1) {
      return 0;
    }
    *(int *)(param_1 + 3) = iVar1;
    (**(code **)(*(long *)param_1[2] + 0x20))();
    return 0;
  }
  uVar4 = (**(code **)(*(long *)param_1[2] + 0x20))((long *)param_1[2],param_2);
  if ((uVar4 & 1) == 0) {
    uVar3 = (**(code **)(*(long *)param_1[2] + 0x28))();
    *(undefined4 *)(param_1 + 3) = uVar3;
    return 0;
  }
  *(int *)(param_1 + 3) = (int)param_1[3] + param_2;
  return 1;
}


