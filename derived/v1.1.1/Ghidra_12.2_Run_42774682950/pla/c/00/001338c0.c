/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001338c0; name: FUN_001338c0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_001338c0(long param_1,long param_2,byte *param_3,long param_4,long param_5,long param_6,
                long param_7,long param_8)

{
  undefined1 *puVar1;
  ulong *puVar2;
  size_t sVar3;
  long *plVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  ushort uVar10;
  bool bVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  code *pcVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ushort *puVar25;
  undefined4 *puVar26;
  undefined1 *puVar27;
  ulong uVar28;
  ulong uVar29;
  undefined1 *puVar30;
  undefined4 *puVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  ulong uVar40;
  ulong *puVar41;
  int iVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  ulong auStack_98 [7];
  
  iVar13 = (int)param_3;
  if (param_7 != 2) {
    if (param_7 == 1) {
      if (param_4 - (long)param_3 < 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = (ulong)*param_3 << 0x38;
      }
      if (7 < param_4 - (long)(param_3 + 1)) {
        uVar23 = (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff) << 8;
        uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
        uVar23 = uVar23 >> 0x20 | uVar23 << 0x20;
        goto LAB_00135cd8;
      }
      if (param_4 - (long)(param_3 + 1) < 1) {
        uVar21 = 0;
        if (0 < param_4 - (long)(param_3 + 2)) goto LAB_00135be0;
LAB_00135c2c:
        uVar33 = 0;
        if (0 < param_4 - (long)(param_3 + 3)) goto LAB_00135bf8;
LAB_00135c40:
        uVar36 = 0;
        if (0 < param_4 - (long)(param_3 + 4)) goto LAB_00135c10;
LAB_00135c54:
        uVar23 = 0;
      }
      else {
        uVar21 = (uint)param_3[1] << 0x18;
        if (param_4 - (long)(param_3 + 2) < 1) goto LAB_00135c2c;
LAB_00135be0:
        uVar33 = (uint)param_3[2] << 0x10;
        if (param_4 - (long)(param_3 + 3) < 1) goto LAB_00135c40;
LAB_00135bf8:
        uVar36 = (uint)param_3[3] << 8;
        if (param_4 - (long)(param_3 + 4) < 1) goto LAB_00135c54;
LAB_00135c10:
        uVar23 = (ulong)param_3[4];
      }
      if (param_4 - (long)(param_3 + 5) < 1) {
        uVar22 = 0;
      }
      else {
        uVar22 = (uint)param_3[5] << 0x18;
      }
      if (param_4 - (long)(param_3 + 6) < 1) {
        uVar34 = 0;
      }
      else {
        uVar34 = (uint)param_3[6] << 0x10;
      }
      if (param_4 - (long)(param_3 + 7) < 1) {
        uVar37 = 0;
      }
      else {
        uVar37 = (uint)param_3[7] << 8;
      }
      uVar23 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar23 | (uVar33 | uVar21 | uVar36)) << 0x20;
LAB_00135cd8:
      uVar15 = uVar15 | uVar23 >> 8;
      puVar39 = (undefined1 *)(param_5 + -1);
      auStack_98[3] = 0x14;
      auStack_98[4] = 0x18;
      uVar14 = param_6 - 1;
      puVar1 = puVar39 + param_6;
      auStack_98[5] = 0x1c;
      auStack_98[6] = 0x20;
      puVar41 = (ulong *)(param_3 + 7);
      puVar43 = (undefined1 *)(param_1 + -1);
      puVar44 = (undefined1 *)(param_2 + -1);
      uVar40 = ~(ulong)puVar1;
      uVar23 = 7;
      do {
        uVar17 = auStack_98[5];
        uVar18 = auStack_98[4];
        lVar16 = (long)uVar23 >> 3;
        if (param_4 - (long)puVar41 < 8) {
          if (param_4 - (long)puVar41 < 1) {
            uVar21 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_00135d78;
LAB_00135dc4:
            uVar33 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_00135d90;
LAB_00135dd8:
            uVar36 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_00135da8;
LAB_00135dec:
            uVar28 = 0;
          }
          else {
            uVar21 = (uint)(byte)*puVar41 << 0x18;
            if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_00135dc4;
LAB_00135d78:
            uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
            if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_00135dd8;
LAB_00135d90:
            uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
            if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00135dec;
LAB_00135da8:
            uVar28 = (ulong)*(byte *)((long)puVar41 + 3);
          }
          if (param_4 - ((long)puVar41 + 4) < 1) {
            uVar22 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_00135e20;
LAB_00135e40:
            uVar34 = 0;
          }
          else {
            uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
            if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_00135e40;
LAB_00135e20:
            uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
          }
          if (param_4 - ((long)puVar41 + 6) < 1) {
            uVar37 = 0;
          }
          else {
            uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
          }
          if (param_4 - ((long)puVar41 + 7) < 1) {
            uVar24 = 0;
          }
          else {
            uVar24 = (ulong)*(byte *)((long)puVar41 + 7);
          }
          uVar24 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar28 | (uVar33 | uVar21 | uVar36)) << 0x20
                   | uVar24;
        }
        else {
          uVar28 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
          uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
          uVar24 = uVar28 >> 0x20 | uVar28 << 0x20;
        }
        uVar28 = 0x3f - uVar23;
        uVar23 = uVar23 & 7;
        uVar15 = uVar24 >> (uVar28 & 0x3f) | uVar15;
        puVar41 = (ulong *)((long)puVar41 + lVar16);
        puVar30 = puVar43 + 1;
        while( true ) {
          puVar43 = puVar30;
          if (uVar15 < *(ulong *)(param_8 + 0x150)) {
            puVar25 = (ushort *)(*(long *)(param_8 + 0x2c0) + (uVar15 >> 0x36) * 2);
            uVar28 = (ulong)*(byte *)(*(long *)(param_8 + 0x2b8) + (uVar15 >> 0x36));
          }
          else {
            lVar16 = *(long *)(param_8 + 0x2b0);
            if (uVar15 < *(ulong *)(param_8 + 0x158)) {
              puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x35) - *(long *)(param_8 + 0x58)) * 2);
              uVar28 = 0xb;
            }
            else if (uVar15 < *(ulong *)(param_8 + 0x160)) {
              puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x34) - *(long *)(param_8 + 0x60)) * 2);
              uVar28 = 0xc;
            }
            else if (uVar15 < *(ulong *)(param_8 + 0x168)) {
              puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x33) - *(long *)(param_8 + 0x68)) * 2);
              uVar28 = 0xd;
            }
            else if (uVar15 < *(ulong *)(param_8 + 0x170)) {
              uVar28 = 0xe;
              puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x32) - *(long *)(param_8 + 0x70)) * 2);
            }
            else if (uVar15 < *(ulong *)(param_8 + 0x178)) {
              uVar28 = 0xf;
              puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x31) - *(long *)(param_8 + 0x78)) * 2);
            }
            else if (uVar15 < *(ulong *)(param_8 + 0x180)) {
              uVar28 = 0x10;
              puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x30) - *(long *)(param_8 + 0x80)) * 2);
            }
            else {
              uVar28 = (ulong)*(int *)(param_8 + 0x29c);
              puVar25 = (ushort *)(lVar16 + (long)(*(int *)(param_8 + 0x288) + -1) * 2);
            }
          }
          uVar23 = uVar28 + uVar23;
          uVar15 = uVar15 << (uVar28 & 0x3f);
          lVar16 = (ulong)*puVar25 - 0x100;
          if (-1 < lVar16) break;
          *puVar43 = (char)*puVar25;
          if (puVar44 <= puVar43) goto LAB_00137b1c;
          if (uVar15 < *(ulong *)(param_8 + 0x150)) {
            puVar25 = (ushort *)(*(long *)(param_8 + 0x2c0) + (uVar15 >> 0x36) * 2);
            uVar28 = (ulong)*(byte *)(*(long *)(param_8 + 0x2b8) + (uVar15 >> 0x36));
          }
          else {
            lVar16 = *(long *)(param_8 + 0x2b0);
            if (uVar15 < *(ulong *)(param_8 + 0x158)) {
              puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x35) - *(long *)(param_8 + 0x58)) * 2);
              uVar28 = 0xb;
            }
            else if (uVar15 < *(ulong *)(param_8 + 0x160)) {
              puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x34) - *(long *)(param_8 + 0x60)) * 2);
              uVar28 = 0xc;
            }
            else if (uVar15 < *(ulong *)(param_8 + 0x168)) {
              puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x33) - *(long *)(param_8 + 0x68)) * 2);
              uVar28 = 0xd;
            }
            else if (uVar15 < *(ulong *)(param_8 + 0x170)) {
              puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x32) - *(long *)(param_8 + 0x70)) * 2);
              uVar28 = 0xe;
            }
            else if (uVar15 < *(ulong *)(param_8 + 0x178)) {
              puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x31) - *(long *)(param_8 + 0x78)) * 2);
              uVar28 = 0xf;
            }
            else if (uVar15 < *(ulong *)(param_8 + 0x180)) {
              puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x30) - *(long *)(param_8 + 0x80)) * 2);
              uVar28 = 0x10;
            }
            else {
              uVar28 = (ulong)*(int *)(param_8 + 0x29c);
              puVar25 = (ushort *)(lVar16 + (long)(*(int *)(param_8 + 0x288) + -1) * 2);
            }
          }
          uVar23 = uVar28 + uVar23;
          uVar15 = uVar15 << (uVar28 & 0x3f);
          lVar16 = (ulong)*puVar25 - 0x100;
          if (-1 < lVar16) goto LAB_00136298;
          if (param_4 - (long)puVar41 < 8) {
            if (param_4 - (long)puVar41 < 1) {
              uVar21 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_00135f64;
LAB_00135fb0:
              uVar33 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_00135f7c;
LAB_00135fc4:
              uVar36 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_00135f94;
LAB_00135fd8:
              uVar28 = 0;
            }
            else {
              uVar21 = (uint)(byte)*puVar41 << 0x18;
              if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_00135fb0;
LAB_00135f64:
              uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
              if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_00135fc4;
LAB_00135f7c:
              uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
              if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00135fd8;
LAB_00135f94:
              uVar28 = (ulong)*(byte *)((long)puVar41 + 3);
            }
            if (param_4 - ((long)puVar41 + 4) < 1) {
              uVar22 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_0013600c;
LAB_0013602c:
              uVar34 = 0;
            }
            else {
              uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
              if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_0013602c;
LAB_0013600c:
              uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
            }
            if (param_4 - ((long)puVar41 + 6) < 1) {
              uVar37 = 0;
            }
            else {
              uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
            }
            if (param_4 - ((long)puVar41 + 7) < 1) {
              uVar24 = 0;
            }
            else {
              uVar24 = (ulong)*(byte *)((long)puVar41 + 7);
            }
            uVar24 = (ulong)(uVar34 | uVar22 | uVar37) |
                     (uVar28 | (uVar33 | uVar21 | uVar36)) << 0x20 | uVar24;
          }
          else {
            uVar28 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
            uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
            uVar24 = uVar28 >> 0x20 | uVar28 << 0x20;
          }
          puVar41 = (ulong *)((long)puVar41 + ((long)uVar23 >> 3));
          puVar43[1] = (char)*puVar25;
          uVar15 = uVar24 >> (0x3f - uVar23 & 0x3f) | uVar15;
          uVar23 = uVar23 & 7;
          puVar30 = puVar43 + 2;
          if (puVar44 <= puVar43 + 1) {
            puVar43 = puVar43 + 1;
            goto LAB_00137b1c;
          }
        }
        puVar43 = puVar43 + -1;
