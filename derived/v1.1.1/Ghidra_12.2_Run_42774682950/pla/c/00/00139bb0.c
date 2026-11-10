/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00139bb0; name: FUN_00139bb0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_00139bb0(long param_1,long param_2,byte *param_3,long param_4,long param_5,long param_6,
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
  undefined1 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  code *pcVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ushort *puVar23;
  undefined4 *puVar24;
  undefined1 *puVar25;
  ulong uVar26;
  undefined4 *puVar27;
  undefined1 *puVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  undefined1 *puVar38;
  ulong uVar39;
  int iVar40;
  ulong *puVar41;
  int iVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  ulong uVar45;
  ulong auStack_98 [7];
  
  iVar40 = (int)param_3;
  if (param_7 != 2) {
    if (param_7 == 1) {
      if (param_4 - (long)param_3 < 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = (ulong)*param_3 << 0x38;
      }
      if (7 < param_4 - (long)(param_3 + 1)) {
        uVar21 = (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff) << 8;
        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
        uVar21 = uVar21 >> 0x20 | uVar21 << 0x20;
        goto LAB_0013b684;
      }
      if (param_4 - (long)(param_3 + 1) < 1) {
        uVar19 = 0;
        if (0 < param_4 - (long)(param_3 + 2)) goto LAB_0013b58c;
LAB_0013b5d8:
        uVar29 = 0;
        if (0 < param_4 - (long)(param_3 + 3)) goto LAB_0013b5a4;
LAB_0013b5ec:
        uVar34 = 0;
        if (0 < param_4 - (long)(param_3 + 4)) goto LAB_0013b5bc;
LAB_0013b600:
        uVar21 = 0;
      }
      else {
        uVar19 = (uint)param_3[1] << 0x18;
        if (param_4 - (long)(param_3 + 2) < 1) goto LAB_0013b5d8;
LAB_0013b58c:
        uVar29 = (uint)param_3[2] << 0x10;
        if (param_4 - (long)(param_3 + 3) < 1) goto LAB_0013b5ec;
LAB_0013b5a4:
        uVar34 = (uint)param_3[3] << 8;
        if (param_4 - (long)(param_3 + 4) < 1) goto LAB_0013b600;
LAB_0013b5bc:
        uVar21 = (ulong)param_3[4];
      }
      if (param_4 - (long)(param_3 + 5) < 1) {
        uVar20 = 0;
      }
      else {
        uVar20 = (uint)param_3[5] << 0x18;
      }
      if (param_4 - (long)(param_3 + 6) < 1) {
        uVar30 = 0;
      }
      else {
        uVar30 = (uint)param_3[6] << 0x10;
      }
      if (param_4 - (long)(param_3 + 7) < 1) {
        uVar35 = 0;
      }
      else {
        uVar35 = (uint)param_3[7] << 8;
      }
      uVar21 = (ulong)(uVar30 | uVar20 | uVar35) | (uVar21 | (uVar29 | uVar19 | uVar34)) << 0x20;
LAB_0013b684:
      uVar14 = uVar14 | uVar21 >> 8;
      puVar12 = (undefined1 *)(param_5 + -1);
      auStack_98[3] = 0x14;
      auStack_98[4] = 0x18;
      puVar1 = puVar12 + param_6;
      auStack_98[5] = 0x1c;
      auStack_98[6] = 0x20;
      puVar41 = (ulong *)(param_3 + 7);
      puVar43 = (undefined1 *)(param_1 + -1);
      puVar44 = (undefined1 *)(param_2 + -1);
      uVar45 = param_6 - 1;
      uVar39 = ~(ulong)puVar1;
      uVar21 = 7;
      do {
        uVar15 = auStack_98[5];
        uVar16 = auStack_98[4];
        uVar22 = 0x3f - uVar21;
        uVar31 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
        uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
        puVar41 = (ulong *)((long)puVar41 + ((long)uVar21 >> 3));
        uVar21 = uVar21 & 7;
        uVar14 = (uVar31 >> 0x20 | uVar31 << 0x20) >> (uVar22 & 0x3f) | uVar14;
        puVar28 = puVar43 + 1;
        while( true ) {
          puVar43 = puVar28;
          if (uVar14 < *(ulong *)(param_8 + 0x150)) {
            puVar23 = (ushort *)(*(long *)(param_8 + 0x2c0) + (uVar14 >> 0x36) * 2);
            uVar31 = (ulong)*(byte *)(*(long *)(param_8 + 0x2b8) + (uVar14 >> 0x36));
          }
          else {
            lVar32 = *(long *)(param_8 + 0x2b0);
            if (uVar14 < *(ulong *)(param_8 + 0x158)) {
              puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x35) - *(long *)(param_8 + 0x58)) * 2);
              uVar31 = 0xb;
            }
            else if (uVar14 < *(ulong *)(param_8 + 0x160)) {
              puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x34) - *(long *)(param_8 + 0x60)) * 2);
              uVar31 = 0xc;
            }
            else if (uVar14 < *(ulong *)(param_8 + 0x168)) {
              puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x33) - *(long *)(param_8 + 0x68)) * 2);
              uVar31 = 0xd;
            }
            else if (uVar14 < *(ulong *)(param_8 + 0x170)) {
              puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x32) - *(long *)(param_8 + 0x70)) * 2);
              uVar31 = 0xe;
            }
            else if (uVar14 < *(ulong *)(param_8 + 0x178)) {
              puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x31) - *(long *)(param_8 + 0x78)) * 2);
              uVar31 = 0xf;
            }
            else if (uVar14 < *(ulong *)(param_8 + 0x180)) {
              puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x30) - *(long *)(param_8 + 0x80)) * 2);
              uVar31 = 0x10;
            }
            else {
              uVar31 = (ulong)*(int *)(param_8 + 0x29c);
              puVar23 = (ushort *)(lVar32 + (long)(*(int *)(param_8 + 0x288) + -1) * 2);
            }
          }
          uVar21 = uVar31 + uVar21;
          uVar14 = uVar14 << (uVar31 & 0x3f);
          lVar32 = (ulong)*puVar23 - 0x100;
          if (-1 < lVar32) break;
          *puVar43 = (char)*puVar23;
          if (puVar44 <= puVar43) goto LAB_0013cb6c;
          if (uVar14 < *(ulong *)(param_8 + 0x150)) {
            puVar23 = (ushort *)(*(long *)(param_8 + 0x2c0) + (uVar14 >> 0x36) * 2);
            uVar31 = (ulong)*(byte *)(*(long *)(param_8 + 0x2b8) + (uVar14 >> 0x36));
          }
          else {
            lVar32 = *(long *)(param_8 + 0x2b0);
            if (uVar14 < *(ulong *)(param_8 + 0x158)) {
              puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x35) - *(long *)(param_8 + 0x58)) * 2);
              uVar31 = 0xb;
            }
            else if (uVar14 < *(ulong *)(param_8 + 0x160)) {
              puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x34) - *(long *)(param_8 + 0x60)) * 2);
              uVar31 = 0xc;
            }
            else if (uVar14 < *(ulong *)(param_8 + 0x168)) {
              puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x33) - *(long *)(param_8 + 0x68)) * 2);
              uVar31 = 0xd;
            }
            else if (uVar14 < *(ulong *)(param_8 + 0x170)) {
              puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x32) - *(long *)(param_8 + 0x70)) * 2);
              uVar31 = 0xe;
            }
            else if (uVar14 < *(ulong *)(param_8 + 0x178)) {
              puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x31) - *(long *)(param_8 + 0x78)) * 2);
              uVar31 = 0xf;
            }
            else if (uVar14 < *(ulong *)(param_8 + 0x180)) {
              puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x30) - *(long *)(param_8 + 0x80)) * 2);
              uVar31 = 0x10;
            }
            else {
              uVar31 = (ulong)*(int *)(param_8 + 0x29c);
              puVar23 = (ushort *)(lVar32 + (long)(*(int *)(param_8 + 0x288) + -1) * 2);
            }
          }
          uVar21 = uVar31 + uVar21;
          uVar14 = uVar14 << (uVar31 & 0x3f);
          lVar32 = (ulong)*puVar23 - 0x100;
          if (-1 < lVar32) goto LAB_0013b994;
          uVar31 = *puVar41;
          puVar41 = (ulong *)((long)puVar41 + ((long)uVar21 >> 3));
          puVar43[1] = (char)*puVar23;
          uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
          uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
          uVar14 = (uVar31 >> 0x20 | uVar31 << 0x20) >> (0x3f - uVar21 & 0x3f) | uVar14;
          uVar21 = uVar21 & 7;
          puVar28 = puVar43 + 2;
          if (puVar44 <= puVar43 + 1) {
            puVar43 = puVar43 + 1;
            goto LAB_0013cb6c;
          }
        }
        puVar43 = puVar43 + -1;
