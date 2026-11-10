/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b5e7c; name: FUN_031b5e7c
 */


void FUN_031b5e7c(undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4,
                 undefined8 *param_5,long param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  uVar7 = *param_2;
  iVar5 = param_8;
  if (0xf < param_8) {
    iVar5 = 0x10;
  }
  uVar6 = (uint)param_4;
  *(uint *)(param_1 + 0x2e) = uVar6;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(int *)(param_1 + 2) = iVar5;
  param_1[0x44] = uVar7;
  uVar13 = param_5[1];
  uVar7 = *param_5;
  param_1[0x45] = param_6;
  param_1[0x46] = param_7;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  param_1[0x2d] = uVar13;
  param_1[0x2c] = uVar7;
  if (param_3 == 0) {
    return;
  }
  if (param_8 < 1) {
    bVar4 = 0;
  }
  else {
    bVar4 = 0;
    lVar8 = 0;
    do {
      uVar9 = *(uint *)(param_6 + lVar8 * 4);
      if (uVar9 == 0xffffffff) {
        uVar9 = 0xffffffff;
      }
      else {
        lVar10 = *(long *)(*(long *)(*(long *)(param_1[0x44] + 0x38) + (ulong)(uVar9 >> 0x16) * 0xf0
                                    ) + 0x20);
        uVar1 = uVar9 & 0x3fffff;
        uVar11 = uVar1 - *(int *)(lVar10 + 0x20);
        if ((int)uVar1 < *(int *)(lVar10 + 0x20)) {
          if (*(int *)(lVar10 + 0x98) == 0) {
            uVar11 = uVar1;
LAB_031b5fa0:
            lVar10 = *(long *)(lVar10 + 0xb0);
            goto LAB_031b5f80;
          }
          uVar11 = *(uint *)(*(long *)(lVar10 + 0x90) + (ulong)uVar1 * 4);
          if (uVar11 != 0xffffffff) goto LAB_031b5fa0;
          lVar10 = *(long *)(lVar10 + 0x18) + (ulong)uVar1 * 0x10;
        }
        else {
          lVar10 = *(long *)(lVar10 + 0xd0);
LAB_031b5f80:
          lVar10 = lVar10 + (long)(int)uVar11 * 0x10;
        }
        uVar9 = uVar9 & 0xffc00000 | (int)*(short *)(lVar10 + 0xc);
        if ((int)*(short *)(lVar10 + 0xc) == 0xffffffff) {
          uVar9 = 0xffffffff;
        }
      }
      *(uint *)((long)param_1 + lVar8 * 4 + 0x1c) = uVar9;
      lVar8 = lVar8 + 1;
      bVar4 = bVar4 | uVar9 != 0xffffffff;
      *(byte *)((long)param_1 + 0x14) = bVar4;
    } while (lVar8 < iVar5);
  }
  if (uVar6 != 0xffffffff) {
    uVar6 = uVar6 & 0x3fffff;
    lVar8 = *(long *)(*(long *)(*(long *)(param_1[0x44] + 0x38) + (param_4 >> 0x16 & 0x3ff) * 0xf0)
                     + 0x20);
    uVar9 = uVar6 - *(int *)(lVar8 + 0x20);
    if ((int)uVar6 < *(int *)(lVar8 + 0x20)) {
      if (*(int *)(lVar8 + 0x98) == 0) {
        uVar9 = uVar6;
LAB_031b60b0:
        lVar8 = *(long *)(lVar8 + 0xb0);
        goto LAB_031b6008;
      }
      uVar9 = *(uint *)(*(long *)(lVar8 + 0x90) + (ulong)uVar6 * 4);
      if (uVar9 != 0xffffffff) goto LAB_031b60b0;
      lVar8 = *(long *)(lVar8 + 0x18) + (ulong)uVar6 * 0x10;
    }
    else {
      lVar8 = *(long *)(lVar8 + 0xd0);
LAB_031b6008:
      lVar8 = lVar8 + (long)(int)uVar9 * 0x10;
    }
    sVar3 = *(short *)(lVar8 + 0xc);
    if ((long)sVar3 != 0xffffffffffffffff) {
      uVar6 = (uint)(param_4 & 0xffc00000) | (int)sVar3;
      *(uint *)(param_1 + 3) = uVar6;
      if ((bVar4 != 0) && (uVar6 != 0xffffffff)) {
        FUN_031b7424(param_1 + 0x30,param_3,(long)param_1 + 0x1c,iVar5,
                     param_4 & 0xffc00000 | (long)sVar3 & 0xffffffffU);
        iVar5 = *(int *)(param_1 + 2);
      }
      goto joined_r0x031b6068;
    }
  }
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
joined_r0x031b6068:
  if (0 < iVar5) {
    lVar8 = 0;
    puVar12 = param_1 + 0xc;
    do {
      iVar2 = *(int *)((long)param_1 + lVar8 * 4 + 0x1c);
      if (iVar2 != -1) {
        FUN_031b60b8(param_1,iVar2,puVar12);
        iVar5 = *(int *)(param_1 + 2);
      }
      lVar8 = lVar8 + 1;
      puVar12 = puVar12 + 2;
    } while (lVar8 < iVar5);
  }
  return;
}