LAB_00136298:
        if (param_4 - (long)puVar41 < 8) {
          if (param_4 - (long)puVar41 < 1) {
            uVar21 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_001362d4;
LAB_00136320:
            uVar33 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_001362ec;
LAB_00136334:
            uVar36 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_00136304;
LAB_00136348:
            uVar28 = 0;
          }
          else {
            uVar21 = (uint)(byte)*puVar41 << 0x18;
            if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_00136320;
LAB_001362d4:
            uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
            if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_00136334;
LAB_001362ec:
            uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
            if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00136348;
LAB_00136304:
            uVar28 = (ulong)*(byte *)((long)puVar41 + 3);
          }
          if (param_4 - ((long)puVar41 + 4) < 1) {
            uVar22 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_0013637c;
LAB_0013639c:
            uVar34 = 0;
          }
          else {
            uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
            if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_0013639c;
LAB_0013637c:
            uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
          }
          if (param_4 - ((long)puVar41 + 6) < 1) {
            uVar37 = 0;
          }
          else {
            uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
          }
          if (param_4 - ((long)puVar41 + 7) < 1) {
            uVar24 = 0;
          }
          else {
            uVar24 = (ulong)*(byte *)((long)puVar41 + 7);
          }
          uVar24 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar28 | (uVar33 | uVar21 | uVar36)) << 0x20
                   | uVar24;
        }
        else {
          uVar28 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
          uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
          uVar24 = uVar28 >> 0x20 | uVar28 << 0x20;
        }
        uVar29 = uVar24 >> (0x3f - uVar23 & 0x3f) | uVar15;
        lVar32 = lVar16 * 8;
        puVar41 = (ulong *)((long)puVar41 + ((long)uVar23 >> 3));
        uVar10 = *(ushort *)(&DAT_039c40c4 + lVar32);
        uVar24 = (ulong)uVar10;
        uVar35 = (ulong)(byte)(&DAT_039c40c7)[lVar32];
        uVar28 = uVar23 & 7;
        uVar21 = (uint)(byte)(&DAT_039c40c7)[lVar32];
        if (0x13 < lVar16) {
          if (*(int *)(&DAT_039c40c0 + lVar16 * 8) != 0) {
            uVar23 = (ulong)(byte)(&DAT_039c40c6)[lVar32] - 1;
            uVar15 = uVar29 << (uVar23 & 0x3f);
            uVar23 = uVar28 + uVar23;
            uVar29 = (long)*(int *)(&DAT_039c40c0 + lVar16 * 8) +
                     (uVar29 >> ((ulong)(0x41 - (byte)(&DAT_039c40c6)[lVar32]) & 0x3f)) * 2 + 2;
            auStack_98[4] = uVar29;
            auStack_98[5] = uVar18;
            auStack_98[6] = uVar17;
            goto joined_r0x00136448;
          }
          uVar18 = uVar29 >> 0x3d;
          uVar15 = uVar29 << 3;
          uVar23 = uVar28 + 3;
          if (uVar21 == 0) {
            puVar30 = puVar43 + uVar18 * -2 + -2;
            if ((long)puVar30 - (long)puVar39 < 0) {
              puVar30 = puVar39 + ((long)puVar30 - (long)puVar39 & uVar14);
              uVar18 = (long)puVar1 - (long)puVar30;
              if ((long)uVar18 < (long)uVar24) {
                uVar17 = uVar18;
                puVar27 = puVar43;
                puVar38 = puVar30;
                if ((uVar18 & 7) != 0) {
                  lVar16 = -(uVar18 & 7);
                  do {
                    puVar38 = puVar38 + 1;
                    uVar17 = uVar17 - 1;
                    lVar16 = lVar16 + 1;
                    puVar27 = puVar27 + 1;
                    *puVar27 = *puVar38;
                  } while (lVar16 != 0);
                }
                if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
                  puVar38 = puVar38 + 4;
                  puVar20 = puVar27;
                  do {
                    puVar20[1] = puVar38[-3];
                    puVar20[2] = puVar38[-2];
                    puVar20[3] = puVar38[-1];
                    puVar20[4] = *puVar38;
                    puVar20[5] = puVar38[1];
                    puVar20[6] = puVar38[2];
                    puVar20[7] = puVar38[3];
                    puVar27 = puVar20 + 8;
                    uVar17 = uVar17 - 8;
                    puVar20[8] = puVar38[4];
                    puVar38 = puVar38 + 8;
                    puVar20 = puVar27;
                  } while (uVar17 != 0);
                }
                uVar18 = uVar24 - uVar18;
                puVar38 = puVar39;
                if ((uVar18 & 7) != 0) {
                  lVar16 = -(uVar18 & 7);
                  do {
                    puVar38 = puVar38 + 1;
                    uVar18 = uVar18 - 1;
                    lVar16 = lVar16 + 1;
                    puVar27 = puVar27 + 1;
                    *puVar27 = *puVar38;
                  } while (lVar16 != 0);
                }
                if ((undefined1 *)0x6 < puVar30 + uVar24 + uVar40) {
                  puVar27 = puVar27 + 4;
                  puVar38 = puVar38 + 4;
                  do {
                    puVar27[-3] = puVar38[-3];
                    puVar27[-2] = puVar38[-2];
                    puVar27[-1] = puVar38[-1];
                    *puVar27 = *puVar38;
                    puVar27[1] = puVar38[1];
                    puVar27[2] = puVar38[2];
                    puVar27[3] = puVar38[3];
                    puVar30 = puVar38 + 4;
                    uVar18 = uVar18 - 8;
                    puVar38 = puVar38 + 8;
                    puVar27[4] = *puVar30;
                    puVar27 = puVar27 + 8;
                  } while (uVar18 != 0);
                }
                goto joined_r0x00137190;
              }
            }
            if (puVar30 != (undefined1 *)0x0) {
              puVar43[1] = puVar30[1];
              puVar43[2] = puVar30[2];
              puVar43[3] = puVar30[3];
              puVar43[4] = puVar30[4];
              puVar43[5] = puVar30[5];
              puVar43[6] = puVar30[6];
              puVar43[7] = puVar30[7];
              puVar43[8] = puVar30[8];
            }
            goto joined_r0x00137190;
          }
          if (uVar10 != 0x9d) {
            uVar17 = uVar23 + uVar35;
            uVar28 = uVar15 >> ((ulong)-uVar21 & 0x3f);
            sVar3 = uVar28 + uVar24;
            if (param_4 - (long)puVar41 < 8) {
              if (param_4 - (long)puVar41 < 1) {
                uVar21 = 0;
                if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_00136adc;
LAB_00136bf8:
                uVar33 = 0;
              }
              else {
                uVar21 = (uint)(byte)*puVar41 << 0x18;
                if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_00136bf8;
LAB_00136adc:
                uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
              }
              if (param_4 - ((long)puVar41 + 2) < 1) {
                uVar36 = 0;
                if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_00136c28;
LAB_00136ccc:
                uVar23 = 0;
              }
              else {
                uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
                if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00136ccc;
LAB_00136c28:
                uVar23 = (ulong)*(byte *)((long)puVar41 + 3);
              }
              if (param_4 - ((long)puVar41 + 4) < 1) {
                uVar22 = 0;
              }
              else {
                uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
              }
              if (param_4 - ((long)puVar41 + 5) < 1) {
                uVar34 = 0;
              }
              else {
                uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
              }
              if (param_4 - ((long)puVar41 + 6) < 1) {
                uVar37 = 0;
              }
              else {
                uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
              }
              if (param_4 - ((long)puVar41 + 7) < 1) {
                uVar29 = 0;
              }
              else {
                uVar29 = (ulong)*(byte *)((long)puVar41 + 7);
              }
              uVar29 = (ulong)(uVar34 | uVar22 | uVar37) |
                       (uVar23 | (uVar33 | uVar21 | uVar36)) << 0x20 | uVar29;
            }
            else {
              uVar23 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              uVar29 = uVar23 >> 0x20 | uVar23 << 0x20;
            }
            uVar23 = uVar17 & 7;
            puVar30 = puVar43 + uVar18 * -2 + -2;
            puVar41 = (ulong *)((long)puVar41 + (uVar17 >> 3));
            uVar15 = uVar29 >> (0x3f - uVar17 & 0x3f) | uVar15 << (uVar35 & 0x3f);
            if ((long)puVar30 - (long)puVar39 < 0) {
              puVar30 = puVar39 + ((long)puVar30 - (long)puVar39 & uVar14);
              uVar18 = (long)puVar1 - (long)puVar30;
              uVar17 = sVar3 - uVar18;
              if (uVar17 != 0 && (long)uVar18 <= (long)sVar3) {
                puVar38 = puVar30;
                puVar27 = puVar43;
                if ((uVar18 & 7) != 0) {
                  lVar16 = -(uVar18 & 7);
                  do {
                    puVar38 = puVar38 + 1;
                    uVar18 = uVar18 - 1;
                    lVar16 = lVar16 + 1;
                    puVar27 = puVar27 + 1;
                    *puVar27 = *puVar38;
                  } while (lVar16 != 0);
                }
                if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
                  puVar38 = puVar38 + 4;
                  puVar20 = puVar27;
                  do {
                    puVar20[1] = puVar38[-3];
                    puVar20[2] = puVar38[-2];
                    puVar20[3] = puVar38[-1];
                    puVar20[4] = *puVar38;
                    puVar20[5] = puVar38[1];
                    puVar20[6] = puVar38[2];
                    puVar20[7] = puVar38[3];
                    puVar27 = puVar20 + 8;
                    uVar18 = uVar18 - 8;
                    puVar20[8] = puVar38[4];
                    puVar38 = puVar38 + 8;
                    puVar20 = puVar27;
                  } while (uVar18 != 0);
                }
                lVar16 = uVar24 + uVar28 + uVar40;
                puVar38 = puVar39;
                if ((uVar17 & 7) != 0) {
                  lVar32 = -(uVar17 & 7);
                  do {
                    puVar38 = puVar38 + 1;
                    uVar17 = uVar17 - 1;
                    lVar32 = lVar32 + 1;
                    puVar27 = puVar27 + 1;
                    *puVar27 = *puVar38;
                  } while (lVar32 != 0);
                }
                uVar24 = sVar3;
                if ((undefined1 *)0x6 < puVar30 + lVar16) {
                  puVar27 = puVar27 + 4;
                  puVar38 = puVar38 + 4;
                  do {
                    puVar27[-3] = puVar38[-3];
                    puVar27[-2] = puVar38[-2];
                    puVar27[-1] = puVar38[-1];
                    *puVar27 = *puVar38;
                    puVar27[1] = puVar38[1];
                    puVar27[2] = puVar38[2];
                    puVar27[3] = puVar38[3];
                    puVar30 = puVar38 + 4;
                    uVar17 = uVar17 - 8;
                    puVar38 = puVar38 + 8;
                    puVar27[4] = *puVar30;
                    puVar27 = puVar27 + 8;
                  } while (uVar17 != 0);
                }
                goto joined_r0x00137190;
              }
            }
            uVar24 = sVar3;
            if (puVar30 != (undefined1 *)0x0) {
              puVar43[1] = puVar30[1];
              puVar43[2] = puVar30[2];
              puVar43[3] = puVar30[3];
              puVar43[4] = puVar30[4];
              puVar43[5] = puVar30[5];
              puVar43[6] = puVar30[6];
              puVar43[7] = puVar30[7];
              puVar38 = puVar43 + 8;
              puVar30 = puVar30 + 8;
              puVar43[8] = *puVar30;
              uVar18 = sVar3 - 8;
              if ((uVar18 & 7) != 0) {
                lVar16 = -(uVar18 & 7);
                do {
                  puVar30 = puVar30 + 1;
                  uVar18 = uVar18 - 1;
                  lVar16 = lVar16 + 1;
                  puVar38 = puVar38 + 1;
                  *puVar38 = *puVar30;
                } while (lVar16 != 0);
              }
              if (6 < sVar3 - 9) {
                puVar30 = puVar30 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar38[-3] = puVar30[-3];
                  puVar38[-2] = puVar30[-2];
                  puVar38[-1] = puVar30[-1];
                  *puVar38 = *puVar30;
                  puVar38[1] = puVar30[1];
                  puVar38[2] = puVar30[2];
                  puVar38[3] = puVar30[3];
                  puVar38[4] = puVar30[4];
                  uVar18 = uVar18 - 8;
                  puVar30 = puVar30 + 8;
                  puVar38 = puVar38 + 8;
                } while (uVar18 != 0);
              }
            }
            goto joined_r0x00137190;
          }
          if ((uVar29 & 0x1fffffffffffffff) >> 0x3c == 0) {
            uVar15 = uVar29 << 10;
            uVar28 = uVar28 + 10;
            uVar24 = (uVar29 >> 0x36 & 0x3f) + 0x9d;
joined_r0x001370c4:
            lVar16 = param_4 - (long)puVar41;
            if (7 < lVar16) goto LAB_00136560;
LAB_00136b6c:
            if (lVar16 < 1) {
              uVar21 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_00136b8c;
LAB_00136c68:
              uVar33 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_00136ba4;
LAB_00136c7c:
              uVar36 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_00136bbc;
LAB_00136c90:
              uVar23 = 0;
            }
            else {
              uVar21 = (uint)(byte)*puVar41 << 0x18;
              if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_00136c68;
LAB_00136b8c:
              uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
              if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_00136c7c;
LAB_00136ba4:
              uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
              if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00136c90;
LAB_00136bbc:
              uVar23 = (ulong)*(byte *)((long)puVar41 + 3);
            }
            if (param_4 - ((long)puVar41 + 4) < 1) {
              uVar22 = 0;
            }
            else {
              uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
            }
            if (param_4 - ((long)puVar41 + 5) < 1) {
              uVar34 = 0;
            }
            else {
              uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
            }
            if (param_4 - ((long)puVar41 + 6) < 1) {
              uVar37 = 0;
            }
            else {
              uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
            }
            if (param_4 - ((long)puVar41 + 7) < 1) {
              uVar17 = 0;
            }
            else {
              uVar17 = (ulong)*(byte *)((long)puVar41 + 7);
            }
            uVar17 = (ulong)(uVar34 | uVar22 | uVar37) |
                     (uVar23 | (uVar33 | uVar21 | uVar36)) << 0x20 | uVar17;
            if (uVar24 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_00136df0;
          }
          else {
            if ((uVar29 >> 0x3b & 1) == 0) {
              uVar15 = uVar29 << 0xc;
              uVar28 = uVar28 + 0xc;
              uVar24 = (uVar29 >> 0x34 & 0x7f) + 0xdd;
              goto joined_r0x001370c4;
            }
            if ((uVar29 >> 0x3a & 1) == 0) {
              uVar15 = uVar29 << 0xe;
              uVar28 = uVar28 + 0xe;
              uVar24 = (uVar29 >> 0x32 & 0xff) + 0x15d;
            }
            else {
              if ((uVar29 >> 0x39 & 1) == 0) {
                uVar15 = uVar29 << 0x11;
                uVar28 = uVar28 + 0x11;
                uVar24 = (uVar29 >> 0x2f & 0x3ff) + 0x25d;
                goto joined_r0x001370c4;
              }
              uVar15 = uVar29 << 0x15;
              uVar28 = uVar28 + 0x15;
              uVar24 = (uVar29 >> 0x2b & 0x3fff) + 0x65d;
            }
            lVar16 = param_4 - (long)puVar41;
            if (lVar16 < 8) goto LAB_00136b6c;
LAB_00136560:
            uVar23 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar17 = uVar23 >> 0x20 | uVar23 << 0x20;
            if (uVar24 <= (ulong)((long)puVar44 - (long)puVar43)) {
LAB_00136df0:
              uVar15 = uVar17 >> (0x3f - uVar28 & 0x3f) | uVar15;
              puVar41 = (ulong *)((long)puVar41 + (uVar28 >> 3));
              uVar23 = uVar28 & 7;
              puVar30 = puVar43 + uVar18 * -2 + -2;
              if ((long)puVar30 - (long)puVar39 < 0) {
                puVar30 = puVar39 + ((long)puVar30 - (long)puVar39 & uVar14);
                uVar17 = (long)puVar1 - (long)puVar30;
                uVar28 = uVar24 - uVar17;
                if (uVar28 != 0 && (long)uVar17 <= (long)uVar24) {
                  puVar27 = puVar43;
                  puVar38 = puVar30;
                  if ((uVar17 & 7) != 0) {
                    lVar16 = -(uVar17 & 7);
                    do {
                      puVar38 = puVar38 + 1;
                      uVar17 = uVar17 - 1;
                      lVar16 = lVar16 + 1;
                      puVar27 = puVar27 + 1;
                      *puVar27 = *puVar38;
                    } while (lVar16 != 0);
                  }
                  if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
                    puVar38 = puVar38 + 4;
                    puVar20 = puVar27;
                    do {
                      puVar20[1] = puVar38[-3];
                      puVar20[2] = puVar38[-2];
                      puVar20[3] = puVar38[-1];
                      puVar20[4] = *puVar38;
                      puVar20[5] = puVar38[1];
                      puVar20[6] = puVar38[2];
                      puVar20[7] = puVar38[3];
                      puVar27 = puVar20 + 8;
                      uVar17 = uVar17 - 8;
                      puVar20[8] = puVar38[4];
                      puVar38 = puVar38 + 8;
                      puVar20 = puVar27;
                    } while (uVar17 != 0);
                  }
                  puVar38 = puVar39;
                  if ((uVar28 & 7) != 0) {
                    lVar16 = -(uVar28 & 7);
                    do {
                      puVar38 = puVar38 + 1;
                      uVar28 = uVar28 - 1;
                      lVar16 = lVar16 + 1;
                      puVar27 = puVar27 + 1;
                      *puVar27 = *puVar38;
                    } while (lVar16 != 0);
                  }
                  if ((undefined1 *)0x6 < puVar30 + uVar24 + uVar40) {
                    puVar27 = puVar27 + 4;
                    puVar38 = puVar38 + 4;
                    do {
                      puVar27[-3] = puVar38[-3];
                      puVar27[-2] = puVar38[-2];
                      puVar27[-1] = puVar38[-1];
                      *puVar27 = *puVar38;
                      puVar27[1] = puVar38[1];
                      puVar27[2] = puVar38[2];
                      puVar27[3] = puVar38[3];
                      puVar30 = puVar38 + 4;
                      uVar28 = uVar28 - 8;
                      puVar38 = puVar38 + 8;
                      puVar27[4] = *puVar30;
                      puVar27 = puVar27 + 8;
                    } while (uVar28 != 0);
                  }
                  goto joined_r0x00137190;
                }
              }
              if (puVar30 != (undefined1 *)0x0) {
                if (uVar29 >> 0x3e == 0) {
                  if (uVar18 == 0) {
                    uVar7 = puVar30[1];
                    uVar8 = puVar30[2];
                    uVar18 = uVar24 >> 1;
                    uVar28 = uVar18 - 1;
                    uVar17 = uVar24 >> 1 & 7;
                    if (uVar17 == 0) {
                      puVar30 = (undefined1 *)0x0;
                      puVar38 = puVar43;
                    }
                    else {
                      lVar16 = -uVar17;
                      puVar38 = puVar43;
                      do {
                        puVar30 = puVar38;
                        puVar38 = puVar30 + 2;
                        *puVar38 = uVar8;
                        uVar18 = uVar18 - 1;
                        lVar16 = lVar16 + 1;
                        puVar30[1] = uVar7;
                      } while (lVar16 != 0);
                    }
                    if (6 < uVar28) {
                      puVar38 = puVar38 + -2;
                      do {
                        puVar30 = puVar38 + 0x10;
                        *puVar30 = uVar8;
                        uVar18 = uVar18 - 8;
                        puVar38[3] = uVar7;
                        puVar38[4] = uVar8;
                        puVar38[5] = uVar7;
                        puVar38[6] = uVar8;
                        puVar38[7] = uVar7;
                        puVar38[8] = uVar8;
                        puVar38[9] = uVar7;
                        puVar38[10] = uVar8;
                        puVar38[0xb] = uVar7;
                        puVar38[0xc] = uVar8;
                        puVar38[0xd] = uVar7;
                        puVar38[0xe] = uVar8;
                        puVar38[0xf] = uVar7;
                        puVar38[0x11] = uVar7;
                        puVar38[0x12] = uVar8;
                        puVar38 = puVar30;
                      } while (uVar18 != 0);
                    }
                    if ((uVar24 & 1) != 0) {
                      puVar30[3] = uVar7;
                    }
                  }
                  else {
                    uVar33 = 3 - (int)puVar43;
                    uVar21 = uVar33 & 3;
                    if ((uVar33 & 3) == 0) {
                      puVar38 = puVar43;
                    }
                    else {
                      puVar38 = puVar43 + 1;
                      *puVar38 = puVar30[1];
                      puVar27 = puVar30 + 1;
                      if (uVar21 != 1) {
                        puVar38 = puVar43 + 2;
                        *puVar38 = puVar30[2];
                        puVar27 = puVar30 + 2;
                        if (uVar21 == 3) {
                          puVar30 = puVar30 + 3;
                          puVar43[3] = *puVar30;
                          puVar38 = puVar43 + 3;
                          goto LAB_001370d8;
                        }
                      }
                      puVar30 = puVar27;
                    }
LAB_001370d8:
                    uVar5 = *(undefined4 *)(puVar30 + 1);
                    *(undefined4 *)(puVar38 + 1) = uVar5;
                    puVar26 = (undefined4 *)(puVar38 + 5);
                    do {
                      bVar11 = puVar26 < puVar43 + (uVar24 - 3);
                      *puVar26 = uVar5;
                      puVar26 = puVar26 + 1;
                    } while (bVar11);
                  }
                }
                else {
                  puVar43[1] = puVar30[1];
                  puVar43[2] = puVar30[2];
                  puVar43[3] = puVar30[3];
                  puVar43[4] = puVar30[4];
                  puVar43[5] = puVar30[5];
                  puVar43[6] = puVar30[6];
                  puVar43[7] = puVar30[7];
                  puVar38 = puVar43 + 8;
                  puVar30 = puVar30 + 8;
                  puVar43[8] = *puVar30;
                  uVar18 = uVar24 - 8;
                  if ((uVar18 & 7) != 0) {
                    lVar16 = -(uVar18 & 7);
                    do {
                      puVar30 = puVar30 + 1;
                      uVar18 = uVar18 - 1;
                      lVar16 = lVar16 + 1;
                      puVar38 = puVar38 + 1;
                      *puVar38 = *puVar30;
                    } while (lVar16 != 0);
                  }
                  if (6 < uVar24 - 9) {
                    puVar30 = puVar30 + 4;
                    puVar38 = puVar38 + 4;
                    do {
                      puVar38[-3] = puVar30[-3];
                      puVar38[-2] = puVar30[-2];
                      puVar38[-1] = puVar30[-1];
                      *puVar38 = *puVar30;
                      puVar38[1] = puVar30[1];
                      puVar38[2] = puVar30[2];
                      puVar38[3] = puVar30[3];
                      puVar38[4] = puVar30[4];
                      uVar18 = uVar18 - 8;
                      puVar30 = puVar30 + 8;
                      puVar38 = puVar38 + 8;
                    } while (uVar18 != 0);
                  }
                }
              }
              goto joined_r0x00137190;
            }
          }
          FUN_0010a430();
          pcVar19 = *(code **)PTR_PTR_043722f8;
          if (pcVar19 == (code *)0x0) goto LAB_00137bd4;
          uVar12 = 0x12a;
LAB_00137bcc:
          (*pcVar19)(0,"v:/devel/projects/oodle2/core/rrlzhdecompresssub.inl",uVar12,
                     "OODLE ERROR : LZ corruption : bad long len, overrun\n");
LAB_00137bd4:
          FUN_0010a450();
          return 0;
        }
        uVar23 = uVar29 >> 0x3b & 0x18;
        puVar2 = (ulong *)((long)auStack_98 + uVar23 + 0x18);
        uVar15 = uVar29 << 2;
        uVar29 = *puVar2;
        *puVar2 = *(ulong *)((long)auStack_98 + uVar23 + 0x10);
        uVar12 = *(undefined8 *)((long)auStack_98 + uVar23 + 8);
        *(undefined8 *)((long)auStack_98 + uVar23 + 8) = *(undefined8 *)((long)auStack_98 + uVar23);
        *(undefined8 *)((long)auStack_98 + uVar23 + 0x10) = uVar12;
        uVar23 = uVar28 + 2;
        auStack_98[3] = uVar29;
