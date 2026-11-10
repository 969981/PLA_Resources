/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03174e1c; name: FUN_03174e1c
 */


void FUN_03174e1c(uint *param_1,long param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  if (param_2 == 0) {
    *(undefined2 *)(param_1 + 1) = 0xffff;
    uVar8 = (ulong)(param_4 >> 0x16);
    uVar6 = (ulong)(param_4 & 0x3fffff);
    *param_1 = param_4;
  }
  else {
    uVar8 = (ulong)(param_4 >> 0x16);
    lVar10 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + uVar8 * 0xf0) + 0x20);
    iVar1 = *(int *)(lVar10 + 0x20);
    uVar6 = (ulong)(param_4 & 0x3fffff);
    if ((int)(param_4 & 0x3fffff) < iVar1) {
      *param_1 = param_4;
      *(undefined2 *)(param_1 + 1) = 0xffff;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x168);
      uVar9 = *(uint *)(lVar10 + uVar6 * 4);
      iVar2 = *(int *)(lVar10 + (long)(int)uVar9 * 4);
      sVar5 = (short)iVar1;
      sVar4 = sVar5 - (short)iVar2;
      if (iVar2 == -2) {
        sVar4 = 1;
      }
      *(short *)(param_1 + 1) = ((short)param_4 - sVar5) + sVar4;
      *param_1 = uVar9 | param_4 & 0xffc00000;
    }
  }
  lVar10 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + uVar8 * 0xf0) + 0x20);
  if ((int)uVar6 < *(int *)(lVar10 + 0x20)) {
    if (*(int *)(lVar10 + 0x98) != 0) {
      uVar9 = *(uint *)(*(long *)(lVar10 + 0x90) + uVar6 * 4);
      if (uVar9 == 0xffffffff) {
        puVar7 = (undefined4 *)(*(long *)(lVar10 + 0x18) + uVar6 * 0x10);
        goto LAB_03174e94;
      }
      uVar6 = (ulong)uVar9;
    }
    puVar7 = (undefined4 *)(*(long *)(lVar10 + 0xb0) + (long)(int)uVar6 * 0x10);
  }
  else {
    puVar7 = (undefined4 *)
             (*(long *)(lVar10 + 0xd0) + (long)((int)uVar6 - *(int *)(lVar10 + 0x20)) * 0x10);
  }
LAB_03174e94:
  lVar10 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + (ulong)(param_3 >> 0x16) * 0xf0) + 0x20);
  param_3 = param_3 & 0x3fffff;
  uVar9 = param_3 - *(int *)(lVar10 + 0x30);
  if ((int)param_3 < *(int *)(lVar10 + 0x30)) {
    if (*(int *)(lVar10 + 0x78) == 0) {
      uVar9 = param_3;
    }
    else {
      uVar9 = *(uint *)(*(long *)(lVar10 + 0x70) + (ulong)param_3 * 4);
      if (uVar9 == 0xffffffff) {
        bVar3 = *(byte *)(*(long *)(lVar10 + 0x28) + (ulong)param_3 * 0x14 + 0x10);
        goto joined_r0x03174f10;
      }
    }
    lVar10 = *(long *)(lVar10 + 0xc0);
  }
  else {
    lVar10 = *(long *)(lVar10 + 0xe0);
  }
  bVar3 = *(byte *)(lVar10 + (long)(int)uVar9 * 0x14 + 0x10);
joined_r0x03174f10:
  if ((bVar3 >> 4 & 1) == 0) {
    *(short *)(param_1 + 2) = (short)param_3 - (short)*puVar7;
    return;
  }
  *(short *)(param_1 + 2) = ((short)param_3 - (short)puVar7[1]) + *(short *)(puVar7 + 2);
  return;
}


