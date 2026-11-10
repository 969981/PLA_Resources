/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030a3e58; name: FUN_030a3e58
 */


/* WARNING: Removing unreachable block (ram,0x030a3f08) */

void FUN_030a3e58(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined1 uVar8;
  short sVar9;
  ushort uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  short sVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  char cVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  uint *puVar31;
  
  uVar18 = *(uint *)(param_2 + 1);
  uVar30 = (ulong)uVar18;
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < (int)uVar18) {
    uVar12 = FUN_030a84a0(PTR_PTR_0434a080,uVar18,*(undefined8 *)(param_1 + 0x30),
                          *(undefined4 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x30) = uVar12;
  }
  iVar17 = *(int *)(param_1 + 0x38);
  if (iVar17 < (int)uVar18) {
    *(uint *)(param_1 + 0x38) = uVar18;
    pvVar2 = (void *)(*(long *)(param_1 + 0x30) + (long)iVar17 * 8);
    memset(pvVar2,0,(*(long *)(param_1 + 0x30) + (long)(int)uVar18 * 8) - (long)pvVar2 &
                    0xfffffffffffffff8);
  }
  else if ((int)uVar18 < iVar17) {
    *(uint *)(param_1 + 0x38) = uVar18;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((int)uVar18 < 1) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    goto LAB_030a3fd0;
  }
  if (uVar18 == 1) {
    iVar17 = 0;
    lVar19 = 0;
LAB_030a3f64:
    iVar17 = iVar17 + (uint)*(byte *)(*param_2 + lVar19);
    *(int *)(param_1 + 0x2c) = iVar17;
  }
  else {
    iVar17 = 0;
    lVar19 = 0;
    do {
      iVar17 = iVar17 + (uint)*(byte *)(*param_2 + lVar19);
      *(int *)(param_1 + 0x2c) = iVar17;
      lVar16 = *param_2 + lVar19;
      lVar19 = lVar19 + 2;
      iVar17 = iVar17 + (uint)*(byte *)(lVar16 + 1);
      *(int *)(param_1 + 0x2c) = iVar17;
    } while (uVar30 - (uVar30 & 1) != lVar19);
    if ((uVar18 & 1) != 0) goto LAB_030a3f64;
  }
  lVar19 = 0;
  uVar20 = 0;
  iVar22 = 0;
  iVar24 = 0;
  *(int *)(param_1 + 0x28) = iVar17 * iVar17;
  do {
    lVar16 = *param_2;
    puVar3 = (undefined2 *)(*(long *)(param_1 + 0x30) + lVar19);
    uVar8 = *(undefined1 *)(lVar16 + uVar20);
    *puVar3 = (short)iVar22;
    *(undefined1 *)(puVar3 + 3) = uVar8;
    puVar3[1] = (short)*(undefined4 *)(param_1 + 0x2c);
    puVar3[2] = (short)iVar24;
    uVar15 = (uint)*(byte *)(lVar16 + uVar20);
    iVar22 = iVar22 + *(int *)(param_1 + 0x2c) * uVar15;
    uVar20 = uVar20 + 1;
    iVar24 = iVar24 + uVar15;
    lVar19 = lVar19 + 8;
  } while (uVar30 != uVar20);
LAB_030a3fd0:
  uVar15 = *(uint *)(param_3 + 1);
  if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) < (int)uVar15) {
    uVar12 = FUN_030a8614(PTR_PTR_0434a080,uVar15,*(undefined8 *)(param_1 + 0x40),
                          *(undefined4 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x40) = uVar12;
  }
  iVar17 = *(int *)(param_1 + 0x48);
  if (iVar17 < (int)uVar15) {
    *(uint *)(param_1 + 0x48) = uVar15;
    pvVar2 = (void *)(*(long *)(param_1 + 0x40) + (long)iVar17 * 8);
    memset(pvVar2,0,(*(long *)(param_1 + 0x40) + (long)(int)uVar15 * 8) - (long)pvVar2 &
                    0xfffffffffffffff8);
  }
  else if ((int)uVar15 < iVar17) {
    *(uint *)(param_1 + 0x48) = uVar15;
  }
  puVar31 = (uint *)(param_1 + 0x5c);
  uVar13 = *puVar31;
  uVar1 = uVar18 + 1;
  if ((int)(uVar13 & 0x3fffffff) <= (int)uVar18) {
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    uVar6 = *(undefined4 *)(param_1 + 0x58);
    if (0x3ffffffe < (int)uVar18) {
      FUN_032bd0a8(uVar1);
      uVar13 = *puVar31;
    }
    uVar13 = (uVar13 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar13) {
      uVar13 = 0x3fffffff;
    }
    uVar11 = uVar1;
    if ((int)uVar1 <= (int)uVar13) {
      uVar11 = uVar13;
    }
    uVar12 = FUN_032bd1d4(PTR_PTR_0434a080,uVar11,2,uVar12,uVar6,puVar31);
    *(undefined8 *)(param_1 + 0x50) = uVar12;
  }
  if ((*(int *)(param_1 + 0x58) <= (int)uVar18) || ((int)uVar1 < *(int *)(param_1 + 0x58))) {
    *(uint *)(param_1 + 0x58) = uVar1;
  }
  **(undefined2 **)(param_1 + 0x50) = 0;
  if ((int)uVar15 < 1) {
    uVar18 = 0;
  }
  else {
    uVar30 = 0;
    cVar21 = '\0';
    sVar14 = 0;
    lVar19 = 0;
    do {
      puVar4 = (ushort *)(*param_3 + uVar30 * 4);
      iVar17 = (int)lVar19;
      lVar16 = *(long *)(param_1 + 0x30) + (long)iVar17 * 8;
      lVar26 = *(long *)(param_1 + 0x40);
      if (iVar17 < (int)(uint)*puVar4) {
        lVar27 = (long)iVar17 << 3;
        lVar23 = (long)iVar17;
        do {
          lVar19 = lVar23 + 1;
          bVar7 = *(byte *)(lVar16 + 6);
          sVar9 = *(short *)(param_1 + 0x2c);
          *(short *)(*(long *)(param_1 + 0x50) + lVar23 * 2 + 2) = (short)uVar30;
          sVar14 = sVar14 + sVar9 * (ushort)bVar7;
          lVar16 = *(long *)(param_1 + 0x30) + lVar27;
          lVar27 = lVar27 + 8;
          lVar16 = lVar16 + 8;
          lVar23 = lVar19;
        } while (lVar19 < (long)(ulong)*puVar4);
        cVar21 = '\0';
        lVar16 = *(long *)(param_1 + 0x30) + lVar27;
      }
      uVar10 = puVar4[1];
      uVar20 = (ulong)uVar10;
      puVar5 = (ushort *)(lVar26 + uVar30 * 8);
      *puVar5 = uVar10;
      puVar5[1] = *puVar4;
      uVar18 = (uint)lVar19;
      puVar5[2] = *(short *)(*(long *)(param_1 + 0x30) + (ulong)uVar10 * 8 + 4) + sVar14;
      if (uVar18 == uVar10) {
        *(char *)(lVar16 + 7) = cVar21;
      }
      if ((int)(uint)uVar10 < (int)uVar18) {
        uVar25 = (ulong)*(ushort *)(*(long *)(param_1 + 0x50) + uVar20 * 2);
        uVar29 = (ulong)*(byte *)(*(long *)(param_1 + 0x30) + uVar20 * 8 + 7);
        uVar28 = uVar29 + uVar25;
        lVar16 = uVar29 << 3;
        do {
          uVar28 = uVar28 + 1;
          if (*(ushort *)(*(long *)(param_1 + 0x50) + uVar20 * 2 + 2) <= uVar28) goto LAB_030a40cc;
          lVar26 = *(long *)(param_1 + 0x40) + uVar25 * 8 + lVar16;
          lVar16 = lVar16 + 8;
        } while (uVar18 != *(ushort *)(lVar26 + 8));
        puVar5[3] = (ushort)uVar28;
        *(short *)(*(long *)(param_1 + 0x40) + uVar25 * 8 + lVar16 + 6) = (short)uVar30;
LAB_030a40cc:
        cVar21 = cVar21 + '\x01';
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar15);
  }
  *(short *)(*(long *)(param_1 + 0x50) + (long)(int)(uVar18 + 1) * 2) = (short)uVar15;
  return;
}