joined_r0x00136448:
        if (uVar21 == 0) {
          puVar30 = puVar43 + -uVar29;
          if ((long)puVar30 - (long)puVar39 < 0) {
            puVar30 = puVar39 + ((long)puVar30 - (long)puVar39 & uVar14);
            uVar18 = (long)puVar1 - (long)puVar30;
            if ((long)uVar18 < (long)uVar24) {
              uVar17 = uVar18;
              puVar27 = puVar43;
              puVar38 = puVar30;
              if ((uVar18 & 7) != 0) {
                lVar16 = -(uVar18 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar17 = uVar17 - 1;
                  lVar16 = lVar16 + 1;
                  puVar27 = puVar27 + 1;
                  *puVar27 = *puVar38;
                } while (lVar16 != 0);
              }
              if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
                puVar38 = puVar38 + 4;
                puVar20 = puVar27;
                do {
                  puVar20[1] = puVar38[-3];
                  puVar20[2] = puVar38[-2];
                  puVar20[3] = puVar38[-1];
                  puVar20[4] = *puVar38;
                  puVar20[5] = puVar38[1];
                  puVar20[6] = puVar38[2];
                  puVar20[7] = puVar38[3];
                  puVar27 = puVar20 + 8;
                  uVar17 = uVar17 - 8;
                  puVar20[8] = puVar38[4];
                  puVar38 = puVar38 + 8;
                  puVar20 = puVar27;
                } while (uVar17 != 0);
              }
              uVar18 = uVar24 - uVar18;
              puVar38 = puVar39;
              if ((uVar18 & 7) != 0) {
                lVar16 = -(uVar18 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar18 = uVar18 - 1;
                  lVar16 = lVar16 + 1;
                  puVar27 = puVar27 + 1;
                  *puVar27 = *puVar38;
                } while (lVar16 != 0);
              }
              if ((undefined1 *)0x6 < puVar30 + uVar24 + uVar40) {
                puVar27 = puVar27 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar27[-3] = puVar38[-3];
                  puVar27[-2] = puVar38[-2];
                  puVar27[-1] = puVar38[-1];
                  *puVar27 = *puVar38;
                  puVar27[1] = puVar38[1];
                  puVar27[2] = puVar38[2];
                  puVar27[3] = puVar38[3];
                  puVar30 = puVar38 + 4;
                  uVar18 = uVar18 - 8;
                  puVar38 = puVar38 + 8;
                  puVar27[4] = *puVar30;
                  puVar27 = puVar27 + 8;
                } while (uVar18 != 0);
              }
              goto joined_r0x00137190;
            }
          }
          if (puVar30 != (undefined1 *)0x0) {
            *(undefined8 *)(puVar43 + 1) = *(undefined8 *)(puVar30 + 1);
          }
        }
        else {
          if (uVar10 == 0x9d) {
            if ((long)uVar15 < 0) {
              if ((uVar15 >> 0x3e & 1) == 0) {
                uVar17 = uVar15 << 9;
                uVar18 = uVar23 + 9;
                uVar24 = (uVar15 >> 0x37 & 0x7f) + 0xdd;
                goto joined_r0x00136b0c;
              }
              if ((uVar15 >> 0x3d & 1) == 0) {
                uVar17 = uVar15 << 0xb;
                uVar18 = uVar23 + 0xb;
                uVar24 = (uVar15 >> 0x35 & 0xff) + 0x15d;
              }
              else {
                if ((uVar15 >> 0x3c & 1) == 0) {
                  uVar17 = uVar15 << 0xe;
                  uVar18 = uVar23 + 0xe;
                  uVar24 = (uVar15 >> 0x32 & 0x3ff) + 0x25d;
                  goto joined_r0x00136b0c;
                }
                uVar17 = uVar15 << 0x12;
                uVar18 = uVar23 + 0x12;
                uVar24 = (uVar15 >> 0x2e & 0x3fff) + 0x65d;
              }
              lVar16 = param_4 - (long)puVar41;
              if (lVar16 < 8) goto LAB_001365f0;
LAB_00136474:
              uVar15 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
              uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
              uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
              if (uVar24 <= (ulong)((long)puVar44 - (long)puVar43)) {
LAB_001368c8:
                uVar23 = uVar18 & 7;
                puVar30 = puVar43 + -uVar29;
                puVar41 = (ulong *)((long)puVar41 + (uVar18 >> 3));
                uVar15 = uVar15 >> (0x3f - uVar18 & 0x3f) | uVar17;
                if ((long)puVar30 - (long)puVar39 < 0) {
                  puVar30 = puVar39 + ((long)puVar30 - (long)puVar39 & uVar14);
                  uVar18 = (long)puVar1 - (long)puVar30;
                  uVar17 = uVar24 - uVar18;
                  if (uVar17 != 0 && (long)uVar18 <= (long)uVar24) {
                    puVar27 = puVar43;
                    puVar38 = puVar30;
                    if ((uVar18 & 7) != 0) {
                      lVar16 = -(uVar18 & 7);
                      do {
                        puVar38 = puVar38 + 1;
                        uVar18 = uVar18 - 1;
                        lVar16 = lVar16 + 1;
                        puVar27 = puVar27 + 1;
                        *puVar27 = *puVar38;
                      } while (lVar16 != 0);
                    }
                    if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
                      puVar38 = puVar38 + 4;
                      puVar20 = puVar27;
                      do {
                        puVar20[1] = puVar38[-3];
                        puVar20[2] = puVar38[-2];
                        puVar20[3] = puVar38[-1];
                        puVar20[4] = *puVar38;
                        puVar20[5] = puVar38[1];
                        puVar20[6] = puVar38[2];
                        puVar20[7] = puVar38[3];
                        puVar27 = puVar20 + 8;
                        uVar18 = uVar18 - 8;
                        puVar20[8] = puVar38[4];
                        puVar38 = puVar38 + 8;
                        puVar20 = puVar27;
                      } while (uVar18 != 0);
                    }
                    puVar38 = puVar39;
                    if ((uVar17 & 7) != 0) {
                      lVar16 = -(uVar17 & 7);
                      do {
                        puVar38 = puVar38 + 1;
                        uVar17 = uVar17 - 1;
                        lVar16 = lVar16 + 1;
                        puVar27 = puVar27 + 1;
                        *puVar27 = *puVar38;
                      } while (lVar16 != 0);
                    }
                    if ((undefined1 *)0x6 < puVar30 + uVar24 + uVar40) {
                      puVar27 = puVar27 + 4;
                      puVar38 = puVar38 + 4;
                      do {
                        puVar27[-3] = puVar38[-3];
                        puVar27[-2] = puVar38[-2];
                        puVar27[-1] = puVar38[-1];
                        *puVar27 = *puVar38;
                        puVar27[1] = puVar38[1];
                        puVar27[2] = puVar38[2];
                        puVar27[3] = puVar38[3];
                        puVar30 = puVar38 + 4;
                        uVar17 = uVar17 - 8;
                        puVar38 = puVar38 + 8;
                        puVar27[4] = *puVar30;
                        puVar27 = puVar27 + 8;
                      } while (uVar17 != 0);
                    }
                    goto joined_r0x00137190;
                  }
                }
                if (puVar30 != (undefined1 *)0x0) {
                  if ((long)uVar29 < (long)uVar24) {
                    uVar17 = uVar24 - 1 >> 2;
                    uVar21 = (int)uVar17 + 1;
                    uVar18 = 0;
                    if (uVar17 != 0) {
                      lVar16 = (((ulong)uVar21 & 1) - 1) - uVar17;
                      uVar17 = uVar18;
                      do {
                        uVar18 = uVar17 + 8;
                        *(undefined4 *)(puVar43 + uVar17 + 1) =
                             *(undefined4 *)(puVar30 + uVar17 + 1);
                        lVar16 = lVar16 + 2;
                        *(undefined4 *)(puVar43 + uVar17 + 5) =
                             *(undefined4 *)(puVar30 + uVar17 + 5);
                        uVar17 = uVar18;
                      } while (lVar16 != 0);
                    }
                    if ((uVar21 & 1) != 0) {
                      uVar7 = puVar30[uVar18 | 2];
                      uVar8 = puVar30[uVar18 | 3];
                      uVar9 = puVar30[uVar18 + 4];
                      puVar43[uVar18 | 1] = puVar30[uVar18 | 1];
                      puVar43[uVar18 | 2] = uVar7;
                      puVar43[uVar18 | 3] = uVar8;
                      puVar43[uVar18 + 4] = uVar9;
                    }
                  }
                  else {
                    memmove(puVar43 + 1,puVar30 + 1,uVar24);
                  }
                }
                goto joined_r0x00137190;
              }
            }
            else {
              uVar17 = uVar15 << 7;
              uVar18 = uVar23 + 7;
              uVar24 = (uVar15 >> 0x39 & 0x3f) + 0x9d;
joined_r0x00136b0c:
              lVar16 = param_4 - (long)puVar41;
              if (7 < lVar16) goto LAB_00136474;
LAB_001365f0:
              if (lVar16 < 1) {
                uVar21 = 0;
                if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_00136610;
LAB_0013677c:
                uVar33 = 0;
                if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_00136628;
LAB_00136790:
                uVar36 = 0;
                if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_00136640;
LAB_001367a4:
                uVar23 = 0;
              }
              else {
                uVar21 = (uint)(byte)*puVar41 << 0x18;
                if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_0013677c;
LAB_00136610:
                uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
                if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_00136790;
LAB_00136628:
                uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
                if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_001367a4;
LAB_00136640:
                uVar23 = (ulong)*(byte *)((long)puVar41 + 3);
              }
              if (param_4 - ((long)puVar41 + 4) < 1) {
                uVar22 = 0;
                if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_001367d8;
LAB_0013681c:
                uVar34 = 0;
              }
              else {
                uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
                if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_0013681c;
LAB_001367d8:
                uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
              }
              if (param_4 - ((long)puVar41 + 6) < 1) {
                uVar37 = 0;
              }
              else {
                uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
              }
              if (param_4 - ((long)puVar41 + 7) < 1) {
                uVar15 = 0;
              }
              else {
                uVar15 = (ulong)*(byte *)((long)puVar41 + 7);
              }
              uVar15 = (ulong)(uVar34 | uVar22 | uVar37) |
                       (uVar23 | (uVar33 | uVar21 | uVar36)) << 0x20 | uVar15;
              if (uVar24 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_001368c8;
            }
            FUN_0010a430();
            pcVar19 = *(code **)PTR_PTR_043722f8;
            if (pcVar19 == (code *)0x0) goto LAB_00137bd4;
            uVar12 = 0xd5;
            goto LAB_00137bcc;
          }
          uVar23 = uVar23 + uVar35;
          uVar18 = uVar15 >> ((ulong)-uVar21 & 0x3f);
          sVar3 = uVar18 + uVar24;
          if (param_4 - (long)puVar41 < 8) {
            if (param_4 - (long)puVar41 < 1) {
              uVar21 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_00136598;
LAB_001366f4:
              uVar33 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_001365b0;
LAB_00136708:
              uVar36 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_001365c8;
LAB_0013671c:
              uVar17 = 0;
            }
            else {
              uVar21 = (uint)(byte)*puVar41 << 0x18;
              if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_001366f4;
LAB_00136598:
              uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
              if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_00136708;
LAB_001365b0:
              uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
              if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_0013671c;
LAB_001365c8:
              uVar17 = (ulong)*(byte *)((long)puVar41 + 3);
            }
            if (param_4 - ((long)puVar41 + 4) < 1) {
              uVar22 = 0;
            }
            else {
              uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
            }
            if (param_4 - ((long)puVar41 + 5) < 1) {
              uVar34 = 0;
            }
            else {
              uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
            }
            if (param_4 - ((long)puVar41 + 6) < 1) {
              uVar37 = 0;
            }
            else {
              uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
            }
            if (param_4 - ((long)puVar41 + 7) < 1) {
              uVar28 = 0;
            }
            else {
              uVar28 = (ulong)*(byte *)((long)puVar41 + 7);
            }
            uVar28 = (ulong)(uVar34 | uVar22 | uVar37) |
                     (uVar17 | (uVar33 | uVar21 | uVar36)) << 0x20 | uVar28;
          }
          else {
            uVar17 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar28 = uVar17 >> 0x20 | uVar17 << 0x20;
          }
          puVar41 = (ulong *)((long)puVar41 + ((long)uVar23 >> 3));
          uVar15 = uVar28 >> (0x3f - uVar23 & 0x3f) | uVar15 << (uVar35 & 0x3f);
          puVar30 = puVar43 + -uVar29;
          uVar23 = uVar23 & 7;
          if ((long)puVar30 - (long)puVar39 < 0) {
            puVar30 = puVar39 + ((long)puVar30 - (long)puVar39 & uVar14);
            uVar17 = (long)puVar1 - (long)puVar30;
            uVar28 = sVar3 - uVar17;
            if (uVar28 != 0 && (long)uVar17 <= (long)sVar3) {
              puVar27 = puVar43;
              puVar38 = puVar30;
              if ((uVar17 & 7) != 0) {
                lVar16 = -(uVar17 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar17 = uVar17 - 1;
                  lVar16 = lVar16 + 1;
                  puVar27 = puVar27 + 1;
                  *puVar27 = *puVar38;
                } while (lVar16 != 0);
              }
              if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
                puVar38 = puVar38 + 4;
                puVar20 = puVar27;
                do {
                  puVar20[1] = puVar38[-3];
                  puVar20[2] = puVar38[-2];
                  puVar20[3] = puVar38[-1];
                  puVar20[4] = *puVar38;
                  puVar20[5] = puVar38[1];
                  puVar20[6] = puVar38[2];
                  puVar20[7] = puVar38[3];
                  puVar27 = puVar20 + 8;
                  uVar17 = uVar17 - 8;
                  puVar20[8] = puVar38[4];
                  puVar38 = puVar38 + 8;
                  puVar20 = puVar27;
                } while (uVar17 != 0);
              }
              lVar16 = uVar24 + uVar18 + uVar40;
              puVar38 = puVar39;
              if ((uVar28 & 7) != 0) {
                lVar32 = -(uVar28 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar28 = uVar28 - 1;
                  lVar32 = lVar32 + 1;
                  puVar27 = puVar27 + 1;
                  *puVar27 = *puVar38;
                } while (lVar32 != 0);
              }
              uVar24 = sVar3;
              if ((undefined1 *)0x6 < puVar30 + lVar16) {
                puVar27 = puVar27 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar27[-3] = puVar38[-3];
                  puVar27[-2] = puVar38[-2];
                  puVar27[-1] = puVar38[-1];
                  *puVar27 = *puVar38;
                  puVar27[1] = puVar38[1];
                  puVar27[2] = puVar38[2];
                  puVar27[3] = puVar38[3];
                  puVar30 = puVar38 + 4;
                  uVar28 = uVar28 - 8;
                  puVar38 = puVar38 + 8;
                  puVar27[4] = *puVar30;
                  puVar27 = puVar27 + 8;
                } while (uVar28 != 0);
              }
              goto joined_r0x00137190;
            }
          }
          uVar24 = sVar3;
          if (puVar30 != (undefined1 *)0x0) {
            if ((uVar29 & 3) == 0) {
              uVar33 = 3 - (int)puVar43;
              uVar21 = uVar33 & 3;
              if ((uVar33 & 3) == 0) {
                puVar38 = puVar43;
              }
              else {
                puVar27 = puVar30 + 1;
                puVar38 = puVar43 + 1;
                *puVar38 = *puVar27;
                if (uVar21 != 1) {
                  puVar27 = puVar30 + 2;
                  puVar38 = puVar43 + 2;
                  *puVar38 = *puVar27;
                  if (uVar21 == 3) {
                    puVar43[3] = puVar30[3];
                    puVar38 = puVar43 + 3;
                    puVar30 = puVar30 + 3;
                    goto LAB_00136b18;
                  }
                }
                puVar30 = puVar27;
              }
LAB_00136b18:
              *(undefined4 *)(puVar38 + 1) = *(undefined4 *)(puVar30 + 1);
              puVar26 = (undefined4 *)(puVar38 + 5);
              puVar31 = (undefined4 *)(puVar30 + 5);
              do {
                bVar11 = puVar26 < puVar43 + (sVar3 - 3);
                *puVar26 = *puVar31;
                puVar26 = puVar26 + 1;
                puVar31 = puVar31 + 1;
              } while (bVar11);
            }
            else if (0 < (long)sVar3) {
              lVar16 = 0;
              do {
                lVar32 = lVar16 + 4;
                *(undefined4 *)(puVar43 + lVar16 + 1) = *(undefined4 *)(puVar30 + lVar16 + 1);
                lVar16 = lVar32;
              } while (lVar32 < (long)sVar3);
            }
          }
        }
joined_r0x00137190:
        puVar43 = puVar43 + uVar24;
        if (puVar44 <= puVar43) {
LAB_00137b1c:
          if (puVar43 == puVar44) {
            uVar15 = 0x46 - uVar23;
            if (-1 < (long)(0x3f - uVar23)) {
              uVar15 = 0x3f - uVar23;
            }
            iVar13 = ((int)puVar41 - (int)(uVar15 >> 3)) - iVar13;
          }
          else {
            FUN_0010a430();
            if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
              (**(code **)PTR_PTR_043722f8)
                        (0,"v:/devel/projects/oodle2/core/rrlzhdecompresssub.inl",0x172,
                         "OODLE ERROR : LZ corruption : decPtr != decPtrEnd \n");
            }
            FUN_0010a450();
            iVar13 = -1;
          }
          return iVar13;
        }
      } while( true );
    }
    if (param_7 != 0) {
      return -1;
    }
    if (param_4 - (long)param_3 < 1) {
      uVar15 = 0;
    }
    else {
      uVar15 = (ulong)*param_3 << 0x38;
    }
    if (7 < param_4 - (long)(param_3 + 1)) {
      uVar23 = (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar23 = uVar23 >> 0x20 | uVar23 << 0x20;
      goto LAB_00133a98;
    }
    if (param_4 - (long)(param_3 + 1) < 1) {
      uVar21 = 0;
      if (0 < param_4 - (long)(param_3 + 2)) goto LAB_001339a0;
LAB_001339ec:
      uVar33 = 0;
      if (0 < param_4 - (long)(param_3 + 3)) goto LAB_001339b8;
LAB_00133a00:
      uVar36 = 0;
      if (0 < param_4 - (long)(param_3 + 4)) goto LAB_001339d0;
LAB_00133a14:
      uVar23 = 0;
    }
    else {
      uVar21 = (uint)param_3[1] << 0x18;
      if (param_4 - (long)(param_3 + 2) < 1) goto LAB_001339ec;
LAB_001339a0:
      uVar33 = (uint)param_3[2] << 0x10;
      if (param_4 - (long)(param_3 + 3) < 1) goto LAB_00133a00;
LAB_001339b8:
      uVar36 = (uint)param_3[3] << 8;
      if (param_4 - (long)(param_3 + 4) < 1) goto LAB_00133a14;
LAB_001339d0:
      uVar23 = (ulong)param_3[4];
    }
    if (param_4 - (long)(param_3 + 5) < 1) {
      uVar22 = 0;
    }
    else {
      uVar22 = (uint)param_3[5] << 0x18;
    }
    if (param_4 - (long)(param_3 + 6) < 1) {
      uVar34 = 0;
    }
    else {
      uVar34 = (uint)param_3[6] << 0x10;
    }
    if (param_4 - (long)(param_3 + 7) < 1) {
      uVar37 = 0;
    }
    else {
      uVar37 = (uint)param_3[7] << 8;
    }
    uVar23 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar23 | (uVar33 | uVar21 | uVar36)) << 0x20;
