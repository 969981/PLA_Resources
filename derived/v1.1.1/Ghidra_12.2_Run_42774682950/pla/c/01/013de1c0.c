/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013de1c0; name: FUN_013de1c0
 */


int FUN_013de1c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_013de070();
  uVar3 = FUN_013dde4c(param_6,*param_5,*(undefined4 *)(param_5 + 1),*param_4,
                       *(undefined4 *)(param_4 + 1));
  if ((uVar3 & 1) != 0) {
    uVar4 = *param_4;
    uVar1 = *(undefined4 *)(param_4 + 1);
    uVar5 = *param_5;
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_5 + 1);
    *param_4 = uVar5;
    *(undefined4 *)(param_5 + 1) = uVar1;
    *param_5 = uVar4;
    uVar3 = FUN_013dde4c(param_6,*param_4,*(undefined4 *)(param_4 + 1),*param_3,
                         *(undefined4 *)(param_3 + 1));
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar2 + 1;
    }
    else {
      uVar4 = *param_3;
      uVar1 = *(undefined4 *)(param_3 + 1);
      uVar5 = *param_4;
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
      *param_3 = uVar5;
      *(undefined4 *)(param_4 + 1) = uVar1;
      *param_4 = uVar4;
      uVar3 = FUN_013dde4c(param_6,*param_3,*(undefined4 *)(param_3 + 1),*param_2,
                           *(undefined4 *)(param_2 + 1));
      if ((uVar3 & 1) == 0) {
        iVar2 = iVar2 + 2;
      }
      else {
        uVar4 = *param_2;
        uVar1 = *(undefined4 *)(param_2 + 1);
        uVar5 = *param_3;
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
        *param_2 = uVar5;
        *(undefined4 *)(param_3 + 1) = uVar1;
        *param_3 = uVar4;
        uVar3 = FUN_013dde4c(param_6,*param_2,*(undefined4 *)(param_2 + 1),*param_1,
                             *(undefined4 *)(param_1 + 1));
        if ((uVar3 & 1) == 0) {
          iVar2 = iVar2 + 3;
        }
        else {
          uVar4 = *param_1;
          iVar2 = iVar2 + 4;
          uVar1 = *(undefined4 *)(param_1 + 1);
          uVar5 = *param_2;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
          *param_1 = uVar5;
          *(undefined4 *)(param_2 + 1) = uVar1;
          *param_2 = uVar4;
        }
      }
    }
  }
  return iVar2;
}