LAB_0013b994:
        lVar33 = lVar32 * 8;
        uVar36 = (ulong)(byte)(&DAT_039c40c7)[lVar33];
        uVar31 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
        uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
        uVar26 = (uVar31 >> 0x20 | uVar31 << 0x20) >> (0x3f - uVar21 & 0x3f) | uVar14;
        uVar10 = *(ushort *)(&DAT_039c40c4 + lVar33);
        uVar31 = (ulong)uVar10;
        puVar41 = (ulong *)((long)puVar41 + ((long)uVar21 >> 3));
        uVar22 = uVar21 & 7;
        uVar19 = (uint)(byte)(&DAT_039c40c7)[lVar33];
        if (0x13 < lVar32) {
          if (*(int *)(&DAT_039c40c0 + lVar32 * 8) != 0) {
            uVar21 = (ulong)(byte)(&DAT_039c40c6)[lVar33] - 1;
            uVar14 = uVar26 << (uVar21 & 0x3f);
            uVar21 = uVar22 + uVar21;
            uVar26 = (long)*(int *)(&DAT_039c40c0 + lVar32 * 8) +
                     (uVar26 >> ((ulong)(0x41 - (byte)(&DAT_039c40c6)[lVar33]) & 0x3f)) * 2 + 2;
            auStack_98[4] = uVar26;
            auStack_98[5] = uVar16;
            auStack_98[6] = uVar15;
            goto joined_r0x0013b9ec;
          }
          uVar16 = uVar26 >> 0x3d;
          uVar14 = uVar26 << 3;
          uVar21 = uVar22 + 3;
          if (uVar19 == 0) {
            puVar28 = puVar43 + uVar16 * -2 + -2;
            if ((long)puVar28 - (long)puVar12 < 0) {
              puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar45);
              uVar16 = (long)puVar1 - (long)puVar28;
              if ((long)uVar16 < (long)uVar31) {
                uVar15 = uVar16;
                puVar25 = puVar43;
                puVar38 = puVar28;
                if ((uVar16 & 7) != 0) {
                  lVar32 = -(uVar16 & 7);
                  do {
                    puVar38 = puVar38 + 1;
                    uVar15 = uVar15 - 1;
                    lVar32 = lVar32 + 1;
                    puVar25 = puVar25 + 1;
                    *puVar25 = *puVar38;
                  } while (lVar32 != 0);
                }
                if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
                  puVar38 = puVar38 + 4;
                  puVar18 = puVar25;
                  do {
                    puVar18[1] = puVar38[-3];
                    puVar18[2] = puVar38[-2];
                    puVar18[3] = puVar38[-1];
                    puVar18[4] = *puVar38;
                    puVar18[5] = puVar38[1];
                    puVar18[6] = puVar38[2];
                    puVar18[7] = puVar38[3];
                    puVar25 = puVar18 + 8;
                    uVar15 = uVar15 - 8;
                    puVar18[8] = puVar38[4];
                    puVar38 = puVar38 + 8;
                    puVar18 = puVar25;
                  } while (uVar15 != 0);
                }
                uVar16 = uVar31 - uVar16;
                puVar38 = puVar12;
                if ((uVar16 & 7) != 0) {
                  lVar32 = -(uVar16 & 7);
                  do {
                    puVar38 = puVar38 + 1;
                    uVar16 = uVar16 - 1;
                    lVar32 = lVar32 + 1;
                    puVar25 = puVar25 + 1;
                    *puVar25 = *puVar38;
                  } while (lVar32 != 0);
                }
                if ((undefined1 *)0x6 < puVar28 + uVar31 + uVar39) {
                  puVar25 = puVar25 + 4;
                  puVar38 = puVar38 + 4;
                  do {
                    puVar25[-3] = puVar38[-3];
                    puVar25[-2] = puVar38[-2];
                    puVar25[-1] = puVar38[-1];
                    *puVar25 = *puVar38;
                    puVar25[1] = puVar38[1];
                    puVar25[2] = puVar38[2];
                    puVar25[3] = puVar38[3];
                    puVar28 = puVar38 + 4;
                    uVar16 = uVar16 - 8;
                    puVar38 = puVar38 + 8;
                    puVar25[4] = *puVar28;
                    puVar25 = puVar25 + 8;
                  } while (uVar16 != 0);
                }
                goto joined_r0x0013cac8;
              }
            }
            if (puVar28 != (undefined1 *)0x0) {
              puVar43[1] = puVar28[1];
              puVar43[2] = puVar28[2];
              puVar43[3] = puVar28[3];
              puVar43[4] = puVar28[4];
              puVar43[5] = puVar28[5];
              puVar43[6] = puVar28[6];
              puVar43[7] = puVar28[7];
              puVar43[8] = puVar28[8];
            }
            goto joined_r0x0013cac8;
          }
          if (uVar10 != 0x9d) {
            uVar15 = *puVar41;
            uVar21 = uVar21 + uVar36;
            uVar22 = uVar14 >> ((ulong)-uVar19 & 0x3f);
            puVar41 = (ulong *)((long)puVar41 + (uVar21 >> 3));
            uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
            uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
            uVar14 = (uVar15 >> 0x20 | uVar15 << 0x20) >> (0x3f - uVar21 & 0x3f) |
                     uVar14 << (uVar36 & 0x3f);
            puVar28 = puVar43 + uVar16 * -2 + -2;
            uVar21 = uVar21 & 7;
            uVar16 = uVar22 + uVar31;
            if ((long)puVar28 - (long)puVar12 < 0) {
              puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar45);
              uVar15 = (long)puVar1 - (long)puVar28;
              uVar26 = uVar16 - uVar15;
              if (uVar26 != 0 && (long)uVar15 <= (long)uVar16) {
                puVar25 = puVar43;
                puVar38 = puVar28;
                if ((uVar15 & 7) != 0) {
                  lVar32 = -(uVar15 & 7);
                  do {
                    puVar38 = puVar38 + 1;
                    uVar15 = uVar15 - 1;
                    lVar32 = lVar32 + 1;
                    puVar25 = puVar25 + 1;
                    *puVar25 = *puVar38;
                  } while (lVar32 != 0);
                }
                if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
                  puVar38 = puVar38 + 4;
                  puVar18 = puVar25;
                  do {
                    puVar18[1] = puVar38[-3];
                    puVar18[2] = puVar38[-2];
                    puVar18[3] = puVar38[-1];
                    puVar18[4] = *puVar38;
                    puVar18[5] = puVar38[1];
                    puVar18[6] = puVar38[2];
                    puVar18[7] = puVar38[3];
                    puVar25 = puVar18 + 8;
                    uVar15 = uVar15 - 8;
                    puVar18[8] = puVar38[4];
                    puVar38 = puVar38 + 8;
                    puVar18 = puVar25;
                  } while (uVar15 != 0);
                }
                lVar32 = uVar31 + uVar22 + uVar39;
                puVar38 = puVar12;
                if ((uVar26 & 7) != 0) {
                  lVar33 = -(uVar26 & 7);
                  do {
                    puVar38 = puVar38 + 1;
                    uVar26 = uVar26 - 1;
                    lVar33 = lVar33 + 1;
                    puVar25 = puVar25 + 1;
                    *puVar25 = *puVar38;
                  } while (lVar33 != 0);
                }
                uVar31 = uVar16;
                if ((undefined1 *)0x6 < puVar28 + lVar32) {
                  puVar25 = puVar25 + 4;
                  puVar38 = puVar38 + 4;
                  do {
                    puVar25[-3] = puVar38[-3];
                    puVar25[-2] = puVar38[-2];
                    puVar25[-1] = puVar38[-1];
                    *puVar25 = *puVar38;
                    puVar25[1] = puVar38[1];
                    puVar25[2] = puVar38[2];
                    puVar25[3] = puVar38[3];
                    puVar28 = puVar38 + 4;
                    uVar26 = uVar26 - 8;
                    puVar38 = puVar38 + 8;
                    puVar25[4] = *puVar28;
                    puVar25 = puVar25 + 8;
                  } while (uVar26 != 0);
                }
                goto joined_r0x0013cac8;
              }
            }
            uVar31 = uVar16;
            if (puVar28 != (undefined1 *)0x0) {
              puVar43[1] = puVar28[1];
              puVar43[2] = puVar28[2];
              puVar43[3] = puVar28[3];
              puVar43[4] = puVar28[4];
              puVar43[5] = puVar28[5];
              puVar43[6] = puVar28[6];
              puVar43[7] = puVar28[7];
              puVar38 = puVar43 + 8;
              puVar28 = puVar28 + 8;
              puVar43[8] = *puVar28;
              uVar15 = uVar16 - 8;
              if ((uVar15 & 7) != 0) {
                lVar32 = -(uVar15 & 7);
                do {
                  puVar28 = puVar28 + 1;
                  uVar15 = uVar15 - 1;
                  lVar32 = lVar32 + 1;
                  puVar38 = puVar38 + 1;
                  *puVar38 = *puVar28;
                } while (lVar32 != 0);
              }
              if (6 < uVar16 - 9) {
                puVar28 = puVar28 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar38[-3] = puVar28[-3];
                  puVar38[-2] = puVar28[-2];
                  puVar38[-1] = puVar28[-1];
                  *puVar38 = *puVar28;
                  puVar38[1] = puVar28[1];
                  puVar38[2] = puVar28[2];
                  puVar38[3] = puVar28[3];
                  puVar38[4] = puVar28[4];
                  uVar15 = uVar15 - 8;
                  puVar28 = puVar28 + 8;
                  puVar38 = puVar38 + 8;
                } while (uVar15 != 0);
              }
            }
            goto joined_r0x0013cac8;
          }
          if ((uVar26 & 0x1fffffffffffffff) >> 0x3c == 0) {
            uVar14 = uVar26 << 10;
            uVar22 = uVar22 + 10;
            uVar31 = (uVar26 >> 0x36 & 0x3f) + 0x9d;
            if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013bf8c;
          }
          else if ((uVar26 >> 0x3b & 1) == 0) {
            uVar14 = uVar26 << 0xc;
            uVar22 = uVar22 + 0xc;
            uVar31 = (uVar26 >> 0x34 & 0x7f) + 0xdd;
            if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013bf8c;
          }
          else if ((uVar26 >> 0x3a & 1) == 0) {
            uVar14 = uVar26 << 0xe;
            uVar22 = uVar22 + 0xe;
            uVar31 = (uVar26 >> 0x32 & 0xff) + 0x15d;
            if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013bf8c;
          }
          else if ((uVar26 >> 0x39 & 1) == 0) {
            uVar14 = uVar26 << 0x11;
            uVar22 = uVar22 + 0x11;
            uVar31 = (uVar26 >> 0x2f & 0x3ff) + 0x25d;
            if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013bf8c;
          }
          else {
            uVar14 = uVar26 << 0x15;
            uVar22 = uVar22 + 0x15;
            uVar31 = (uVar26 >> 0x2b & 0x3fff) + 0x65d;
            if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) {
LAB_0013bf8c:
              uVar15 = *puVar41;
              puVar41 = (ulong *)((long)puVar41 + (uVar22 >> 3));
              uVar21 = uVar22 & 7;
              uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
              uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
              uVar14 = (uVar15 >> 0x20 | uVar15 << 0x20) >> (0x3f - uVar22 & 0x3f) | uVar14;
              puVar28 = puVar43 + uVar16 * -2 + -2;
              if ((long)puVar28 - (long)puVar12 < 0) {
                puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar45);
                uVar15 = (long)puVar1 - (long)puVar28;
                uVar22 = uVar31 - uVar15;
                if (uVar22 != 0 && (long)uVar15 <= (long)uVar31) {
                  puVar25 = puVar43;
                  puVar38 = puVar28;
                  if ((uVar15 & 7) != 0) {
                    lVar32 = -(uVar15 & 7);
                    do {
                      puVar38 = puVar38 + 1;
                      uVar15 = uVar15 - 1;
                      lVar32 = lVar32 + 1;
                      puVar25 = puVar25 + 1;
                      *puVar25 = *puVar38;
                    } while (lVar32 != 0);
                  }
                  if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
                    puVar38 = puVar38 + 4;
                    puVar18 = puVar25;
                    do {
                      puVar18[1] = puVar38[-3];
                      puVar18[2] = puVar38[-2];
                      puVar18[3] = puVar38[-1];
                      puVar18[4] = *puVar38;
                      puVar18[5] = puVar38[1];
                      puVar18[6] = puVar38[2];
                      puVar18[7] = puVar38[3];
                      puVar25 = puVar18 + 8;
                      uVar15 = uVar15 - 8;
                      puVar18[8] = puVar38[4];
                      puVar38 = puVar38 + 8;
                      puVar18 = puVar25;
                    } while (uVar15 != 0);
                  }
                  puVar38 = puVar12;
                  if ((uVar22 & 7) != 0) {
                    lVar32 = -(uVar22 & 7);
                    do {
                      puVar38 = puVar38 + 1;
                      uVar22 = uVar22 - 1;
                      lVar32 = lVar32 + 1;
                      puVar25 = puVar25 + 1;
                      *puVar25 = *puVar38;
                    } while (lVar32 != 0);
                  }
                  if ((undefined1 *)0x6 < puVar28 + uVar31 + uVar39) {
                    puVar25 = puVar25 + 4;
                    puVar38 = puVar38 + 4;
                    do {
                      puVar25[-3] = puVar38[-3];
                      puVar25[-2] = puVar38[-2];
                      puVar25[-1] = puVar38[-1];
                      *puVar25 = *puVar38;
                      puVar25[1] = puVar38[1];
                      puVar25[2] = puVar38[2];
                      puVar25[3] = puVar38[3];
                      puVar28 = puVar38 + 4;
                      uVar22 = uVar22 - 8;
                      puVar38 = puVar38 + 8;
                      puVar25[4] = *puVar28;
                      puVar25 = puVar25 + 8;
                    } while (uVar22 != 0);
                  }
                  goto joined_r0x0013cac8;
                }
              }
              if (puVar28 != (undefined1 *)0x0) {
                if (uVar26 >> 0x3e == 0) {
                  if (uVar16 == 0) {
                    uVar7 = *(undefined1 *)((long)puVar28 + 1);
                    uVar8 = *(undefined1 *)((long)puVar28 + 2);
                    uVar16 = uVar31 >> 1;
                    uVar22 = uVar16 - 1;
                    uVar15 = uVar31 >> 1 & 7;
                    if (uVar15 == 0) {
                      puVar28 = (undefined1 *)0x0;
                      puVar38 = puVar43;
                    }
                    else {
                      lVar32 = -uVar15;
                      puVar38 = puVar43;
                      do {
                        puVar28 = puVar38;
                        puVar38 = puVar28 + 2;
                        *puVar38 = uVar8;
                        uVar16 = uVar16 - 1;
                        lVar32 = lVar32 + 1;
                        puVar28[1] = uVar7;
                      } while (lVar32 != 0);
                    }
                    if (6 < uVar22) {
                      puVar38 = puVar38 + -2;
                      do {
                        puVar28 = puVar38 + 0x10;
                        *puVar28 = uVar8;
                        uVar16 = uVar16 - 8;
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
                        puVar38 = puVar28;
                      } while (uVar16 != 0);
                    }
                    if ((uVar31 & 1) != 0) {
                      puVar28[3] = uVar7;
                    }
                  }
                  else {
                    uVar29 = 3 - (int)puVar43;
                    uVar19 = uVar29 & 3;
                    if ((uVar29 & 3) == 0) {
                      puVar38 = puVar43;
                    }
                    else {
                      puVar38 = puVar43 + 1;
                      *puVar38 = *(undefined1 *)((long)puVar28 + 1);
                      puVar25 = (undefined1 *)((long)puVar28 + 1);
                      if (uVar19 != 1) {
                        puVar38 = puVar43 + 2;
                        *puVar38 = *(undefined1 *)((long)puVar28 + 2);
                        puVar25 = (undefined1 *)((long)puVar28 + 2);
                        if (uVar19 == 3) {
                          puVar28 = (undefined1 *)((long)puVar28 + 3);
                          puVar43[3] = *puVar28;
                          puVar38 = puVar43 + 3;
                          goto LAB_0013c138;
                        }
                      }
                      puVar28 = puVar25;
                    }
LAB_0013c138:
                    uVar5 = *(undefined4 *)(puVar28 + 1);
                    *(undefined4 *)(puVar38 + 1) = uVar5;
                    puVar24 = (undefined4 *)(puVar38 + 5);
                    do {
                      bVar11 = puVar24 < puVar43 + (uVar31 - 3);
                      *puVar24 = uVar5;
                      puVar24 = puVar24 + 1;
                    } while (bVar11);
                  }
                }
                else {
                  puVar43[1] = *(undefined1 *)((long)puVar28 + 1);
                  puVar43[2] = *(undefined1 *)((long)puVar28 + 2);
                  puVar43[3] = *(undefined1 *)((long)puVar28 + 3);
                  puVar43[4] = *(undefined1 *)((long)puVar28 + 4);
                  puVar43[5] = *(undefined1 *)((long)puVar28 + 5);
                  puVar43[6] = *(undefined1 *)((long)puVar28 + 6);
                  puVar43[7] = *(undefined1 *)((long)puVar28 + 7);
                  puVar38 = puVar43 + 8;
                  puVar28 = (undefined1 *)((long)puVar28 + 8);
                  puVar43[8] = *puVar28;
                  uVar16 = uVar31 - 8;
                  if ((uVar16 & 7) != 0) {
                    lVar32 = -(uVar16 & 7);
                    do {
                      puVar28 = puVar28 + 1;
                      uVar16 = uVar16 - 1;
                      lVar32 = lVar32 + 1;
                      puVar38 = puVar38 + 1;
                      *puVar38 = *puVar28;
                    } while (lVar32 != 0);
                  }
                  if (6 < uVar31 - 9) {
                    puVar28 = puVar28 + 4;
                    puVar38 = puVar38 + 4;
                    do {
                      puVar38[-3] = puVar28[-3];
                      puVar38[-2] = puVar28[-2];
                      puVar38[-1] = puVar28[-1];
                      *puVar38 = *puVar28;
                      puVar38[1] = puVar28[1];
                      puVar38[2] = puVar28[2];
                      puVar38[3] = puVar28[3];
                      puVar38[4] = puVar28[4];
                      uVar16 = uVar16 - 8;
                      puVar28 = puVar28 + 8;
                      puVar38 = puVar38 + 8;
                    } while (uVar16 != 0);
                  }
                }
              }
              goto joined_r0x0013cac8;
            }
          }
          FUN_0010a430();
          pcVar17 = *(code **)PTR_PTR_043722f8;
          if (pcVar17 == (code *)0x0) goto LAB_0013cc24;
          uVar13 = 0x12a;
LAB_0013cc1c:
          (*pcVar17)(0,"v:/devel/projects/oodle2/core/rrlzhdecompresssub.inl",uVar13,
                     "OODLE ERROR : LZ corruption : bad long len, overrun\n");
LAB_0013cc24:
          FUN_0010a450();
          return 0;
        }
        uVar21 = uVar26 >> 0x3b & 0x18;
        puVar2 = (ulong *)((long)auStack_98 + uVar21 + 0x18);
        uVar14 = uVar26 << 2;
        uVar26 = *puVar2;
        *puVar2 = *(ulong *)((long)auStack_98 + uVar21 + 0x10);
        uVar13 = *(undefined8 *)((long)auStack_98 + uVar21 + 8);
        *(undefined8 *)((long)auStack_98 + uVar21 + 8) = *(undefined8 *)((long)auStack_98 + uVar21);
        *(undefined8 *)((long)auStack_98 + uVar21 + 0x10) = uVar13;
        uVar21 = uVar22 + 2;
        auStack_98[3] = uVar26;
