/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ceaf0; name: FUN_032ceaf0
 */


void FUN_032ceaf0(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  undefined8 uVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  long *plVar26;
  ulong local_28;
  
  puVar12 = *(undefined8 **)(param_1 + 8);
  iVar15 = -1;
  lVar21 = (long)*(int *)(puVar12 + 3);
  do {
    lVar7 = lVar21 + -1;
    if (lVar21 < 1) goto LAB_032ceb3c;
    lVar1 = lVar21 * 8;
    lVar21 = lVar7;
  } while (*(ulong *)(param_1 + 0x10) <= param_2 - *(long *)(puVar12[2] + lVar1 + -8));
  iVar15 = (int)lVar7;
LAB_032ceb3c:
  uVar6 = *(uint *)(puVar12 + 1);
  lVar21 = (long)(int)uVar6;
  uVar3 = param_2 + param_3;
  puVar18 = (undefined8 *)*puVar12;
  if (0 < (int)uVar6) {
    puVar23 = puVar18 + lVar21 * 3;
    do {
      puVar25 = puVar23 + -3;
      if ((int)puVar23[-1] == iVar15) {
        if (puVar23[-2] == param_2) {
          puVar23[-2] = uVar3;
          goto LAB_032cebd0;
        }
        if (*puVar25 == uVar3) {
          *puVar25 = param_2;
          goto LAB_032cebd0;
        }
        if (*puVar25 < param_2) goto LAB_032ceb8c;
      }
      else if ((int)puVar23[-1] < iVar15) goto LAB_032ceb8c;
      lVar21 = lVar21 + -1;
      puVar23 = puVar25;
    } while (0 < lVar21);
  }
  lVar21 = 0;
LAB_032ceb8c:
  uVar9 = *(uint *)((long)puVar12 + 0xc);
  uVar24 = (ulong)uVar6;
  uVar2 = uVar6 + 1;
  uVar19 = (uint)lVar21;
  iVar20 = uVar6 - uVar19;
  puVar8 = puVar18;
  if ((int)(uVar9 & 0x3fffffff) <= (int)uVar6) {
    plVar26 = *(long **)(param_1 + 0x48);
    if (0x3ffffffe < (int)uVar6) {
      FUN_032bd0a8(uVar2);
      uVar9 = *(uint *)((long)puVar12 + 0xc);
    }
    uVar11 = (uVar9 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    uVar5 = uVar2;
    if ((int)uVar2 <= (int)uVar11) {
      uVar5 = uVar11;
    }
    FUN_032bd100(uVar5,0x18,uVar9,&local_28);
    uVar9 = *(uint *)((long)puVar12 + 0xc);
    puVar8 = (undefined8 *)(**(code **)(*plVar26 + 0x10))(plVar26,local_28,&local_28);
    if (0 < (int)uVar6) {
      puVar14 = puVar8;
      puVar17 = puVar18;
      do {
        uVar13 = *puVar17;
        uVar24 = uVar24 - 1;
        uVar22 = puVar17[2];
        puVar14[1] = puVar17[1];
        puVar14[2] = uVar22;
        *puVar14 = uVar13;
        puVar17 = puVar17 + 3;
        puVar14 = puVar14 + 3;
      } while (uVar24 != 0);
    }
    if (-1 < (int)uVar9) {
      (**(code **)(*plVar26 + 0x18))(plVar26,puVar18,((ulong)uVar9 & 0x3fffffff) * 0x18);
    }
    if (local_28 < 0x5ffffffe8) {
      uVar16 = (undefined4)(local_28 / 0x18);
    }
    else {
      uVar16 = 0x3fffffff;
    }
    *(undefined4 *)((long)puVar12 + 0xc) = uVar16;
    *puVar12 = puVar8;
  }
  puVar23 = puVar8 + (long)(int)uVar19 * 3;
  if ((iVar20 != 0) && (0 < iVar20)) {
    puVar25 = puVar23 + (long)(iVar20 + -1) * 3;
    uVar24 = *puVar25;
    uVar10 = puVar25[2];
    puVar4 = puVar23 + (long)(iVar20 + -1) * 3 + 3;
    puVar4[1] = puVar25[1];
    puVar4[2] = uVar10;
    *puVar4 = uVar24;
    if (iVar20 != 1) {
      iVar20 = ~uVar19 + uVar6;
      do {
        iVar20 = iVar20 + -1;
        puVar25[2] = puVar25[-1];
        *puVar25 = puVar25[-3];
        puVar25[1] = puVar25[-2];
        puVar25 = puVar25 + -3;
      } while (iVar20 != 0);
    }
  }
  *(uint *)(puVar12 + 1) = uVar2;
  *puVar23 = param_2;
  puVar8[(long)(int)uVar19 * 3 + 1] = uVar3;
  *(int *)(puVar8 + (long)(int)uVar19 * 3 + 2) = iVar15;
LAB_032cebd0:
  iVar15 = (int)(*(long **)(param_1 + 8))[1];
  if (iVar15 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(**(long **)(param_1 + 8) + (long)(iVar15 + -1) * 0x18 + 8);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  return;
}


