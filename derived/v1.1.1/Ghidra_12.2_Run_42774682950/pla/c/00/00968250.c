/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00968250; name: FUN_00968250
 */


ulong FUN_00968250(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = FUN_009680f0();
  if (*(uint *)(param_4 + 1) < *(uint *)(param_3 + 1)) {
    uVar4 = *param_3;
    uVar1 = *(undefined4 *)(param_3 + 1);
    uVar5 = *param_4;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
    *param_3 = uVar5;
    *(undefined4 *)(param_4 + 1) = uVar1;
    *param_4 = uVar4;
    iVar2 = (int)uVar3;
    if (*(uint *)(param_3 + 1) < *(uint *)(param_2 + 1)) {
      uVar4 = *param_2;
      uVar1 = *(undefined4 *)(param_2 + 1);
      uVar5 = *param_3;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
      *param_2 = uVar5;
      *(undefined4 *)(param_3 + 1) = uVar1;
      *param_3 = uVar4;
      if (*(uint *)(param_2 + 1) < *(uint *)(param_1 + 1)) {
        uVar4 = *param_1;
        uVar3 = (ulong)(iVar2 + 3);
        uVar1 = *(undefined4 *)(param_1 + 1);
        uVar5 = *param_2;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
        *param_1 = uVar5;
        *(undefined4 *)(param_2 + 1) = uVar1;
        *param_2 = uVar4;
      }
      else {
        uVar3 = (ulong)(iVar2 + 2);
      }
    }
    else {
      uVar3 = (ulong)(iVar2 + 1);
    }
  }
  return uVar3;
}