joined_r0x0013b9ec:
        if (uVar19 == 0) {
          puVar28 = puVar43 + -uVar26;
          if ((long)puVar28 - (long)puVar12 < 0) {
            puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar45);
            uVar16 = (long)puVar1 - (long)puVar28;
            if ((long)uVar16 < (long)uVar31) {
              uVar15 = uVar16;
              puVar25 = puVar43;
              puVar38 = puVar28;
              if ((uVar16 & 7) != 0) {
                lVar32 = -(uVar16 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar15 = uVar15 - 1;
                  lVar32 = lVar32 + 1;
                  puVar25 = puVar25 + 1;
                  *puVar25 = *puVar38;
                } while (lVar32 != 0);
              }
              if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
                puVar38 = puVar38 + 4;
                puVar18 = puVar25;
                do {
                  puVar18[1] = puVar38[-3];
                  puVar18[2] = puVar38[-2];
                  puVar18[3] = puVar38[-1];
                  puVar18[4] = *puVar38;
                  puVar18[5] = puVar38[1];
                  puVar18[6] = puVar38[2];
                  puVar18[7] = puVar38[3];
                  puVar25 = puVar18 + 8;
                  uVar15 = uVar15 - 8;
                  puVar18[8] = puVar38[4];
                  puVar38 = puVar38 + 8;
                  puVar18 = puVar25;
                } while (uVar15 != 0);
              }
              uVar16 = uVar31 - uVar16;
              puVar38 = puVar12;
              if ((uVar16 & 7) != 0) {
                lVar32 = -(uVar16 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar16 = uVar16 - 1;
                  lVar32 = lVar32 + 1;
                  puVar25 = puVar25 + 1;
                  *puVar25 = *puVar38;
                } while (lVar32 != 0);
              }
              if ((undefined1 *)0x6 < puVar28 + uVar31 + uVar39) {
                puVar25 = puVar25 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar25[-3] = puVar38[-3];
                  puVar25[-2] = puVar38[-2];
                  puVar25[-1] = puVar38[-1];
                  *puVar25 = *puVar38;
                  puVar25[1] = puVar38[1];
                  puVar25[2] = puVar38[2];
                  puVar25[3] = puVar38[3];
                  puVar28 = puVar38 + 4;
                  uVar16 = uVar16 - 8;
                  puVar38 = puVar38 + 8;
                  puVar25[4] = *puVar28;
                  puVar25 = puVar25 + 8;
                } while (uVar16 != 0);
              }
              goto joined_r0x0013cac8;
            }
          }
          if (puVar28 != (undefined1 *)0x0) {
            *(undefined8 *)(puVar43 + 1) = *(undefined8 *)(puVar28 + 1);
          }
        }
        else {
          if (uVar10 == 0x9d) {
            if ((long)uVar14 < 0) {
              if ((uVar14 >> 0x3e & 1) == 0) {
                uVar15 = uVar14 << 9;
                uVar16 = uVar21 + 9;
                uVar31 = (uVar14 >> 0x37 & 0x7f) + 0xdd;
                if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013bde4;
              }
              else if ((uVar14 >> 0x3d & 1) == 0) {
                uVar15 = uVar14 << 0xb;
                uVar16 = uVar21 + 0xb;
                uVar31 = (uVar14 >> 0x35 & 0xff) + 0x15d;
                if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013bde4;
              }
              else if ((uVar14 >> 0x3c & 1) == 0) {
                uVar15 = uVar14 << 0xe;
                uVar16 = uVar21 + 0xe;
                uVar31 = (uVar14 >> 0x32 & 0x3ff) + 0x25d;
                if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013bde4;
              }
              else {
                uVar15 = uVar14 << 0x12;
                uVar16 = uVar21 + 0x12;
                uVar31 = (uVar14 >> 0x2e & 0x3fff) + 0x65d;
                if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) {
LAB_0013bde4:
                  uVar14 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8
                  ;
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  ;
                  puVar41 = (ulong *)((long)puVar41 + (uVar16 >> 3));
                  uVar21 = uVar16 & 7;
                  puVar28 = puVar43 + -uVar26;
                  uVar14 = (uVar14 >> 0x20 | uVar14 << 0x20) >> (0x3f - uVar16 & 0x3f) | uVar15;
                  if ((long)puVar28 - (long)puVar12 < 0) {
                    puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar45);
                    uVar16 = (long)puVar1 - (long)puVar28;
                    uVar15 = uVar31 - uVar16;
                    if (uVar15 != 0 && (long)uVar16 <= (long)uVar31) {
                      puVar25 = puVar43;
                      puVar38 = puVar28;
                      if ((uVar16 & 7) != 0) {
                        lVar32 = -(uVar16 & 7);
                        do {
                          puVar38 = puVar38 + 1;
                          uVar16 = uVar16 - 1;
                          lVar32 = lVar32 + 1;
                          puVar25 = puVar25 + 1;
                          *puVar25 = *puVar38;
                        } while (lVar32 != 0);
                      }
                      if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
                        puVar38 = puVar38 + 4;
                        puVar18 = puVar25;
                        do {
                          puVar18[1] = puVar38[-3];
                          puVar18[2] = puVar38[-2];
                          puVar18[3] = puVar38[-1];
                          puVar18[4] = *puVar38;
                          puVar18[5] = puVar38[1];
                          puVar18[6] = puVar38[2];
                          puVar18[7] = puVar38[3];
                          puVar25 = puVar18 + 8;
                          uVar16 = uVar16 - 8;
                          puVar18[8] = puVar38[4];
                          puVar38 = puVar38 + 8;
                          puVar18 = puVar25;
                        } while (uVar16 != 0);
                      }
                      puVar38 = puVar12;
                      if ((uVar15 & 7) != 0) {
                        lVar32 = -(uVar15 & 7);
                        do {
                          puVar38 = puVar38 + 1;
                          uVar15 = uVar15 - 1;
                          lVar32 = lVar32 + 1;
                          puVar25 = puVar25 + 1;
                          *puVar25 = *puVar38;
                        } while (lVar32 != 0);
                      }
                      if ((undefined1 *)0x6 < puVar28 + uVar31 + uVar39) {
                        puVar25 = puVar25 + 4;
                        puVar38 = puVar38 + 4;
                        do {
                          puVar25[-3] = puVar38[-3];
                          puVar25[-2] = puVar38[-2];
                          puVar25[-1] = puVar38[-1];
                          *puVar25 = *puVar38;
                          puVar25[1] = puVar38[1];
                          puVar25[2] = puVar38[2];
                          puVar25[3] = puVar38[3];
                          puVar28 = puVar38 + 4;
                          uVar15 = uVar15 - 8;
                          puVar38 = puVar38 + 8;
                          puVar25[4] = *puVar28;
                          puVar25 = puVar25 + 8;
                        } while (uVar15 != 0);
                      }
                      goto joined_r0x0013cac8;
                    }
                  }
                  if (puVar28 != (undefined1 *)0x0) {
                    if ((long)uVar26 < (long)uVar31) {
                      uVar15 = uVar31 - 1 >> 2;
                      uVar19 = (int)uVar15 + 1;
                      uVar16 = 0;
                      if (uVar15 != 0) {
                        lVar32 = (((ulong)uVar19 & 1) - 1) - uVar15;
                        uVar15 = uVar16;
                        do {
                          uVar16 = uVar15 + 8;
                          *(undefined4 *)(puVar43 + uVar15 + 1) =
                               *(undefined4 *)(puVar28 + uVar15 + 1);
                          lVar32 = lVar32 + 2;
                          *(undefined4 *)(puVar43 + uVar15 + 5) =
                               *(undefined4 *)(puVar28 + uVar15 + 5);
                          uVar15 = uVar16;
                        } while (lVar32 != 0);
                      }
                      if ((uVar19 & 1) != 0) {
                        uVar7 = puVar28[uVar16 | 2];
                        uVar8 = puVar28[uVar16 | 3];
                        uVar9 = puVar28[uVar16 + 4];
                        puVar43[uVar16 | 1] = puVar28[uVar16 | 1];
                        puVar43[uVar16 | 2] = uVar7;
                        puVar43[uVar16 | 3] = uVar8;
                        puVar43[uVar16 + 4] = uVar9;
                      }
                    }
                    else {
                      memmove(puVar43 + 1,puVar28 + 1,uVar31);
                    }
                  }
                  goto joined_r0x0013cac8;
                }
              }
            }
            else {
              uVar15 = uVar14 << 7;
              uVar16 = uVar21 + 7;
              uVar31 = (uVar14 >> 0x39 & 0x3f) + 0x9d;
              if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013bde4;
            }
            FUN_0010a430();
            pcVar17 = *(code **)PTR_PTR_043722f8;
            if (pcVar17 == (code *)0x0) goto LAB_0013cc24;
            uVar13 = 0xd5;
            goto LAB_0013cc1c;
          }
          uVar22 = *puVar41;
          uVar16 = uVar21 + uVar36;
          uVar37 = uVar14 >> ((ulong)-uVar19 & 0x3f);
          puVar41 = (ulong *)((long)puVar41 + ((long)uVar16 >> 3));
          uVar21 = uVar16 & 7;
          puVar28 = puVar43 + -uVar26;
          uVar15 = uVar37 + uVar31;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar14 = (uVar22 >> 0x20 | uVar22 << 0x20) >> (0x3f - uVar16 & 0x3f) |
                   uVar14 << (uVar36 & 0x3f);
          if ((long)puVar28 - (long)puVar12 < 0) {
            puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar45);
            uVar16 = (long)puVar1 - (long)puVar28;
            uVar22 = uVar15 - uVar16;
            if (uVar22 != 0 && (long)uVar16 <= (long)uVar15) {
              puVar25 = puVar43;
              puVar38 = puVar28;
              if ((uVar16 & 7) != 0) {
                lVar32 = -(uVar16 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar16 = uVar16 - 1;
                  lVar32 = lVar32 + 1;
                  puVar25 = puVar25 + 1;
                  *puVar25 = *puVar38;
                } while (lVar32 != 0);
              }
              if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
                puVar38 = puVar38 + 4;
                puVar18 = puVar25;
                do {
                  puVar18[1] = puVar38[-3];
                  puVar18[2] = puVar38[-2];
                  puVar18[3] = puVar38[-1];
                  puVar18[4] = *puVar38;
                  puVar18[5] = puVar38[1];
                  puVar18[6] = puVar38[2];
                  puVar18[7] = puVar38[3];
                  puVar25 = puVar18 + 8;
                  uVar16 = uVar16 - 8;
                  puVar18[8] = puVar38[4];
                  puVar38 = puVar38 + 8;
                  puVar18 = puVar25;
                } while (uVar16 != 0);
              }
              lVar32 = uVar31 + uVar37 + uVar39;
              puVar38 = puVar12;
              if ((uVar22 & 7) != 0) {
                lVar33 = -(uVar22 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar22 = uVar22 - 1;
                  lVar33 = lVar33 + 1;
                  puVar25 = puVar25 + 1;
                  *puVar25 = *puVar38;
                } while (lVar33 != 0);
              }
              uVar31 = uVar15;
              if ((undefined1 *)0x6 < puVar28 + lVar32) {
                puVar25 = puVar25 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar25[-3] = puVar38[-3];
                  puVar25[-2] = puVar38[-2];
                  puVar25[-1] = puVar38[-1];
                  *puVar25 = *puVar38;
                  puVar25[1] = puVar38[1];
                  puVar25[2] = puVar38[2];
                  puVar25[3] = puVar38[3];
                  puVar28 = puVar38 + 4;
                  uVar22 = uVar22 - 8;
                  puVar38 = puVar38 + 8;
                  puVar25[4] = *puVar28;
                  puVar25 = puVar25 + 8;
                } while (uVar22 != 0);
              }
              goto joined_r0x0013cac8;
            }
          }
          uVar31 = uVar15;
          if (puVar28 != (undefined1 *)0x0) {
            if ((uVar26 & 3) == 0) {
              uVar29 = 3 - (int)puVar43;
              uVar19 = uVar29 & 3;
              if ((uVar29 & 3) == 0) {
                puVar38 = puVar43;
              }
              else {
                puVar38 = puVar43 + 1;
                *puVar38 = puVar28[1];
                puVar25 = puVar28 + 1;
                if (uVar19 != 1) {
                  puVar38 = puVar43 + 2;
                  *puVar38 = puVar28[2];
                  puVar25 = puVar28 + 2;
                  if (uVar19 == 3) {
                    puVar28 = puVar28 + 3;
                    puVar43[3] = *puVar28;
                    puVar38 = puVar43 + 3;
                    goto LAB_0013bd7c;
                  }
                }
                puVar28 = puVar25;
              }
LAB_0013bd7c:
              *(undefined4 *)(puVar38 + 1) = *(undefined4 *)(puVar28 + 1);
              puVar24 = (undefined4 *)(puVar38 + 5);
              puVar27 = (undefined4 *)(puVar28 + 5);
              do {
                bVar11 = puVar24 < puVar43 + (uVar15 - 3);
                *puVar24 = *puVar27;
                puVar24 = puVar24 + 1;
                puVar27 = puVar27 + 1;
              } while (bVar11);
            }
            else if (0 < (long)uVar15) {
              lVar32 = 0;
              do {
                lVar33 = lVar32 + 4;
                *(undefined4 *)(puVar43 + lVar32 + 1) = *(undefined4 *)(puVar28 + lVar32 + 1);
                lVar32 = lVar33;
              } while (lVar33 < (long)uVar15);
            }
          }
        }
joined_r0x0013cac8:
        puVar43 = puVar43 + uVar31;
        if (puVar44 <= puVar43) {
LAB_0013cb6c:
          if (puVar43 == puVar44) {
            uVar14 = 0x46 - uVar21;
            if (-1 < (long)(0x3f - uVar21)) {
              uVar14 = 0x3f - uVar21;
            }
            iVar40 = ((int)puVar41 - (int)(uVar14 >> 3)) - iVar40;
          }
          else {
            FUN_0010a430();
            if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
              (**(code **)PTR_PTR_043722f8)
                        (0,"v:/devel/projects/oodle2/core/rrlzhdecompresssub.inl",0x172,
                         "OODLE ERROR : LZ corruption : decPtr != decPtrEnd \n");
            }
            FUN_0010a450();
            iVar40 = -1;
          }
          return iVar40;
        }
      } while( true );
    }
    if (param_7 != 0) {
      return -1;
    }
    if (param_4 - (long)param_3 < 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = (ulong)*param_3 << 0x38;
    }
    if (7 < param_4 - (long)(param_3 + 1)) {
      uVar21 = (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff) << 8;
      uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
      uVar21 = uVar21 >> 0x20 | uVar21 << 0x20;
      goto LAB_00139d84;
    }
    if (param_4 - (long)(param_3 + 1) < 1) {
      uVar19 = 0;
      if (0 < param_4 - (long)(param_3 + 2)) goto LAB_00139c8c;
LAB_00139cd8:
      uVar29 = 0;
      if (0 < param_4 - (long)(param_3 + 3)) goto LAB_00139ca4;
LAB_00139cec:
      uVar34 = 0;
      if (0 < param_4 - (long)(param_3 + 4)) goto LAB_00139cbc;
LAB_00139d00:
      uVar21 = 0;
    }
    else {
      uVar19 = (uint)param_3[1] << 0x18;
      if (param_4 - (long)(param_3 + 2) < 1) goto LAB_00139cd8;
LAB_00139c8c:
      uVar29 = (uint)param_3[2] << 0x10;
      if (param_4 - (long)(param_3 + 3) < 1) goto LAB_00139cec;
LAB_00139ca4:
      uVar34 = (uint)param_3[3] << 8;
      if (param_4 - (long)(param_3 + 4) < 1) goto LAB_00139d00;
LAB_00139cbc:
      uVar21 = (ulong)param_3[4];
    }
    if (param_4 - (long)(param_3 + 5) < 1) {
      uVar20 = 0;
    }
    else {
      uVar20 = (uint)param_3[5] << 0x18;
    }
    if (param_4 - (long)(param_3 + 6) < 1) {
      uVar30 = 0;
    }
    else {
      uVar30 = (uint)param_3[6] << 0x10;
    }
    if (param_4 - (long)(param_3 + 7) < 1) {
      uVar35 = 0;
    }
    else {
      uVar35 = (uint)param_3[7] << 8;
    }
    uVar21 = (ulong)(uVar30 | uVar20 | uVar35) | (uVar21 | (uVar29 | uVar19 | uVar34)) << 0x20;