LAB_00133a98:
    uVar15 = uVar15 | uVar23 >> 8;
    puVar39 = (undefined1 *)(param_5 + -1);
    auStack_98[3] = 0x14;
    auStack_98[4] = 0x18;
    uVar14 = param_6 - 1;
    puVar1 = puVar39 + param_6;
    auStack_98[5] = 0x1c;
    auStack_98[6] = 0x20;
    puVar41 = (ulong *)(param_3 + 7);
    puVar43 = (undefined1 *)(param_1 + -1);
    puVar44 = (undefined1 *)(param_2 + -1);
    uVar40 = ~(ulong)puVar1;
    uVar23 = 7;
    do {
      uVar17 = auStack_98[5];
      uVar18 = auStack_98[4];
      lVar16 = (long)uVar23 >> 3;
      if (param_4 - (long)puVar41 < 8) {
        if (param_4 - (long)puVar41 < 1) {
          uVar21 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_00133b38;
LAB_00133b84:
          uVar33 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_00133b50;
LAB_00133b98:
          uVar36 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_00133b68;
LAB_00133bac:
          uVar28 = 0;
        }
        else {
          uVar21 = (uint)(byte)*puVar41 << 0x18;
          if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_00133b84;
LAB_00133b38:
          uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
          if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_00133b98;
LAB_00133b50:
          uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
          if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00133bac;
LAB_00133b68:
          uVar28 = (ulong)*(byte *)((long)puVar41 + 3);
        }
        if (param_4 - ((long)puVar41 + 4) < 1) {
          uVar22 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_00133be0;
LAB_00133c00:
          uVar34 = 0;
        }
        else {
          uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
          if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_00133c00;
LAB_00133be0:
          uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
        }
        if (param_4 - ((long)puVar41 + 6) < 1) {
          uVar37 = 0;
        }
        else {
          uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
        }
        if (param_4 - ((long)puVar41 + 7) < 1) {
          uVar24 = 0;
        }
        else {
          uVar24 = (ulong)*(byte *)((long)puVar41 + 7);
        }
        uVar24 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar28 | (uVar33 | uVar21 | uVar36)) << 0x20 |
                 uVar24;
      }
      else {
        uVar28 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
        uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar28 >> 0x20 | uVar28 << 0x20;
      }
      uVar28 = 0x3f - uVar23;
      uVar23 = uVar23 & 7;
      uVar15 = uVar24 >> (uVar28 & 0x3f) | uVar15;
      puVar41 = (ulong *)((long)puVar41 + lVar16);
      puVar30 = puVar43 + 1;
      while( true ) {
        puVar43 = puVar30;
        if (uVar15 < *(ulong *)(param_8 + 0x150)) {
          puVar25 = (ushort *)(*(long *)(param_8 + 0x2c0) + (uVar15 >> 0x36) * 2);
          uVar28 = (ulong)*(byte *)(*(long *)(param_8 + 0x2b8) + (uVar15 >> 0x36));
        }
        else {
          lVar16 = *(long *)(param_8 + 0x2b0);
          if (uVar15 < *(ulong *)(param_8 + 0x158)) {
            puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x35) - *(long *)(param_8 + 0x58)) * 2);
            uVar28 = 0xb;
          }
          else if (uVar15 < *(ulong *)(param_8 + 0x160)) {
            puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x34) - *(long *)(param_8 + 0x60)) * 2);
            uVar28 = 0xc;
          }
          else if (uVar15 < *(ulong *)(param_8 + 0x168)) {
            puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x33) - *(long *)(param_8 + 0x68)) * 2);
            uVar28 = 0xd;
          }
          else if (uVar15 < *(ulong *)(param_8 + 0x170)) {
            uVar28 = 0xe;
            puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x32) - *(long *)(param_8 + 0x70)) * 2);
          }
          else if (uVar15 < *(ulong *)(param_8 + 0x178)) {
            uVar28 = 0xf;
            puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x31) - *(long *)(param_8 + 0x78)) * 2);
          }
          else if (uVar15 < *(ulong *)(param_8 + 0x180)) {
            uVar28 = 0x10;
            puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x30) - *(long *)(param_8 + 0x80)) * 2);
          }
          else {
            uVar28 = (ulong)*(int *)(param_8 + 0x29c);
            puVar25 = (ushort *)(lVar16 + (long)(*(int *)(param_8 + 0x288) + -1) * 2);
          }
        }
        uVar23 = uVar28 + uVar23;
        uVar15 = uVar15 << (uVar28 & 0x3f);
        lVar16 = (ulong)*puVar25 - 0x100;
        if (-1 < lVar16) break;
        *puVar43 = (char)*puVar25;
        if (puVar44 <= puVar43) goto LAB_00135a60;
        if (uVar15 < *(ulong *)(param_8 + 0x150)) {
          puVar25 = (ushort *)(*(long *)(param_8 + 0x2c0) + (uVar15 >> 0x36) * 2);
          uVar28 = (ulong)*(byte *)(*(long *)(param_8 + 0x2b8) + (uVar15 >> 0x36));
        }
        else {
          lVar16 = *(long *)(param_8 + 0x2b0);
          if (uVar15 < *(ulong *)(param_8 + 0x158)) {
            puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x35) - *(long *)(param_8 + 0x58)) * 2);
            uVar28 = 0xb;
          }
          else if (uVar15 < *(ulong *)(param_8 + 0x160)) {
            puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x34) - *(long *)(param_8 + 0x60)) * 2);
            uVar28 = 0xc;
          }
          else if (uVar15 < *(ulong *)(param_8 + 0x168)) {
            puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x33) - *(long *)(param_8 + 0x68)) * 2);
            uVar28 = 0xd;
          }
          else if (uVar15 < *(ulong *)(param_8 + 0x170)) {
            puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x32) - *(long *)(param_8 + 0x70)) * 2);
            uVar28 = 0xe;
          }
          else if (uVar15 < *(ulong *)(param_8 + 0x178)) {
            puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x31) - *(long *)(param_8 + 0x78)) * 2);
            uVar28 = 0xf;
          }
          else if (uVar15 < *(ulong *)(param_8 + 0x180)) {
            puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x30) - *(long *)(param_8 + 0x80)) * 2);
            uVar28 = 0x10;
          }
          else {
            uVar28 = (ulong)*(int *)(param_8 + 0x29c);
            puVar25 = (ushort *)(lVar16 + (long)(*(int *)(param_8 + 0x288) + -1) * 2);
          }
        }
        uVar23 = uVar28 + uVar23;
        uVar15 = uVar15 << (uVar28 & 0x3f);
        lVar16 = (ulong)*puVar25 - 0x100;
        if (-1 < lVar16) goto LAB_00134058;
        if (param_4 - (long)puVar41 < 8) {
          if (param_4 - (long)puVar41 < 1) {
            uVar21 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_00133d24;
LAB_00133d70:
            uVar33 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_00133d3c;
LAB_00133d84:
            uVar36 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_00133d54;
LAB_00133d98:
            uVar28 = 0;
          }
          else {
            uVar21 = (uint)(byte)*puVar41 << 0x18;
            if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_00133d70;
LAB_00133d24:
            uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
            if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_00133d84;
LAB_00133d3c:
            uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
            if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00133d98;
LAB_00133d54:
            uVar28 = (ulong)*(byte *)((long)puVar41 + 3);
          }
          if (param_4 - ((long)puVar41 + 4) < 1) {
            uVar22 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_00133dcc;
LAB_00133dec:
            uVar34 = 0;
          }
          else {
            uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
            if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_00133dec;
LAB_00133dcc:
            uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
          }
          if (param_4 - ((long)puVar41 + 6) < 1) {
            uVar37 = 0;
          }
          else {
            uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
          }
          if (param_4 - ((long)puVar41 + 7) < 1) {
            uVar24 = 0;
          }
          else {
            uVar24 = (ulong)*(byte *)((long)puVar41 + 7);
          }
          uVar24 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar28 | (uVar33 | uVar21 | uVar36)) << 0x20
                   | uVar24;
        }
        else {
          uVar28 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
          uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
          uVar24 = uVar28 >> 0x20 | uVar28 << 0x20;
        }
        puVar41 = (ulong *)((long)puVar41 + ((long)uVar23 >> 3));
        puVar43[1] = (char)*puVar25;
        uVar15 = uVar24 >> (0x3f - uVar23 & 0x3f) | uVar15;
        uVar23 = uVar23 & 7;
        puVar30 = puVar43 + 2;
        if (puVar44 <= puVar43 + 1) {
          puVar43 = puVar43 + 1;
          goto LAB_00135a60;
        }
      }
      puVar43 = puVar43 + -1;
LAB_00134058:
      if (param_4 - (long)puVar41 < 8) {
        if (param_4 - (long)puVar41 < 1) {
          uVar21 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_00134094;
LAB_001340e0:
          uVar33 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_001340ac;
LAB_001340f4:
          uVar36 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_001340c4;
LAB_00134108:
          uVar28 = 0;
        }
        else {
          uVar21 = (uint)(byte)*puVar41 << 0x18;
          if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_001340e0;
LAB_00134094:
          uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
          if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_001340f4;
LAB_001340ac:
          uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
          if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00134108;
LAB_001340c4:
          uVar28 = (ulong)*(byte *)((long)puVar41 + 3);
        }
        if (param_4 - ((long)puVar41 + 4) < 1) {
          uVar22 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_0013413c;
LAB_0013415c:
          uVar34 = 0;
        }
        else {
          uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
          if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_0013415c;
LAB_0013413c:
          uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
        }
        if (param_4 - ((long)puVar41 + 6) < 1) {
          uVar37 = 0;
        }
        else {
          uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
        }
        if (param_4 - ((long)puVar41 + 7) < 1) {
          uVar24 = 0;
        }
        else {
          uVar24 = (ulong)*(byte *)((long)puVar41 + 7);
        }
        uVar24 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar28 | (uVar33 | uVar21 | uVar36)) << 0x20 |
                 uVar24;
      }
      else {
        uVar28 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
        uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar28 >> 0x20 | uVar28 << 0x20;
      }
      lVar32 = lVar16 * 8;
      uVar28 = uVar23 & 7;
      uVar29 = uVar24 >> (0x3f - uVar23 & 0x3f) | uVar15;
      puVar41 = (ulong *)((long)puVar41 + ((long)uVar23 >> 3));
      uVar10 = *(ushort *)(&DAT_039c40c4 + lVar32);
      uVar24 = (ulong)uVar10;
      uVar35 = (ulong)(byte)(&DAT_039c40c7)[lVar32];
      uVar21 = (uint)(byte)(&DAT_039c40c7)[lVar32];
      if (0x13 < lVar16) {
        if (*(int *)(&DAT_039c40c0 + lVar16 * 8) != 0) {
          bVar6 = (&DAT_039c40c6)[lVar32];
          uVar15 = uVar29 << ((ulong)bVar6 & 0x3f);
          uVar23 = uVar28 + bVar6;
          uVar29 = (long)*(int *)(&DAT_039c40c0 + lVar16 * 8) +
                   (uVar29 >> ((ulong)-(uint)bVar6 & 0x3f)) + 1;
          auStack_98[4] = uVar29;
          auStack_98[5] = uVar18;
          auStack_98[6] = uVar17;
          goto joined_r0x00134280;
        }
        uVar18 = uVar29 >> 0x3c;
        uVar15 = uVar29 << 4;
        uVar23 = uVar28 + 4;
        if (uVar21 == 0) {
          puVar30 = puVar43 + ~uVar18;
          if ((long)puVar30 - (long)puVar39 < 0) {
            puVar30 = puVar39 + ((long)puVar30 - (long)puVar39 & uVar14);
            uVar18 = (long)puVar1 - (long)puVar30;
            if ((long)uVar18 < (long)uVar24) {
              uVar17 = uVar18;
              puVar27 = puVar43;
              puVar38 = puVar30;
              if ((uVar18 & 7) != 0) {
                lVar16 = -(uVar18 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar17 = uVar17 - 1;
                  lVar16 = lVar16 + 1;
                  puVar27 = puVar27 + 1;
                  *puVar27 = *puVar38;
                } while (lVar16 != 0);
              }
              if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
                puVar38 = puVar38 + 4;
                puVar20 = puVar27;
                do {
                  puVar20[1] = puVar38[-3];
                  puVar20[2] = puVar38[-2];
                  puVar20[3] = puVar38[-1];
                  puVar20[4] = *puVar38;
                  puVar20[5] = puVar38[1];
                  puVar20[6] = puVar38[2];
                  puVar20[7] = puVar38[3];
                  puVar27 = puVar20 + 8;
                  uVar17 = uVar17 - 8;
                  puVar20[8] = puVar38[4];
                  puVar38 = puVar38 + 8;
                  puVar20 = puVar27;
                } while (uVar17 != 0);
              }
              uVar18 = uVar24 - uVar18;
              puVar38 = puVar39;
              if ((uVar18 & 7) != 0) {
                lVar16 = -(uVar18 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar18 = uVar18 - 1;
                  lVar16 = lVar16 + 1;
                  puVar27 = puVar27 + 1;
                  *puVar27 = *puVar38;
                } while (lVar16 != 0);
              }
              if ((undefined1 *)0x6 < puVar30 + uVar24 + uVar40) {
                puVar27 = puVar27 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar27[-3] = puVar38[-3];
                  puVar27[-2] = puVar38[-2];
                  puVar27[-1] = puVar38[-1];
                  *puVar27 = *puVar38;
                  puVar27[1] = puVar38[1];
                  puVar27[2] = puVar38[2];
                  puVar27[3] = puVar38[3];
                  puVar30 = puVar38 + 4;
                  uVar18 = uVar18 - 8;
                  puVar38 = puVar38 + 8;
                  puVar27[4] = *puVar30;
                  puVar27 = puVar27 + 8;
                } while (uVar18 != 0);
              }
              goto joined_r0x001353e0;
            }
          }
          if (puVar30 != (undefined1 *)0x0) {
            puVar43[1] = puVar30[1];
            puVar43[2] = puVar30[2];
            puVar43[3] = puVar30[3];
            puVar43[4] = puVar30[4];
            puVar43[5] = puVar30[5];
            puVar43[6] = puVar30[6];
            puVar43[7] = puVar30[7];
            puVar43[8] = puVar30[8];
          }
          goto joined_r0x001353e0;
        }
        if (uVar10 != 0x9d) {
          uVar17 = uVar23 + uVar35;
          uVar28 = uVar15 >> ((ulong)-uVar21 & 0x3f);
          sVar3 = uVar28 + uVar24;
          if (param_4 - (long)puVar41 < 8) {
            if (param_4 - (long)puVar41 < 1) {
              uVar21 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_0013488c;
LAB_001349c8:
              uVar33 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_001348a4;
LAB_001349dc:
              uVar36 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_001348bc;
LAB_001349f0:
              uVar23 = 0;
            }
            else {
              uVar21 = (uint)(byte)*puVar41 << 0x18;
              if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_001349c8;
LAB_0013488c:
              uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
              if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_001349dc;
LAB_001348a4:
              uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
              if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_001349f0;
LAB_001348bc:
              uVar23 = (ulong)*(byte *)((long)puVar41 + 3);
            }
            if (param_4 - ((long)puVar41 + 4) < 1) {
              uVar22 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_00134a24;
LAB_00134ae4:
              uVar34 = 0;
            }
            else {
              uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
              if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_00134ae4;
LAB_00134a24:
              uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
            }
            if (param_4 - ((long)puVar41 + 6) < 1) {
              uVar37 = 0;
            }
            else {
              uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
            }
            if (param_4 - ((long)puVar41 + 7) < 1) {
              uVar29 = 0;
            }
            else {
              uVar29 = (ulong)*(byte *)((long)puVar41 + 7);
            }
            uVar29 = (ulong)(uVar34 | uVar22 | uVar37) |
                     (uVar23 | (uVar33 | uVar21 | uVar36)) << 0x20 | uVar29;
          }
          else {
            uVar23 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar29 = uVar23 >> 0x20 | uVar23 << 0x20;
          }
          uVar23 = uVar17 & 7;
          puVar30 = puVar43 + ~uVar18;
          puVar41 = (ulong *)((long)puVar41 + (uVar17 >> 3));
          uVar15 = uVar29 >> (0x3f - uVar17 & 0x3f) | uVar15 << (uVar35 & 0x3f);
          if ((long)puVar30 - (long)puVar39 < 0) {
            puVar30 = puVar39 + ((long)puVar30 - (long)puVar39 & uVar14);
            uVar17 = (long)puVar1 - (long)puVar30;
            uVar29 = sVar3 - uVar17;
            if (uVar29 != 0 && (long)uVar17 <= (long)sVar3) {
              puVar27 = puVar43;
              puVar38 = puVar30;
              if ((uVar17 & 7) != 0) {
                lVar16 = -(uVar17 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar17 = uVar17 - 1;
                  lVar16 = lVar16 + 1;
                  puVar27 = puVar27 + 1;
                  *puVar27 = *puVar38;
                } while (lVar16 != 0);
              }
              if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
                puVar38 = puVar38 + 4;
                puVar20 = puVar27;
                do {
                  puVar20[1] = puVar38[-3];
                  puVar20[2] = puVar38[-2];
                  puVar20[3] = puVar38[-1];
                  puVar20[4] = *puVar38;
                  puVar20[5] = puVar38[1];
                  puVar20[6] = puVar38[2];
                  puVar20[7] = puVar38[3];
                  puVar27 = puVar20 + 8;
                  uVar17 = uVar17 - 8;
                  puVar20[8] = puVar38[4];
                  puVar38 = puVar38 + 8;
                  puVar20 = puVar27;
                } while (uVar17 != 0);
              }
              lVar16 = uVar24 + uVar28 + uVar40;
              puVar38 = puVar39;
              if ((uVar29 & 7) != 0) {
                lVar32 = -(uVar29 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar29 = uVar29 - 1;
                  lVar32 = lVar32 + 1;
                  puVar27 = puVar27 + 1;
                  *puVar27 = *puVar38;
                } while (lVar32 != 0);
              }
              uVar24 = sVar3;
              if ((undefined1 *)0x6 < puVar30 + lVar16) {
                puVar27 = puVar27 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar27[-3] = puVar38[-3];
                  puVar27[-2] = puVar38[-2];
                  puVar27[-1] = puVar38[-1];
                  *puVar27 = *puVar38;
                  puVar27[1] = puVar38[1];
                  puVar27[2] = puVar38[2];
                  puVar27[3] = puVar38[3];
                  puVar30 = puVar38 + 4;
                  uVar29 = uVar29 - 8;
                  puVar38 = puVar38 + 8;
                  puVar27[4] = *puVar30;
                  puVar27 = puVar27 + 8;
                } while (uVar29 != 0);
              }
              goto joined_r0x001353e0;
            }
          }
          uVar24 = sVar3;
          if (puVar30 != (undefined1 *)0x0) {
            if (uVar18 == 0) {
              memset(puVar43 + 1,(uint)(byte)puVar30[1],sVar3);
            }
            else {
              puVar43[1] = puVar30[1];
              puVar43[2] = puVar30[2];
              puVar43[3] = puVar30[3];
              puVar43[4] = puVar30[4];
              puVar43[5] = puVar30[5];
              puVar43[6] = puVar30[6];
              puVar43[7] = puVar30[7];
              puVar30 = puVar30 + 8;
              puVar43[8] = *puVar30;
              uVar18 = sVar3 - 8;
              puVar38 = puVar43 + 8;
              if ((uVar18 & 7) != 0) {
                lVar16 = -(uVar18 & 7);
                do {
                  puVar30 = puVar30 + 1;
                  uVar18 = uVar18 - 1;
                  lVar16 = lVar16 + 1;
                  puVar38 = puVar38 + 1;
                  *puVar38 = *puVar30;
                } while (lVar16 != 0);
              }
              if (6 < sVar3 - 9) {
                puVar30 = puVar30 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar38[-3] = puVar30[-3];
                  puVar38[-2] = puVar30[-2];
                  puVar38[-1] = puVar30[-1];
                  *puVar38 = *puVar30;
                  puVar38[1] = puVar30[1];
                  puVar38[2] = puVar30[2];
                  puVar38[3] = puVar30[3];
                  puVar38[4] = puVar30[4];
                  uVar18 = uVar18 - 8;
                  puVar30 = puVar30 + 8;
                  puVar38 = puVar38 + 8;
                } while (uVar18 != 0);
              }
            }
          }
          goto joined_r0x001353e0;
        }
        if ((uVar29 & 0xfffffffffffffff) >> 0x3b == 0) {
          uVar15 = uVar29 << 0xb;
          uVar28 = uVar28 + 0xb;
          uVar24 = (uVar29 >> 0x35 & 0x3f) + 0x9d;
joined_r0x00134eb8:
          lVar16 = param_4 - (long)puVar41;
          if (7 < lVar16) goto LAB_00134318;
LAB_0013493c:
          if (lVar16 < 1) {
            uVar21 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_0013495c;
LAB_00134a68:
            uVar33 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_00134974;
LAB_00134a7c:
            uVar36 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_0013498c;
LAB_00134a90:
            uVar23 = 0;
          }
          else {
            uVar21 = (uint)(byte)*puVar41 << 0x18;
            if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_00134a68;
LAB_0013495c:
            uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
            if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_00134a7c;
LAB_00134974:
            uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
            if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00134a90;
LAB_0013498c:
            uVar23 = (ulong)*(byte *)((long)puVar41 + 3);
          }
          if (param_4 - ((long)puVar41 + 4) < 1) {
            uVar22 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_00134ac4;
LAB_00134b1c:
            uVar34 = 0;
          }
          else {
            uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
            if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_00134b1c;
LAB_00134ac4:
            uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
          }
          if (param_4 - ((long)puVar41 + 6) < 1) {
            uVar37 = 0;
          }
          else {
            uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
          }
          if (param_4 - ((long)puVar41 + 7) < 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = (ulong)*(byte *)((long)puVar41 + 7);
          }
          uVar17 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar23 | (uVar33 | uVar21 | uVar36)) << 0x20
                   | uVar17;
          if (uVar24 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_00134cd0;
        }
        else {
          if ((uVar29 >> 0x3a & 1) == 0) {
            uVar15 = uVar29 << 0xd;
            uVar28 = uVar28 + 0xd;
            uVar24 = (uVar29 >> 0x33 & 0x7f) + 0xdd;
            goto joined_r0x00134eb8;
          }
          if ((uVar29 >> 0x39 & 1) == 0) {
            uVar15 = uVar29 << 0xf;
            uVar28 = uVar28 + 0xf;
            uVar24 = (uVar29 >> 0x31 & 0xff) + 0x15d;
          }
          else {
            if ((uVar29 >> 0x38 & 1) == 0) {
              uVar15 = uVar29 << 0x12;
              uVar28 = (uVar28 | 8) + 10;
              uVar24 = (uVar29 >> 0x2e & 0x3ff) + 0x25d;
              goto joined_r0x00134eb8;
            }
            uVar15 = uVar29 << 0x16;
            uVar28 = (uVar28 | 8) + 0xe;
            uVar24 = (uVar29 >> 0x2a & 0x3fff) + 0x65d;
          }
          lVar16 = param_4 - (long)puVar41;
          if (lVar16 < 8) goto LAB_0013493c;
LAB_00134318:
          uVar23 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar17 = uVar23 >> 0x20 | uVar23 << 0x20;
          if (uVar24 <= (ulong)((long)puVar44 - (long)puVar43)) {
LAB_00134cd0:
            uVar15 = uVar17 >> (0x3f - uVar28 & 0x3f) | uVar15;
            puVar38 = (undefined1 *)(uVar28 >> 3);
            puVar41 = (ulong *)((long)puVar41 + (long)puVar38);
            uVar23 = uVar28 & 7;
            puVar30 = puVar43 + ~uVar18;
            if ((long)puVar30 - (long)puVar39 < 0) {
              puVar30 = puVar39 + ((long)puVar30 - (long)puVar39 & uVar14);
              uVar17 = (long)puVar1 - (long)puVar30;
              uVar28 = uVar24 - uVar17;
              if (uVar28 != 0 && (long)uVar17 <= (long)uVar24) {
                puVar27 = puVar43;
                puVar38 = puVar30;
                if ((uVar17 & 7) != 0) {
                  lVar16 = -(uVar17 & 7);
                  do {
                    puVar38 = puVar38 + 1;
                    uVar17 = uVar17 - 1;
                    lVar16 = lVar16 + 1;
                    puVar27 = puVar27 + 1;
                    *puVar27 = *puVar38;
                  } while (lVar16 != 0);
                }
                if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
                  puVar38 = puVar38 + 4;
                  puVar20 = puVar27;
                  do {
                    puVar20[1] = puVar38[-3];
                    puVar20[2] = puVar38[-2];
                    puVar20[3] = puVar38[-1];
                    puVar20[4] = *puVar38;
                    puVar20[5] = puVar38[1];
                    puVar20[6] = puVar38[2];
                    puVar20[7] = puVar38[3];
                    puVar27 = puVar20 + 8;
                    uVar17 = uVar17 - 8;
                    puVar20[8] = puVar38[4];
                    puVar38 = puVar38 + 8;
                    puVar20 = puVar27;
                  } while (uVar17 != 0);
                }
                puVar38 = puVar39;
                if ((uVar28 & 7) != 0) {
                  lVar16 = -(uVar28 & 7);
                  do {
                    puVar38 = puVar38 + 1;
                    uVar28 = uVar28 - 1;
                    lVar16 = lVar16 + 1;
                    puVar27 = puVar27 + 1;
                    *puVar27 = *puVar38;
                  } while (lVar16 != 0);
                }
                if ((undefined1 *)0x6 < puVar30 + uVar24 + uVar40) {
                  puVar27 = puVar27 + 4;
                  puVar38 = puVar38 + 4;
                  do {
                    puVar27[-3] = puVar38[-3];
                    puVar27[-2] = puVar38[-2];
                    puVar27[-1] = puVar38[-1];
                    *puVar27 = *puVar38;
                    puVar27[1] = puVar38[1];
                    puVar27[2] = puVar38[2];
                    puVar27[3] = puVar38[3];
                    puVar30 = puVar38 + 4;
                    uVar28 = uVar28 - 8;
                    puVar38 = puVar38 + 8;
                    puVar27[4] = *puVar30;
                    puVar27 = puVar27 + 8;
                  } while (uVar28 != 0);
                }
                goto joined_r0x001353e0;
              }
            }
            if (puVar30 != (undefined1 *)0x0) {
              if (uVar29 >> 0x3e == 0) {
                if (uVar18 == 2) {
                  uVar7 = *(undefined1 *)((long)puVar30 + 1);
                  uVar8 = *(undefined1 *)((long)puVar30 + 2);
                  uVar9 = *(undefined1 *)((long)puVar30 + 3);
                  uVar18 = uVar24 / 3;
                  uVar17 = uVar24 / 3 & 3;
                  uVar28 = uVar18 - 1;
                  puVar30 = puVar43;
                  if (uVar17 != 0) {
                    lVar16 = -uVar17;
                    do {
                      puVar38 = puVar30;
                      puVar30 = puVar38 + 3;
                      *puVar30 = uVar9;
                      uVar18 = uVar18 - 1;
                      lVar16 = lVar16 + 1;
                      puVar38[1] = uVar7;
                      puVar38[2] = uVar8;
                    } while (lVar16 != 0);
                  }
                  if (2 < uVar28) {
                    puVar30 = puVar30 + -3;
                    do {
                      puVar38 = puVar30 + 0xc;
                      *puVar38 = uVar9;
                      uVar18 = uVar18 - 4;
                      puVar30[4] = uVar7;
                      puVar30[5] = uVar8;
                      puVar30[6] = uVar9;
                      puVar30[7] = uVar7;
                      puVar30[8] = uVar8;
                      puVar30[9] = uVar9;
                      puVar30[10] = uVar7;
                      puVar30[0xb] = uVar8;
                      puVar30[0xd] = uVar7;
                      puVar30[0xe] = uVar8;
                      puVar30[0xf] = uVar9;
                      puVar30 = puVar38;
                    } while (uVar18 != 0);
                  }
                  if (uVar24 % 3 == 0) {
                    lVar16 = 3;
                  }
                  else {
                    puVar38[4] = uVar7;
                    if (uVar24 % 3 == 1) goto joined_r0x001353e0;
                    lVar16 = 4;
                  }
                  puVar38[lVar16 + 1] = uVar8;
                }
                else if (uVar18 == 1) {
                  uVar7 = *(undefined1 *)((long)puVar30 + 1);
                  uVar8 = *(undefined1 *)((long)puVar30 + 2);
                  uVar18 = uVar24 >> 1;
                  uVar28 = uVar18 - 1;
                  uVar17 = uVar24 >> 1 & 7;
                  if (uVar17 == 0) {
                    puVar30 = (undefined1 *)0x0;
                    puVar38 = puVar43;
                  }
                  else {
                    lVar16 = -uVar17;
                    puVar38 = puVar43;
                    do {
                      puVar30 = puVar38;
                      puVar38 = puVar30 + 2;
                      *puVar38 = uVar8;
                      uVar18 = uVar18 - 1;
                      lVar16 = lVar16 + 1;
                      puVar30[1] = uVar7;
                    } while (lVar16 != 0);
                  }
                  if (6 < uVar28) {
                    puVar38 = puVar38 + -2;
                    do {
                      puVar30 = puVar38 + 0x10;
                      *puVar30 = uVar8;
                      uVar18 = uVar18 - 8;
                      puVar38[3] = uVar7;
                      puVar38[4] = uVar8;
                      puVar38[5] = uVar7;
                      puVar38[6] = uVar8;
                      puVar38[7] = uVar7;
                      puVar38[8] = uVar8;
                      puVar38[9] = uVar7;
                      puVar38[10] = uVar8;
                      puVar38[0xb] = uVar7;
                      puVar38[0xc] = uVar8;
                      puVar38[0xd] = uVar7;
                      puVar38[0xe] = uVar8;
                      puVar38[0xf] = uVar7;
                      puVar38[0x11] = uVar7;
                      puVar38[0x12] = uVar8;
                      puVar38 = puVar30;
                    } while (uVar18 != 0);
                  }
                  if ((uVar24 & 1) != 0) {
                    puVar30[3] = uVar7;
                  }
                }
                else if (uVar18 == 0) {
                  memset(puVar43 + 1,(uint)*(byte *)((long)puVar30 + 1),uVar24);
                }
                else {
                  uVar33 = 3 - (int)puVar43;
                  uVar21 = uVar33 & 3;
                  if ((uVar33 & 3) == 0) {
                    puVar38 = puVar43;
                  }
                  else {
                    puVar38 = puVar43 + 1;
                    *puVar38 = *(undefined1 *)((long)puVar30 + 1);
                    puVar27 = (undefined1 *)((long)puVar30 + 1);
                    if (uVar21 != 1) {
                      puVar38 = puVar43 + 2;
                      *puVar38 = *(undefined1 *)((long)puVar30 + 2);
                      puVar27 = (undefined1 *)((long)puVar30 + 2);
                      if (uVar21 == 3) {
                        puVar30 = (undefined1 *)((long)puVar30 + 3);
                        puVar43[3] = *puVar30;
                        puVar38 = puVar43 + 3;
                        goto LAB_001350b0;
                      }
                    }
                    puVar30 = puVar27;
                  }
LAB_001350b0:
                  uVar5 = *(undefined4 *)(puVar30 + 1);
                  *(undefined4 *)(puVar38 + 1) = uVar5;
                  puVar26 = (undefined4 *)(puVar38 + 5);
                  do {
                    bVar11 = puVar26 < puVar43 + (uVar24 - 3);
                    *puVar26 = uVar5;
                    puVar26 = puVar26 + 1;
                  } while (bVar11);
                }
              }
              else {
                puVar43[1] = *(undefined1 *)((long)puVar30 + 1);
                puVar43[2] = *(undefined1 *)((long)puVar30 + 2);
                puVar43[3] = *(undefined1 *)((long)puVar30 + 3);
                puVar43[4] = *(undefined1 *)((long)puVar30 + 4);
                puVar43[5] = *(undefined1 *)((long)puVar30 + 5);
                puVar43[6] = *(undefined1 *)((long)puVar30 + 6);
                puVar43[7] = *(undefined1 *)((long)puVar30 + 7);
                puVar38 = puVar43 + 8;
                puVar30 = (undefined1 *)((long)puVar30 + 8);
                puVar43[8] = *puVar30;
                uVar18 = uVar24 - 8;
                if ((uVar18 & 7) != 0) {
                  lVar16 = -(uVar18 & 7);
                  do {
                    puVar30 = puVar30 + 1;
                    uVar18 = uVar18 - 1;
                    lVar16 = lVar16 + 1;
                    puVar38 = puVar38 + 1;
                    *puVar38 = *puVar30;
                  } while (lVar16 != 0);
                }
                if (6 < uVar24 - 9) {
                  puVar30 = puVar30 + 4;
                  puVar38 = puVar38 + 4;
                  do {
                    puVar38[-3] = puVar30[-3];
                    puVar38[-2] = puVar30[-2];
                    puVar38[-1] = puVar30[-1];
                    *puVar38 = *puVar30;
                    puVar38[1] = puVar30[1];
                    puVar38[2] = puVar30[2];
                    puVar38[3] = puVar30[3];
                    puVar38[4] = puVar30[4];
                    uVar18 = uVar18 - 8;
                    puVar30 = puVar30 + 8;
                    puVar38 = puVar38 + 8;
                  } while (uVar18 != 0);
                }
              }
            }
            goto joined_r0x001353e0;
          }
        }
        FUN_0010a430();
        pcVar19 = *(code **)PTR_PTR_043722f8;
        if (pcVar19 == (code *)0x0) goto LAB_00135b18;
        uVar12 = 0x12a;
