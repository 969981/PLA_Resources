/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013df980; name: FUN_013df980
 */


undefined8
FUN_013df980(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_013df8fc(param_4,*param_2,*(undefined4 *)(param_2 + 1),*param_1,
                       *(undefined4 *)(param_1 + 1));
  uVar3 = FUN_013df8fc(param_4,*param_3,*(undefined4 *)(param_3 + 1),*param_2,
                       *(undefined4 *)(param_2 + 1));
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar4 = *param_2;
    uVar1 = *(undefined4 *)(param_2 + 1);
    uVar5 = *param_3;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
    *param_2 = uVar5;
    *(undefined4 *)(param_3 + 1) = uVar1;
    *param_3 = uVar4;
    uVar2 = FUN_013df8fc(param_4,*param_2,*(undefined4 *)(param_2 + 1),*param_1,
                         *(undefined4 *)(param_1 + 1));
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    uVar4 = *param_1;
    uVar1 = *(undefined4 *)(param_1 + 1);
    uVar5 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *param_1 = uVar5;
    *(undefined4 *)(param_2 + 1) = uVar1;
    *param_2 = uVar4;
  }
  else {
    if ((uVar3 & 1) != 0) {
      uVar4 = *param_1;
      uVar1 = *(undefined4 *)(param_1 + 1);
      uVar5 = *param_3;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
      *param_1 = uVar5;
      *(undefined4 *)(param_3 + 1) = uVar1;
      *param_3 = uVar4;
      return 1;
    }
    uVar4 = *param_1;
    uVar1 = *(undefined4 *)(param_1 + 1);
    uVar5 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *param_1 = uVar5;
    *(undefined4 *)(param_2 + 1) = uVar1;
    *param_2 = uVar4;
    uVar2 = FUN_013df8fc(param_4,*param_3,*(undefined4 *)(param_3 + 1),uVar4,uVar1);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    uVar4 = *param_2;
    uVar1 = *(undefined4 *)(param_2 + 1);
    uVar5 = *param_3;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
    *param_2 = uVar5;
    *(undefined4 *)(param_3 + 1) = uVar1;
    *param_3 = uVar4;
  }
  return 2;
}