LAB_00139d84:
    uVar14 = uVar14 | uVar21 >> 8;
    puVar43 = (undefined1 *)(param_1 + -1);
    puVar12 = (undefined1 *)(param_5 + -1);
    puVar1 = puVar12 + param_6;
    auStack_98[3] = 0x14;
    auStack_98[4] = 0x18;
    auStack_98[5] = 0x1c;
    auStack_98[6] = 0x20;
    puVar41 = (ulong *)(param_3 + 7);
    puVar44 = (undefined1 *)(param_2 + -1);
    uVar39 = param_6 - 1;
    uVar45 = ~(ulong)puVar1;
    uVar21 = 7;
    do {
      uVar15 = auStack_98[5];
      uVar16 = auStack_98[4];
      uVar22 = 0x3f - uVar21;
      uVar31 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      puVar41 = (ulong *)((long)puVar41 + ((long)uVar21 >> 3));
      uVar21 = uVar21 & 7;
      uVar14 = (uVar31 >> 0x20 | uVar31 << 0x20) >> (uVar22 & 0x3f) | uVar14;
      puVar28 = puVar43 + 1;
      while( true ) {
        puVar43 = puVar28;
        if (uVar14 < *(ulong *)(param_8 + 0x150)) {
          puVar23 = (ushort *)(*(long *)(param_8 + 0x2c0) + (uVar14 >> 0x36) * 2);
          uVar31 = (ulong)*(byte *)(*(long *)(param_8 + 0x2b8) + (uVar14 >> 0x36));
        }
        else {
          lVar32 = *(long *)(param_8 + 0x2b0);
          if (uVar14 < *(ulong *)(param_8 + 0x158)) {
            puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x35) - *(long *)(param_8 + 0x58)) * 2);
            uVar31 = 0xb;
          }
          else if (uVar14 < *(ulong *)(param_8 + 0x160)) {
            puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x34) - *(long *)(param_8 + 0x60)) * 2);
            uVar31 = 0xc;
          }
          else if (uVar14 < *(ulong *)(param_8 + 0x168)) {
            puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x33) - *(long *)(param_8 + 0x68)) * 2);
            uVar31 = 0xd;
          }
          else if (uVar14 < *(ulong *)(param_8 + 0x170)) {
            puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x32) - *(long *)(param_8 + 0x70)) * 2);
            uVar31 = 0xe;
          }
          else if (uVar14 < *(ulong *)(param_8 + 0x178)) {
            puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x31) - *(long *)(param_8 + 0x78)) * 2);
            uVar31 = 0xf;
          }
          else if (uVar14 < *(ulong *)(param_8 + 0x180)) {
            puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x30) - *(long *)(param_8 + 0x80)) * 2);
            uVar31 = 0x10;
          }
          else {
            uVar31 = (ulong)*(int *)(param_8 + 0x29c);
            puVar23 = (ushort *)(lVar32 + (long)(*(int *)(param_8 + 0x288) + -1) * 2);
          }
        }
        uVar21 = uVar31 + uVar21;
        uVar14 = uVar14 << (uVar31 & 0x3f);
        lVar32 = (ulong)*puVar23 - 0x100;
        if (-1 < lVar32) break;
        *puVar43 = (char)*puVar23;
        if (puVar44 <= puVar43) goto LAB_0013b40c;
        if (uVar14 < *(ulong *)(param_8 + 0x150)) {
          puVar23 = (ushort *)(*(long *)(param_8 + 0x2c0) + (uVar14 >> 0x36) * 2);
          uVar31 = (ulong)*(byte *)(*(long *)(param_8 + 0x2b8) + (uVar14 >> 0x36));
        }
        else {
          lVar32 = *(long *)(param_8 + 0x2b0);
          if (uVar14 < *(ulong *)(param_8 + 0x158)) {
            puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x35) - *(long *)(param_8 + 0x58)) * 2);
            uVar31 = 0xb;
          }
          else if (uVar14 < *(ulong *)(param_8 + 0x160)) {
            puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x34) - *(long *)(param_8 + 0x60)) * 2);
            uVar31 = 0xc;
          }
          else if (uVar14 < *(ulong *)(param_8 + 0x168)) {
            puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x33) - *(long *)(param_8 + 0x68)) * 2);
            uVar31 = 0xd;
          }
          else if (uVar14 < *(ulong *)(param_8 + 0x170)) {
            puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x32) - *(long *)(param_8 + 0x70)) * 2);
            uVar31 = 0xe;
          }
          else if (uVar14 < *(ulong *)(param_8 + 0x178)) {
            puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x31) - *(long *)(param_8 + 0x78)) * 2);
            uVar31 = 0xf;
          }
          else if (uVar14 < *(ulong *)(param_8 + 0x180)) {
            puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x30) - *(long *)(param_8 + 0x80)) * 2);
            uVar31 = 0x10;
          }
          else {
            uVar31 = (ulong)*(int *)(param_8 + 0x29c);
            puVar23 = (ushort *)(lVar32 + (long)(*(int *)(param_8 + 0x288) + -1) * 2);
          }
        }
        uVar21 = uVar31 + uVar21;
        uVar14 = uVar14 << (uVar31 & 0x3f);
        lVar32 = (ulong)*puVar23 - 0x100;
        if (-1 < lVar32) goto LAB_0013a094;
        uVar31 = *puVar41;
        puVar41 = (ulong *)((long)puVar41 + ((long)uVar21 >> 3));
        puVar43[1] = (char)*puVar23;
        uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
        uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
        uVar14 = (uVar31 >> 0x20 | uVar31 << 0x20) >> (0x3f - uVar21 & 0x3f) | uVar14;
        uVar21 = uVar21 & 7;
        puVar28 = puVar43 + 2;
        if (puVar44 <= puVar43 + 1) {
          puVar43 = puVar43 + 1;
          goto LAB_0013b40c;
        }
      }
      puVar43 = puVar43 + -1;
LAB_0013a094:
      lVar33 = lVar32 * 8;
      uVar31 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar36 = (ulong)(byte)(&DAT_039c40c7)[lVar33];
      uVar26 = (uVar31 >> 0x20 | uVar31 << 0x20) >> (0x3f - uVar21 & 0x3f) | uVar14;
      uVar10 = *(ushort *)(&DAT_039c40c4 + lVar33);
      uVar31 = (ulong)uVar10;
      puVar41 = (ulong *)((long)puVar41 + ((long)uVar21 >> 3));
      uVar22 = uVar21 & 7;
      uVar19 = (uint)(byte)(&DAT_039c40c7)[lVar33];
      if (0x13 < lVar32) {
        if (*(int *)(&DAT_039c40c0 + lVar32 * 8) != 0) {
          bVar6 = (&DAT_039c40c6)[lVar33];
          uVar14 = uVar26 << ((ulong)bVar6 & 0x3f);
          uVar21 = uVar22 + bVar6;
          uVar26 = (long)*(int *)(&DAT_039c40c0 + lVar32 * 8) +
                   (uVar26 >> ((ulong)-(uint)bVar6 & 0x3f)) + 1;
          auStack_98[4] = uVar26;
          auStack_98[5] = uVar16;
          auStack_98[6] = uVar15;
          goto joined_r0x0013a0ec;
        }
        uVar16 = uVar26 >> 0x3c;
        uVar14 = uVar26 << 4;
        uVar21 = uVar22 + 4;
        if (uVar19 == 0) {
          puVar28 = puVar43 + ~uVar16;
          if ((long)puVar28 - (long)puVar12 < 0) {
            puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar39);
            uVar16 = (long)puVar1 - (long)puVar28;
            if ((long)uVar16 < (long)uVar31) {
              uVar15 = uVar16;
              puVar25 = puVar43;
              puVar38 = puVar28;
              if ((uVar16 & 7) != 0) {
                lVar32 = -(uVar16 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar15 = uVar15 - 1;
                  lVar32 = lVar32 + 1;
                  puVar25 = puVar25 + 1;
                  *puVar25 = *puVar38;
                } while (lVar32 != 0);
              }
              if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
                puVar38 = puVar38 + 4;
                puVar18 = puVar25;
                do {
                  puVar18[1] = puVar38[-3];
                  puVar18[2] = puVar38[-2];
                  puVar18[3] = puVar38[-1];
                  puVar18[4] = *puVar38;
                  puVar18[5] = puVar38[1];
                  puVar18[6] = puVar38[2];
                  puVar18[7] = puVar38[3];
                  puVar25 = puVar18 + 8;
                  uVar15 = uVar15 - 8;
                  puVar18[8] = puVar38[4];
                  puVar38 = puVar38 + 8;
                  puVar18 = puVar25;
                } while (uVar15 != 0);
              }
              uVar16 = uVar31 - uVar16;
              puVar38 = puVar12;
              if ((uVar16 & 7) != 0) {
                lVar32 = -(uVar16 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar16 = uVar16 - 1;
                  lVar32 = lVar32 + 1;
                  puVar25 = puVar25 + 1;
                  *puVar25 = *puVar38;
                } while (lVar32 != 0);
              }
              if ((undefined1 *)0x6 < puVar28 + uVar31 + uVar45) {
                puVar25 = puVar25 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar25[-3] = puVar38[-3];
                  puVar25[-2] = puVar38[-2];
                  puVar25[-1] = puVar38[-1];
                  *puVar25 = *puVar38;
                  puVar25[1] = puVar38[1];
                  puVar25[2] = puVar38[2];
                  puVar25[3] = puVar38[3];
                  puVar28 = puVar38 + 4;
                  uVar16 = uVar16 - 8;
                  puVar38 = puVar38 + 8;
                  puVar25[4] = *puVar28;
                  puVar25 = puVar25 + 8;
                } while (uVar16 != 0);
              }
              goto joined_r0x0013afb4;
            }
          }
          if (puVar28 != (undefined1 *)0x0) {
            puVar43[1] = puVar28[1];
            puVar43[2] = puVar28[2];
            puVar43[3] = puVar28[3];
            puVar43[4] = puVar28[4];
            puVar43[5] = puVar28[5];
            puVar43[6] = puVar28[6];
            puVar43[7] = puVar28[7];
            puVar43[8] = puVar28[8];
          }
          goto joined_r0x0013afb4;
        }
        if (uVar10 != 0x9d) {
          uVar22 = *puVar41;
          uVar15 = uVar21 + uVar36;
          puVar41 = (ulong *)((long)puVar41 + (uVar15 >> 3));
          uVar21 = uVar15 & 7;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar26 = uVar14 >> ((ulong)-uVar19 & 0x3f);
          sVar3 = uVar26 + uVar31;
          uVar14 = (uVar22 >> 0x20 | uVar22 << 0x20) >> (0x3f - uVar15 & 0x3f) |
                   uVar14 << (uVar36 & 0x3f);
          puVar28 = puVar43 + ~uVar16;
          if ((long)puVar28 - (long)puVar12 < 0) {
            puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar39);
            uVar15 = (long)puVar1 - (long)puVar28;
            uVar22 = sVar3 - uVar15;
            if (uVar22 != 0 && (long)uVar15 <= (long)sVar3) {
              puVar25 = puVar43;
              puVar38 = puVar28;
              if ((uVar15 & 7) != 0) {
                lVar32 = -(uVar15 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar15 = uVar15 - 1;
                  lVar32 = lVar32 + 1;
                  puVar25 = puVar25 + 1;
                  *puVar25 = *puVar38;
                } while (lVar32 != 0);
              }
              if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
                puVar38 = puVar38 + 4;
                puVar18 = puVar25;
                do {
                  puVar18[1] = puVar38[-3];
                  puVar18[2] = puVar38[-2];
                  puVar18[3] = puVar38[-1];
                  puVar18[4] = *puVar38;
                  puVar18[5] = puVar38[1];
                  puVar18[6] = puVar38[2];
                  puVar18[7] = puVar38[3];
                  puVar25 = puVar18 + 8;
                  uVar15 = uVar15 - 8;
                  puVar18[8] = puVar38[4];
                  puVar38 = puVar38 + 8;
                  puVar18 = puVar25;
                } while (uVar15 != 0);
              }
              lVar32 = uVar31 + uVar26 + uVar45;
              puVar38 = puVar12;
              if ((uVar22 & 7) != 0) {
                lVar33 = -(uVar22 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar22 = uVar22 - 1;
                  lVar33 = lVar33 + 1;
                  puVar25 = puVar25 + 1;
                  *puVar25 = *puVar38;
                } while (lVar33 != 0);
              }
              uVar31 = sVar3;
              if ((undefined1 *)0x6 < puVar28 + lVar32) {
                puVar25 = puVar25 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar25[-3] = puVar38[-3];
                  puVar25[-2] = puVar38[-2];
                  puVar25[-1] = puVar38[-1];
                  *puVar25 = *puVar38;
                  puVar25[1] = puVar38[1];
                  puVar25[2] = puVar38[2];
                  puVar25[3] = puVar38[3];
                  puVar28 = puVar38 + 4;
                  uVar22 = uVar22 - 8;
                  puVar38 = puVar38 + 8;
                  puVar25[4] = *puVar28;
                  puVar25 = puVar25 + 8;
                } while (uVar22 != 0);
              }
              goto joined_r0x0013afb4;
            }
          }
          uVar31 = sVar3;
          if (puVar28 != (undefined1 *)0x0) {
            if (uVar16 == 0) {
              memset(puVar43 + 1,(uint)*(byte *)((long)puVar28 + 1),sVar3);
            }
            else {
              puVar43[1] = *(byte *)((long)puVar28 + 1);
              puVar43[2] = *(undefined1 *)((long)puVar28 + 2);
              puVar43[3] = *(undefined1 *)((long)puVar28 + 3);
              puVar43[4] = *(undefined1 *)((long)puVar28 + 4);
              puVar43[5] = *(undefined1 *)((long)puVar28 + 5);
              puVar43[6] = *(undefined1 *)((long)puVar28 + 6);
              puVar43[7] = *(undefined1 *)((long)puVar28 + 7);
              puVar28 = (undefined1 *)((long)puVar28 + 8);
              puVar43[8] = *puVar28;
              uVar16 = sVar3 - 8;
              puVar38 = puVar43 + 8;
              if ((uVar16 & 7) != 0) {
                lVar32 = -(uVar16 & 7);
                do {
                  puVar28 = puVar28 + 1;
                  uVar16 = uVar16 - 1;
                  lVar32 = lVar32 + 1;
                  puVar38 = puVar38 + 1;
                  *puVar38 = *puVar28;
                } while (lVar32 != 0);
              }
              if (6 < sVar3 - 9) {
                puVar28 = puVar28 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar38[-3] = puVar28[-3];
                  puVar38[-2] = puVar28[-2];
                  puVar38[-1] = puVar28[-1];
                  *puVar38 = *puVar28;
                  puVar38[1] = puVar28[1];
                  puVar38[2] = puVar28[2];
                  puVar38[3] = puVar28[3];
                  puVar38[4] = puVar28[4];
                  uVar16 = uVar16 - 8;
                  puVar28 = puVar28 + 8;
                  puVar38 = puVar38 + 8;
                } while (uVar16 != 0);
              }
            }
          }
          goto joined_r0x0013afb4;
        }
        if ((uVar26 & 0xfffffffffffffff) >> 0x3b == 0) {
          uVar14 = uVar26 << 0xb;
          uVar22 = uVar22 + 0xb;
          uVar31 = (uVar26 >> 0x35 & 0x3f) + 0x9d;
          if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013a6b0;
        }
        else if ((uVar26 >> 0x3a & 1) == 0) {
          uVar14 = uVar26 << 0xd;
          uVar22 = uVar22 + 0xd;
          uVar31 = (uVar26 >> 0x33 & 0x7f) + 0xdd;
          if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013a6b0;
        }
        else if ((uVar26 >> 0x39 & 1) == 0) {
          uVar14 = uVar26 << 0xf;
          uVar22 = uVar22 + 0xf;
          uVar31 = (uVar26 >> 0x31 & 0xff) + 0x15d;
          if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013a6b0;
        }
        else if ((uVar26 >> 0x38 & 1) == 0) {
          uVar14 = uVar26 << 0x12;
          uVar22 = (uVar22 | 8) + 10;
          uVar31 = (uVar26 >> 0x2e & 0x3ff) + 0x25d;
          if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013a6b0;
        }
        else {
          uVar14 = uVar26 << 0x16;
          uVar22 = (uVar22 | 8) + 0xe;
          uVar31 = (uVar26 >> 0x2a & 0x3fff) + 0x65d;
          if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) {
LAB_0013a6b0:
            uVar15 = *puVar41;
            puVar38 = (undefined1 *)(0x3f - uVar22);
            puVar41 = (ulong *)((long)puVar41 + (uVar22 >> 3));
            uVar21 = uVar22 & 7;
            uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
            uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
            uVar14 = (uVar15 >> 0x20 | uVar15 << 0x20) >> ((ulong)puVar38 & 0x3f) | uVar14;
            puVar28 = puVar43 + ~uVar16;
            if ((long)puVar28 - (long)puVar12 < 0) {
              puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar39);
              uVar15 = (long)puVar1 - (long)puVar28;
              uVar22 = uVar31 - uVar15;
              if (uVar22 != 0 && (long)uVar15 <= (long)uVar31) {
                puVar25 = puVar43;
                puVar38 = puVar28;
                if ((uVar15 & 7) != 0) {
                  lVar32 = -(uVar15 & 7);
                  do {
                    puVar38 = puVar38 + 1;
                    uVar15 = uVar15 - 1;
                    lVar32 = lVar32 + 1;
                    puVar25 = puVar25 + 1;
                    *puVar25 = *puVar38;
                  } while (lVar32 != 0);
                }
                if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
                  puVar38 = puVar38 + 4;
                  puVar18 = puVar25;
                  do {
                    puVar18[1] = puVar38[-3];
                    puVar18[2] = puVar38[-2];
                    puVar18[3] = puVar38[-1];
                    puVar18[4] = *puVar38;
                    puVar18[5] = puVar38[1];
                    puVar18[6] = puVar38[2];
                    puVar18[7] = puVar38[3];
                    puVar25 = puVar18 + 8;
                    uVar15 = uVar15 - 8;
                    puVar18[8] = puVar38[4];
                    puVar38 = puVar38 + 8;
                    puVar18 = puVar25;
                  } while (uVar15 != 0);
                }
                puVar38 = puVar12;
                if ((uVar22 & 7) != 0) {
                  lVar32 = -(uVar22 & 7);
                  do {
                    puVar38 = puVar38 + 1;
                    uVar22 = uVar22 - 1;
                    lVar32 = lVar32 + 1;
                    puVar25 = puVar25 + 1;
                    *puVar25 = *puVar38;
                  } while (lVar32 != 0);
                }
                if ((undefined1 *)0x6 < puVar28 + uVar31 + uVar45) {
                  puVar25 = puVar25 + 4;
                  puVar38 = puVar38 + 4;
                  do {
                    puVar25[-3] = puVar38[-3];
                    puVar25[-2] = puVar38[-2];
                    puVar25[-1] = puVar38[-1];
                    *puVar25 = *puVar38;
                    puVar25[1] = puVar38[1];
                    puVar25[2] = puVar38[2];
                    puVar25[3] = puVar38[3];
                    puVar28 = puVar38 + 4;
                    uVar22 = uVar22 - 8;
                    puVar38 = puVar38 + 8;
                    puVar25[4] = *puVar28;
                    puVar25 = puVar25 + 8;
                  } while (uVar22 != 0);
                }
                goto joined_r0x0013afb4;
              }
            }
            if (puVar28 != (undefined1 *)0x0) {
              if (uVar26 >> 0x3e == 0) {
                if (uVar16 == 2) {
                  uVar7 = puVar28[1];
                  uVar8 = puVar28[2];
                  uVar9 = puVar28[3];
                  uVar16 = uVar31 / 3;
                  uVar15 = uVar31 / 3 & 3;
                  uVar22 = uVar16 - 1;
                  puVar28 = puVar43;
                  if (uVar15 != 0) {
                    lVar32 = -uVar15;
                    do {
                      puVar38 = puVar28;
                      puVar28 = puVar38 + 3;
                      *puVar28 = uVar9;
                      uVar16 = uVar16 - 1;
                      lVar32 = lVar32 + 1;
                      puVar38[1] = uVar7;
                      puVar38[2] = uVar8;
                    } while (lVar32 != 0);
                  }
                  if (2 < uVar22) {
                    puVar28 = puVar28 + -3;
                    do {
                      puVar38 = puVar28 + 0xc;
                      *puVar38 = uVar9;
                      uVar16 = uVar16 - 4;
                      puVar28[4] = uVar7;
                      puVar28[5] = uVar8;
                      puVar28[6] = uVar9;
                      puVar28[7] = uVar7;
                      puVar28[8] = uVar8;
                      puVar28[9] = uVar9;
                      puVar28[10] = uVar7;
                      puVar28[0xb] = uVar8;
                      puVar28[0xd] = uVar7;
                      puVar28[0xe] = uVar8;
                      puVar28[0xf] = uVar9;
                      puVar28 = puVar38;
                    } while (uVar16 != 0);
                  }
                  if (uVar31 % 3 == 0) {
                    lVar32 = 3;
                  }
                  else {
                    puVar38[4] = uVar7;
                    if (uVar31 % 3 == 1) goto joined_r0x0013afb4;
                    lVar32 = 4;
                  }
                  puVar38[lVar32 + 1] = uVar8;
                }
                else if (uVar16 == 1) {
                  uVar7 = puVar28[1];
                  uVar8 = puVar28[2];
                  uVar16 = uVar31 >> 1;
                  uVar22 = uVar16 - 1;
                  uVar15 = uVar31 >> 1 & 7;
                  if (uVar15 == 0) {
                    puVar28 = (undefined1 *)0x0;
                    puVar38 = puVar43;
                  }
                  else {
                    lVar32 = -uVar15;
                    puVar38 = puVar43;
                    do {
                      puVar28 = puVar38;
                      puVar38 = puVar28 + 2;
                      *puVar38 = uVar8;
                      uVar16 = uVar16 - 1;
                      lVar32 = lVar32 + 1;
                      puVar28[1] = uVar7;
                    } while (lVar32 != 0);
                  }
                  if (6 < uVar22) {
                    puVar38 = puVar38 + -2;
                    do {
                      puVar28 = puVar38 + 0x10;
                      *puVar28 = uVar8;
                      uVar16 = uVar16 - 8;
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
                      puVar38 = puVar28;
                    } while (uVar16 != 0);
                  }
                  if ((uVar31 & 1) != 0) {
                    puVar28[3] = uVar7;
                  }
                }
                else if (uVar16 == 0) {
                  memset(puVar43 + 1,(uint)(byte)puVar28[1],uVar31);
                }
                else {
                  uVar29 = 3 - (int)puVar43;
                  uVar19 = uVar29 & 3;
                  if ((uVar29 & 3) == 0) {
                    puVar38 = puVar43;
                  }
                  else {
                    puVar38 = puVar43 + 1;
                    *puVar38 = puVar28[1];
                    puVar25 = puVar28 + 1;
                    if (uVar19 != 1) {
                      puVar38 = puVar43 + 2;
                      *puVar38 = puVar28[2];
                      puVar25 = puVar28 + 2;
                      if (uVar19 == 3) {
                        puVar28 = puVar28 + 3;
                        puVar43[3] = *puVar28;
                        puVar38 = puVar43 + 3;
                        goto LAB_0013a9ec;
                      }
                    }
                    puVar28 = puVar25;
                  }
LAB_0013a9ec:
                  uVar5 = *(undefined4 *)(puVar28 + 1);
                  *(undefined4 *)(puVar38 + 1) = uVar5;
                  puVar24 = (undefined4 *)(puVar38 + 5);
                  do {
                    bVar11 = puVar24 < puVar43 + (uVar31 - 3);
                    *puVar24 = uVar5;
                    puVar24 = puVar24 + 1;
                  } while (bVar11);
                }
              }
              else {
                puVar43[1] = puVar28[1];
                puVar43[2] = puVar28[2];
                puVar43[3] = puVar28[3];
                puVar43[4] = puVar28[4];
                puVar43[5] = puVar28[5];
                puVar43[6] = puVar28[6];
                puVar43[7] = puVar28[7];
                puVar38 = puVar43 + 8;
                puVar28 = puVar28 + 8;
                puVar43[8] = *puVar28;
                uVar16 = uVar31 - 8;
                if ((uVar16 & 7) != 0) {
                  lVar32 = -(uVar16 & 7);
                  do {
                    puVar28 = puVar28 + 1;
                    uVar16 = uVar16 - 1;
                    lVar32 = lVar32 + 1;
                    puVar38 = puVar38 + 1;
                    *puVar38 = *puVar28;
                  } while (lVar32 != 0);
                }
                if (6 < uVar31 - 9) {
                  puVar28 = puVar28 + 4;
                  puVar38 = puVar38 + 4;
                  do {
                    puVar38[-3] = puVar28[-3];
                    puVar38[-2] = puVar28[-2];
                    puVar38[-1] = puVar28[-1];
                    *puVar38 = *puVar28;
                    puVar38[1] = puVar28[1];
                    puVar38[2] = puVar28[2];
                    puVar38[3] = puVar28[3];
                    puVar38[4] = puVar28[4];
                    uVar16 = uVar16 - 8;
                    puVar28 = puVar28 + 8;
                    puVar38 = puVar38 + 8;
                  } while (uVar16 != 0);
                }
              }
            }
            goto joined_r0x0013afb4;
          }
        }
        FUN_0010a430();
        pcVar17 = *(code **)PTR_PTR_043722f8;
        if (pcVar17 == (code *)0x0) goto LAB_0013b4c4;
        uVar13 = 0x12a;