LAB_00135b10:
        (*pcVar19)(0,"v:/devel/projects/oodle2/core/rrlzhdecompresssub.inl",uVar12,
                   "OODLE ERROR : LZ corruption : bad long len, overrun\n");
LAB_00135b18:
        FUN_0010a450();
        return 0;
      }
      uVar23 = uVar29 >> 0x3b & 0x18;
      uVar15 = uVar29 << 2;
      puVar2 = (ulong *)((long)auStack_98 + uVar23 + 0x18);
      uVar29 = *puVar2;
      *puVar2 = *(ulong *)((long)auStack_98 + uVar23 + 0x10);
      uVar12 = *(undefined8 *)((long)auStack_98 + uVar23 + 8);
      *(undefined8 *)((long)auStack_98 + uVar23 + 8) = *(undefined8 *)((long)auStack_98 + uVar23);
      *(undefined8 *)((long)auStack_98 + uVar23 + 0x10) = uVar12;
      uVar23 = uVar28 + 2;
      auStack_98[3] = uVar29;
joined_r0x00134280:
      if (uVar21 == 0) {
        puVar30 = puVar43 + -uVar29;
        if ((long)puVar30 - (long)puVar39 < 0) {
          puVar30 = puVar39 + ((long)puVar30 - (long)puVar39 & uVar14);
          uVar18 = (long)puVar1 - (long)puVar30;
          if ((long)uVar18 < (long)uVar24) {
            uVar17 = uVar18;
            puVar27 = puVar43;
            puVar38 = puVar30;
            if ((uVar18 & 7) != 0) {
              lVar16 = -(uVar18 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar17 = uVar17 - 1;
                lVar16 = lVar16 + 1;
                puVar27 = puVar27 + 1;
                *puVar27 = *puVar38;
              } while (lVar16 != 0);
            }
            if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
              puVar38 = puVar38 + 4;
              puVar20 = puVar27;
              do {
                puVar20[1] = puVar38[-3];
                puVar20[2] = puVar38[-2];
                puVar20[3] = puVar38[-1];
                puVar20[4] = *puVar38;
                puVar20[5] = puVar38[1];
                puVar20[6] = puVar38[2];
                puVar20[7] = puVar38[3];
                puVar27 = puVar20 + 8;
                uVar17 = uVar17 - 8;
                puVar20[8] = puVar38[4];
                puVar38 = puVar38 + 8;
                puVar20 = puVar27;
              } while (uVar17 != 0);
            }
            uVar18 = uVar24 - uVar18;
            puVar38 = puVar39;
            if ((uVar18 & 7) != 0) {
              lVar16 = -(uVar18 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar18 = uVar18 - 1;
                lVar16 = lVar16 + 1;
                puVar27 = puVar27 + 1;
                *puVar27 = *puVar38;
              } while (lVar16 != 0);
            }
            if ((undefined1 *)0x6 < puVar30 + uVar24 + uVar40) {
              puVar27 = puVar27 + 4;
              puVar38 = puVar38 + 4;
              do {
                puVar27[-3] = puVar38[-3];
                puVar27[-2] = puVar38[-2];
                puVar27[-1] = puVar38[-1];
                *puVar27 = *puVar38;
                puVar27[1] = puVar38[1];
                puVar27[2] = puVar38[2];
                puVar27[3] = puVar38[3];
                puVar30 = puVar38 + 4;
                uVar18 = uVar18 - 8;
                puVar38 = puVar38 + 8;
                puVar27[4] = *puVar30;
                puVar27 = puVar27 + 8;
              } while (uVar18 != 0);
            }
            goto joined_r0x001353e0;
          }
        }
        if (puVar30 != (undefined1 *)0x0) {
          *(undefined8 *)(puVar43 + 1) = *(undefined8 *)(puVar30 + 1);
        }
      }
      else {
        if (uVar10 == 0x9d) {
          if ((long)uVar15 < 0) {
            if ((uVar15 >> 0x3e & 1) == 0) {
              uVar17 = uVar15 << 9;
              uVar18 = uVar23 + 9;
              uVar24 = (uVar15 >> 0x37 & 0x7f) + 0xdd;
              goto joined_r0x001348e8;
            }
            if ((uVar15 >> 0x3d & 1) == 0) {
              uVar17 = uVar15 << 0xb;
              uVar18 = uVar23 + 0xb;
              uVar24 = (uVar15 >> 0x35 & 0xff) + 0x15d;
            }
            else {
              if ((uVar15 >> 0x3c & 1) == 0) {
                uVar17 = uVar15 << 0xe;
                uVar18 = uVar23 + 0xe;
                uVar24 = (uVar15 >> 0x32 & 0x3ff) + 0x25d;
                goto joined_r0x001348e8;
              }
              uVar17 = uVar15 << 0x12;
              uVar18 = uVar23 + 0x12;
              uVar24 = (uVar15 >> 0x2e & 0x3fff) + 0x65d;
            }
            lVar16 = param_4 - (long)puVar41;
            if (lVar16 < 8) goto LAB_001343a8;
LAB_00134234:
            uVar15 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
            uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
            uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
            if (uVar24 <= (ulong)((long)puVar44 - (long)puVar43)) {
LAB_0013473c:
              uVar23 = uVar18 & 7;
              puVar30 = puVar43 + -uVar29;
              puVar41 = (ulong *)((long)puVar41 + (uVar18 >> 3));
              uVar15 = uVar15 >> (0x3f - uVar18 & 0x3f) | uVar17;
              if ((long)puVar30 - (long)puVar39 < 0) {
                puVar30 = puVar39 + ((long)puVar30 - (long)puVar39 & uVar14);
                uVar18 = (long)puVar1 - (long)puVar30;
                uVar17 = uVar24 - uVar18;
                if (uVar17 != 0 && (long)uVar18 <= (long)uVar24) {
                  puVar27 = puVar43;
                  puVar38 = puVar30;
                  if ((uVar18 & 7) != 0) {
                    lVar16 = -(uVar18 & 7);
                    do {
                      puVar38 = puVar38 + 1;
                      uVar18 = uVar18 - 1;
                      lVar16 = lVar16 + 1;
                      puVar27 = puVar27 + 1;
                      *puVar27 = *puVar38;
                    } while (lVar16 != 0);
                  }
                  if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
                    puVar38 = puVar38 + 4;
                    puVar20 = puVar27;
                    do {
                      puVar20[1] = puVar38[-3];
                      puVar20[2] = puVar38[-2];
                      puVar20[3] = puVar38[-1];
                      puVar20[4] = *puVar38;
                      puVar20[5] = puVar38[1];
                      puVar20[6] = puVar38[2];
                      puVar20[7] = puVar38[3];
                      puVar27 = puVar20 + 8;
                      uVar18 = uVar18 - 8;
                      puVar20[8] = puVar38[4];
                      puVar38 = puVar38 + 8;
                      puVar20 = puVar27;
                    } while (uVar18 != 0);
                  }
                  puVar38 = puVar39;
                  if ((uVar17 & 7) != 0) {
                    lVar16 = -(uVar17 & 7);
                    do {
                      puVar38 = puVar38 + 1;
                      uVar17 = uVar17 - 1;
                      lVar16 = lVar16 + 1;
                      puVar27 = puVar27 + 1;
                      *puVar27 = *puVar38;
                    } while (lVar16 != 0);
                  }
                  if ((undefined1 *)0x6 < puVar30 + uVar24 + uVar40) {
                    puVar27 = puVar27 + 4;
                    puVar38 = puVar38 + 4;
                    do {
                      puVar27[-3] = puVar38[-3];
                      puVar27[-2] = puVar38[-2];
                      puVar27[-1] = puVar38[-1];
                      *puVar27 = *puVar38;
                      puVar27[1] = puVar38[1];
                      puVar27[2] = puVar38[2];
                      puVar27[3] = puVar38[3];
                      puVar30 = puVar38 + 4;
                      uVar17 = uVar17 - 8;
                      puVar38 = puVar38 + 8;
                      puVar27[4] = *puVar30;
                      puVar27 = puVar27 + 8;
                    } while (uVar17 != 0);
                  }
                  goto joined_r0x001353e0;
                }
              }
              if (puVar30 != (undefined1 *)0x0) {
                if ((long)uVar29 < (long)uVar24) {
                  uVar17 = uVar24 - 1 >> 2;
                  uVar21 = (int)uVar17 + 1;
                  uVar18 = 0;
                  if (uVar17 != 0) {
                    lVar16 = (((ulong)uVar21 & 1) - 1) - uVar17;
                    uVar17 = uVar18;
                    do {
                      uVar18 = uVar17 + 8;
                      *(undefined4 *)(puVar43 + uVar17 + 1) = *(undefined4 *)(puVar30 + uVar17 + 1);
                      lVar16 = lVar16 + 2;
                      *(undefined4 *)(puVar43 + uVar17 + 5) = *(undefined4 *)(puVar30 + uVar17 + 5);
                      uVar17 = uVar18;
                    } while (lVar16 != 0);
                  }
                  if ((uVar21 & 1) != 0) {
                    uVar7 = puVar30[uVar18 | 2];
                    uVar8 = puVar30[uVar18 | 3];
                    uVar9 = puVar30[uVar18 + 4];
                    puVar43[uVar18 | 1] = puVar30[uVar18 | 1];
                    puVar43[uVar18 | 2] = uVar7;
                    puVar43[uVar18 | 3] = uVar8;
                    puVar43[uVar18 + 4] = uVar9;
                  }
                }
                else {
                  memmove(puVar43 + 1,puVar30 + 1,uVar24);
                }
              }
              goto joined_r0x001353e0;
            }
          }
          else {
            uVar17 = uVar15 << 7;
            uVar18 = uVar23 + 7;
            uVar24 = (uVar15 >> 0x39 & 0x3f) + 0x9d;
joined_r0x001348e8:
            lVar16 = param_4 - (long)puVar41;
            if (7 < lVar16) goto LAB_00134234;
LAB_001343a8:
            if (lVar16 < 1) {
              uVar21 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_001343c8;
LAB_0013453c:
              uVar33 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_001343e0;
LAB_00134550:
              uVar36 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_001343f8;
LAB_00134564:
              uVar23 = 0;
            }
            else {
              uVar21 = (uint)(byte)*puVar41 << 0x18;
              if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_0013453c;
LAB_001343c8:
              uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
              if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_00134550;
LAB_001343e0:
              uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
              if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00134564;
LAB_001343f8:
              uVar23 = (ulong)*(byte *)((long)puVar41 + 3);
            }
            if (param_4 - ((long)puVar41 + 4) < 1) {
              uVar22 = 0;
              if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_00134598;
LAB_001345f0:
              uVar34 = 0;
            }
            else {
              uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
              if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_001345f0;
LAB_00134598:
              uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
            }
            if (param_4 - ((long)puVar41 + 6) < 1) {
              uVar37 = 0;
            }
            else {
              uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
            }
            if (param_4 - ((long)puVar41 + 7) < 1) {
              uVar15 = 0;
            }
            else {
              uVar15 = (ulong)*(byte *)((long)puVar41 + 7);
            }
            uVar15 = (ulong)(uVar34 | uVar22 | uVar37) |
                     (uVar23 | (uVar33 | uVar21 | uVar36)) << 0x20 | uVar15;
            if (uVar24 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013473c;
          }
          FUN_0010a430();
          pcVar19 = *(code **)PTR_PTR_043722f8;
          if (pcVar19 == (code *)0x0) goto LAB_00135b18;
          uVar12 = 0xd5;
          goto LAB_00135b10;
        }
        uVar23 = uVar23 + uVar35;
        uVar18 = uVar15 >> ((ulong)-uVar21 & 0x3f);
        sVar3 = uVar18 + uVar24;
        if (param_4 - (long)puVar41 < 8) {
          if (param_4 - (long)puVar41 < 1) {
            uVar21 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_00134350;
LAB_0013449c:
            uVar33 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_00134368;
LAB_001344b0:
            uVar36 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_00134380;
LAB_001344c4:
            uVar17 = 0;
          }
          else {
            uVar21 = (uint)(byte)*puVar41 << 0x18;
            if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_0013449c;
LAB_00134350:
            uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
            if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_001344b0;
LAB_00134368:
            uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
            if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_001344c4;
LAB_00134380:
            uVar17 = (ulong)*(byte *)((long)puVar41 + 3);
          }
          if (param_4 - ((long)puVar41 + 4) < 1) {
            uVar22 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_001344f8;
LAB_001345b8:
            uVar34 = 0;
          }
          else {
            uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
            if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_001345b8;
LAB_001344f8:
            uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
          }
          if (param_4 - ((long)puVar41 + 6) < 1) {
            uVar37 = 0;
          }
          else {
            uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
          }
          if (param_4 - ((long)puVar41 + 7) < 1) {
            uVar28 = 0;
          }
          else {
            uVar28 = (ulong)*(byte *)((long)puVar41 + 7);
          }
          uVar28 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar17 | (uVar33 | uVar21 | uVar36)) << 0x20
                   | uVar28;
        }
        else {
          uVar17 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar28 = uVar17 >> 0x20 | uVar17 << 0x20;
        }
        puVar41 = (ulong *)((long)puVar41 + (uVar23 >> 3));
        uVar15 = uVar28 >> (0x3f - uVar23 & 0x3f) | uVar15 << (uVar35 & 0x3f);
        puVar30 = puVar43 + -uVar29;
        uVar23 = uVar23 & 7;
        if ((long)puVar30 - (long)puVar39 < 0) {
          puVar30 = puVar39 + ((long)puVar30 - (long)puVar39 & uVar14);
          uVar17 = (long)puVar1 - (long)puVar30;
          uVar28 = sVar3 - uVar17;
          if (uVar28 != 0 && (long)uVar17 <= (long)sVar3) {
            puVar27 = puVar43;
            puVar38 = puVar30;
            if ((uVar17 & 7) != 0) {
              lVar16 = -(uVar17 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar17 = uVar17 - 1;
                lVar16 = lVar16 + 1;
                puVar27 = puVar27 + 1;
                *puVar27 = *puVar38;
              } while (lVar16 != 0);
            }
            if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
              puVar38 = puVar38 + 4;
              puVar20 = puVar27;
              do {
                puVar20[1] = puVar38[-3];
                puVar20[2] = puVar38[-2];
                puVar20[3] = puVar38[-1];
                puVar20[4] = *puVar38;
                puVar20[5] = puVar38[1];
                puVar20[6] = puVar38[2];
                puVar20[7] = puVar38[3];
                puVar27 = puVar20 + 8;
                uVar17 = uVar17 - 8;
                puVar20[8] = puVar38[4];
                puVar38 = puVar38 + 8;
                puVar20 = puVar27;
              } while (uVar17 != 0);
            }
            lVar16 = uVar24 + uVar18 + uVar40;
            puVar38 = puVar39;
            if ((uVar28 & 7) != 0) {
              lVar32 = -(uVar28 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar28 = uVar28 - 1;
                lVar32 = lVar32 + 1;
                puVar27 = puVar27 + 1;
                *puVar27 = *puVar38;
              } while (lVar32 != 0);
            }
            uVar24 = sVar3;
            if ((undefined1 *)0x6 < puVar30 + lVar16) {
              puVar27 = puVar27 + 4;
              puVar38 = puVar38 + 4;
              do {
                puVar27[-3] = puVar38[-3];
                puVar27[-2] = puVar38[-2];
                puVar27[-1] = puVar38[-1];
                *puVar27 = *puVar38;
                puVar27[1] = puVar38[1];
                puVar27[2] = puVar38[2];
                puVar27[3] = puVar38[3];
                puVar30 = puVar38 + 4;
                uVar28 = uVar28 - 8;
                puVar38 = puVar38 + 8;
                puVar27[4] = *puVar30;
                puVar27 = puVar27 + 8;
              } while (uVar28 != 0);
            }
            goto joined_r0x001353e0;
          }
        }
        uVar24 = sVar3;
        if (puVar30 != (undefined1 *)0x0) {
          if ((uVar29 & 3) == 0) {
            uVar33 = 3 - (int)puVar43;
            uVar21 = uVar33 & 3;
            if ((uVar33 & 3) == 0) {
              puVar38 = puVar43;
            }
            else {
              puVar27 = puVar30 + 1;
              puVar38 = puVar43 + 1;
              *puVar38 = *puVar27;
              if (uVar21 != 1) {
                puVar27 = puVar30 + 2;
                puVar38 = puVar43 + 2;
                *puVar38 = *puVar27;
                if (uVar21 == 3) {
                  puVar43[3] = puVar30[3];
                  puVar38 = puVar43 + 3;
                  puVar30 = puVar30 + 3;
                  goto LAB_001348f4;
                }
              }
              puVar30 = puVar27;
            }
LAB_001348f4:
            *(undefined4 *)(puVar38 + 1) = *(undefined4 *)(puVar30 + 1);
            puVar26 = (undefined4 *)(puVar38 + 5);
            puVar31 = (undefined4 *)(puVar30 + 5);
            do {
              bVar11 = puVar26 < puVar43 + (sVar3 - 3);
              *puVar26 = *puVar31;
              puVar26 = puVar26 + 1;
              puVar31 = puVar31 + 1;
            } while (bVar11);
          }
          else if (0 < (long)sVar3) {
            lVar16 = 0;
            do {
              lVar32 = lVar16 + 4;
              *(undefined4 *)(puVar43 + lVar16 + 1) = *(undefined4 *)(puVar30 + lVar16 + 1);
              lVar16 = lVar32;
            } while (lVar32 < (long)sVar3);
          }
        }
      }
