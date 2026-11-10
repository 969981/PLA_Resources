/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282c3c4; name: FUN_0282c3c4
 */


void FUN_0282c3c4(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (4 < *(uint *)(param_1 + 0x100)) {
    return;
  }
  if (*(uint *)(param_1 + 0x10) == param_2) {
    lVar4 = 0;
LAB_0282c3f0:
    param_1 = param_1 + lVar4 * 0x30;
    *(undefined8 *)(param_1 + 0x28) = param_3[1];
    *(undefined8 *)(param_1 + 0x20) = *param_3;
    *(undefined8 *)(param_1 + 0x38) = param_4[1];
    *(undefined8 *)(param_1 + 0x30) = *param_4;
    return;
  }
  if (param_2 < *(uint *)(param_1 + 0x10)) {
    iVar3 = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x40) == param_2) {
      lVar4 = 1;
      goto LAB_0282c3f0;
    }
    if (param_2 < *(uint *)(param_1 + 0x40)) {
      iVar3 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x70) == param_2) {
        lVar4 = 2;
        goto LAB_0282c3f0;
      }
      if (param_2 < *(uint *)(param_1 + 0x70)) {
        iVar3 = 2;
      }
      else {
        if (*(uint *)(param_1 + 0xa0) == param_2) {
          lVar4 = 3;
          goto LAB_0282c3f0;
        }
        if (param_2 < *(uint *)(param_1 + 0xa0)) {
          iVar3 = 3;
        }
        else {
          if (*(uint *)(param_1 + 0xd0) == param_2) {
            lVar4 = 4;
            goto LAB_0282c3f0;
          }
          if (*(uint *)(param_1 + 0xd0) <= param_2) {
            return;
          }
          iVar3 = 4;
        }
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x100) + -1;
  iVar2 = *(int *)(param_1 + 0x100);
  while (iVar3 <= iVar1) {
    if (iVar2 < 5) {
      puVar6 = (undefined8 *)(param_1 + 0x10 + (long)(iVar2 + -1) * 0x30);
      puVar5 = (undefined8 *)(param_1 + 0x10 + (long)iVar2 * 0x30);
      uVar9 = puVar6[3];
      puVar5[5] = puVar6[5];
      puVar5[1] = puVar6[1];
      *puVar5 = *puVar6;
      uVar8 = puVar6[2];
      uVar7 = puVar6[4];
      puVar5[3] = uVar9;
      puVar5[4] = uVar7;
      puVar5[2] = uVar8;
    }
    iVar1 = iVar2 + -2;
    iVar2 = iVar2 + -1;
  }
  lVar4 = param_1 + (long)iVar3 * 0x30;
  *(uint *)(lVar4 + 0x10) = param_2;
  *(undefined8 *)(lVar4 + 0x28) = param_3[1];
  *(undefined8 *)(lVar4 + 0x20) = *param_3;
  *(undefined8 *)(lVar4 + 0x38) = param_4[1];
  *(undefined8 *)(lVar4 + 0x30) = *param_4;
  if (*(uint *)(param_1 + 0x100) < 5) {
    *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) + 1;
  }
  return;
}


