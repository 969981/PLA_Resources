/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03266380; name: FUN_03266380
 */


void FUN_03266380(long param_1,ushort *param_2,undefined2 *param_3,uint param_4,undefined1 *param_5,
                 undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined2 uVar7;
  ushort uVar8;
  undefined2 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  
  puVar6 = PTR_PTR_0434a080;
  if (*param_2 == 0xffff) {
    return;
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    uVar7 = *param_3;
    uVar15 = *(uint *)(param_1 + 0x108);
    if ((int)(*(uint *)(param_1 + 0x10c) & 0x3fffffff) <= (int)uVar15) {
      uVar11 = FUN_032635e4(PTR_PTR_0434a080,uVar15 + 1,*(undefined8 *)(param_1 + 0x100),uVar15,
                            param_1 + 0x10c);
      *(undefined8 *)(param_1 + 0x100) = uVar11;
    }
    *(uint *)(param_1 + 0x108) = uVar15 + 1;
    iVar16 = (int)((ulong)uVar15 & 0xffff) + 1;
    FUN_032633cc(param_1 + 0xe8,iVar16);
    FUN_032634d8(param_1 + 0xd0,iVar16);
    puVar12 = (uint *)(*(long *)(param_1 + 0x100) + ((ulong)uVar15 & 0xffff) * 0x20);
    *puVar12 = param_4;
    puVar12[1] = param_4 & 0xffff | 0x3fff0000;
    *(undefined4 *)((long)puVar12 + 10) = 0xffffff00;
    *(undefined2 *)((long)puVar12 + 0x12) = uVar7;
    puVar12 = (uint *)(param_1 + 0xc4);
    uVar13 = *puVar12;
    iVar16 = *(int *)(param_1 + 0xc0);
    uVar2 = iVar16 + 1;
    if (iVar16 < (int)(uVar13 & 0x3fffffff)) {
      lVar14 = *(long *)(param_1 + 0xb8);
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 0xb8);
      if (0x3ffffffe < iVar16) {
        FUN_032bd0a8(uVar2);
        uVar13 = *puVar12;
      }
      uVar13 = (uVar13 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar13) {
        uVar13 = 0x3fffffff;
      }
      uVar5 = uVar2;
      if ((int)uVar2 <= (int)uVar13) {
        uVar5 = uVar13;
      }
      lVar14 = FUN_032bd1d4(puVar6,uVar5,2,uVar11,iVar16,puVar12);
      iVar16 = *(int *)(param_1 + 0xc0);
      *(long *)(param_1 + 0xb8) = lVar14;
    }
    *(short *)(lVar14 + (long)iVar16 * 2) = (short)uVar15;
    *(uint *)(param_1 + 0xc0) = uVar2;
    *param_5 = 1;
    return;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    return;
  }
  FUN_03265f00(param_1,param_6);
  *param_5 = 1;
  lVar19 = *(long *)(param_1 + 0x100);
  uVar10 = (ulong)*param_2;
  lVar14 = (ulong)**(ushort **)(param_1 + 0xb8) * 0x20;
  uVar18 = (ulong)(*(ushort **)(param_1 + 0xb8))[(long)*(int *)(param_1 + 0xc0) + -1];
  uVar15 = *(uint *)(lVar19 + lVar14);
  iVar3 = *(int *)(*(long *)(param_1 + 0x130) +
                  (ulong)*(ushort *)
                          (*(long *)(param_1 + 0x120) +
                          (ulong)*(ushort *)(*(long *)(param_1 + 0x110) + uVar10 * 8) * 8) * 4);
  piVar17 = (int *)(lVar19 + lVar14 + 4);
  iVar4 = *piVar17 - iVar3;
  iVar16 = ((uVar15 - iVar3) * 2 & 0x10000) + (uVar15 - iVar3);
  iVar1 = iVar16 >> 0x10;
  iVar16 = (int)(short)iVar16;
  iVar4 = (iVar4 * 2 & 0x10000U) + iVar4;
  if ((iVar4 >> 0x10) * iVar16 < (short)iVar4 * iVar1) {
    iVar3 = *(int *)(*(long *)(param_1 + 0x130) +
                    (ulong)*(ushort *)
                            (*(long *)(param_1 + 0x120) +
                            (ulong)*(ushort *)(*(long *)(param_1 + 0x110) + uVar10 * 8 + 2) * 8) * 4
                    );
    iVar16 = ((uVar15 - iVar3) * 2 & 0x10000) + (uVar15 - iVar3);
    iVar4 = *(int *)(lVar19 + uVar18 * 0x20 + 4) - iVar3;
    iVar1 = iVar16 >> 0x10;
    iVar16 = (int)(short)iVar16;
    iVar4 = (iVar4 * 2 & 0x10000U) + iVar4;
    if ((short)iVar4 * iVar1 < (iVar4 >> 0x10) * iVar16) {
      FUN_03264ca0(param_1,uVar10,uVar15,param_2,param_3);
      return;
    }
    uVar8 = FUN_03264ad0(param_1,uVar10,uVar15);
    *param_2 = uVar8;
    puVar6 = PTR_PTR_0434a080;
    iVar3 = *piVar17 - iVar3;
    iVar3 = (iVar3 * 2 & 0x10000U) + iVar3;
    if ((short)iVar3 * iVar1 <= (iVar3 >> 0x10) * iVar16) {
      return;
    }
    uVar2 = *(uint *)(param_1 + 0x108);
    if ((int)(*(uint *)(param_1 + 0x10c) & 0x3fffffff) <= (int)uVar2) {
      uVar11 = FUN_032635e4(PTR_PTR_0434a080,uVar2 + 1,*(undefined8 *)(param_1 + 0x100),uVar2,
                            param_1 + 0x10c);
      *(undefined8 *)(param_1 + 0x100) = uVar11;
    }
    *(uint *)(param_1 + 0x108) = uVar2 + 1;
    iVar16 = (int)((ulong)uVar2 & 0xffff) + 1;
    FUN_032633cc(param_1 + 0xe8,iVar16);
    FUN_032634d8(param_1 + 0xd0,iVar16);
    puVar12 = (uint *)(*(long *)(param_1 + 0x100) + ((ulong)uVar2 & 0xffff) * 0x20);
    *puVar12 = uVar15;
    puVar12[1] = uVar15 + 0x10000 & 0xffff0000;
    *(undefined4 *)((long)puVar12 + 10) = 0xffffff00;
    *(undefined2 *)((long)puVar12 + 0x12) = 0xffff;
    puVar12 = (uint *)(param_1 + 0xc4);
    uVar13 = *puVar12;
    iVar16 = *(int *)(param_1 + 0xc0);
    uVar15 = iVar16 + 1;
    if (iVar16 < (int)(uVar13 & 0x3fffffff)) {
      puVar9 = *(undefined2 **)(param_1 + 0xb8);
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 0xb8);
      if (0x3ffffffe < iVar16) {
        FUN_032bd0a8(uVar15);
        uVar13 = *puVar12;
      }
      uVar13 = (uVar13 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar13) {
        uVar13 = 0x3fffffff;
      }
      uVar5 = uVar15;
      if ((int)uVar15 <= (int)uVar13) {
        uVar5 = uVar13;
      }
      puVar9 = (undefined2 *)FUN_032bd1d4(puVar6,uVar5,2,uVar11,iVar16,puVar12);
      *(undefined2 **)(param_1 + 0xb8) = puVar9;
    }
    if (0 < iVar16) {
      FUN_032d57d0(puVar9 + 1,puVar9,(long)iVar16 << 1);
    }
    *puVar9 = (short)uVar2;
  }
  else {
    uVar7 = FUN_03264900(param_1,uVar10,uVar15);
    *param_3 = uVar7;
    puVar6 = PTR_PTR_0434a080;
    iVar3 = *(int *)(lVar19 + uVar18 * 0x20 + 4) - iVar3;
    iVar3 = (iVar3 * 2 & 0x10000U) + iVar3;
    if ((iVar3 >> 0x10) * iVar16 <= (short)iVar3 * iVar1) {
      return;
    }
    uVar2 = *(uint *)(param_1 + 0x108);
    if ((int)(*(uint *)(param_1 + 0x10c) & 0x3fffffff) <= (int)uVar2) {
      uVar11 = FUN_032635e4(PTR_PTR_0434a080,uVar2 + 1,*(undefined8 *)(param_1 + 0x100),uVar2,
                            param_1 + 0x10c);
      *(undefined8 *)(param_1 + 0x100) = uVar11;
    }
    *(uint *)(param_1 + 0x108) = uVar2 + 1;
    iVar16 = (int)((ulong)uVar2 & 0xffff) + 1;
    FUN_032633cc(param_1 + 0xe8,iVar16);
    FUN_032634d8(param_1 + 0xd0,iVar16);
    puVar12 = (uint *)(*(long *)(param_1 + 0x100) + ((ulong)uVar2 & 0xffff) * 0x20);
    *puVar12 = uVar15;
    puVar12[1] = uVar15 & 0xffff0000 | 0x3fff;
    *(undefined4 *)((long)puVar12 + 10) = 0xffffff00;
    *(undefined2 *)((long)puVar12 + 0x12) = uVar7;
    puVar12 = (uint *)(param_1 + 0xc4);
    uVar13 = *puVar12;
    iVar16 = *(int *)(param_1 + 0xc0);
    uVar15 = iVar16 + 1;
    if (iVar16 < (int)(uVar13 & 0x3fffffff)) {
      lVar14 = *(long *)(param_1 + 0xb8);
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 0xb8);
      if (0x3ffffffe < iVar16) {
        FUN_032bd0a8(uVar15);
        uVar13 = *puVar12;
      }
      uVar13 = (uVar13 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar13) {
        uVar13 = 0x3fffffff;
      }
      uVar5 = uVar15;
      if ((int)uVar15 <= (int)uVar13) {
        uVar5 = uVar13;
      }
      lVar14 = FUN_032bd1d4(puVar6,uVar5,2,uVar11,iVar16,puVar12);
      iVar16 = *(int *)(param_1 + 0xc0);
      *(long *)(param_1 + 0xb8) = lVar14;
    }
    *(short *)(lVar14 + (long)iVar16 * 2) = (short)uVar2;
  }
  *(uint *)(param_1 + 0xc0) = uVar15;
  return;
}