joined_r0x001353e0:
      puVar43 = puVar43 + uVar24;
      if (puVar44 <= puVar43) {
LAB_00135a60:
        if (puVar43 == puVar44) {
          uVar15 = 0x46 - uVar23;
          if (-1 < (long)(0x3f - uVar23)) {
            uVar15 = 0x3f - uVar23;
          }
          iVar13 = ((int)puVar41 - (int)(uVar15 >> 3)) - iVar13;
        }
        else {
          FUN_0010a430();
          if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
            (**(code **)PTR_PTR_043722f8)
                      (0,"v:/devel/projects/oodle2/core/rrlzhdecompresssub.inl",0x172,
                       "OODLE ERROR : LZ corruption : decPtr != decPtrEnd \n");
          }
          FUN_0010a450();
          iVar13 = -1;
        }
        return iVar13;
      }
    } while( true );
  }
  if (param_4 - (long)param_3 < 1) {
    uVar15 = 0;
  }
  else {
    uVar15 = (ulong)*param_3 << 0x38;
  }
  if (7 < param_4 - (long)(param_3 + 1)) {
    uVar23 = (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff00) >> 8 |
             (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff) << 8;
    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
    uVar23 = uVar23 >> 0x20 | uVar23 << 0x20;
    goto LAB_00137d98;
  }
  if (param_4 - (long)(param_3 + 1) < 1) {
    uVar21 = 0;
    if (0 < param_4 - (long)(param_3 + 2)) goto LAB_00137ca0;
LAB_00137cec:
    uVar33 = 0;
    if (0 < param_4 - (long)(param_3 + 3)) goto LAB_00137cb8;
LAB_00137d00:
    uVar36 = 0;
    if (0 < param_4 - (long)(param_3 + 4)) goto LAB_00137cd0;
LAB_00137d14:
    uVar23 = 0;
  }
  else {
    uVar21 = (uint)param_3[1] << 0x18;
    if (param_4 - (long)(param_3 + 2) < 1) goto LAB_00137cec;
LAB_00137ca0:
    uVar33 = (uint)param_3[2] << 0x10;
    if (param_4 - (long)(param_3 + 3) < 1) goto LAB_00137d00;
LAB_00137cb8:
    uVar36 = (uint)param_3[3] << 8;
    if (param_4 - (long)(param_3 + 4) < 1) goto LAB_00137d14;
LAB_00137cd0:
    uVar23 = (ulong)param_3[4];
  }
  if (param_4 - (long)(param_3 + 5) < 1) {
    uVar22 = 0;
  }
  else {
    uVar22 = (uint)param_3[5] << 0x18;
  }
  if (param_4 - (long)(param_3 + 6) < 1) {
    uVar34 = 0;
  }
  else {
    uVar34 = (uint)param_3[6] << 0x10;
  }
  if (param_4 - (long)(param_3 + 7) < 1) {
    uVar37 = 0;
  }
  else {
    uVar37 = (uint)param_3[7] << 8;
  }
  uVar23 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar23 | (uVar33 | uVar21 | uVar36)) << 0x20;
LAB_00137d98:
  uVar15 = uVar15 | uVar23 >> 8;
  puVar44 = (undefined1 *)(param_5 + -1);
  auStack_98[3] = 0x14;
  auStack_98[4] = 0x18;
  uVar40 = param_6 - 1;
  puVar1 = puVar44 + param_6;
  auStack_98[5] = 0x1c;
  auStack_98[6] = 0x20;
  puVar41 = (ulong *)(param_3 + 7);
  puVar43 = (undefined1 *)(param_1 + -1);
  puVar39 = (undefined1 *)(param_2 + -1);
  uVar14 = ~(ulong)puVar1;
  uVar23 = 7;
  do {
    uVar17 = auStack_98[5];
    uVar18 = auStack_98[4];
    lVar16 = (long)uVar23 >> 3;
    if (param_4 - (long)puVar41 < 8) {
      if (param_4 - (long)puVar41 < 1) {
        uVar21 = 0;
        if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_00137e38;
LAB_00137e84:
        uVar33 = 0;
        if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_00137e50;
LAB_00137e98:
        uVar36 = 0;
        if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_00137e68;
LAB_00137eac:
        uVar28 = 0;
      }
      else {
        uVar21 = (uint)(byte)*puVar41 << 0x18;
        if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_00137e84;
LAB_00137e38:
        uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
        if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_00137e98;
LAB_00137e50:
        uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
        if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00137eac;
LAB_00137e68:
        uVar28 = (ulong)*(byte *)((long)puVar41 + 3);
      }
      if (param_4 - ((long)puVar41 + 4) < 1) {
        uVar22 = 0;
        if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_00137ee0;
LAB_00137f00:
        uVar34 = 0;
      }
      else {
        uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
        if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_00137f00;
LAB_00137ee0:
        uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
      }
      if (param_4 - ((long)puVar41 + 6) < 1) {
        uVar37 = 0;
      }
      else {
        uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
      }
      if (param_4 - ((long)puVar41 + 7) < 1) {
        uVar24 = 0;
      }
      else {
        uVar24 = (ulong)*(byte *)((long)puVar41 + 7);
      }
      uVar24 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar28 | (uVar33 | uVar21 | uVar36)) << 0x20 |
               uVar24;
    }
    else {
      uVar28 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
      uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
      uVar24 = uVar28 >> 0x20 | uVar28 << 0x20;
    }
    uVar28 = 0x3f - uVar23;
    uVar23 = uVar23 & 7;
    uVar15 = uVar24 >> (uVar28 & 0x3f) | uVar15;
    puVar41 = (ulong *)((long)puVar41 + lVar16);
    puVar30 = puVar43 + 1;
    while( true ) {
      puVar43 = puVar30;
      if (uVar15 < *(ulong *)(param_8 + 0x150)) {
        puVar25 = (ushort *)(*(long *)(param_8 + 0x2c0) + (uVar15 >> 0x36) * 2);
        uVar28 = (ulong)*(byte *)(*(long *)(param_8 + 0x2b8) + (uVar15 >> 0x36));
      }
      else {
        lVar16 = *(long *)(param_8 + 0x2b0);
        if (uVar15 < *(ulong *)(param_8 + 0x158)) {
          puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x35) - *(long *)(param_8 + 0x58)) * 2);
          uVar28 = 0xb;
        }
        else if (uVar15 < *(ulong *)(param_8 + 0x160)) {
          puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x34) - *(long *)(param_8 + 0x60)) * 2);
          uVar28 = 0xc;
        }
        else if (uVar15 < *(ulong *)(param_8 + 0x168)) {
          puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x33) - *(long *)(param_8 + 0x68)) * 2);
          uVar28 = 0xd;
        }
        else if (uVar15 < *(ulong *)(param_8 + 0x170)) {
          uVar28 = 0xe;
          puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x32) - *(long *)(param_8 + 0x70)) * 2);
        }
        else if (uVar15 < *(ulong *)(param_8 + 0x178)) {
          uVar28 = 0xf;
          puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x31) - *(long *)(param_8 + 0x78)) * 2);
        }
        else if (uVar15 < *(ulong *)(param_8 + 0x180)) {
          uVar28 = 0x10;
          puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x30) - *(long *)(param_8 + 0x80)) * 2);
        }
        else {
          uVar28 = (ulong)*(int *)(param_8 + 0x29c);
          puVar25 = (ushort *)(lVar16 + (long)(*(int *)(param_8 + 0x288) + -1) * 2);
        }
      }
      uVar23 = uVar28 + uVar23;
      uVar15 = uVar15 << (uVar28 & 0x3f);
      lVar16 = (ulong)*puVar25 - 0x100;
      if (-1 < lVar16) break;
      *puVar43 = (char)*puVar25;
      if (puVar39 <= puVar43) goto LAB_00139abc;
      if (uVar15 < *(ulong *)(param_8 + 0x150)) {
        puVar25 = (ushort *)(*(long *)(param_8 + 0x2c0) + (uVar15 >> 0x36) * 2);
        uVar28 = (ulong)*(byte *)(*(long *)(param_8 + 0x2b8) + (uVar15 >> 0x36));
      }
      else {
        lVar16 = *(long *)(param_8 + 0x2b0);
        if (uVar15 < *(ulong *)(param_8 + 0x158)) {
          puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x35) - *(long *)(param_8 + 0x58)) * 2);
          uVar28 = 0xb;
        }
        else if (uVar15 < *(ulong *)(param_8 + 0x160)) {
          puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x34) - *(long *)(param_8 + 0x60)) * 2);
          uVar28 = 0xc;
        }
        else if (uVar15 < *(ulong *)(param_8 + 0x168)) {
          puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x33) - *(long *)(param_8 + 0x68)) * 2);
          uVar28 = 0xd;
        }
        else if (uVar15 < *(ulong *)(param_8 + 0x170)) {
          puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x32) - *(long *)(param_8 + 0x70)) * 2);
          uVar28 = 0xe;
        }
        else if (uVar15 < *(ulong *)(param_8 + 0x178)) {
          puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x31) - *(long *)(param_8 + 0x78)) * 2);
          uVar28 = 0xf;
        }
        else if (uVar15 < *(ulong *)(param_8 + 0x180)) {
          puVar25 = (ushort *)(lVar16 + ((uVar15 >> 0x30) - *(long *)(param_8 + 0x80)) * 2);
          uVar28 = 0x10;
        }
        else {
          uVar28 = (ulong)*(int *)(param_8 + 0x29c);
          puVar25 = (ushort *)(lVar16 + (long)(*(int *)(param_8 + 0x288) + -1) * 2);
        }
      }
      uVar23 = uVar28 + uVar23;
      uVar15 = uVar15 << (uVar28 & 0x3f);
      lVar16 = (ulong)*puVar25 - 0x100;
      if (-1 < lVar16) goto LAB_00138358;
      if (param_4 - (long)puVar41 < 8) {
        if (param_4 - (long)puVar41 < 1) {
          uVar21 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_00138024;
LAB_00138070:
          uVar33 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_0013803c;
LAB_00138084:
          uVar36 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_00138054;
LAB_00138098:
          uVar28 = 0;
        }
        else {
          uVar21 = (uint)(byte)*puVar41 << 0x18;
          if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_00138070;
LAB_00138024:
          uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
          if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_00138084;
LAB_0013803c:
          uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
          if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00138098;
LAB_00138054:
          uVar28 = (ulong)*(byte *)((long)puVar41 + 3);
        }
        if (param_4 - ((long)puVar41 + 4) < 1) {
          uVar22 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_001380cc;
LAB_001380ec:
          uVar34 = 0;
        }
        else {
          uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
          if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_001380ec;
LAB_001380cc:
          uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
        }
        if (param_4 - ((long)puVar41 + 6) < 1) {
          uVar37 = 0;
        }
        else {
          uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
        }
        if (param_4 - ((long)puVar41 + 7) < 1) {
          uVar24 = 0;
        }
        else {
          uVar24 = (ulong)*(byte *)((long)puVar41 + 7);
        }
        uVar24 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar28 | (uVar33 | uVar21 | uVar36)) << 0x20 |
                 uVar24;
      }
      else {
        uVar28 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
        uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar28 >> 0x20 | uVar28 << 0x20;
      }
      puVar41 = (ulong *)((long)puVar41 + ((long)uVar23 >> 3));
      puVar43[1] = (char)*puVar25;
      uVar15 = uVar24 >> (0x3f - uVar23 & 0x3f) | uVar15;
      uVar23 = uVar23 & 7;
      puVar30 = puVar43 + 2;
      if (puVar39 <= puVar43 + 1) {
        puVar43 = puVar43 + 1;
        goto LAB_00139abc;
      }
    }
    puVar43 = puVar43 + -1;