LAB_0013b4bc:
        (*pcVar17)(0,"v:/devel/projects/oodle2/core/rrlzhdecompresssub.inl",uVar13,
                   "OODLE ERROR : LZ corruption : bad long len, overrun\n");
LAB_0013b4c4:
        FUN_0010a450();
        return 0;
      }
      uVar21 = uVar26 >> 0x3b & 0x18;
      uVar14 = uVar26 << 2;
      puVar2 = (ulong *)((long)auStack_98 + uVar21 + 0x18);
      uVar26 = *puVar2;
      *puVar2 = *(ulong *)((long)auStack_98 + uVar21 + 0x10);
      uVar13 = *(undefined8 *)((long)auStack_98 + uVar21 + 8);
      *(undefined8 *)((long)auStack_98 + uVar21 + 8) = *(undefined8 *)((long)auStack_98 + uVar21);
      *(undefined8 *)((long)auStack_98 + uVar21 + 0x10) = uVar13;
      uVar21 = uVar22 + 2;
      auStack_98[3] = uVar26;
joined_r0x0013a0ec:
      if (uVar19 == 0) {
        puVar28 = puVar43 + -uVar26;
        if ((long)puVar28 - (long)puVar12 < 0) {
          puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar39);
          uVar16 = (long)puVar1 - (long)puVar28;
          if ((long)uVar16 < (long)uVar31) {
            uVar15 = uVar16;
            puVar25 = puVar43;
            puVar38 = puVar28;
            if ((uVar16 & 7) != 0) {
              lVar32 = -(uVar16 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar15 = uVar15 - 1;
                lVar32 = lVar32 + 1;
                puVar25 = puVar25 + 1;
                *puVar25 = *puVar38;
              } while (lVar32 != 0);
            }
            if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
              puVar38 = puVar38 + 4;
              puVar18 = puVar25;
              do {
                puVar18[1] = puVar38[-3];
                puVar18[2] = puVar38[-2];
                puVar18[3] = puVar38[-1];
                puVar18[4] = *puVar38;
                puVar18[5] = puVar38[1];
                puVar18[6] = puVar38[2];
                puVar18[7] = puVar38[3];
                puVar25 = puVar18 + 8;
                uVar15 = uVar15 - 8;
                puVar18[8] = puVar38[4];
                puVar38 = puVar38 + 8;
                puVar18 = puVar25;
              } while (uVar15 != 0);
            }
            uVar16 = uVar31 - uVar16;
            puVar38 = puVar12;
            if ((uVar16 & 7) != 0) {
              lVar32 = -(uVar16 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar16 = uVar16 - 1;
                lVar32 = lVar32 + 1;
                puVar25 = puVar25 + 1;
                *puVar25 = *puVar38;
              } while (lVar32 != 0);
            }
            if ((undefined1 *)0x6 < puVar28 + uVar31 + uVar45) {
              puVar25 = puVar25 + 4;
              puVar38 = puVar38 + 4;
              do {
                puVar25[-3] = puVar38[-3];
                puVar25[-2] = puVar38[-2];
                puVar25[-1] = puVar38[-1];
                *puVar25 = *puVar38;
                puVar25[1] = puVar38[1];
                puVar25[2] = puVar38[2];
                puVar25[3] = puVar38[3];
                puVar28 = puVar38 + 4;
                uVar16 = uVar16 - 8;
                puVar38 = puVar38 + 8;
                puVar25[4] = *puVar28;
                puVar25 = puVar25 + 8;
              } while (uVar16 != 0);
            }
            goto joined_r0x0013afb4;
          }
        }
        if (puVar28 != (undefined1 *)0x0) {
          *(undefined8 *)(puVar43 + 1) = *(undefined8 *)(puVar28 + 1);
        }
      }
      else if (uVar10 == 0x9d) {
        if ((long)uVar14 < 0) {
          if ((uVar14 >> 0x3e & 1) == 0) {
            uVar15 = uVar14 << 9;
            uVar16 = uVar21 + 9;
            uVar31 = (uVar14 >> 0x37 & 0x7f) + 0xdd;
            if ((ulong)((long)puVar44 - (long)puVar43) < uVar31) goto LAB_0013b494;
          }
          else if ((uVar14 >> 0x3d & 1) == 0) {
            uVar15 = uVar14 << 0xb;
            uVar16 = uVar21 + 0xb;
            uVar31 = (uVar14 >> 0x35 & 0xff) + 0x15d;
            if ((ulong)((long)puVar44 - (long)puVar43) < uVar31) goto LAB_0013b494;
          }
          else if ((uVar14 >> 0x3c & 1) == 0) {
            uVar15 = uVar14 << 0xe;
            uVar16 = uVar21 + 0xe;
            uVar31 = (uVar14 >> 0x32 & 0x3ff) + 0x25d;
            if ((ulong)((long)puVar44 - (long)puVar43) < uVar31) goto LAB_0013b494;
          }
          else {
            uVar15 = uVar14 << 0x12;
            uVar16 = uVar21 + 0x12;
            uVar31 = (uVar14 >> 0x2e & 0x3fff) + 0x65d;
            if ((ulong)((long)puVar44 - (long)puVar43) < uVar31) {
LAB_0013b494:
              FUN_0010a430();
              pcVar17 = *(code **)PTR_PTR_043722f8;
              if (pcVar17 == (code *)0x0) goto LAB_0013b4c4;
              uVar13 = 0xd5;
              goto LAB_0013b4bc;
            }
          }
        }
        else {
          uVar15 = uVar14 << 7;
          uVar16 = uVar21 + 7;
          uVar31 = (uVar14 >> 0x39 & 0x3f) + 0x9d;
          if ((ulong)((long)puVar44 - (long)puVar43) < uVar31) goto LAB_0013b494;
        }
        uVar14 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        puVar41 = (ulong *)((long)puVar41 + (uVar16 >> 3));
        uVar21 = uVar16 & 7;
        puVar28 = puVar43 + -uVar26;
        uVar14 = (uVar14 >> 0x20 | uVar14 << 0x20) >> (0x3f - uVar16 & 0x3f) | uVar15;
        if ((long)puVar28 - (long)puVar12 < 0) {
          puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar39);
          uVar16 = (long)puVar1 - (long)puVar28;
          uVar15 = uVar31 - uVar16;
          if (uVar15 != 0 && (long)uVar16 <= (long)uVar31) {
            puVar25 = puVar43;
            puVar38 = puVar28;
            if ((uVar16 & 7) != 0) {
              lVar32 = -(uVar16 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar16 = uVar16 - 1;
                lVar32 = lVar32 + 1;
                puVar25 = puVar25 + 1;
                *puVar25 = *puVar38;
              } while (lVar32 != 0);
            }
            if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
              puVar38 = puVar38 + 4;
              puVar18 = puVar25;
              do {
                puVar18[1] = puVar38[-3];
                puVar18[2] = puVar38[-2];
                puVar18[3] = puVar38[-1];
                puVar18[4] = *puVar38;
                puVar18[5] = puVar38[1];
                puVar18[6] = puVar38[2];
                puVar18[7] = puVar38[3];
                puVar25 = puVar18 + 8;
                uVar16 = uVar16 - 8;
                puVar18[8] = puVar38[4];
                puVar38 = puVar38 + 8;
                puVar18 = puVar25;
              } while (uVar16 != 0);
            }
            puVar38 = puVar12;
            if ((uVar15 & 7) != 0) {
              lVar32 = -(uVar15 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar15 = uVar15 - 1;
                lVar32 = lVar32 + 1;
                puVar25 = puVar25 + 1;
                *puVar25 = *puVar38;
              } while (lVar32 != 0);
            }
            if ((undefined1 *)0x6 < puVar28 + uVar31 + uVar45) {
              puVar25 = puVar25 + 4;
              puVar38 = puVar38 + 4;
              do {
                puVar25[-3] = puVar38[-3];
                puVar25[-2] = puVar38[-2];
                puVar25[-1] = puVar38[-1];
                *puVar25 = *puVar38;
                puVar25[1] = puVar38[1];
                puVar25[2] = puVar38[2];
                puVar25[3] = puVar38[3];
                puVar28 = puVar38 + 4;
                uVar15 = uVar15 - 8;
                puVar38 = puVar38 + 8;
                puVar25[4] = *puVar28;
                puVar25 = puVar25 + 8;
              } while (uVar15 != 0);
            }
            goto joined_r0x0013afb4;
          }
        }
        if (puVar28 != (undefined1 *)0x0) {
          if ((long)uVar26 < (long)uVar31) {
            uVar15 = uVar31 - 1 >> 2;
            uVar19 = (int)uVar15 + 1;
            uVar16 = 0;
            if (uVar15 != 0) {
              lVar32 = (((ulong)uVar19 & 1) - 1) - uVar15;
              uVar15 = uVar16;
              do {
                uVar16 = uVar15 + 8;
                *(undefined4 *)(puVar43 + uVar15 + 1) = *(undefined4 *)(puVar28 + uVar15 + 1);
                lVar32 = lVar32 + 2;
                *(undefined4 *)(puVar43 + uVar15 + 5) = *(undefined4 *)(puVar28 + uVar15 + 5);
                uVar15 = uVar16;
              } while (lVar32 != 0);
            }
            if ((uVar19 & 1) != 0) {
              uVar7 = puVar28[uVar16 | 2];
              uVar8 = puVar28[uVar16 | 3];
              uVar9 = puVar28[uVar16 + 4];
              puVar43[uVar16 | 1] = puVar28[uVar16 | 1];
              puVar43[uVar16 | 2] = uVar7;
              puVar43[uVar16 | 3] = uVar8;
              puVar43[uVar16 + 4] = uVar9;
            }
          }
          else {
            memmove(puVar43 + 1,puVar28 + 1,uVar31);
          }
        }
      }
      else {
        uVar15 = *puVar41;
        uVar16 = uVar21 + uVar36;
        uVar22 = uVar14 >> ((ulong)-uVar19 & 0x3f);
        puVar41 = (ulong *)((long)puVar41 + (uVar16 >> 3));
        uVar21 = uVar16 & 7;
        puVar28 = puVar43 + -uVar26;
        sVar3 = uVar22 + uVar31;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar14 = (uVar15 >> 0x20 | uVar15 << 0x20) >> (0x3f - uVar16 & 0x3f) |
                 uVar14 << (uVar36 & 0x3f);
        if ((long)puVar28 - (long)puVar12 < 0) {
          puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar39);
          uVar16 = (long)puVar1 - (long)puVar28;
          uVar15 = sVar3 - uVar16;
          if (uVar15 != 0 && (long)uVar16 <= (long)sVar3) {
            puVar25 = puVar43;
            puVar38 = puVar28;
            if ((uVar16 & 7) != 0) {
              lVar32 = -(uVar16 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar16 = uVar16 - 1;
                lVar32 = lVar32 + 1;
                puVar25 = puVar25 + 1;
                *puVar25 = *puVar38;
              } while (lVar32 != 0);
            }
            if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
              puVar38 = puVar38 + 4;
              puVar18 = puVar25;
              do {
                puVar18[1] = puVar38[-3];
                puVar18[2] = puVar38[-2];
                puVar18[3] = puVar38[-1];
                puVar18[4] = *puVar38;
                puVar18[5] = puVar38[1];
                puVar18[6] = puVar38[2];
                puVar18[7] = puVar38[3];
                puVar25 = puVar18 + 8;
                uVar16 = uVar16 - 8;
                puVar18[8] = puVar38[4];
                puVar38 = puVar38 + 8;
                puVar18 = puVar25;
              } while (uVar16 != 0);
            }
            lVar32 = uVar31 + uVar22 + uVar45;
            puVar38 = puVar12;
            if ((uVar15 & 7) != 0) {
              lVar33 = -(uVar15 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar15 = uVar15 - 1;
                lVar33 = lVar33 + 1;
                puVar25 = puVar25 + 1;
                *puVar25 = *puVar38;
              } while (lVar33 != 0);
            }
            uVar31 = sVar3;
            if ((undefined1 *)0x6 < puVar28 + lVar32) {
              puVar25 = puVar25 + 4;
              puVar38 = puVar38 + 4;
              do {
                puVar25[-3] = puVar38[-3];
                puVar25[-2] = puVar38[-2];
                puVar25[-1] = puVar38[-1];
                *puVar25 = *puVar38;
                puVar25[1] = puVar38[1];
                puVar25[2] = puVar38[2];
                puVar25[3] = puVar38[3];
                puVar28 = puVar38 + 4;
                uVar15 = uVar15 - 8;
                puVar38 = puVar38 + 8;
                puVar25[4] = *puVar28;
                puVar25 = puVar25 + 8;
              } while (uVar15 != 0);
            }
            goto joined_r0x0013afb4;
          }
        }
        uVar31 = sVar3;
        if (puVar28 != (undefined1 *)0x0) {
          if ((uVar26 & 3) == 0) {
            uVar29 = 3 - (int)puVar43;
            uVar19 = uVar29 & 3;
            if ((uVar29 & 3) == 0) {
              puVar38 = puVar43;
            }
            else {
              puVar38 = puVar43 + 1;
              *puVar38 = puVar28[1];
              puVar25 = puVar28 + 1;
              if (uVar19 != 1) {
                puVar38 = puVar43 + 2;
                *puVar38 = puVar28[2];
                puVar25 = puVar28 + 2;
                if (uVar19 == 3) {
                  puVar28 = puVar28 + 3;
                  puVar43[3] = *puVar28;
                  puVar38 = puVar43 + 3;
                  goto LAB_0013a468;
                }
              }
              puVar28 = puVar25;
            }
LAB_0013a468:
            *(undefined4 *)(puVar38 + 1) = *(undefined4 *)(puVar28 + 1);
            puVar24 = (undefined4 *)(puVar38 + 5);
            puVar27 = (undefined4 *)(puVar28 + 5);
            do {
              bVar11 = puVar24 < puVar43 + (sVar3 - 3);
              *puVar24 = *puVar27;
              puVar24 = puVar24 + 1;
              puVar27 = puVar27 + 1;
            } while (bVar11);
          }
          else if (0 < (long)sVar3) {
            lVar32 = 0;
            do {
              lVar33 = lVar32 + 4;
              *(undefined4 *)(puVar43 + lVar32 + 1) = *(undefined4 *)(puVar28 + lVar32 + 1);
              lVar32 = lVar33;
            } while (lVar33 < (long)sVar3);
          }
        }
      }
