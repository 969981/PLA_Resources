/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f7198; name: FUN_013f7198
 */


void FUN_013f7198(long param_1,uint param_2,uint *param_3)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *extraout_x8;
  uint uVar10;
  uint extraout_w9;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x10;
  ulong extraout_x11;
  ulong uVar14;
  ulong extraout_x12;
  uint *puVar15;
  uint *extraout_x13;
  long lVar16;
  long extraout_x14;
  undefined8 uVar17;
  undefined8 extraout_x15;
  undefined8 uVar18;
  undefined8 extraout_x16;
  uint uVar19;
  uint extraout_w17;
  ulong uVar20;
  int iVar21;
  long extraout_x18;
  long lVar22;
  
  *param_3 = 0;
  if ((((int)param_2 < 0x38a) && (piVar11 = *(int **)(param_1 + 0x38), piVar11 != (int *)0x0)) &&
     (puVar9 = (ulong *)(param_1 + (ulong)param_2 * 0x10 + 0x42), (*puVar9 & 0xf) - 1 < 10)) {
    if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
       (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar12 == 0)) {
      lVar16 = 0;
    }
    else {
      puVar15 = (uint *)((long)piVar11 + uVar12);
      lVar16 = (long)puVar15 + (ulong)*puVar15;
    }
    puVar15 = param_3 + 0xc;
    lVar16 = lVar16 + (ulong)*(ushort *)(param_1 + (ulong)param_2 * 0x10 + 0x40) * 4;
    uVar10 = 0;
    lVar13 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar17 = 0x12;
    uVar18 = 5;
    do {
      if (lVar13 == 0x28) {
        FUN_013f7df0();
        puVar9 = extraout_x8;
        lVar13 = extraout_x10;
        uVar12 = extraout_x11;
        uVar14 = extraout_x12;
        puVar15 = extraout_x13;
        lVar16 = extraout_x14;
        uVar17 = extraout_x15;
        uVar18 = extraout_x16;
        lVar22 = extraout_x18;
        uVar19 = extraout_w17;
        uVar10 = extraout_w9;
LAB_013f7870:
        uVar5 = 0;
      }
      else {
        lVar22 = lVar16 + lVar13;
        uVar20 = (ulong)*(uint *)(lVar22 + 4);
        lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
        if ((*(ushort *)(lVar1 + 4) < 7) || (uVar6 = (ulong)*(ushort *)(lVar1 + 10), uVar6 == 0)) {
          uVar19 = 0;
        }
        else {
          uVar19 = *(uint *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
        }
        puVar15[-10] = uVar19;
        uVar20 = (ulong)*(uint *)(lVar22 + 4);
        lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
        if ((*(ushort *)(lVar1 + 4) < 9) || (uVar6 = (ulong)*(ushort *)(lVar1 + 0xc), uVar6 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
        }
        puVar15[-9] = uVar5;
        uVar20 = (ulong)*(uint *)(lVar22 + 4);
        lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
        if ((*(ushort *)(lVar1 + 4) < 0xb) || (uVar6 = (ulong)*(ushort *)(lVar1 + 0xe), uVar6 == 0))
        {
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
        }
        puVar15[-8] = uVar5;
        uVar20 = (ulong)*(uint *)(lVar22 + 4);
        lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
        if ((*(ushort *)(lVar1 + 4) < 0xd) || (uVar6 = (ulong)*(ushort *)(lVar1 + 0x10), uVar6 == 0)
           ) {
          uVar4 = 0;
        }
        else {
          uVar4 = (undefined1)*(undefined4 *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
        }
        *(undefined1 *)(puVar15 + -7) = uVar4;
        uVar20 = (ulong)*(uint *)(lVar22 + 4);
        lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
        if ((*(ushort *)(lVar1 + 4) < 0xf) || (uVar6 = (ulong)*(ushort *)(lVar1 + 0x12), uVar6 == 0)
           ) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
        }
        puVar15[-6] = uVar5;
        uVar20 = (ulong)*(uint *)(lVar22 + 4);
        lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
        if ((*(ushort *)(lVar1 + 4) < 0x11) ||
           (uVar6 = (ulong)*(ushort *)(lVar1 + 0x14), uVar6 == 0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
        }
        *(undefined8 *)(puVar15 + -4) = uVar7;
        uVar20 = (ulong)*(uint *)(lVar22 + 4);
        lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
        if ((*(ushort *)(lVar1 + 4) < 0x13) ||
           (uVar6 = (ulong)*(ushort *)(lVar1 + 0x16), uVar6 == 0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
        }
        *(undefined8 *)(puVar15 + -2) = uVar7;
        uVar20 = (ulong)*(uint *)(lVar22 + 4);
        lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
        if ((*(ushort *)(lVar1 + 4) < 0x15) ||
           (uVar6 = (ulong)*(ushort *)(lVar1 + 0x18), uVar6 == 0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
        }
        *(undefined8 *)puVar15 = uVar7;
        puVar15[7] = 0;
        uVar20 = (ulong)*(uint *)(lVar22 + 4);
        lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
        if ((*(ushort *)(lVar1 + 4) < 0x17) ||
           (uVar6 = (ulong)*(ushort *)(lVar1 + 0x1a), uVar6 == 0)) {
          uVar5 = 0;
          puVar15[2] = 0;
        }
        else {
          uVar5 = *(uint *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
          puVar15[2] = uVar5;
          if ((int)uVar5 < 1) goto LAB_013f7870;
          uVar5 = 1;
          puVar15[7] = 1;
        }
      }
      uVar20 = (ulong)*(uint *)(lVar22 + 4);
      lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
      if ((*(ushort *)(lVar1 + 4) < 0x19) || (uVar6 = (ulong)*(ushort *)(lVar1 + 0x1c), uVar6 == 0))
      {
        bVar3 = 0;
        puVar15[3] = 0;
      }
      else {
        uVar8 = *(uint *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
        puVar15[3] = uVar8;
        if (uVar5 == 1 && 0 < (int)uVar8) {
          uVar5 = uVar5 + 1;
          bVar3 = 1;
          puVar15[7] = uVar5;
        }
        else {
          bVar3 = 0;
        }
      }
      uVar20 = (ulong)*(uint *)(lVar22 + 4);
      lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
      if ((*(ushort *)(lVar1 + 4) < 0x1b) || (uVar6 = (ulong)*(ushort *)(lVar1 + 0x1e), uVar6 == 0))
      {
        bVar2 = false;
        puVar15[4] = 0;
      }
      else {
        uVar8 = *(uint *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
        puVar15[4] = uVar8;
        if ((bool)(bVar3 ^ 1 | (int)uVar8 < 1)) {
          bVar2 = false;
        }
        else {
          uVar5 = uVar5 + 1;
          bVar2 = true;
          puVar15[7] = uVar5;
        }
      }
      uVar20 = (ulong)*(uint *)(lVar22 + 4);
      lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
      if ((*(ushort *)(lVar1 + 4) < 0x1d) || (uVar6 = (ulong)*(ushort *)(lVar1 + 0x20), uVar6 == 0))
      {
        uVar8 = 0;
        puVar15[5] = 0;
        if (bVar2) goto LAB_013f74f8;
LAB_013f7740:
        uVar20 = (ulong)*(uint *)(lVar22 + 4);
        lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
        if ((*(ushort *)(lVar1 + 4) < 0x1f) ||
           (uVar6 = (ulong)*(ushort *)(lVar1 + 0x22), uVar6 == 0)) goto LAB_013f7770;
LAB_013f782c:
        uVar5 = *(uint *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
LAB_013f7774:
        puVar15[6] = uVar5;
      }
      else {
        uVar8 = *(uint *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
        puVar15[5] = uVar8;
        if (!bVar2) goto LAB_013f7740;
LAB_013f74f8:
        if ((int)uVar8 < 1) {
          uVar20 = (ulong)*(uint *)(lVar22 + 4);
          lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
          if ((0x1e < *(ushort *)(lVar1 + 4)) &&
             (uVar6 = (ulong)*(ushort *)(lVar1 + 0x22), uVar6 != 0)) goto LAB_013f782c;
LAB_013f7770:
          uVar5 = 0;
          goto LAB_013f7774;
        }
        puVar15[7] = uVar5 + 1;
        uVar20 = (ulong)*(uint *)(lVar22 + 4);
        lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
        if ((*(ushort *)(lVar1 + 4) < 0x1f) ||
           (uVar6 = (ulong)*(ushort *)(lVar1 + 0x22), uVar6 == 0)) {
          puVar15[6] = 0;
        }
        else {
          uVar8 = *(uint *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
          puVar15[6] = uVar8;
          if (0 < (int)uVar8) {
            puVar15[7] = uVar5 + 2;
          }
        }
      }
      uVar20 = (ulong)*(uint *)(lVar22 + 4);
      lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
      if ((*(ushort *)(lVar1 + 4) < 0x21) || (uVar6 = (ulong)*(ushort *)(lVar1 + 0x24), uVar6 == 0))
      {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
      }
      puVar15[8] = uVar5;
      uVar20 = (ulong)*(uint *)(lVar22 + 4);
      lVar1 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
      if ((*(ushort *)(lVar1 + 4) < 0x23) || (uVar6 = (ulong)*(ushort *)(lVar1 + 0x26), uVar6 == 0))
      {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
      }
      puVar15[9] = uVar5;
      uVar20 = (ulong)*(uint *)(lVar22 + 4);
      lVar22 = lVar16 + (uVar20 - (long)*(int *)(lVar16 + uVar20 + lVar13 + 4)) + lVar13;
      if ((*(ushort *)(lVar22 + 4) < 0x25) ||
         (uVar6 = (ulong)*(ushort *)(lVar22 + 0x28), uVar6 == 0)) {
        iVar21 = 0;
      }
      else {
        iVar21 = *(int *)(lVar16 + uVar20 + uVar6 + lVar13 + 4);
      }
      *(bool *)(puVar15 + 10) = iVar21 != 0;
      if (uVar19 == 1) {
        puVar15[0xb] = (uint)uVar12;
        uVar12 = (ulong)((uint)uVar12 + 1);
        *(char *)(puVar15 + -7) = (char)uVar17;
LAB_013f7608:
        puVar15[-6] = (uint)uVar18;
      }
      else {
        if (uVar19 == 2) {
          puVar15[0xc] = (uint)uVar14;
          uVar14 = (ulong)((uint)uVar14 + 1);
          goto LAB_013f7608;
        }
        *(char *)(puVar15 + -7) = (char)uVar17;
        if (uVar19 != 10) goto LAB_013f7608;
      }
      uVar19 = (uint)*puVar9 & 0xf;
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 4;
      puVar15 = puVar15 + 0x18;
    } while (uVar10 < uVar19);
    *param_3 = uVar19;
  }
  return;
}