LAB_00138358:
    if (param_4 - (long)puVar41 < 8) {
      if (param_4 - (long)puVar41 < 1) {
        uVar21 = 0;
        if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_00138394;
LAB_001383e0:
        uVar33 = 0;
        if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_001383ac;
LAB_001383f4:
        uVar36 = 0;
        if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_001383c4;
LAB_00138408:
        uVar28 = 0;
      }
      else {
        uVar21 = (uint)(byte)*puVar41 << 0x18;
        if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_001383e0;
LAB_00138394:
        uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
        if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_001383f4;
LAB_001383ac:
        uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
        if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00138408;
LAB_001383c4:
        uVar28 = (ulong)*(byte *)((long)puVar41 + 3);
      }
      if (param_4 - ((long)puVar41 + 4) < 1) {
        uVar22 = 0;
        if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_0013843c;
LAB_0013845c:
        uVar34 = 0;
      }
      else {
        uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
        if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_0013845c;
LAB_0013843c:
        uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
      }
      if (param_4 - ((long)puVar41 + 6) < 1) {
        uVar37 = 0;
      }
      else {
        uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
      }
      if (param_4 - ((long)puVar41 + 7) < 1) {
        uVar24 = 0;
      }
      else {
        uVar24 = (ulong)*(byte *)((long)puVar41 + 7);
      }
      uVar24 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar28 | (uVar33 | uVar21 | uVar36)) << 0x20 |
               uVar24;
    }
    else {
      uVar28 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
      uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
      uVar24 = uVar28 >> 0x20 | uVar28 << 0x20;
    }
    puVar41 = (ulong *)((long)puVar41 + ((long)uVar23 >> 3));
    lVar32 = lVar16 * 8;
    uVar29 = uVar23 & 7;
    uVar24 = uVar24 >> (0x3f - uVar23 & 0x3f) | uVar15;
    uVar10 = *(ushort *)(&DAT_039c40c4 + lVar32);
    uVar28 = (ulong)uVar10;
    uVar35 = (ulong)(byte)(&DAT_039c40c7)[lVar32];
    uVar21 = (uint)(byte)(&DAT_039c40c7)[lVar32];
    iVar42 = (int)puVar43;
    if (0x13 < lVar16) {
      if (*(int *)(&DAT_039c40c0 + lVar16 * 8) != 0) {
        uVar23 = (ulong)(byte)(&DAT_039c40c6)[lVar32] - 2;
        uVar15 = uVar24 << (uVar23 & 0x3f);
        uVar23 = uVar29 + uVar23;
        lVar16 = (long)*(int *)(&DAT_039c40c0 + lVar16 * 8) +
                 (uVar24 >> ((ulong)(0x42 - (byte)(&DAT_039c40c6)[lVar32]) & 0x3f)) * 4 + 4;
        auStack_98[4] = lVar16;
        auStack_98[5] = uVar18;
        auStack_98[6] = uVar17;
        goto joined_r0x00138584;
      }
      uVar18 = uVar24 >> 0x3e;
      uVar15 = uVar24 << 2;
      uVar23 = uVar29 + 2;
      if (uVar21 == 0) {
        puVar30 = puVar43 + uVar18 * -4 + -4;
        if ((long)puVar30 - (long)puVar44 < 0) {
          puVar30 = puVar44 + ((long)puVar30 - (long)puVar44 & uVar40);
          uVar18 = (long)puVar1 - (long)puVar30;
          if ((long)uVar18 < (long)uVar28) {
            uVar17 = uVar18;
            puVar27 = puVar43;
            puVar38 = puVar30;
            if ((uVar18 & 7) != 0) {
              lVar16 = -(uVar18 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar17 = uVar17 - 1;
                lVar16 = lVar16 + 1;
                puVar27 = puVar27 + 1;
                *puVar27 = *puVar38;
              } while (lVar16 != 0);
            }
            if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
              puVar38 = puVar38 + 4;
              puVar20 = puVar27;
              do {
                puVar20[1] = puVar38[-3];
                puVar20[2] = puVar38[-2];
                puVar20[3] = puVar38[-1];
                puVar20[4] = *puVar38;
                puVar20[5] = puVar38[1];
                puVar20[6] = puVar38[2];
                puVar20[7] = puVar38[3];
                puVar27 = puVar20 + 8;
                uVar17 = uVar17 - 8;
                puVar20[8] = puVar38[4];
                puVar38 = puVar38 + 8;
                puVar20 = puVar27;
              } while (uVar17 != 0);
            }
            uVar18 = uVar28 - uVar18;
            puVar38 = puVar44;
            if ((uVar18 & 7) != 0) {
              lVar16 = -(uVar18 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar18 = uVar18 - 1;
                lVar16 = lVar16 + 1;
                puVar27 = puVar27 + 1;
                *puVar27 = *puVar38;
              } while (lVar16 != 0);
            }
            if ((undefined1 *)0x6 < puVar30 + uVar28 + uVar14) {
              puVar27 = puVar27 + 4;
              puVar38 = puVar38 + 4;
              do {
                puVar27[-3] = puVar38[-3];
                puVar27[-2] = puVar38[-2];
                puVar27[-1] = puVar38[-1];
                *puVar27 = *puVar38;
                puVar27[1] = puVar38[1];
                puVar27[2] = puVar38[2];
                puVar27[3] = puVar38[3];
                puVar30 = puVar38 + 4;
                uVar18 = uVar18 - 8;
                puVar38 = puVar38 + 8;
                puVar27[4] = *puVar30;
                puVar27 = puVar27 + 8;
              } while (uVar18 != 0);
            }
            goto joined_r0x001385ac;
          }
        }
        if (puVar30 != (undefined1 *)0x0) {
          puVar43[1] = puVar30[1];
          puVar43[2] = puVar30[2];
          puVar43[3] = puVar30[3];
          puVar43[4] = puVar30[4];
          puVar43[5] = puVar30[5];
          puVar43[6] = puVar30[6];
          puVar43[7] = puVar30[7];
          puVar43[8] = puVar30[8];
        }
        goto joined_r0x001385ac;
      }
      if (uVar10 != 0x9d) {
        uVar17 = uVar23 + uVar35;
        uVar24 = uVar15 >> ((ulong)-uVar21 & 0x3f);
        sVar3 = uVar24 + uVar28;
        if (param_4 - (long)puVar41 < 8) {
          if (param_4 - (long)puVar41 < 1) {
            uVar21 = 0;
          }
          else {
            uVar21 = (uint)(byte)*puVar41 << 0x18;
          }
          if (param_4 - ((long)puVar41 + 1) < 1) {
            uVar33 = 0;
          }
          else {
            uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
          }
          if (param_4 - ((long)puVar41 + 2) < 1) {
            uVar36 = 0;
            if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_00138d40;
LAB_00138d80:
            uVar23 = 0;
          }
          else {
            uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
            if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00138d80;
LAB_00138d40:
            uVar23 = (ulong)*(byte *)((long)puVar41 + 3);
          }
          if (param_4 - ((long)puVar41 + 4) < 1) {
            uVar22 = 0;
          }
          else {
            uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
          }
          if (param_4 - ((long)puVar41 + 5) < 1) {
            uVar34 = 0;
          }
          else {
            uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
          }
          if (param_4 - ((long)puVar41 + 6) < 1) {
            uVar37 = 0;
          }
          else {
            uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
          }
          if (param_4 - ((long)puVar41 + 7) < 1) {
            uVar29 = 0;
          }
          else {
            uVar29 = (ulong)*(byte *)((long)puVar41 + 7);
          }
          uVar29 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar23 | (uVar33 | uVar21 | uVar36)) << 0x20
                   | uVar29;
        }
        else {
          uVar23 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar29 = uVar23 >> 0x20 | uVar23 << 0x20;
        }
        uVar23 = uVar17 & 7;
        puVar30 = puVar43 + uVar18 * -4 + -4;
        puVar41 = (ulong *)((long)puVar41 + (uVar17 >> 3));
        uVar15 = uVar29 >> (0x3f - uVar17 & 0x3f) | uVar15 << (uVar35 & 0x3f);
        if ((long)puVar30 - (long)puVar44 < 0) {
          puVar30 = puVar44 + ((long)puVar30 - (long)puVar44 & uVar40);
          uVar18 = (long)puVar1 - (long)puVar30;
          uVar17 = sVar3 - uVar18;
          if (uVar17 != 0 && (long)uVar18 <= (long)sVar3) {
            puVar38 = puVar30;
            puVar27 = puVar43;
            if ((uVar18 & 7) != 0) {
              lVar16 = -(uVar18 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar18 = uVar18 - 1;
                lVar16 = lVar16 + 1;
                puVar27 = puVar27 + 1;
                *puVar27 = *puVar38;
              } while (lVar16 != 0);
            }
            if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
              puVar38 = puVar38 + 4;
              puVar20 = puVar27;
              do {
                puVar20[1] = puVar38[-3];
                puVar20[2] = puVar38[-2];
                puVar20[3] = puVar38[-1];
                puVar20[4] = *puVar38;
                puVar20[5] = puVar38[1];
                puVar20[6] = puVar38[2];
                puVar20[7] = puVar38[3];
                puVar27 = puVar20 + 8;
                uVar18 = uVar18 - 8;
                puVar20[8] = puVar38[4];
                puVar38 = puVar38 + 8;
                puVar20 = puVar27;
              } while (uVar18 != 0);
            }
            lVar16 = uVar28 + uVar24 + uVar14;
            puVar38 = puVar44;
            if ((uVar17 & 7) != 0) {
              lVar32 = -(uVar17 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar17 = uVar17 - 1;
                lVar32 = lVar32 + 1;
                puVar27 = puVar27 + 1;
                *puVar27 = *puVar38;
              } while (lVar32 != 0);
            }
            uVar28 = sVar3;
            if ((undefined1 *)0x6 < puVar30 + lVar16) {
              puVar27 = puVar27 + 4;
              puVar38 = puVar38 + 4;
              do {
                puVar27[-3] = puVar38[-3];
                puVar27[-2] = puVar38[-2];
                puVar27[-1] = puVar38[-1];
                *puVar27 = *puVar38;
                puVar27[1] = puVar38[1];
                puVar27[2] = puVar38[2];
                puVar27[3] = puVar38[3];
                puVar30 = puVar38 + 4;
                uVar17 = uVar17 - 8;
                puVar38 = puVar38 + 8;
                puVar27[4] = *puVar30;
                puVar27 = puVar27 + 8;
              } while (uVar17 != 0);
            }
            goto joined_r0x001385ac;
          }
        }
        uVar28 = sVar3;
        if (puVar30 != (undefined1 *)0x0) {
          uVar21 = 3U - iVar42 & 3;
          if ((3U - iVar42 & 3) == 0) {
            puVar38 = puVar43;
          }
          else {
            puVar38 = puVar43 + 1;
            *puVar38 = puVar30[1];
            puVar27 = puVar30 + 1;
            if (uVar21 != 1) {
              puVar38 = puVar43 + 2;
              *puVar38 = puVar30[2];
              puVar27 = puVar30 + 2;
              if (uVar21 == 3) {
                puVar30 = puVar30 + 3;
                puVar43[3] = *puVar30;
                puVar38 = puVar43 + 3;
                goto LAB_00139074;
              }
            }
            puVar30 = puVar27;
          }
LAB_00139074:
          *(undefined4 *)(puVar38 + 1) = *(undefined4 *)(puVar30 + 1);
          puVar26 = (undefined4 *)(puVar38 + 5);
          puVar31 = (undefined4 *)(puVar30 + 5);
          do {
            bVar11 = puVar26 < puVar43 + (sVar3 - 3);
            *puVar26 = *puVar31;
            puVar26 = puVar26 + 1;
            puVar31 = puVar31 + 1;
          } while (bVar11);
        }
        goto joined_r0x001385ac;
      }
      if ((uVar24 & 0x3fffffffffffffff) >> 0x3d == 0) {
        uVar15 = uVar24 << 9;
        uVar29 = uVar29 + 9;
        uVar28 = (uVar24 >> 0x37 & 0x3f) + 0x9d;
joined_r0x00138be8:
        lVar16 = param_4 - (long)puVar41;
        if (lVar16 < 8) goto LAB_00138bec;
LAB_00138620:
        uVar23 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
        uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
        uVar23 = uVar23 >> 0x20 | uVar23 << 0x20;
        if (uVar28 <= (ulong)((long)puVar39 - (long)puVar43)) goto LAB_00138e5c;
      }
      else {
        if ((uVar24 >> 0x3c & 1) == 0) {
          uVar15 = uVar24 << 0xb;
          uVar29 = uVar29 + 0xb;
          uVar28 = (uVar24 >> 0x35 & 0x7f) + 0xdd;
          goto joined_r0x00138be8;
        }
        if ((uVar24 >> 0x3b & 1) == 0) {
          uVar15 = uVar24 << 0xd;
          uVar29 = uVar29 + 0xd;
          uVar28 = (uVar24 >> 0x33 & 0xff) + 0x15d;
        }
        else {
          if ((uVar24 >> 0x3a & 1) == 0) {
            uVar15 = uVar24 << 0x10;
            uVar29 = uVar29 | 0x10;
            uVar28 = (uVar24 >> 0x30 & 0x3ff) + 0x25d;
            goto joined_r0x00138be8;
          }
          uVar15 = uVar24 << 0x14;
          uVar29 = uVar29 + 0x14;
          uVar28 = (uVar24 >> 0x2c & 0x3fff) + 0x65d;
        }
        lVar16 = param_4 - (long)puVar41;
        if (7 < lVar16) goto LAB_00138620;
LAB_00138bec:
        if (lVar16 < 1) {
          uVar21 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_00138c0c;
LAB_00138cc0:
          uVar33 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_00138c24;
LAB_00138cd4:
          uVar36 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_00138c3c;
LAB_00138ce8:
          uVar17 = 0;
        }
        else {
          uVar21 = (uint)(byte)*puVar41 << 0x18;
          if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_00138cc0;
LAB_00138c0c:
          uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
          if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_00138cd4;
LAB_00138c24:
          uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
          if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_00138ce8;
LAB_00138c3c:
          uVar17 = (ulong)*(byte *)((long)puVar41 + 3);
        }
        if (param_4 - ((long)puVar41 + 4) < 1) {
          uVar22 = 0;
        }
        else {
          uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
        }
        if (param_4 - ((long)puVar41 + 5) < 1) {
          uVar34 = 0;
        }
        else {
          uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
        }
        if (param_4 - ((long)puVar41 + 6) < 1) {
          uVar37 = 0;
        }
        else {
          uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
        }
        if (param_4 - ((long)puVar41 + 7) < 1) {
          uVar23 = 0;
        }
        else {
          uVar23 = (ulong)*(byte *)((long)puVar41 + 7);
        }
        uVar23 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar17 | (uVar33 | uVar21 | uVar36)) << 0x20 |
                 uVar23;
        if (uVar28 <= (ulong)((long)puVar39 - (long)puVar43)) {
LAB_00138e5c:
          uVar15 = uVar23 >> (0x3f - uVar29 & 0x3f) | uVar15;
          puVar41 = (ulong *)((long)puVar41 + (uVar29 >> 3));
          uVar23 = uVar29 & 7;
          puVar30 = puVar43 + uVar18 * -4 + -4;
          if ((long)puVar30 - (long)puVar44 < 0) {
            puVar30 = puVar44 + ((long)puVar30 - (long)puVar44 & uVar40);
            uVar17 = (long)puVar1 - (long)puVar30;
            uVar24 = uVar28 - uVar17;
            if (uVar24 != 0 && (long)uVar17 <= (long)uVar28) {
              puVar27 = puVar43;
              puVar38 = puVar30;
              if ((uVar17 & 7) != 0) {
                lVar16 = -(uVar17 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar17 = uVar17 - 1;
                  lVar16 = lVar16 + 1;
                  puVar27 = puVar27 + 1;
                  *puVar27 = *puVar38;
                } while (lVar16 != 0);
              }
              if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
                puVar38 = puVar38 + 4;
                puVar20 = puVar27;
                do {
                  puVar20[1] = puVar38[-3];
                  puVar20[2] = puVar38[-2];
                  puVar20[3] = puVar38[-1];
                  puVar20[4] = *puVar38;
                  puVar20[5] = puVar38[1];
                  puVar20[6] = puVar38[2];
                  puVar20[7] = puVar38[3];
                  puVar27 = puVar20 + 8;
                  uVar17 = uVar17 - 8;
                  puVar20[8] = puVar38[4];
                  puVar38 = puVar38 + 8;
                  puVar20 = puVar27;
                } while (uVar17 != 0);
              }
              puVar38 = puVar44;
              if ((uVar24 & 7) != 0) {
                lVar16 = -(uVar24 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar24 = uVar24 - 1;
                  lVar16 = lVar16 + 1;
                  puVar27 = puVar27 + 1;
                  *puVar27 = *puVar38;
                } while (lVar16 != 0);
              }
              if ((undefined1 *)0x6 < puVar30 + uVar28 + uVar14) {
                puVar27 = puVar27 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar27[-3] = puVar38[-3];
                  puVar27[-2] = puVar38[-2];
                  puVar27[-1] = puVar38[-1];
                  *puVar27 = *puVar38;
                  puVar27[1] = puVar38[1];
                  puVar27[2] = puVar38[2];
                  puVar27[3] = puVar38[3];
                  puVar30 = puVar38 + 4;
                  uVar24 = uVar24 - 8;
                  puVar38 = puVar38 + 8;
                  puVar27[4] = *puVar30;
                  puVar27 = puVar27 + 8;
                } while (uVar24 != 0);
              }
              goto joined_r0x001385ac;
            }
          }
          if (puVar30 != (undefined1 *)0x0) {
            if (uVar18 == 0) {
              uVar21 = 3U - iVar42 & 3;
              if ((3U - iVar42 & 3) == 0) {
                puVar38 = puVar43;
              }
              else {
                puVar38 = puVar43 + 1;
                *puVar38 = puVar30[1];
                puVar27 = puVar30 + 1;
                if (uVar21 != 1) {
                  puVar38 = puVar43 + 2;
                  *puVar38 = puVar30[2];
                  puVar27 = puVar30 + 2;
                  if (uVar21 == 3) {
                    puVar30 = puVar30 + 3;
                    puVar43[3] = *puVar30;
                    puVar38 = puVar43 + 3;
                    goto LAB_001390cc;
                  }
                }
                puVar30 = puVar27;
              }
LAB_001390cc:
              uVar5 = *(undefined4 *)(puVar30 + 1);
              *(undefined4 *)(puVar38 + 1) = uVar5;
              puVar26 = (undefined4 *)(puVar38 + 5);
              do {
                bVar11 = puVar26 < puVar43 + (uVar28 - 3);
                *puVar26 = uVar5;
                puVar26 = puVar26 + 1;
              } while (bVar11);
            }
            else {
              puVar43[1] = puVar30[1];
              puVar43[2] = puVar30[2];
              puVar43[3] = puVar30[3];
              puVar43[4] = puVar30[4];
              puVar43[5] = puVar30[5];
              puVar43[6] = puVar30[6];
              puVar43[7] = puVar30[7];
              puVar38 = puVar43 + 8;
              puVar30 = puVar30 + 8;
              puVar43[8] = *puVar30;
              uVar18 = uVar28 - 8;
              if ((uVar18 & 7) != 0) {
                lVar16 = -(uVar18 & 7);
                do {
                  puVar30 = puVar30 + 1;
                  uVar18 = uVar18 - 1;
                  lVar16 = lVar16 + 1;
                  puVar38 = puVar38 + 1;
                  *puVar38 = *puVar30;
                } while (lVar16 != 0);
              }
              if (6 < uVar28 - 9) {
                puVar30 = puVar30 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar38[-3] = puVar30[-3];
                  puVar38[-2] = puVar30[-2];
                  puVar38[-1] = puVar30[-1];
                  *puVar38 = *puVar30;
                  puVar38[1] = puVar30[1];
                  puVar38[2] = puVar30[2];
                  puVar38[3] = puVar30[3];
                  puVar38[4] = puVar30[4];
                  uVar18 = uVar18 - 8;
                  puVar30 = puVar30 + 8;
                  puVar38 = puVar38 + 8;
                } while (uVar18 != 0);
              }
            }
          }
          goto joined_r0x001385ac;
        }
      }
      FUN_0010a430();
      pcVar19 = *(code **)PTR_PTR_043722f8;
      if (pcVar19 == (code *)0x0) goto LAB_00139b74;
      uVar12 = 0x12a;