joined_r0x0013afb4:
      puVar43 = puVar43 + uVar31;
      if (puVar44 <= puVar43) {
LAB_0013b40c:
        if (puVar43 == puVar44) {
          uVar14 = 0x46 - uVar21;
          if (-1 < (long)(0x3f - uVar21)) {
            uVar14 = 0x3f - uVar21;
          }
          iVar40 = ((int)puVar41 - (int)(uVar14 >> 3)) - iVar40;
        }
        else {
          FUN_0010a430();
          if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
            (**(code **)PTR_PTR_043722f8)
                      (0,"v:/devel/projects/oodle2/core/rrlzhdecompresssub.inl",0x172,
                       "OODLE ERROR : LZ corruption : decPtr != decPtrEnd \n");
          }
          FUN_0010a450();
          iVar40 = -1;
        }
        return iVar40;
      }
    } while( true );
  }
  if (param_4 - (long)param_3 < 1) {
    uVar14 = 0;
  }
  else {
    uVar14 = (ulong)*param_3 << 0x38;
  }
  if (7 < param_4 - (long)(param_3 + 1)) {
    uVar21 = (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff00) >> 8 |
             (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff) << 8;
    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
    uVar21 = uVar21 >> 0x20 | uVar21 << 0x20;
    goto LAB_0013cde4;
  }
  if (param_4 - (long)(param_3 + 1) < 1) {
    uVar19 = 0;
    if (0 < param_4 - (long)(param_3 + 2)) goto LAB_0013ccec;
LAB_0013cd38:
    uVar29 = 0;
    if (0 < param_4 - (long)(param_3 + 3)) goto LAB_0013cd04;
LAB_0013cd4c:
    uVar34 = 0;
    if (0 < param_4 - (long)(param_3 + 4)) goto LAB_0013cd1c;
LAB_0013cd60:
    uVar21 = 0;
  }
  else {
    uVar19 = (uint)param_3[1] << 0x18;
    if (param_4 - (long)(param_3 + 2) < 1) goto LAB_0013cd38;
LAB_0013ccec:
    uVar29 = (uint)param_3[2] << 0x10;
    if (param_4 - (long)(param_3 + 3) < 1) goto LAB_0013cd4c;
LAB_0013cd04:
    uVar34 = (uint)param_3[3] << 8;
    if (param_4 - (long)(param_3 + 4) < 1) goto LAB_0013cd60;
LAB_0013cd1c:
    uVar21 = (ulong)param_3[4];
  }
  if (param_4 - (long)(param_3 + 5) < 1) {
    uVar20 = 0;
  }
  else {
    uVar20 = (uint)param_3[5] << 0x18;
  }
  if (param_4 - (long)(param_3 + 6) < 1) {
    uVar30 = 0;
  }
  else {
    uVar30 = (uint)param_3[6] << 0x10;
  }
  if (param_4 - (long)(param_3 + 7) < 1) {
    uVar35 = 0;
  }
  else {
    uVar35 = (uint)param_3[7] << 8;
  }
  uVar21 = (ulong)(uVar30 | uVar20 | uVar35) | (uVar21 | (uVar29 | uVar19 | uVar34)) << 0x20;
LAB_0013cde4:
  uVar14 = uVar14 | uVar21 >> 8;
  puVar12 = (undefined1 *)(param_5 + -1);
  auStack_98[3] = 0x14;
  auStack_98[4] = 0x18;
  puVar1 = puVar12 + param_6;
  auStack_98[5] = 0x1c;
  auStack_98[6] = 0x20;
  puVar41 = (ulong *)(param_3 + 7);
  puVar43 = (undefined1 *)(param_1 + -1);
  puVar44 = (undefined1 *)(param_2 + -1);
  uVar45 = param_6 - 1;
  uVar39 = ~(ulong)puVar1;
  uVar21 = 7;
  do {
    uVar15 = auStack_98[5];
    uVar16 = auStack_98[4];
    uVar22 = 0x3f - uVar21;
    uVar31 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
    uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
    puVar41 = (ulong *)((long)puVar41 + ((long)uVar21 >> 3));
    uVar21 = uVar21 & 7;
    uVar14 = (uVar31 >> 0x20 | uVar31 << 0x20) >> (uVar22 & 0x3f) | uVar14;
    puVar28 = puVar43 + 1;
    while( true ) {
      puVar43 = puVar28;
      if (uVar14 < *(ulong *)(param_8 + 0x150)) {
        puVar23 = (ushort *)(*(long *)(param_8 + 0x2c0) + (uVar14 >> 0x36) * 2);
        uVar31 = (ulong)*(byte *)(*(long *)(param_8 + 0x2b8) + (uVar14 >> 0x36));
      }
      else {
        lVar32 = *(long *)(param_8 + 0x2b0);
        if (uVar14 < *(ulong *)(param_8 + 0x158)) {
          puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x35) - *(long *)(param_8 + 0x58)) * 2);
          uVar31 = 0xb;
        }
        else if (uVar14 < *(ulong *)(param_8 + 0x160)) {
          puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x34) - *(long *)(param_8 + 0x60)) * 2);
          uVar31 = 0xc;
        }
        else if (uVar14 < *(ulong *)(param_8 + 0x168)) {
          puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x33) - *(long *)(param_8 + 0x68)) * 2);
          uVar31 = 0xd;
        }
        else if (uVar14 < *(ulong *)(param_8 + 0x170)) {
          puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x32) - *(long *)(param_8 + 0x70)) * 2);
          uVar31 = 0xe;
        }
        else if (uVar14 < *(ulong *)(param_8 + 0x178)) {
          puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x31) - *(long *)(param_8 + 0x78)) * 2);
          uVar31 = 0xf;
        }
        else if (uVar14 < *(ulong *)(param_8 + 0x180)) {
          puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x30) - *(long *)(param_8 + 0x80)) * 2);
          uVar31 = 0x10;
        }
        else {
          uVar31 = (ulong)*(int *)(param_8 + 0x29c);
          puVar23 = (ushort *)(lVar32 + (long)(*(int *)(param_8 + 0x288) + -1) * 2);
        }
      }
      uVar21 = uVar31 + uVar21;
      uVar14 = uVar14 << (uVar31 & 0x3f);
      lVar32 = (ulong)*puVar23 - 0x100;
      if (-1 < lVar32) break;
      *puVar43 = (char)*puVar23;
      if (puVar44 <= puVar43) goto LAB_0013e1a8;
      if (uVar14 < *(ulong *)(param_8 + 0x150)) {
        puVar23 = (ushort *)(*(long *)(param_8 + 0x2c0) + (uVar14 >> 0x36) * 2);
        uVar31 = (ulong)*(byte *)(*(long *)(param_8 + 0x2b8) + (uVar14 >> 0x36));
      }
      else {
        lVar32 = *(long *)(param_8 + 0x2b0);
        if (uVar14 < *(ulong *)(param_8 + 0x158)) {
          puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x35) - *(long *)(param_8 + 0x58)) * 2);
          uVar31 = 0xb;
        }
        else if (uVar14 < *(ulong *)(param_8 + 0x160)) {
          puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x34) - *(long *)(param_8 + 0x60)) * 2);
          uVar31 = 0xc;
        }
        else if (uVar14 < *(ulong *)(param_8 + 0x168)) {
          puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x33) - *(long *)(param_8 + 0x68)) * 2);
          uVar31 = 0xd;
        }
        else if (uVar14 < *(ulong *)(param_8 + 0x170)) {
          puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x32) - *(long *)(param_8 + 0x70)) * 2);
          uVar31 = 0xe;
        }
        else if (uVar14 < *(ulong *)(param_8 + 0x178)) {
          puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x31) - *(long *)(param_8 + 0x78)) * 2);
          uVar31 = 0xf;
        }
        else if (uVar14 < *(ulong *)(param_8 + 0x180)) {
          puVar23 = (ushort *)(lVar32 + ((uVar14 >> 0x30) - *(long *)(param_8 + 0x80)) * 2);
          uVar31 = 0x10;
        }
        else {
          uVar31 = (ulong)*(int *)(param_8 + 0x29c);
          puVar23 = (ushort *)(lVar32 + (long)(*(int *)(param_8 + 0x288) + -1) * 2);
        }
      }
      uVar21 = uVar31 + uVar21;
      uVar14 = uVar14 << (uVar31 & 0x3f);
      lVar32 = (ulong)*puVar23 - 0x100;
      if (-1 < lVar32) goto LAB_0013d0f4;
      uVar31 = *puVar41;
      puVar41 = (ulong *)((long)puVar41 + ((long)uVar21 >> 3));
      puVar43[1] = (char)*puVar23;
      uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar14 = (uVar31 >> 0x20 | uVar31 << 0x20) >> (0x3f - uVar21 & 0x3f) | uVar14;
      uVar21 = uVar21 & 7;
      puVar28 = puVar43 + 2;
      if (puVar44 <= puVar43 + 1) {
        puVar43 = puVar43 + 1;
        goto LAB_0013e1a8;
      }
    }
    puVar43 = puVar43 + -1;
