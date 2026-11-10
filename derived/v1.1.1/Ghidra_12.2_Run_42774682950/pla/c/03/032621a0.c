/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032621a0; name: FUN_032621a0
 */


void FUN_032621a0(long param_1,long *param_2,ulong param_3,long *param_4)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  uint uVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  uint *puVar16;
  bool bVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  
  lVar13 = param_2[1];
  uVar7 = *(uint *)*param_2;
  uVar12 = (int)lVar13 - 1;
  uVar10 = ((uint *)*param_2)[(int)uVar12];
  uVar11 = *(undefined2 *)(*param_4 + (long)(int)uVar12 * 2);
  bVar1 = uVar7 > uVar10;
  lVar5 = param_1 + 0x10c;
  uVar8 = *(uint *)(param_1 + 0x108);
  iVar3 = uVar8 + 1;
  uVar22 = *(uint *)(param_1 + 0x10c) & 0x3fffffff;
  if (uVar7 <= uVar10) {
    if ((int)uVar22 <= (int)uVar8) {
      uVar15 = FUN_032635e4(PTR_PTR_0434a080,iVar3,*(undefined8 *)(param_1 + 0x100),uVar8,lVar5);
      *(undefined8 *)(param_1 + 0x100) = uVar15;
    }
    uVar19 = (ulong)uVar8 & 0xffff;
    iVar4 = (int)uVar19 + 1;
    *(int *)(param_1 + 0x108) = iVar3;
    FUN_032633cc(param_1 + 0xe8,iVar4);
    FUN_032634d8(param_1 + 0xd0,iVar4);
    puVar16 = (uint *)(*(long *)(param_1 + 0x100) + uVar19 * 0x20);
    *puVar16 = uVar7;
    puVar16[1] = uVar10;
  }
  else {
    if ((int)uVar22 <= (int)uVar8) {
      uVar15 = FUN_032635e4(PTR_PTR_0434a080,iVar3,*(undefined8 *)(param_1 + 0x100),uVar8,lVar5);
      *(undefined8 *)(param_1 + 0x100) = uVar15;
    }
    uVar19 = (ulong)uVar8 & 0xffff;
    iVar4 = (int)uVar19 + 1;
    *(int *)(param_1 + 0x108) = iVar3;
    FUN_032633cc(param_1 + 0xe8,iVar4);
    FUN_032634d8(param_1 + 0xd0,iVar4);
    puVar16 = (uint *)(*(long *)(param_1 + 0x100) + uVar19 * 0x20);
    *puVar16 = uVar10;
    puVar16[1] = uVar7;
  }
  *(undefined2 *)((long)puVar16 + 0x12) = 0xffff;
  *(undefined2 *)(puVar16 + 2) = uVar11;
  *(undefined4 *)((long)puVar16 + 10) = 0xffff0000;
  uVar22 = *(int *)(param_1 + 0xe0) >> 5;
  pvVar2 = (void *)(*(long *)(param_1 + 0xd0) + (long)(int)((uVar22 + 1) * (uVar8 & 0xffff)) * 4);
  if (uVar22 != 0xffffffff) {
    memset(pvVar2,0,(-(ulong)(uVar22 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar22 << 2) + 4);
  }
  uVar19 = param_3 >> 5 & 0x7ffffff;
  iVar3 = 1 << (ulong)((uint)param_3 & 0x1f);
  *(int *)((long)pvVar2 + uVar19 * 4) = iVar3;
  puVar14 = PTR_PTR_0434a080;
  if ((int)lVar13 < 2) {
    uVar20 = (ulong)uVar8;
    uVar22 = uVar7;
  }
  else {
    uVar18 = 0;
    uVar25 = (ulong)uVar8;
    uVar21 = uVar7;
    bVar17 = bVar1;
    do {
      uVar22 = *(uint *)(*param_2 + uVar18 * 4 + 4);
      uVar9 = *(uint *)(param_1 + 0x108);
      uVar20 = (ulong)uVar9;
      uVar11 = *(undefined2 *)(*param_4 + uVar18 * 2);
      bVar1 = uVar22 > uVar21;
      iVar4 = uVar9 + 1;
      uVar6 = *(uint *)(param_1 + 0x10c) & 0x3fffffff;
      if (uVar22 <= uVar21) {
        if ((int)uVar6 <= (int)uVar9) {
          uVar15 = FUN_032635e4(puVar14,iVar4,*(undefined8 *)(param_1 + 0x100),uVar20,lVar5);
          *(undefined8 *)(param_1 + 0x100) = uVar15;
        }
        uVar24 = uVar20 & 0xffff;
        *(int *)(param_1 + 0x108) = iVar4;
        iVar4 = (int)uVar24 + 1;
        FUN_032633cc(param_1 + 0xe8,iVar4);
        FUN_032634d8(param_1 + 0xd0,iVar4);
        puVar16 = (uint *)(*(long *)(param_1 + 0x100) + uVar24 * 0x20);
        *(undefined2 *)((long)puVar16 + 0x12) = 0xffff;
        *puVar16 = uVar22;
        puVar16[1] = uVar21;
        *(undefined2 *)(puVar16 + 2) = uVar11;
        *(undefined4 *)((long)puVar16 + 10) = 0xffff0000;
        uVar21 = *(int *)(param_1 + 0xe0) >> 5;
        pvVar2 = (void *)(*(long *)(param_1 + 0xd0) + (long)(int)((uVar21 + 1) * (int)uVar24) * 4);
        if (uVar21 != 0xffffffff) {
          memset(pvVar2,0,(-(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar21 << 2) + 4);
        }
        *(int *)((long)pvVar2 + uVar19 * 4) = iVar3;
        if (!bVar17) {
          *(short *)(*(long *)(param_1 + 0x100) + uVar24 * 0x20 + 0xc) = (short)uVar25;
        }
      }
      else {
        if ((int)uVar6 <= (int)uVar9) {
          uVar15 = FUN_032635e4(puVar14,iVar4,*(undefined8 *)(param_1 + 0x100),uVar20,lVar5);
          *(undefined8 *)(param_1 + 0x100) = uVar15;
        }
        *(int *)(param_1 + 0x108) = iVar4;
        iVar23 = (int)(uVar20 & 0xffff);
        iVar4 = iVar23 + 1;
        FUN_032633cc(param_1 + 0xe8,iVar4);
        FUN_032634d8(param_1 + 0xd0,iVar4);
        puVar16 = (uint *)(*(long *)(param_1 + 0x100) + (uVar20 & 0xffff) * 0x20);
        *(undefined2 *)((long)puVar16 + 0x12) = 0xffff;
        *puVar16 = uVar21;
        puVar16[1] = uVar22;
        *(undefined2 *)(puVar16 + 2) = uVar11;
        *(undefined4 *)((long)puVar16 + 10) = 0xffff0000;
        uVar6 = *(int *)(param_1 + 0xe0) >> 5;
        pvVar2 = (void *)(*(long *)(param_1 + 0xd0) + (long)(int)((uVar6 + 1) * iVar23) * 4);
        if (uVar6 != 0xffffffff) {
          memset(pvVar2,0,(-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2) + 4);
        }
        *(int *)((long)pvVar2 + uVar19 * 4) = iVar3;
        if (bVar17) {
          *(short *)(*(long *)(param_1 + 0x100) + (uVar25 & 0xffff) * 0x20 + 0xc) = (short)uVar9;
        }
        else {
          FUN_03260f80(param_1,uVar20,uVar25,uVar21);
        }
      }
      uVar18 = uVar18 + 1;
      uVar25 = uVar20;
      uVar21 = uVar22;
      bVar17 = bVar1;
    } while (uVar12 != uVar18);
  }
  if (uVar10 < uVar7) {
    if (!bVar1) {
      FUN_03260f80(param_1,uVar8,uVar20,uVar22);
      return;
    }
    *(short *)(*(long *)(param_1 + 0x100) + (uVar20 & 0xffff) * 0x20 + 0xc) = (short)uVar8;
  }
  else if (!bVar1) {
    *(short *)(*(long *)(param_1 + 0x100) + (ulong)(uVar8 & 0xffff) * 0x20 + 0xc) = (short)uVar20;
  }
  return;
}