LAB_00139b6c:
      (*pcVar19)(0,"v:/devel/projects/oodle2/core/rrlzhdecompresssub.inl",uVar12,
                 "OODLE ERROR : LZ corruption : bad long len, overrun\n");
LAB_00139b74:
      FUN_0010a450();
      return 0;
    }
    uVar23 = uVar24 >> 0x3b & 0x18;
    plVar4 = (long *)((long)auStack_98 + uVar23 + 0x18);
    lVar16 = *plVar4;
    uVar15 = uVar24 << 2;
    *plVar4 = *(long *)((long)auStack_98 + uVar23 + 0x10);
    uVar12 = *(undefined8 *)((long)auStack_98 + uVar23 + 8);
    *(undefined8 *)((long)auStack_98 + uVar23 + 8) = *(undefined8 *)((long)auStack_98 + uVar23);
    *(undefined8 *)((long)auStack_98 + uVar23 + 0x10) = uVar12;
    uVar23 = uVar29 + 2;
    auStack_98[3] = lVar16;
joined_r0x00138584:
    if (uVar21 == 0) {
      puVar30 = puVar43 + -lVar16;
      if ((long)puVar30 - (long)puVar44 < 0) {
        puVar30 = puVar44 + ((long)puVar30 - (long)puVar44 & uVar40);
        uVar18 = (long)puVar1 - (long)puVar30;
        if ((long)uVar18 < (long)uVar28) {
          uVar17 = uVar18;
          puVar27 = puVar43;
          puVar38 = puVar30;
          if ((uVar18 & 7) != 0) {
            lVar16 = -(uVar18 & 7);
            do {
              puVar38 = puVar38 + 1;
              uVar17 = uVar17 - 1;
              lVar16 = lVar16 + 1;
              puVar27 = puVar27 + 1;
              *puVar27 = *puVar38;
            } while (lVar16 != 0);
          }
          if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
            puVar38 = puVar38 + 4;
            puVar20 = puVar27;
            do {
              puVar20[1] = puVar38[-3];
              puVar20[2] = puVar38[-2];
              puVar20[3] = puVar38[-1];
              puVar20[4] = *puVar38;
              puVar20[5] = puVar38[1];
              puVar20[6] = puVar38[2];
              puVar20[7] = puVar38[3];
              puVar27 = puVar20 + 8;
              uVar17 = uVar17 - 8;
              puVar20[8] = puVar38[4];
              puVar38 = puVar38 + 8;
              puVar20 = puVar27;
            } while (uVar17 != 0);
          }
          uVar18 = uVar28 - uVar18;
          puVar38 = puVar44;
          if ((uVar18 & 7) != 0) {
            lVar16 = -(uVar18 & 7);
            do {
              puVar38 = puVar38 + 1;
              uVar18 = uVar18 - 1;
              lVar16 = lVar16 + 1;
              puVar27 = puVar27 + 1;
              *puVar27 = *puVar38;
            } while (lVar16 != 0);
          }
          if ((undefined1 *)0x6 < puVar30 + uVar28 + uVar14) {
            puVar27 = puVar27 + 4;
            puVar38 = puVar38 + 4;
            do {
              puVar27[-3] = puVar38[-3];
              puVar27[-2] = puVar38[-2];
              puVar27[-1] = puVar38[-1];
              *puVar27 = *puVar38;
              puVar27[1] = puVar38[1];
              puVar27[2] = puVar38[2];
              puVar27[3] = puVar38[3];
              puVar30 = puVar38 + 4;
              uVar18 = uVar18 - 8;
              puVar38 = puVar38 + 8;
              puVar27[4] = *puVar30;
              puVar27 = puVar27 + 8;
            } while (uVar18 != 0);
          }
          goto joined_r0x001385ac;
        }
      }
      if (puVar30 != (undefined1 *)0x0) {
        *(undefined8 *)(puVar43 + 1) = *(undefined8 *)(puVar30 + 1);
      }
    }
    else if (uVar10 == 0x9d) {
      if ((long)uVar15 < 0) {
        if ((uVar15 >> 0x3e & 1) == 0) {
          uVar17 = uVar15 << 9;
          uVar18 = uVar23 + 9;
          uVar28 = (uVar15 >> 0x37 & 0x7f) + 0xdd;
          goto joined_r0x00138668;
        }
        if ((uVar15 >> 0x3d & 1) == 0) {
          uVar17 = uVar15 << 0xb;
          uVar18 = uVar23 + 0xb;
          uVar28 = (uVar15 >> 0x35 & 0xff) + 0x15d;
        }
        else {
          if ((uVar15 >> 0x3c & 1) == 0) {
            uVar17 = uVar15 << 0xe;
            uVar18 = uVar23 + 0xe;
            uVar28 = (uVar15 >> 0x32 & 0x3ff) + 0x25d;
            goto joined_r0x00138668;
          }
          uVar17 = uVar15 << 0x12;
          uVar18 = uVar23 + 0x12;
          uVar28 = (uVar15 >> 0x2e & 0x3fff) + 0x65d;
        }
        lVar32 = param_4 - (long)puVar41;
        if (7 < lVar32) goto LAB_00138534;
LAB_0013866c:
        if (lVar32 < 1) {
          uVar21 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 1)) goto LAB_0013868c;
LAB_001387c0:
          uVar33 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 2)) goto LAB_001386a4;
LAB_001387d4:
          uVar36 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_001386bc;
LAB_001387e8:
          uVar15 = 0;
        }
        else {
          uVar21 = (uint)(byte)*puVar41 << 0x18;
          if (param_4 - (long)((long)puVar41 + 1) < 1) goto LAB_001387c0;
LAB_0013868c:
          uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
          if (param_4 - (long)((long)puVar41 + 2) < 1) goto LAB_001387d4;
LAB_001386a4:
          uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
          if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_001387e8;
LAB_001386bc:
          uVar15 = (ulong)*(byte *)((long)puVar41 + 3);
        }
        if (param_4 - ((long)puVar41 + 4) < 1) {
          uVar22 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 5)) goto LAB_0013881c;
LAB_00138878:
          uVar34 = 0;
        }
        else {
          uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
          if (param_4 - (long)((long)puVar41 + 5) < 1) goto LAB_00138878;
LAB_0013881c:
          uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
        }
        if (param_4 - ((long)puVar41 + 6) < 1) {
          uVar37 = 0;
        }
        else {
          uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
        }
        if (param_4 - ((long)puVar41 + 7) < 1) {
          uVar24 = 0;
        }
        else {
          uVar24 = (ulong)*(byte *)((long)puVar41 + 7);
        }
        uVar24 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar15 | (uVar33 | uVar21 | uVar36)) << 0x20 |
                 uVar24;
        if ((ulong)((long)puVar39 - (long)puVar43) < uVar28) {
LAB_00139b44:
          FUN_0010a430();
          pcVar19 = *(code **)PTR_PTR_043722f8;
          if (pcVar19 == (code *)0x0) goto LAB_00139b74;
          uVar12 = 0xd5;
          goto LAB_00139b6c;
        }
      }
      else {
        uVar17 = uVar15 << 7;
        uVar18 = uVar23 + 7;
        uVar28 = (uVar15 >> 0x39 & 0x3f) + 0x9d;
joined_r0x00138668:
        lVar32 = param_4 - (long)puVar41;
        if (lVar32 < 8) goto LAB_0013866c;
LAB_00138534:
        uVar15 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar15 >> 0x20 | uVar15 << 0x20;
        if ((ulong)((long)puVar39 - (long)puVar43) < uVar28) goto LAB_00139b44;
      }
      uVar23 = uVar18 & 7;
      puVar30 = puVar43 + -lVar16;
      puVar41 = (ulong *)((long)puVar41 + (uVar18 >> 3));
      uVar15 = uVar24 >> (0x3f - uVar18 & 0x3f) | uVar17;
      if ((long)puVar30 - (long)puVar44 < 0) {
        puVar30 = puVar44 + ((long)puVar30 - (long)puVar44 & uVar40);
        uVar18 = (long)puVar1 - (long)puVar30;
        uVar17 = uVar28 - uVar18;
        if (uVar17 != 0 && (long)uVar18 <= (long)uVar28) {
          puVar27 = puVar43;
          puVar38 = puVar30;
          if ((uVar18 & 7) != 0) {
            lVar16 = -(uVar18 & 7);
            do {
              puVar38 = puVar38 + 1;
              uVar18 = uVar18 - 1;
              lVar16 = lVar16 + 1;
              puVar27 = puVar27 + 1;
              *puVar27 = *puVar38;
            } while (lVar16 != 0);
          }
          if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
            puVar38 = puVar38 + 4;
            puVar20 = puVar27;
            do {
              puVar20[1] = puVar38[-3];
              puVar20[2] = puVar38[-2];
              puVar20[3] = puVar38[-1];
              puVar20[4] = *puVar38;
              puVar20[5] = puVar38[1];
              puVar20[6] = puVar38[2];
              puVar20[7] = puVar38[3];
              puVar27 = puVar20 + 8;
              uVar18 = uVar18 - 8;
              puVar20[8] = puVar38[4];
              puVar38 = puVar38 + 8;
              puVar20 = puVar27;
            } while (uVar18 != 0);
          }
          puVar38 = puVar44;
          if ((uVar17 & 7) != 0) {
            lVar16 = -(uVar17 & 7);
            do {
              puVar38 = puVar38 + 1;
              uVar17 = uVar17 - 1;
              lVar16 = lVar16 + 1;
              puVar27 = puVar27 + 1;
              *puVar27 = *puVar38;
            } while (lVar16 != 0);
          }
          if ((undefined1 *)0x6 < puVar30 + uVar28 + uVar14) {
            puVar27 = puVar27 + 4;
            puVar38 = puVar38 + 4;
            do {
              puVar27[-3] = puVar38[-3];
              puVar27[-2] = puVar38[-2];
              puVar27[-1] = puVar38[-1];
              *puVar27 = *puVar38;
              puVar27[1] = puVar38[1];
              puVar27[2] = puVar38[2];
              puVar27[3] = puVar38[3];
              puVar30 = puVar38 + 4;
              uVar17 = uVar17 - 8;
              puVar38 = puVar38 + 8;
              puVar27[4] = *puVar30;
              puVar27 = puVar27 + 8;
            } while (uVar17 != 0);
          }
          goto joined_r0x001385ac;
        }
      }
      if (puVar30 != (undefined1 *)0x0) {
        if (lVar16 < (long)uVar28) {
          uVar17 = uVar28 - 1 >> 2;
          uVar21 = (int)uVar17 + 1;
          uVar18 = 0;
          if (uVar17 != 0) {
            lVar16 = (((ulong)uVar21 & 1) - 1) - uVar17;
            uVar17 = uVar18;
            do {
              uVar18 = uVar17 + 8;
              *(undefined4 *)(puVar43 + uVar17 + 1) = *(undefined4 *)(puVar30 + uVar17 + 1);
              lVar16 = lVar16 + 2;
              *(undefined4 *)(puVar43 + uVar17 + 5) = *(undefined4 *)(puVar30 + uVar17 + 5);
              uVar17 = uVar18;
            } while (lVar16 != 0);
          }
          if ((uVar21 & 1) != 0) {
            uVar7 = puVar30[uVar18 | 2];
            uVar8 = puVar30[uVar18 | 3];
            uVar9 = puVar30[uVar18 + 4];
            puVar43[uVar18 | 1] = puVar30[uVar18 | 1];
            puVar43[uVar18 | 2] = uVar7;
            puVar43[uVar18 | 3] = uVar8;
            puVar43[uVar18 + 4] = uVar9;
          }
        }
        else {
          memmove(puVar43 + 1,puVar30 + 1,uVar28);
        }
      }
    }
    else {
      uVar18 = uVar23 + uVar35;
      uVar17 = uVar15 >> ((ulong)-uVar21 & 0x3f);
      sVar3 = uVar17 + uVar28;
      if (param_4 - (long)puVar41 < 8) {
        if (param_4 - (long)puVar41 < 1) {
          uVar21 = 0;
        }
        else {
          uVar21 = (uint)(byte)*puVar41 << 0x18;
        }
        if (param_4 - ((long)puVar41 + 1) < 1) {
          uVar33 = 0;
        }
        else {
          uVar33 = (uint)*(byte *)((long)puVar41 + 1) << 0x10;
        }
        if (param_4 - ((long)puVar41 + 2) < 1) {
          uVar36 = 0;
          if (0 < param_4 - (long)((long)puVar41 + 3)) goto LAB_0013885c;
LAB_001388b0:
          uVar23 = 0;
        }
        else {
          uVar36 = (uint)*(byte *)((long)puVar41 + 2) << 8;
          if (param_4 - (long)((long)puVar41 + 3) < 1) goto LAB_001388b0;
LAB_0013885c:
          uVar23 = (ulong)*(byte *)((long)puVar41 + 3);
        }
        if (param_4 - ((long)puVar41 + 4) < 1) {
          uVar22 = 0;
        }
        else {
          uVar22 = (uint)*(byte *)((long)puVar41 + 4) << 0x18;
        }
        if (param_4 - ((long)puVar41 + 5) < 1) {
          uVar34 = 0;
        }
        else {
          uVar34 = (uint)*(byte *)((long)puVar41 + 5) << 0x10;
        }
        if (param_4 - ((long)puVar41 + 6) < 1) {
          uVar37 = 0;
        }
        else {
          uVar37 = (uint)*(byte *)((long)puVar41 + 6) << 8;
        }
        if (param_4 - ((long)puVar41 + 7) < 1) {
          uVar24 = 0;
        }
        else {
          uVar24 = (ulong)*(byte *)((long)puVar41 + 7);
        }
        uVar24 = (ulong)(uVar34 | uVar22 | uVar37) | (uVar23 | (uVar33 | uVar21 | uVar36)) << 0x20 |
                 uVar24;
      }
      else {
        uVar23 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
        uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar23 >> 0x20 | uVar23 << 0x20;
      }
      puVar41 = (ulong *)((long)puVar41 + ((long)uVar18 >> 3));
      uVar23 = uVar18 & 7;
      puVar30 = puVar43 + -lVar16;
      uVar15 = uVar24 >> (0x3f - uVar18 & 0x3f) | uVar15 << (uVar35 & 0x3f);
      if ((long)puVar30 - (long)puVar44 < 0) {
        puVar30 = puVar44 + ((long)puVar30 - (long)puVar44 & uVar40);
        uVar18 = (long)puVar1 - (long)puVar30;
        uVar24 = sVar3 - uVar18;
        if (uVar24 != 0 && (long)uVar18 <= (long)sVar3) {
          puVar27 = puVar43;
          puVar38 = puVar30;
          if ((uVar18 & 7) != 0) {
            lVar16 = -(uVar18 & 7);
            do {
              puVar38 = puVar38 + 1;
              uVar18 = uVar18 - 1;
              lVar16 = lVar16 + 1;
              puVar27 = puVar27 + 1;
              *puVar27 = *puVar38;
            } while (lVar16 != 0);
          }
          if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar30) {
            puVar38 = puVar38 + 4;
            puVar20 = puVar27;
            do {
              puVar20[1] = puVar38[-3];
              puVar20[2] = puVar38[-2];
              puVar20[3] = puVar38[-1];
              puVar20[4] = *puVar38;
              puVar20[5] = puVar38[1];
              puVar20[6] = puVar38[2];
              puVar20[7] = puVar38[3];
              puVar27 = puVar20 + 8;
              uVar18 = uVar18 - 8;
              puVar20[8] = puVar38[4];
              puVar38 = puVar38 + 8;
              puVar20 = puVar27;
            } while (uVar18 != 0);
          }
          lVar16 = uVar28 + uVar17 + uVar14;
          puVar38 = puVar44;
          if ((uVar24 & 7) != 0) {
            lVar32 = -(uVar24 & 7);
            do {
              puVar38 = puVar38 + 1;
              uVar24 = uVar24 - 1;
              lVar32 = lVar32 + 1;
              puVar27 = puVar27 + 1;
              *puVar27 = *puVar38;
            } while (lVar32 != 0);
          }
          uVar28 = sVar3;
          if ((undefined1 *)0x6 < puVar30 + lVar16) {
            puVar27 = puVar27 + 4;
            puVar38 = puVar38 + 4;
            do {
              puVar27[-3] = puVar38[-3];
              puVar27[-2] = puVar38[-2];
              puVar27[-1] = puVar38[-1];
              *puVar27 = *puVar38;
              puVar27[1] = puVar38[1];
              puVar27[2] = puVar38[2];
              puVar27[3] = puVar38[3];
              puVar30 = puVar38 + 4;
              uVar24 = uVar24 - 8;
              puVar38 = puVar38 + 8;
              puVar27[4] = *puVar30;
              puVar27 = puVar27 + 8;
            } while (uVar24 != 0);
          }
          goto joined_r0x001385ac;
        }
      }
      uVar28 = sVar3;
      if (puVar30 != (undefined1 *)0x0) {
        uVar21 = 3U - iVar42 & 3;
        if ((3U - iVar42 & 3) == 0) {
          puVar38 = puVar43;
        }
        else {
          puVar38 = puVar43 + 1;
          *puVar38 = puVar30[1];
          puVar27 = puVar30 + 1;
          if (uVar21 != 1) {
            puVar38 = puVar43 + 2;
            *puVar38 = puVar30[2];
            puVar27 = puVar30 + 2;
            if (uVar21 == 3) {
              puVar30 = puVar30 + 3;
              puVar43[3] = *puVar30;
              puVar38 = puVar43 + 3;
              goto LAB_00138b60;
            }
          }
          puVar30 = puVar27;
        }
LAB_00138b60:
        *(undefined4 *)(puVar38 + 1) = *(undefined4 *)(puVar30 + 1);
        puVar26 = (undefined4 *)(puVar38 + 5);
        puVar31 = (undefined4 *)(puVar30 + 5);
        do {
          bVar11 = puVar26 < puVar43 + (sVar3 - 3);
          *puVar26 = *puVar31;
          puVar26 = puVar26 + 1;
          puVar31 = puVar31 + 1;
        } while (bVar11);
      }
    }
joined_r0x001385ac:
    puVar43 = puVar43 + uVar28;
    if (puVar39 <= puVar43) {
LAB_00139abc:
      if (puVar43 == puVar39) {
        uVar15 = 0x46 - uVar23;
        if (-1 < (long)(0x3f - uVar23)) {
          uVar15 = 0x3f - uVar23;
        }
        iVar13 = ((int)puVar41 - (int)(uVar15 >> 3)) - iVar13;
      }
      else {
        FUN_0010a430();
        if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
          (**(code **)PTR_PTR_043722f8)
                    (0,"v:/devel/projects/oodle2/core/rrlzhdecompresssub.inl",0x172,
                     "OODLE ERROR : LZ corruption : decPtr != decPtrEnd \n");
        }
        FUN_0010a450();
        iVar13 = -1;
      }
      return iVar13;
    }
  } while( true );
}