LAB_0013d0f4:
    lVar33 = lVar32 * 8;
    uVar31 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
    uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
    uVar37 = (uVar31 >> 0x20 | uVar31 << 0x20) >> (0x3f - uVar21 & 0x3f) | uVar14;
    uVar10 = *(ushort *)(&DAT_039c40c4 + lVar33);
    uVar26 = (ulong)uVar10;
    uVar36 = (ulong)(byte)(&DAT_039c40c7)[lVar33];
    puVar41 = (ulong *)((long)puVar41 + ((long)uVar21 >> 3));
    uVar22 = uVar21 & 7;
    uVar19 = (uint)(byte)(&DAT_039c40c7)[lVar33];
    iVar42 = (int)puVar43;
    uVar31 = uVar26;
    if (0x13 < lVar32) {
      if (*(int *)(&DAT_039c40c0 + lVar32 * 8) != 0) {
        uVar14 = (ulong)(byte)(&DAT_039c40c6)[lVar33] - 2;
        uVar21 = uVar22 + uVar14;
        uVar14 = uVar37 << (uVar14 & 0x3f);
        lVar32 = (long)*(int *)(&DAT_039c40c0 + lVar32 * 8) +
                 (uVar37 >> ((ulong)(0x42 - (byte)(&DAT_039c40c6)[lVar33]) & 0x3f)) * 4 + 4;
        auStack_98[4] = lVar32;
        auStack_98[5] = uVar16;
        auStack_98[6] = uVar15;
        goto joined_r0x0013d1b4;
      }
      uVar16 = uVar37 >> 0x3e;
      uVar14 = uVar37 << 2;
      uVar21 = uVar22 + 2;
      if (uVar19 == 0) {
        puVar28 = puVar43 + uVar16 * -4 + -4;
        if ((long)puVar28 - (long)puVar12 < 0) {
          puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar45);
          uVar16 = (long)puVar1 - (long)puVar28;
          if ((long)uVar16 < (long)uVar26) {
            uVar15 = uVar16;
            puVar25 = puVar43;
            puVar38 = puVar28;
            if ((uVar16 & 7) != 0) {
              lVar32 = -(uVar16 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar15 = uVar15 - 1;
                lVar32 = lVar32 + 1;
                puVar25 = puVar25 + 1;
                *puVar25 = *puVar38;
              } while (lVar32 != 0);
            }
            if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
              puVar38 = puVar38 + 4;
              puVar18 = puVar25;
              do {
                puVar18[1] = puVar38[-3];
                puVar18[2] = puVar38[-2];
                puVar18[3] = puVar38[-1];
                puVar18[4] = *puVar38;
                puVar18[5] = puVar38[1];
                puVar18[6] = puVar38[2];
                puVar18[7] = puVar38[3];
                puVar25 = puVar18 + 8;
                uVar15 = uVar15 - 8;
                puVar18[8] = puVar38[4];
                puVar38 = puVar38 + 8;
                puVar18 = puVar25;
              } while (uVar15 != 0);
            }
            uVar16 = uVar26 - uVar16;
            puVar38 = puVar12;
            if ((uVar16 & 7) != 0) {
              lVar32 = -(uVar16 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar16 = uVar16 - 1;
                lVar32 = lVar32 + 1;
                puVar25 = puVar25 + 1;
                *puVar25 = *puVar38;
              } while (lVar32 != 0);
            }
            if ((undefined1 *)0x6 < puVar28 + uVar26 + uVar39) {
              puVar25 = puVar25 + 4;
              puVar38 = puVar38 + 4;
              do {
                puVar25[-3] = puVar38[-3];
                puVar25[-2] = puVar38[-2];
                puVar25[-1] = puVar38[-1];
                *puVar25 = *puVar38;
                puVar25[1] = puVar38[1];
                puVar25[2] = puVar38[2];
                puVar25[3] = puVar38[3];
                puVar28 = puVar38 + 4;
                uVar16 = uVar16 - 8;
                puVar38 = puVar38 + 8;
                puVar25[4] = *puVar28;
                puVar25 = puVar25 + 8;
              } while (uVar16 != 0);
            }
            goto joined_r0x0013d7e8;
          }
        }
        if (puVar28 != (undefined1 *)0x0) {
          puVar43[1] = puVar28[1];
          puVar43[2] = puVar28[2];
          puVar43[3] = puVar28[3];
          puVar43[4] = puVar28[4];
          puVar43[5] = puVar28[5];
          puVar43[6] = puVar28[6];
          puVar43[7] = puVar28[7];
          puVar43[8] = puVar28[8];
        }
        goto joined_r0x0013d7e8;
      }
      if (uVar10 != 0x9d) {
        uVar31 = *puVar41;
        uVar15 = uVar21 + uVar36;
        puVar41 = (ulong *)((long)puVar41 + (uVar15 >> 3));
        uVar21 = uVar15 & 7;
        uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
        uVar22 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
        uVar37 = uVar14 >> ((ulong)-uVar19 & 0x3f);
        uVar31 = uVar37 + uVar26;
        uVar14 = (uVar22 >> 0x20 | uVar22 << 0x20) >> (0x3f - uVar15 & 0x3f) |
                 uVar14 << (uVar36 & 0x3f);
        puVar28 = puVar43 + uVar16 * -4 + -4;
        if ((long)puVar28 - (long)puVar12 < 0) {
          puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar45);
          uVar16 = (long)puVar1 - (long)puVar28;
          uVar15 = uVar31 - uVar16;
          if (uVar15 != 0 && (long)uVar16 <= (long)uVar31) {
            puVar25 = puVar43;
            puVar38 = puVar28;
            if ((uVar16 & 7) != 0) {
              lVar32 = -(uVar16 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar16 = uVar16 - 1;
                lVar32 = lVar32 + 1;
                puVar25 = puVar25 + 1;
                *puVar25 = *puVar38;
              } while (lVar32 != 0);
            }
            if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
              puVar38 = puVar38 + 4;
              puVar18 = puVar25;
              do {
                puVar18[1] = puVar38[-3];
                puVar18[2] = puVar38[-2];
                puVar18[3] = puVar38[-1];
                puVar18[4] = *puVar38;
                puVar18[5] = puVar38[1];
                puVar18[6] = puVar38[2];
                puVar18[7] = puVar38[3];
                puVar25 = puVar18 + 8;
                uVar16 = uVar16 - 8;
                puVar18[8] = puVar38[4];
                puVar38 = puVar38 + 8;
                puVar18 = puVar25;
              } while (uVar16 != 0);
            }
            puVar38 = puVar12;
            if ((uVar15 & 7) != 0) {
              lVar32 = -(uVar15 & 7);
              do {
                puVar38 = puVar38 + 1;
                uVar15 = uVar15 - 1;
                lVar32 = lVar32 + 1;
                puVar25 = puVar25 + 1;
                *puVar25 = *puVar38;
              } while (lVar32 != 0);
            }
            if ((undefined1 *)0x6 < puVar28 + uVar26 + uVar37 + uVar39) {
              puVar25 = puVar25 + 4;
              puVar38 = puVar38 + 4;
              do {
                puVar25[-3] = puVar38[-3];
                puVar25[-2] = puVar38[-2];
                puVar25[-1] = puVar38[-1];
                *puVar25 = *puVar38;
                puVar25[1] = puVar38[1];
                puVar25[2] = puVar38[2];
                puVar25[3] = puVar38[3];
                puVar28 = puVar38 + 4;
                uVar15 = uVar15 - 8;
                puVar38 = puVar38 + 8;
                puVar25[4] = *puVar28;
                puVar25 = puVar25 + 8;
              } while (uVar15 != 0);
            }
            goto joined_r0x0013d7e8;
          }
        }
        if (puVar28 != (undefined1 *)0x0) {
          uVar19 = 3U - iVar42 & 3;
          if ((3U - iVar42 & 3) == 0) {
            puVar38 = puVar43;
          }
          else {
            puVar38 = puVar43 + 1;
            *puVar38 = puVar28[1];
            puVar25 = puVar28 + 1;
            if (uVar19 != 1) {
              puVar38 = puVar43 + 2;
              *puVar38 = puVar28[2];
              puVar25 = puVar28 + 2;
              if (uVar19 == 3) {
                puVar28 = puVar28 + 3;
                puVar43[3] = *puVar28;
                puVar38 = puVar43 + 3;
                goto LAB_0013d480;
              }
            }
            puVar28 = puVar25;
          }
LAB_0013d480:
          *(undefined4 *)(puVar38 + 1) = *(undefined4 *)(puVar28 + 1);
          puVar24 = (undefined4 *)(puVar38 + 5);
          puVar27 = (undefined4 *)(puVar28 + 5);
          do {
            bVar11 = puVar24 < puVar43 + (uVar31 - 3);
            *puVar24 = *puVar27;
            puVar24 = puVar24 + 1;
            puVar27 = puVar27 + 1;
          } while (bVar11);
        }
        goto joined_r0x0013d7e8;
      }
      if ((uVar37 & 0x3fffffffffffffff) >> 0x3d == 0) {
        uVar14 = uVar37 << 9;
        uVar22 = uVar22 + 9;
        uVar31 = (uVar37 >> 0x37 & 0x3f) + 0x9d;
        if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013d664;
      }
      else if ((uVar37 >> 0x3c & 1) == 0) {
        uVar14 = uVar37 << 0xb;
        uVar22 = uVar22 + 0xb;
        uVar31 = (uVar37 >> 0x35 & 0x7f) + 0xdd;
        if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013d664;
      }
      else if ((uVar37 >> 0x3b & 1) == 0) {
        uVar14 = uVar37 << 0xd;
        uVar22 = uVar22 + 0xd;
        uVar31 = (uVar37 >> 0x33 & 0xff) + 0x15d;
        if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013d664;
      }
      else if ((uVar37 >> 0x3a & 1) == 0) {
        uVar14 = uVar37 << 0x10;
        uVar22 = uVar22 | 0x10;
        uVar31 = (uVar37 >> 0x30 & 0x3ff) + 0x25d;
        if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013d664;
      }
      else {
        uVar14 = uVar37 << 0x14;
        uVar22 = uVar22 + 0x14;
        uVar31 = (uVar37 >> 0x2c & 0x3fff) + 0x65d;
        if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) {
LAB_0013d664:
          uVar15 = *puVar41;
          puVar41 = (ulong *)((long)puVar41 + (uVar22 >> 3));
          uVar21 = uVar22 & 7;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          uVar14 = (uVar15 >> 0x20 | uVar15 << 0x20) >> (0x3f - uVar22 & 0x3f) | uVar14;
          puVar28 = puVar43 + uVar16 * -4 + -4;
          if ((long)puVar28 - (long)puVar12 < 0) {
            puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar45);
            uVar15 = (long)puVar1 - (long)puVar28;
            uVar22 = uVar31 - uVar15;
            if (uVar22 != 0 && (long)uVar15 <= (long)uVar31) {
              puVar25 = puVar43;
              puVar38 = puVar28;
              if ((uVar15 & 7) != 0) {
                lVar32 = -(uVar15 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar15 = uVar15 - 1;
                  lVar32 = lVar32 + 1;
                  puVar25 = puVar25 + 1;
                  *puVar25 = *puVar38;
                } while (lVar32 != 0);
              }
              if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
                puVar38 = puVar38 + 4;
                puVar18 = puVar25;
                do {
                  puVar18[1] = puVar38[-3];
                  puVar18[2] = puVar38[-2];
                  puVar18[3] = puVar38[-1];
                  puVar18[4] = *puVar38;
                  puVar18[5] = puVar38[1];
                  puVar18[6] = puVar38[2];
                  puVar18[7] = puVar38[3];
                  puVar25 = puVar18 + 8;
                  uVar15 = uVar15 - 8;
                  puVar18[8] = puVar38[4];
                  puVar38 = puVar38 + 8;
                  puVar18 = puVar25;
                } while (uVar15 != 0);
              }
              puVar38 = puVar12;
              if ((uVar22 & 7) != 0) {
                lVar32 = -(uVar22 & 7);
                do {
                  puVar38 = puVar38 + 1;
                  uVar22 = uVar22 - 1;
                  lVar32 = lVar32 + 1;
                  puVar25 = puVar25 + 1;
                  *puVar25 = *puVar38;
                } while (lVar32 != 0);
              }
              if ((undefined1 *)0x6 < puVar28 + uVar31 + uVar39) {
                puVar25 = puVar25 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar25[-3] = puVar38[-3];
                  puVar25[-2] = puVar38[-2];
                  puVar25[-1] = puVar38[-1];
                  *puVar25 = *puVar38;
                  puVar25[1] = puVar38[1];
                  puVar25[2] = puVar38[2];
                  puVar25[3] = puVar38[3];
                  puVar28 = puVar38 + 4;
                  uVar22 = uVar22 - 8;
                  puVar38 = puVar38 + 8;
                  puVar25[4] = *puVar28;
                  puVar25 = puVar25 + 8;
                } while (uVar22 != 0);
              }
              goto joined_r0x0013d7e8;
            }
          }
          if (puVar28 != (undefined1 *)0x0) {
            if (uVar16 == 0) {
              uVar19 = 3U - iVar42 & 3;
              if ((3U - iVar42 & 3) == 0) {
                puVar38 = puVar43;
              }
              else {
                puVar38 = puVar43 + 1;
                *puVar38 = puVar28[1];
                puVar25 = puVar28 + 1;
                if (uVar19 != 1) {
                  puVar38 = puVar43 + 2;
                  *puVar38 = puVar28[2];
                  puVar25 = puVar28 + 2;
                  if (uVar19 == 3) {
                    puVar28 = puVar28 + 3;
                    puVar43[3] = *puVar28;
                    puVar38 = puVar43 + 3;
                    goto LAB_0013d7c4;
                  }
                }
                puVar28 = puVar25;
              }
LAB_0013d7c4:
              uVar5 = *(undefined4 *)(puVar28 + 1);
              *(undefined4 *)(puVar38 + 1) = uVar5;
              puVar24 = (undefined4 *)(puVar38 + 5);
              do {
                bVar11 = puVar24 < puVar43 + (uVar31 - 3);
                *puVar24 = uVar5;
                puVar24 = puVar24 + 1;
              } while (bVar11);
            }
            else {
              puVar43[1] = puVar28[1];
              puVar43[2] = puVar28[2];
              puVar43[3] = puVar28[3];
              puVar43[4] = puVar28[4];
              puVar43[5] = puVar28[5];
              puVar43[6] = puVar28[6];
              puVar43[7] = puVar28[7];
              puVar38 = puVar43 + 8;
              puVar28 = puVar28 + 8;
              puVar43[8] = *puVar28;
              uVar16 = uVar31 - 8;
              if ((uVar16 & 7) != 0) {
                lVar32 = -(uVar16 & 7);
                do {
                  puVar28 = puVar28 + 1;
                  uVar16 = uVar16 - 1;
                  lVar32 = lVar32 + 1;
                  puVar38 = puVar38 + 1;
                  *puVar38 = *puVar28;
                } while (lVar32 != 0);
              }
              if (6 < uVar31 - 9) {
                puVar28 = puVar28 + 4;
                puVar38 = puVar38 + 4;
                do {
                  puVar38[-3] = puVar28[-3];
                  puVar38[-2] = puVar28[-2];
                  puVar38[-1] = puVar28[-1];
                  *puVar38 = *puVar28;
                  puVar38[1] = puVar28[1];
                  puVar38[2] = puVar28[2];
                  puVar38[3] = puVar28[3];
                  puVar38[4] = puVar28[4];
                  uVar16 = uVar16 - 8;
                  puVar28 = puVar28 + 8;
                  puVar38 = puVar38 + 8;
                } while (uVar16 != 0);
              }
            }
          }
          goto joined_r0x0013d7e8;
        }
      }
      FUN_0010a430();
      pcVar17 = *(code **)PTR_PTR_043722f8;
      if (pcVar17 == (code *)0x0) goto LAB_0013e260;
      uVar13 = 0x12a;
