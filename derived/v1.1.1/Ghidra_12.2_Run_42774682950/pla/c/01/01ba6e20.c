/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba6e20; name: FUN_01ba6e20
 */


ulong FUN_01ba6e20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = FUN_01ba6d30();
  if (*(float *)(param_4 + 1) < *(float *)(param_3 + 1)) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_4[1];
    *param_3 = *param_4;
    param_3[1] = uVar3;
    *param_4 = uVar1;
    param_4[1] = uVar2;
    iVar4 = (int)uVar5;
    if (*(float *)(param_2 + 1) <= *(float *)(param_3 + 1)) {
      uVar5 = (ulong)(iVar4 + 1);
    }
    else {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = uVar3;
      *param_3 = uVar1;
      param_3[1] = uVar2;
      if (*(float *)(param_1 + 1) <= *(float *)(param_2 + 1)) {
        uVar5 = (ulong)(iVar4 + 2);
      }
      else {
        uVar1 = *param_1;
        uVar2 = param_1[1];
        uVar5 = (ulong)(iVar4 + 3);
        uVar3 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = uVar3;
        *param_2 = uVar1;
        param_2[1] = uVar2;
      }
    }
  }
  return uVar5;
}


