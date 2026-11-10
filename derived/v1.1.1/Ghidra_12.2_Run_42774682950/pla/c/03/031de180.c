/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031de180; name: FUN_031de180
 */


void FUN_031de180(long param_1,long param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  uint *puVar17;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar7 = *(long *)(param_2 + 0x20);
    lVar5 = lVar7;
  }
  else {
    lVar5 = FUN_02898b44();
    lVar7 = *(long *)(param_2 + 0x20);
  }
  lVar14 = (long)*param_4;
  lVar15 = *(long *)(lVar5 + 0xe0);
  uVar1 = *(int *)(lVar7 + 0x30) + *param_3;
  pbVar16 = (byte *)(lVar15 + lVar14 * 0x14 + 0x10);
  DataMemoryBarrier(2,3);
  if ((*pbVar16 >> 6 & 1) == 0) {
    iVar6 = *param_3;
    iVar3 = *param_4;
    if (iVar6 != iVar3) {
      puVar13 = (undefined4 *)(*(long *)(lVar5 + 0xe0) + (long)iVar3 * 0x14);
      puVar11 = (undefined4 *)(*(long *)(lVar5 + 0xe0) + (long)iVar6 * 0x14);
      *puVar11 = *puVar13;
      puVar11[1] = puVar13[1];
      uVar12 = *(undefined8 *)(puVar13 + 2);
      *(undefined2 *)(puVar11 + 4) = *(undefined2 *)(puVar13 + 4);
      *(undefined8 *)(puVar11 + 2) = uVar12;
      *(undefined2 *)((long)puVar11 + 0x12) = *(undefined2 *)((long)puVar13 + 0x12);
      *(undefined2 *)(*(long *)(lVar5 + 0x110) + (long)iVar6 * 2) =
           *(undefined2 *)(*(long *)(lVar5 + 0x110) + (long)iVar3 * 2);
      iVar4 = *(int *)(lVar5 + 0x60);
      memcpy((void *)(*(long *)(lVar5 + 0x150) + (long)(iVar4 * iVar6) * 4),
             (void *)(*(long *)(lVar5 + 0x150) + (long)(iVar4 * iVar3) * 4),(long)iVar4 << 2);
      iVar6 = *param_3;
    }
    lVar7 = *(long *)(lVar5 + 0xe0);
    uVar2 = *(uint *)(lVar7 + (long)iVar6 * 0x14 + 8);
    if (uVar2 != 0xffffffff) {
      uVar8 = (ulong)uVar2 & 0x3fffff;
      iVar6 = (int)uVar8 - *(int *)(lVar5 + 0x30);
      if ((int)uVar8 < *(int *)(lVar5 + 0x30)) {
        if (*(int *)(lVar5 + 0x78) != 0) {
          uVar8 = (ulong)*(uint *)(*(long *)(lVar5 + 0x70) + uVar8 * 4);
        }
        iVar6 = (int)uVar8;
        lVar7 = *(long *)(lVar5 + 0xc0);
      }
      *(uint *)(lVar7 + (long)iVar6 * 0x14 + 8) = uVar1;
      *(undefined4 *)(lVar15 + lVar14 * 0x14 + 0xc) = 0xffffffff;
    }
    *pbVar16 = 0x80;
    lVar15 = lVar15 + lVar14 * 0x14;
    *(uint *)(lVar15 + 8) = uVar1;
  }
  else {
    puVar17 = (uint *)(lVar15 + lVar14 * 0x14 + 8);
    DataMemoryBarrier(2,3);
    if (*puVar17 == 0xffffffff) {
      FUN_0319132c(lVar5);
      iVar6 = *param_3;
      iVar3 = *param_4;
      if (iVar6 != iVar3) {
        puVar13 = (undefined4 *)(*(long *)(lVar5 + 0xe0) + (long)iVar3 * 0x14);
        puVar11 = (undefined4 *)(*(long *)(lVar5 + 0xe0) + (long)iVar6 * 0x14);
        *puVar11 = *puVar13;
        puVar11[1] = puVar13[1];
        uVar12 = *(undefined8 *)(puVar13 + 2);
        *(undefined2 *)(puVar11 + 4) = *(undefined2 *)(puVar13 + 4);
        *(undefined8 *)(puVar11 + 2) = uVar12;
        *(undefined2 *)((long)puVar11 + 0x12) = *(undefined2 *)((long)puVar13 + 0x12);
        *(undefined2 *)(*(long *)(lVar5 + 0x110) + (long)iVar6 * 2) =
             *(undefined2 *)(*(long *)(lVar5 + 0x110) + (long)iVar3 * 2);
        iVar4 = *(int *)(lVar5 + 0x60);
        memcpy((void *)(*(long *)(lVar5 + 0x150) + (long)(iVar4 * iVar6) * 4),
               (void *)(*(long *)(lVar5 + 0x150) + (long)(iVar4 * iVar3) * 4),(long)iVar4 << 2);
      }
      *pbVar16 = 0x80;
      *puVar17 = uVar1;
      *(undefined4 *)(lVar15 + lVar14 * 0x14 + 0xc) = 0xffffffff;
      FUN_03191334(lVar5);
      return;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(*puVar17 >> 0x16) * 0xf0);
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else if (*(char *)(lVar7 + 0x30) == '\x01') {
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    else {
      lVar7 = FUN_02898b44();
    }
    FUN_0319133c(lVar5,lVar7);
    iVar6 = *param_3;
    iVar3 = *param_4;
    if (iVar6 != iVar3) {
      puVar13 = (undefined4 *)(*(long *)(lVar5 + 0xe0) + (long)iVar3 * 0x14);
      puVar11 = (undefined4 *)(*(long *)(lVar5 + 0xe0) + (long)iVar6 * 0x14);
      *puVar11 = *puVar13;
      puVar11[1] = puVar13[1];
      uVar12 = *(undefined8 *)(puVar13 + 2);
      *(undefined2 *)(puVar11 + 4) = *(undefined2 *)(puVar13 + 4);
      *(undefined8 *)(puVar11 + 2) = uVar12;
      *(undefined2 *)((long)puVar11 + 0x12) = *(undefined2 *)((long)puVar13 + 0x12);
      *(undefined2 *)(*(long *)(lVar5 + 0x110) + (long)iVar6 * 2) =
           *(undefined2 *)(*(long *)(lVar5 + 0x110) + (long)iVar3 * 2);
      iVar4 = *(int *)(lVar5 + 0x60);
      memcpy((void *)(*(long *)(lVar5 + 0x150) + (long)(iVar4 * iVar6) * 4),
             (void *)(*(long *)(lVar5 + 0x150) + (long)(iVar4 * iVar3) * 4),(long)iVar4 << 2);
    }
    if (*puVar17 != 0xffffffff) {
      uVar8 = (ulong)*puVar17 & 0x3fffff;
      iVar6 = (int)uVar8 - *(int *)(lVar7 + 0x30);
      if ((int)uVar8 < *(int *)(lVar7 + 0x30)) {
        if (*(int *)(lVar7 + 0x78) != 0) {
          uVar8 = (ulong)*(uint *)(*(long *)(lVar7 + 0x70) + uVar8 * 4);
        }
        iVar6 = (int)uVar8;
        plVar10 = (long *)(lVar7 + 0xc0);
      }
      else {
        plVar10 = (long *)(lVar7 + 0xe0);
      }
      lVar9 = *plVar10 + (long)iVar6 * 0x14;
      *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) & 0xffc00000 | uVar1;
    }
    FUN_0319136c(lVar5,lVar7);
    *pbVar16 = 0x80;
    *puVar17 = uVar1;
    lVar15 = lVar15 + lVar14 * 0x14;
  }
  *(undefined4 *)(lVar15 + 0xc) = 0xffffffff;
  return;
}


