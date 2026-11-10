/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03329ab8; name: FUN_03329ab8
 */


void FUN_03329ab8(undefined8 *param_1,undefined1 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  int local_34;
  
  *param_1 = &PTR_LAB_04350858;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar2 = *(int *)(param_2 + 4);
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  local_34 = iVar2;
  if (iVar2 < 1) {
    lVar3 = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  }
  else {
    lVar3 = FUN_032cf190(&DAT_0444b540,0x80,&local_34);
    param_1[4] = lVar3;
    *(int *)(param_1 + 5) = iVar2;
    *(int *)((long)param_1 + 0x2c) = local_34;
  }
  if (iVar2 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = 0;
    FUN_0332cf84(lVar3 + 0x28);
    FUN_0332b928(lVar3 + 0x50,0,1000,0);
    if (iVar2 != 1) {
      lVar7 = (long)iVar2 * 0x80 + -0x80;
      lVar3 = lVar3 + 0xd0;
      do {
        *(undefined8 *)(lVar3 + -0x40) = 0;
        FUN_0332cf84(lVar3 + -0x28);
        FUN_0332b928(lVar3,0,1000,0);
        lVar7 = lVar7 + -0x80;
        lVar3 = lVar3 + 0x80;
      } while (lVar7 != 0);
    }
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x38);
  uVar4 = nn::os::GetSystemTickFrequency();
  param_1[7] = uVar4;
  if (0 < *(int *)(param_2 + 4)) {
    puVar5 = (undefined8 *)param_1[4];
    *puVar5 = param_1;
    *(undefined4 *)(puVar5 + 1) = 0;
    if (*(int *)(param_2 + 0x10) < 1) {
      uVar6 = 0;
      *(undefined1 *)((long)puVar5 + 0x1c) = 1;
    }
    else {
      *(undefined1 *)((long)puVar5 + 0x1c) = *param_2;
      uVar6 = **(undefined4 **)(param_2 + 8);
    }
    *(undefined4 *)(puVar5 + 3) = uVar6;
    *(undefined1 *)((long)puVar5 + 0x1d) = **(undefined1 **)(param_2 + 0x28);
    if (1 < *(int *)(param_2 + 4)) {
      lVar3 = 0;
      lVar7 = 1;
      do {
        lVar1 = param_1[4] + lVar3;
        *(undefined8 **)(lVar1 + 0x80) = param_1;
        uVar6 = (undefined4)lVar7;
        *(undefined4 *)(lVar1 + 0x88) = uVar6;
        if (*(int *)(param_2 + 0x10) < 1) {
          *(undefined1 *)(lVar1 + 0x9c) = 1;
        }
        else {
          *(undefined1 *)(lVar1 + 0x9c) = *param_2;
          uVar6 = *(undefined4 *)(*(long *)(param_2 + 8) + lVar7 * 4);
        }
        *(undefined4 *)(lVar1 + 0x98) = uVar6;
        lVar3 = lVar3 + 0x80;
        *(undefined1 *)(lVar1 + 0x9d) = *(undefined1 *)(*(long *)(param_2 + 0x28) + lVar7);
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_2 + 4));
    }
  }
  return;
}


