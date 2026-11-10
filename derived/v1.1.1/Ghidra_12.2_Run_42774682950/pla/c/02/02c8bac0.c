/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8bac0; name: FUN_02c8bac0
 */


void FUN_02c8bac0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  undefined2 uVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  ushort uVar13;
  undefined1 *puVar14;
  long lVar15;
  code *pcVar16;
  int *piVar17;
  undefined *puVar18;
  int iVar19;
  ulong uVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined1 *puVar23;
  short *psVar24;
  ulong uVar25;
  uint uVar26;
  undefined1 **ppuVar27;
  undefined1 **ppuVar28;
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  
  uVar12 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar12;
  uVar12 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  param_1[2] = uVar12;
  param_1[3] = uVar2;
  uVar12 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  param_1[6] = uVar12;
  param_1[7] = uVar2;
  uVar2 = param_2[0xb];
  uVar12 = param_2[0xc];
  uVar3 = param_2[0xd];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar12;
  param_1[0xd] = uVar3;
  local_48 = (undefined1 *)0x0;
  local_58 = &DAT_f4b17a579f18960;
  local_50 = 0x82a2b175229d6a5b;
  if (*(char *)(param_2 + 1) == '\0') {
    ppuVar27 = (undefined1 **)0x0;
  }
  else {
    ppuVar27 = &local_58;
    local_48 = (undefined1 *)*param_2;
    local_58 = (undefined1 *)*param_2;
    local_50 = 0x82a2b175229d6a5b;
  }
  local_50 = 0x82a2b175229d6a5b;
  if (param_1[2] == -1) {
    if (ppuVar27 == (undefined1 **)0x0) {
      puVar23 = (undefined1 *)(**(code **)(DAT_04407c08 + 0x248))();
    }
    else {
      puVar14 = *ppuVar27;
      puVar21 = ppuVar27[1];
      do {
        puVar23 = puVar14 + (long)puVar21;
        uVar20 = (ulong)puVar14 ^ (ulong)puVar21;
        puVar14 = (undefined1 *)
                  (uVar20 ^ ((ulong)puVar14 >> 0x28 | (long)puVar14 << 0x18) ^ uVar20 << 0x10);
        puVar21 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
      } while ((int)puVar23 == -1);
      *ppuVar27 = puVar14;
      ppuVar27[1] = puVar21;
    }
    param_1[2] = (ulong)puVar23 & 0xffffffff;
  }
  uVar20 = param_1[4];
  if (uVar20 == 0xffffffffffffffff) {
    if (ppuVar27 == (undefined1 **)0x0) {
      puVar23 = (undefined1 *)(**(code **)(DAT_04407c08 + 0x248))();
    }
    else {
      puVar14 = *ppuVar27;
      puVar21 = ppuVar27[1];
      do {
        puVar23 = puVar14 + (long)puVar21;
        uVar20 = (ulong)puVar14 ^ (ulong)puVar21;
        puVar14 = (undefined1 *)
                  (uVar20 ^ ((ulong)puVar14 >> 0x28 | (long)puVar14 << 0x18) ^ uVar20 << 0x10);
        puVar21 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
      } while ((int)puVar23 == -1);
      *ppuVar27 = puVar14;
      ppuVar27[1] = puVar21;
    }
    uVar20 = (ulong)puVar23 & 0xffffffff;
    param_1[4] = uVar20;
  }
  lVar15 = param_1[3];
  uVar11 = (uint)uVar20;
  if (lVar15 == 0x1ffffffff) {
    if (ppuVar27 == (undefined1 **)0x0) {
      uVar10 = (**(code **)(DAT_04407c08 + 0x248))();
    }
    else {
      puVar23 = *ppuVar27;
      puVar14 = ppuVar27[1];
      do {
        uVar10 = (int)puVar23 + (int)puVar14;
        uVar20 = (ulong)puVar23 ^ (ulong)puVar14;
        puVar23 = (undefined1 *)
                  (uVar20 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar20 << 0x10);
        puVar14 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
      } while (uVar10 == 0xffffffff);
      *ppuVar27 = puVar23;
      ppuVar27[1] = puVar14;
    }
    uVar26 = uVar10 ^ 0x10000000;
    if (0xf < (uVar11 & 0xfff0 ^ uVar11 >> 0x10 ^ uVar10 >> 0x10 ^ uVar10 & 0xfff0)) {
      uVar26 = uVar10;
    }
    uVar20 = (ulong)uVar26;
LAB_02c8bd5c:
    param_1[3] = uVar20;
  }
  else {
    if (lVar15 == 0x2ffffffff) {
      if (ppuVar27 == (undefined1 **)0x0) {
        puVar23 = (undefined1 *)(**(code **)(DAT_04407c08 + 0x248))();
      }
      else {
        puVar14 = *ppuVar27;
        puVar21 = ppuVar27[1];
        do {
          puVar23 = puVar14 + (long)puVar21;
          uVar20 = (ulong)puVar14 ^ (ulong)puVar21;
          puVar14 = (undefined1 *)
                    (uVar20 ^ ((ulong)puVar14 >> 0x28 | (long)puVar14 << 0x18) ^ uVar20 << 0x10);
          puVar21 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
        } while ((int)puVar23 == -1);
        *ppuVar27 = puVar14;
        ppuVar27[1] = puVar21;
      }
      uVar10 = (uint)puVar23;
      if (0xf < (uVar11 >> 0x10 ^ uVar11 & 0xfff0 ^ uVar10 >> 0x10 ^ uVar10 & 0xfff0)) {
        puVar23 = (undefined1 *)
                  (ulong)(uVar10 & 0xffff | (uVar11 >> 0x10 ^ uVar11 ^ uVar10) << 0x10);
      }
      uVar20 = (ulong)puVar23 & 0xffffffff;
      goto LAB_02c8bd5c;
    }
    if ((lVar15 == 0x3ffffffff) && (*(byte *)((long)param_1 + 0x39) != 0)) {
      if (ppuVar27 != (undefined1 **)0x0) {
        puVar23 = *ppuVar27;
        puVar14 = ppuVar27[1];
        uVar10 = 0;
        do {
          do {
            puVar21 = puVar23 + (long)puVar14;
            uVar25 = (ulong)puVar23 ^ (ulong)puVar14;
            puVar23 = (undefined1 *)
                      (uVar25 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar25 << 0x10);
            puVar14 = (undefined1 *)(uVar25 >> 0x1b | uVar25 << 0x25);
            uVar26 = (uint)puVar21;
          } while (uVar26 == 0xffffffff);
          uVar10 = uVar10 + 1;
        } while ((uVar10 < *(byte *)((long)param_1 + 0x39)) &&
                (0xf < (uVar26 & 0xfff0 ^ uVar26 >> 0x10 ^ uVar11 & 0xfff0 ^
                       (uint)(uVar20 >> 0x10) & 0xffff)));
        uVar20 = (ulong)puVar21 & 0xffffffff;
        *ppuVar27 = puVar23;
        ppuVar27[1] = puVar14;
        goto LAB_02c8bd5c;
      }
      uVar11 = 0;
      do {
        uVar10 = (**(code **)(DAT_04407c08 + 0x248))();
        param_1[3] = (ulong)uVar10;
        if ((uVar10 & 0xfff0 ^ uVar10 >> 0x10 ^ *(uint *)(param_1 + 4) & 0xfff0 ^
            *(uint *)(param_1 + 4) >> 0x10) < 0x10) break;
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(byte *)((long)param_1 + 0x39));
    }
  }
  if (100 < *(ushort *)(param_1 + 6)) {
    *(undefined2 *)(param_1 + 6) = 100;
  }
  if (*(byte *)((long)param_1 + 100) == 0) {
LAB_02c8be50:
    if (ppuVar27 != (undefined1 **)0x0) goto LAB_02c8be58;
LAB_02c8bf84:
    if (*(short *)((long)param_1 + 0x3a) == -1) {
      uVar8 = (**(code **)(DAT_04407c08 + 0x250))(0x20);
      *(undefined2 *)((long)param_1 + 0x3a) = uVar8;
    }
    if (*(short *)((long)param_1 + 0x3c) == -1) {
      uVar8 = (**(code **)(DAT_04407c08 + 0x250))(0x20);
      *(undefined2 *)((long)param_1 + 0x3c) = uVar8;
    }
    if (*(short *)((long)param_1 + 0x3e) == -1) {
      uVar8 = (**(code **)(DAT_04407c08 + 0x250))(0x20);
      *(undefined2 *)((long)param_1 + 0x3e) = uVar8;
    }
    if (*(short *)(param_1 + 8) == -1) {
      uVar8 = (**(code **)(DAT_04407c08 + 0x250))(0x20);
      *(undefined2 *)(param_1 + 8) = uVar8;
    }
    if (*(short *)((long)param_1 + 0x42) == -1) {
      uVar8 = (**(code **)(DAT_04407c08 + 0x250))(0x20);
      *(undefined2 *)((long)param_1 + 0x42) = uVar8;
    }
    if (*(short *)((long)param_1 + 0x44) == -1) {
      uVar8 = (**(code **)(DAT_04407c08 + 0x250))(0x20);
      *(undefined2 *)((long)param_1 + 0x44) = uVar8;
    }
    bVar6 = true;
  }
  else {
    if (*(byte *)((long)param_1 + 100) < 6) {
      *(undefined8 *)((long)param_1 + 0x3a) = 0xffffffffffffffff;
      *(undefined4 *)((long)param_1 + 0x42) = 0xffffffff;
      if (ppuVar27 == (undefined1 **)0x0) {
        bVar7 = 0;
        do {
          do {
            uVar11 = (**(code **)(DAT_04407c08 + 0x250))(6);
            psVar24 = (short *)((long)param_1 + (ulong)(uVar11 & 0xff) * 2 + 0x3a);
          } while (*psVar24 != -1);
          *psVar24 = 0x1f;
          bVar7 = bVar7 + 1;
        } while (bVar7 < *(byte *)((long)param_1 + 100));
        goto LAB_02c8be50;
      }
      puVar23 = *ppuVar27;
      puVar14 = ppuVar27[1];
      bVar7 = 0;
      do {
        do {
          do {
            uVar20 = (ulong)puVar23 ^ (ulong)puVar14;
            iVar19 = (int)puVar14;
            puVar14 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
            uVar11 = (int)puVar23 + iVar19 & 7;
            puVar23 = (undefined1 *)
                      (uVar20 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar20 << 0x10);
          } while (5 < uVar11);
          psVar24 = (short *)((long)param_1 + (ulong)uVar11 * 2 + 0x3a);
        } while (*psVar24 != -1);
        *psVar24 = 0x1f;
        bVar7 = bVar7 + 1;
      } while (bVar7 < *(byte *)((long)param_1 + 100));
      *ppuVar27 = puVar23;
      ppuVar27[1] = puVar14;
    }
    else {
      *(undefined1 *)((long)param_1 + 100) = 0;
      *(undefined8 *)((long)param_1 + 0x3a) = 0xffffffffffffffff;
      *(undefined4 *)((long)param_1 + 0x42) = 0xffffffff;
      if (ppuVar27 == (undefined1 **)0x0) goto LAB_02c8bf84;
    }
LAB_02c8be58:
    ppuVar28 = ppuVar27 + 1;
    if (*(short *)((long)param_1 + 0x3a) == -1) {
      puVar23 = *ppuVar27;
      puVar14 = *ppuVar28;
      uVar20 = (ulong)puVar14 ^ (ulong)puVar23;
      *ppuVar27 = (undefined1 *)
                  (uVar20 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar20 << 0x10);
      *ppuVar28 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
      *(ushort *)((long)param_1 + 0x3a) = (short)puVar14 + (short)puVar23 & 0x1f;
    }
    if (*(short *)((long)param_1 + 0x3c) == -1) {
      puVar23 = *ppuVar27;
      puVar14 = *ppuVar28;
      uVar20 = (ulong)puVar14 ^ (ulong)puVar23;
      *ppuVar27 = (undefined1 *)
                  (uVar20 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar20 << 0x10);
      *ppuVar28 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
      *(ushort *)((long)param_1 + 0x3c) = (short)puVar14 + (short)puVar23 & 0x1f;
    }
    if (*(short *)((long)param_1 + 0x3e) == -1) {
      puVar23 = *ppuVar27;
      puVar14 = *ppuVar28;
      uVar20 = (ulong)puVar14 ^ (ulong)puVar23;
      *ppuVar27 = (undefined1 *)
                  (uVar20 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar20 << 0x10);
      *ppuVar28 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
      *(ushort *)((long)param_1 + 0x3e) = (short)puVar14 + (short)puVar23 & 0x1f;
    }
    if (*(short *)(param_1 + 8) == -1) {
      puVar23 = *ppuVar27;
      puVar14 = *ppuVar28;
      uVar20 = (ulong)puVar14 ^ (ulong)puVar23;
      *ppuVar27 = (undefined1 *)
                  (uVar20 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar20 << 0x10);
      *ppuVar28 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
      *(ushort *)(param_1 + 8) = (short)puVar14 + (short)puVar23 & 0x1f;
    }
    if (*(short *)((long)param_1 + 0x42) == -1) {
      puVar23 = *ppuVar27;
      puVar14 = *ppuVar28;
      uVar20 = (ulong)puVar14 ^ (ulong)puVar23;
      *ppuVar27 = (undefined1 *)
                  (uVar20 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar20 << 0x10);
      *ppuVar28 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
      *(ushort *)((long)param_1 + 0x42) = (short)puVar14 + (short)puVar23 & 0x1f;
    }
    if (*(short *)((long)param_1 + 0x44) == -1) {
      puVar23 = *ppuVar27;
      bVar6 = false;
      puVar14 = *ppuVar28;
      uVar20 = (ulong)puVar14 ^ (ulong)puVar23;
      *ppuVar27 = (undefined1 *)
                  (uVar20 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar20 << 0x10);
      *ppuVar28 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
      *(ushort *)((long)param_1 + 0x44) = (short)puVar14 + (short)puVar23 & 0x1f;
    }
    else {
      bVar6 = false;
    }
  }
  ppuVar28 = ppuVar27 + 1;
  if (*(char *)(param_1 + 7) == -2) {
    if (bVar6) {
      pcVar16 = *(code **)(DAT_04407c08 + 0x250);
      uVar12 = 3;
LAB_02c8c0d4:
      bVar7 = (*pcVar16)(uVar12);
    }
    else {
      puVar23 = *ppuVar27;
      puVar14 = *ppuVar28;
      do {
        uVar20 = (ulong)puVar23 ^ (ulong)puVar14;
        iVar19 = (int)puVar14;
        puVar14 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
        uVar11 = (int)puVar23 + iVar19 & 3;
        bVar7 = (byte)uVar11;
        puVar23 = (undefined1 *)
                  (uVar20 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar20 << 0x10);
      } while (uVar11 == 3);
      *ppuVar27 = puVar23;
      *ppuVar28 = puVar14;
    }
LAB_02c8c138:
    *(byte *)(param_1 + 7) = bVar7;
  }
  else if (*(char *)(param_1 + 7) == -1) {
    if (bVar6) {
      pcVar16 = *(code **)(DAT_04407c08 + 0x250);
      uVar12 = 2;
      goto LAB_02c8c0d4;
    }
    puVar23 = *ppuVar27;
    uVar20 = (ulong)*ppuVar28 ^ (ulong)puVar23;
    bVar7 = (char)*ppuVar28 + (char)puVar23 & 1;
    *ppuVar27 = (undefined1 *)
                (uVar20 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar20 << 0x10);
    *ppuVar28 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
    goto LAB_02c8c138;
  }
  uVar20 = (ulong)*(ushort *)((long)param_1 + 0x2c);
  if (*(ushort *)((long)param_1 + 0x2c) == 0xff) {
    if ((int)*(uint *)(param_1 + 5) < 0x38a) {
      lVar15 = *(&DAT_043f23a0)[(ulong)*(uint *)(param_1 + 5) * 4];
      lVar4 = (&DAT_043f23a0)[(ulong)*(uint *)(param_1 + 5) * 4][1] - lVar15;
      if (lVar4 == 0) goto LAB_02c8c170;
      uVar11 = 0;
      uVar20 = 0;
      do {
        lVar1 = uVar20 * 8;
        uVar20 = uVar20 + 1;
        if (*(long *)(lVar15 + lVar1) != 0) {
          uVar11 = uVar11 + 1;
        }
      } while (uVar20 < (ulong)(lVar4 >> 3));
      uVar11 = uVar11 & 0xff;
      if (ppuVar27 != (undefined1 **)0x0) goto LAB_02c8c1c0;
LAB_02c8c17c:
      uVar20 = (**(code **)(DAT_04407c08 + 0x250))();
      uVar20 = uVar20 & 0xffffffff;
    }
    else {
LAB_02c8c170:
      uVar11 = 0;
      if (ppuVar27 == (undefined1 **)0x0) goto LAB_02c8c17c;
LAB_02c8c1c0:
      if (uVar11 == 0) {
        puVar23 = *ppuVar27;
        uVar20 = (ulong)(uint)((int)ppuVar27[1] + (int)puVar23);
        uVar25 = (ulong)ppuVar27[1] ^ (ulong)puVar23;
        *ppuVar27 = (undefined1 *)
                    (uVar25 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar25 << 0x10);
        ppuVar27[1] = (undefined1 *)(uVar25 >> 0x1b | uVar25 << 0x25);
      }
      else if (uVar11 == 1) {
        uVar20 = 0;
      }
      else {
        lVar15 = 0x1f;
        if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar11) & 0x1f) & uVar11) != 0) {
          lVar15 = 0x20;
        }
        uVar25 = lVar15 - LZCOUNT(uVar11);
        uVar20 = uVar25 >> 6;
        if ((uVar25 & 0x3f) != 0) {
          uVar20 = uVar20 + 1;
        }
        if (uVar25 < uVar20) {
          uVar25 = 0;
        }
        else {
          uVar22 = 0;
          if (uVar20 != 0) {
            uVar22 = uVar25 / uVar20;
          }
          uVar25 = 0xffffffffffffffff >> (-uVar22 & 0x3f);
        }
        puVar23 = *ppuVar27;
        puVar14 = ppuVar27[1];
        do {
          uVar22 = (ulong)puVar23 ^ (ulong)puVar14;
          puVar21 = puVar23 + (long)puVar14;
          puVar14 = (undefined1 *)(uVar22 >> 0x1b | uVar22 << 0x25);
          uVar20 = (ulong)puVar21 & uVar25;
          puVar23 = (undefined1 *)
                    (uVar22 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar22 << 0x10);
        } while (uVar11 <= (uint)uVar20);
        *ppuVar27 = puVar23;
        ppuVar27[1] = puVar14;
      }
    }
    *(short *)((long)param_1 + 0x2c) = (short)uVar20;
  }
  if (*(short *)((long)param_1 + 0x32) == 0xff) {
    uVar10 = *(uint *)(param_1 + 5);
    bVar5 = (uVar10 | 1) != 0x38b;
    uVar11 = 0;
    if ((int)uVar10 < 0x38a && bVar5) {
      uVar11 = (uint)uVar20;
    }
    uVar25 = (ulong)uVar11;
    if ((uVar11 & 0xffff) < 0x1c) {
      uVar22 = 0;
      if ((int)uVar10 < 0x38a && bVar5) {
        uVar22 = (ulong)uVar10;
      }
      lVar15 = *(&DAT_043f23a0)[uVar22 * 4];
      uVar22 = (&DAT_043f23a0)[uVar22 * 4][1] - lVar15 >> 3;
      if ((uVar22 <= (uVar25 & 0xffff)) || (*(long *)(lVar15 + (uVar25 & 0xffff) * 8) == 0))
      goto LAB_02c8c2ac;
    }
    else {
LAB_02c8c2ac:
      uVar25 = 0;
      lVar15 = *DAT_043f23a0;
      uVar22 = DAT_043f23a0[1] - lVar15 >> 3;
    }
    if (uVar22 <= (uVar25 & 0xffff)) goto LAB_02c8c660;
    piVar17 = *(int **)(lVar15 + (uVar25 & 0xffff) * 8);
    if (((*(ushort *)((long)piVar17 - (long)*piVar17) < 0x21) ||
        (uVar25 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[0x10], uVar25 == 0)) ||
       (bVar7 = *(byte *)((long)piVar17 + uVar25), bVar7 == 0)) {
      uVar13 = 0;
    }
    else if (bVar7 == 0xff) {
      uVar13 = 2;
    }
    else if (bVar7 == 0xfe) {
      uVar13 = 1;
    }
    else {
      if (bVar6) {
        uVar11 = (**(code **)(DAT_04407c08 + 0x250))(0xfd);
        uVar20 = (ulong)*(ushort *)((long)param_1 + 0x2c);
      }
      else {
        puVar23 = *ppuVar27;
        puVar14 = *ppuVar28;
        do {
          uVar25 = (ulong)puVar23 ^ (ulong)puVar14;
          iVar19 = (int)puVar14;
          puVar14 = (undefined1 *)(uVar25 >> 0x1b | uVar25 << 0x25);
          uVar11 = (int)puVar23 + iVar19 & 0xff;
          puVar23 = (undefined1 *)
                    (uVar25 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar25 << 0x10);
        } while (0xfc < uVar11);
        *ppuVar27 = puVar23;
        *ppuVar28 = puVar14;
      }
      uVar13 = (ushort)(uVar11 + 1 < (uint)bVar7);
    }
    *(ushort *)((long)param_1 + 0x32) = uVar13;
  }
  uVar8 = FUN_02c8b41c(*(undefined4 *)(param_1 + 5),uVar20);
  *(undefined2 *)((long)param_1 + 0x32) = uVar8;
  sVar9 = *(short *)((long)param_1 + 0x34);
  if (sVar9 == -1) {
    if ((*(int *)(param_1 + 5) == 0x351) && (*(short *)((long)param_1 + 0x2c) == 0)) {
      if (ppuVar27 == (undefined1 **)0x0) {
        uVar11 = (**(code **)(DAT_04407c08 + 0x250))(0xd);
      }
      else {
        puVar23 = *ppuVar27;
        puVar14 = ppuVar27[1];
        do {
          uVar20 = (ulong)puVar23 ^ (ulong)puVar14;
          iVar19 = (int)puVar14;
          puVar14 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
          uVar11 = (int)puVar23 + iVar19 & 0xf;
          puVar23 = (undefined1 *)
                    (uVar20 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar20 << 0x10);
        } while (0xc < uVar11);
        *ppuVar27 = puVar23;
        ppuVar27[1] = puVar14;
      }
      puVar18 = &DAT_03a84f84;
LAB_02c8c518:
      sVar9 = (short)*(undefined4 *)(puVar18 + (ulong)(uVar11 & 0xff) * 4);
    }
    else {
      if ((*(int *)(param_1 + 5) == 0x351) && (*(short *)((long)param_1 + 0x2c) == 1)) {
        if (ppuVar27 == (undefined1 **)0x0) {
          uVar11 = (**(code **)(DAT_04407c08 + 0x250))(0xc);
        }
        else {
          puVar23 = *ppuVar27;
          puVar14 = ppuVar27[1];
          do {
            uVar20 = (ulong)puVar23 ^ (ulong)puVar14;
            iVar19 = (int)puVar14;
            puVar14 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
            uVar11 = (int)puVar23 + iVar19 & 0xf;
            puVar23 = (undefined1 *)
                      (uVar20 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar20 << 0x10);
          } while (0xb < uVar11);
          *ppuVar27 = puVar23;
          ppuVar27[1] = puVar14;
        }
        puVar18 = &DAT_03a84fb8;
        goto LAB_02c8c518;
      }
      if (ppuVar27 == (undefined1 **)0x0) {
        sVar9 = (**(code **)(DAT_04407c08 + 0x250))(0x19);
      }
      else {
        puVar23 = *ppuVar27;
        puVar14 = ppuVar27[1];
        do {
          uVar20 = (ulong)puVar23 ^ (ulong)puVar14;
          iVar19 = (int)puVar14;
          puVar14 = (undefined1 *)(uVar20 >> 0x1b | uVar20 << 0x25);
          uVar11 = (int)puVar23 + iVar19 & 0x1f;
          sVar9 = (short)uVar11;
          puVar23 = (undefined1 *)
                    (uVar20 ^ ((ulong)puVar23 >> 0x28 | (long)puVar23 << 0x18) ^ uVar20 << 0x10);
        } while (0x18 < uVar11);
        *ppuVar27 = puVar23;
        ppuVar27[1] = puVar14;
      }
    }
    *(short *)((long)param_1 + 0x34) = sVar9;
  }
  if (*(short *)((long)param_1 + 0x36) == -1) {
    *(short *)((long)param_1 + 0x36) = sVar9;
  }
  if (*(int *)(param_1 + 0xc) != 0xffff) goto LAB_02c8c604;
  uVar10 = *(uint *)(param_1 + 5);
  bVar6 = (uVar10 | 1) != 0x38b;
  uVar11 = 0;
  if ((int)uVar10 < 0x38a && bVar6) {
    uVar11 = (uint)*(ushort *)((long)param_1 + 0x2c);
  }
  uVar20 = (ulong)uVar11;
  if (uVar11 < 0x1c) {
    uVar25 = 0;
    if ((int)uVar10 < 0x38a && bVar6) {
      uVar25 = (ulong)uVar10;
    }
    lVar15 = *(&DAT_043f23a0)[uVar25 * 4];
    uVar25 = (&DAT_043f23a0)[uVar25 * 4][1] - lVar15 >> 3;
    if ((uVar25 <= uVar20) || (*(long *)(lVar15 + uVar20 * 8) == 0)) goto LAB_02c8c5b0;
  }
  else {
LAB_02c8c5b0:
    uVar20 = 0;
    lVar15 = *DAT_043f23a0;
    uVar25 = DAT_043f23a0[1] - lVar15 >> 3;
  }
  if (uVar25 <= uVar20) {
LAB_02c8c660:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar17 = *(int **)(lVar15 + uVar20 * 8);
  if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 0x65) ||
     (uVar20 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[0x32], uVar20 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = (uint)*(byte *)((long)piVar17 + uVar20);
  }
  *(uint *)(param_1 + 0xc) = uVar11;
LAB_02c8c604:
  uVar8 = FUN_02c8c93c(*(undefined2 *)(param_1 + 0xd),ppuVar27);
  *(undefined2 *)(param_1 + 0xd) = uVar8;
  uVar8 = FUN_02c8c93c(*(undefined2 *)((long)param_1 + 0x66),ppuVar27);
  *(undefined2 *)((long)param_1 + 0x66) = uVar8;
  if (*(short *)((long)param_1 + 0x6a) == -1) {
    *(undefined2 *)((long)param_1 + 0x6a) = *(undefined2 *)(param_1 + 0xd);
  }
  return;
}