LAB_0013e258:
      (*pcVar17)(0,"v:/devel/projects/oodle2/core/rrlzhdecompresssub.inl",uVar13,
                 "OODLE ERROR : LZ corruption : bad long len, overrun\n");
LAB_0013e260:
      FUN_0010a450();
      return 0;
    }
    uVar21 = uVar37 >> 0x3b & 0x18;
    plVar4 = (long *)((long)auStack_98 + uVar21 + 0x18);
    uVar14 = uVar37 << 2;
    lVar32 = *plVar4;
    *plVar4 = *(long *)((long)auStack_98 + uVar21 + 0x10);
    uVar13 = *(undefined8 *)((long)auStack_98 + uVar21 + 8);
    *(undefined8 *)((long)auStack_98 + uVar21 + 8) = *(undefined8 *)((long)auStack_98 + uVar21);
    *(undefined8 *)((long)auStack_98 + uVar21 + 0x10) = uVar13;
    uVar21 = uVar22 + 2;
    auStack_98[3] = lVar32;
joined_r0x0013d1b4:
    if (uVar19 == 0) {
      puVar28 = puVar43 + -lVar32;
      if ((long)puVar28 - (long)puVar12 < 0) {
        puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar45);
        uVar16 = (long)puVar1 - (long)puVar28;
        if ((long)uVar16 < (long)uVar26) {
          uVar15 = uVar16;
          puVar25 = puVar43;
          puVar38 = puVar28;
          if ((uVar16 & 7) != 0) {
            lVar32 = -(uVar16 & 7);
            do {
              puVar38 = puVar38 + 1;
              uVar15 = uVar15 - 1;
              lVar32 = lVar32 + 1;
              puVar25 = puVar25 + 1;
              *puVar25 = *puVar38;
            } while (lVar32 != 0);
          }
          if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
            puVar38 = puVar38 + 4;
            puVar18 = puVar25;
            do {
              puVar18[1] = puVar38[-3];
              puVar18[2] = puVar38[-2];
              puVar18[3] = puVar38[-1];
              puVar18[4] = *puVar38;
              puVar18[5] = puVar38[1];
              puVar18[6] = puVar38[2];
              puVar18[7] = puVar38[3];
              puVar25 = puVar18 + 8;
              uVar15 = uVar15 - 8;
              puVar18[8] = puVar38[4];
              puVar38 = puVar38 + 8;
              puVar18 = puVar25;
            } while (uVar15 != 0);
          }
          uVar16 = uVar26 - uVar16;
          puVar38 = puVar12;
          if ((uVar16 & 7) != 0) {
            lVar32 = -(uVar16 & 7);
            do {
              puVar38 = puVar38 + 1;
              uVar16 = uVar16 - 1;
              lVar32 = lVar32 + 1;
              puVar25 = puVar25 + 1;
              *puVar25 = *puVar38;
            } while (lVar32 != 0);
          }
          if ((undefined1 *)0x6 < puVar28 + uVar26 + uVar39) {
            puVar25 = puVar25 + 4;
            puVar38 = puVar38 + 4;
            do {
              puVar25[-3] = puVar38[-3];
              puVar25[-2] = puVar38[-2];
              puVar25[-1] = puVar38[-1];
              *puVar25 = *puVar38;
              puVar25[1] = puVar38[1];
              puVar25[2] = puVar38[2];
              puVar25[3] = puVar38[3];
              puVar28 = puVar38 + 4;
              uVar16 = uVar16 - 8;
              puVar38 = puVar38 + 8;
              puVar25[4] = *puVar28;
              puVar25 = puVar25 + 8;
            } while (uVar16 != 0);
          }
          goto joined_r0x0013d7e8;
        }
      }
      if (puVar28 != (undefined1 *)0x0) {
        *(undefined8 *)(puVar43 + 1) = *(undefined8 *)(puVar28 + 1);
      }
    }
    else {
      if (uVar10 == 0x9d) {
        if ((long)uVar14 < 0) {
          if ((uVar14 >> 0x3e & 1) == 0) {
            uVar15 = uVar14 << 9;
            uVar16 = uVar21 + 9;
            uVar31 = (uVar14 >> 0x37 & 0x7f) + 0xdd;
            if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013d4c4;
          }
          else if ((uVar14 >> 0x3d & 1) == 0) {
            uVar15 = uVar14 << 0xb;
            uVar16 = uVar21 + 0xb;
            uVar31 = (uVar14 >> 0x35 & 0xff) + 0x15d;
            if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013d4c4;
          }
          else if ((uVar14 >> 0x3c & 1) == 0) {
            uVar15 = uVar14 << 0xe;
            uVar16 = uVar21 + 0xe;
            uVar31 = (uVar14 >> 0x32 & 0x3ff) + 0x25d;
            if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013d4c4;
          }
          else {
            uVar15 = uVar14 << 0x12;
            uVar16 = uVar21 + 0x12;
            uVar31 = (uVar14 >> 0x2e & 0x3fff) + 0x65d;
            if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) {
LAB_0013d4c4:
              uVar14 = (*puVar41 & 0xff00ff00ff00ff00) >> 8 | (*puVar41 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              puVar41 = (ulong *)((long)puVar41 + (uVar16 >> 3));
              uVar21 = uVar16 & 7;
              puVar28 = puVar43 + -lVar32;
              uVar14 = (uVar14 >> 0x20 | uVar14 << 0x20) >> (0x3f - uVar16 & 0x3f) | uVar15;
              if ((long)puVar28 - (long)puVar12 < 0) {
                puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar45);
                uVar16 = (long)puVar1 - (long)puVar28;
                uVar15 = uVar31 - uVar16;
                if (uVar15 != 0 && (long)uVar16 <= (long)uVar31) {
                  puVar25 = puVar43;
                  puVar38 = puVar28;
                  if ((uVar16 & 7) != 0) {
                    lVar32 = -(uVar16 & 7);
                    do {
                      puVar38 = puVar38 + 1;
                      uVar16 = uVar16 - 1;
                      lVar32 = lVar32 + 1;
                      puVar25 = puVar25 + 1;
                      *puVar25 = *puVar38;
                    } while (lVar32 != 0);
                  }
                  if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
                    puVar38 = puVar38 + 4;
                    puVar18 = puVar25;
                    do {
                      puVar18[1] = puVar38[-3];
                      puVar18[2] = puVar38[-2];
                      puVar18[3] = puVar38[-1];
                      puVar18[4] = *puVar38;
                      puVar18[5] = puVar38[1];
                      puVar18[6] = puVar38[2];
                      puVar18[7] = puVar38[3];
                      puVar25 = puVar18 + 8;
                      uVar16 = uVar16 - 8;
                      puVar18[8] = puVar38[4];
                      puVar38 = puVar38 + 8;
                      puVar18 = puVar25;
                    } while (uVar16 != 0);
                  }
                  puVar38 = puVar12;
                  if ((uVar15 & 7) != 0) {
                    lVar32 = -(uVar15 & 7);
                    do {
                      puVar38 = puVar38 + 1;
                      uVar15 = uVar15 - 1;
                      lVar32 = lVar32 + 1;
                      puVar25 = puVar25 + 1;
                      *puVar25 = *puVar38;
                    } while (lVar32 != 0);
                  }
                  if ((undefined1 *)0x6 < puVar28 + uVar31 + uVar39) {
                    puVar25 = puVar25 + 4;
                    puVar38 = puVar38 + 4;
                    do {
                      puVar25[-3] = puVar38[-3];
                      puVar25[-2] = puVar38[-2];
                      puVar25[-1] = puVar38[-1];
                      *puVar25 = *puVar38;
                      puVar25[1] = puVar38[1];
                      puVar25[2] = puVar38[2];
                      puVar25[3] = puVar38[3];
                      puVar28 = puVar38 + 4;
                      uVar15 = uVar15 - 8;
                      puVar38 = puVar38 + 8;
                      puVar25[4] = *puVar28;
                      puVar25 = puVar25 + 8;
                    } while (uVar15 != 0);
                  }
                  goto joined_r0x0013d7e8;
                }
              }
              if (puVar28 != (undefined1 *)0x0) {
                if (lVar32 < (long)uVar31) {
                  uVar15 = uVar31 - 1 >> 2;
                  uVar19 = (int)uVar15 + 1;
                  uVar16 = 0;
                  if (uVar15 != 0) {
                    lVar32 = (((ulong)uVar19 & 1) - 1) - uVar15;
                    uVar15 = uVar16;
                    do {
                      uVar16 = uVar15 + 8;
                      *(undefined4 *)(puVar43 + uVar15 + 1) = *(undefined4 *)(puVar28 + uVar15 + 1);
                      lVar32 = lVar32 + 2;
                      *(undefined4 *)(puVar43 + uVar15 + 5) = *(undefined4 *)(puVar28 + uVar15 + 5);
                      uVar15 = uVar16;
                    } while (lVar32 != 0);
                  }
                  if ((uVar19 & 1) != 0) {
                    uVar7 = puVar28[uVar16 | 2];
                    uVar8 = puVar28[uVar16 | 3];
                    uVar9 = puVar28[uVar16 + 4];
                    puVar43[uVar16 | 1] = puVar28[uVar16 | 1];
                    puVar43[uVar16 | 2] = uVar7;
                    puVar43[uVar16 | 3] = uVar8;
                    puVar43[uVar16 + 4] = uVar9;
                  }
                }
                else {
                  memmove(puVar43 + 1,puVar28 + 1,uVar31);
                }
              }
              goto joined_r0x0013d7e8;
            }
          }
        }
        else {
          uVar15 = uVar14 << 7;
          uVar16 = uVar21 + 7;
          uVar31 = (uVar14 >> 0x39 & 0x3f) + 0x9d;
          if (uVar31 <= (ulong)((long)puVar44 - (long)puVar43)) goto LAB_0013d4c4;
        }
        FUN_0010a430();
        pcVar17 = *(code **)PTR_PTR_043722f8;
        if (pcVar17 == (code *)0x0) goto LAB_0013e260;
        uVar13 = 0xd5;
        goto LAB_0013e258;
      }
      uVar16 = *puVar41;
      uVar21 = uVar21 + uVar36;
      uVar15 = uVar14 >> ((ulong)-uVar19 & 0x3f);
      puVar41 = (ulong *)((long)puVar41 + ((long)uVar21 >> 3));
      puVar28 = puVar43 + -lVar32;
      uVar31 = uVar15 + uVar26;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar14 = (uVar16 >> 0x20 | uVar16 << 0x20) >> (0x3f - uVar21 & 0x3f) |
               uVar14 << (uVar36 & 0x3f);
      uVar21 = uVar21 & 7;
      if ((long)puVar28 - (long)puVar12 < 0) {
        puVar28 = puVar12 + ((long)puVar28 - (long)puVar12 & uVar45);
        uVar16 = (long)puVar1 - (long)puVar28;
        uVar22 = uVar31 - uVar16;
        if (uVar22 != 0 && (long)uVar16 <= (long)uVar31) {
          puVar25 = puVar43;
          puVar38 = puVar28;
          if ((uVar16 & 7) != 0) {
            lVar32 = -(uVar16 & 7);
            do {
              puVar38 = puVar38 + 1;
              uVar16 = uVar16 - 1;
              lVar32 = lVar32 + 1;
              puVar25 = puVar25 + 1;
              *puVar25 = *puVar38;
            } while (lVar32 != 0);
          }
          if ((undefined1 *)0x6 < puVar1 + ~(ulong)puVar28) {
            puVar38 = puVar38 + 4;
            puVar18 = puVar25;
            do {
              puVar18[1] = puVar38[-3];
              puVar18[2] = puVar38[-2];
              puVar18[3] = puVar38[-1];
              puVar18[4] = *puVar38;
              puVar18[5] = puVar38[1];
              puVar18[6] = puVar38[2];
              puVar18[7] = puVar38[3];
              puVar25 = puVar18 + 8;
              uVar16 = uVar16 - 8;
              puVar18[8] = puVar38[4];
              puVar38 = puVar38 + 8;
              puVar18 = puVar25;
            } while (uVar16 != 0);
          }
          puVar38 = puVar12;
          if ((uVar22 & 7) != 0) {
            lVar32 = -(uVar22 & 7);
            do {
              puVar38 = puVar38 + 1;
              uVar22 = uVar22 - 1;
              lVar32 = lVar32 + 1;
              puVar25 = puVar25 + 1;
              *puVar25 = *puVar38;
            } while (lVar32 != 0);
          }
          if ((undefined1 *)0x6 < puVar28 + uVar26 + uVar15 + uVar39) {
            puVar25 = puVar25 + 4;
            puVar38 = puVar38 + 4;
            do {
              puVar25[-3] = puVar38[-3];
              puVar25[-2] = puVar38[-2];
              puVar25[-1] = puVar38[-1];
              *puVar25 = *puVar38;
              puVar25[1] = puVar38[1];
              puVar25[2] = puVar38[2];
              puVar25[3] = puVar38[3];
              puVar28 = puVar38 + 4;
              uVar22 = uVar22 - 8;
              puVar38 = puVar38 + 8;
              puVar25[4] = *puVar28;
              puVar25 = puVar25 + 8;
            } while (uVar22 != 0);
          }
          goto joined_r0x0013d7e8;
        }
      }
      if (puVar28 != (undefined1 *)0x0) {
        uVar19 = 3U - iVar42 & 3;
        if ((3U - iVar42 & 3) == 0) {
          puVar38 = puVar43;
        }
        else {
          puVar38 = puVar43 + 1;
          *puVar38 = puVar28[1];
          puVar25 = puVar28 + 1;
          if (uVar19 != 1) {
            puVar38 = puVar43 + 2;
            *puVar38 = puVar28[2];
            puVar25 = puVar28 + 2;
            if (uVar19 == 3) {
              puVar28 = puVar28 + 3;
              puVar43[3] = *puVar28;
              puVar38 = puVar43 + 3;
              goto LAB_0013d34c;
            }
          }
          puVar28 = puVar25;
        }
LAB_0013d34c:
        *(undefined4 *)(puVar38 + 1) = *(undefined4 *)(puVar28 + 1);
        puVar24 = (undefined4 *)(puVar38 + 5);
        puVar27 = (undefined4 *)(puVar28 + 5);
        do {
          bVar11 = puVar24 < puVar43 + (uVar31 - 3);
          *puVar24 = *puVar27;
          puVar24 = puVar24 + 1;
          puVar27 = puVar27 + 1;
        } while (bVar11);
      }
    }
joined_r0x0013d7e8:
    puVar43 = puVar43 + uVar31;
    if (puVar44 <= puVar43) {
LAB_0013e1a8:
      if (puVar43 == puVar44) {
        uVar14 = 0x46 - uVar21;
        if (-1 < (long)(0x3f - uVar21)) {
          uVar14 = 0x3f - uVar21;
        }
        iVar40 = ((int)puVar41 - (int)(uVar14 >> 3)) - iVar40;
      }
      else {
        FUN_0010a430();
        if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
          (**(code **)PTR_PTR_043722f8)
                    (0,"v:/devel/projects/oodle2/core/rrlzhdecompresssub.inl",0x172,
                     "OODLE ERROR : LZ corruption : decPtr != decPtrEnd \n");
        }
        FUN_0010a450();
        iVar40 = -1;
      }
      return iVar40;
    }
  } while( true );
}


