/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001003e0; name: FUN_001003e0
 */


int FUN_001003e0(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  byte bVar4;
  ushort *__src;
  ushort *puVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *__dest;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  ushort *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  if (param_1 != (byte *)0x0) {
    if (param_4 == 0) {
      if (param_3 == 1) {
        return -(uint)(*param_1 != 0);
      }
    }
    else if (param_3 != 0) {
      pbVar1 = param_1 + param_3;
      pbVar2 = param_2 + param_4;
      pbVar11 = pbVar2 + -0xc;
      pbVar12 = pbVar2 + -7;
      __src = (ushort *)(param_1 + 1);
      uVar10 = (ulong)*param_1;
      bVar4 = *param_1 >> 4;
      __dest = param_2;
      if (bVar4 == 0xf) goto LAB_00100494;
LAB_001005fc:
      uVar7 = (ulong)bVar4;
      if (pbVar2 + -0x20 < __dest) goto LAB_001004d8;
      if (pbVar1 + -0x10 <= __src) goto LAB_001004d8;
      uVar23 = *(undefined8 *)__src;
      puVar5 = (ushort *)((long)__src + uVar7);
      pbVar14 = __dest + uVar7;
      *(undefined8 *)(__dest + 8) = *(undefined8 *)(__src + 4);
      *(undefined8 *)__dest = uVar23;
      __src = puVar5 + 1;
      uVar3 = *puVar5;
      uVar7 = (ulong)uVar3;
      uVar10 = uVar10 & 0xf;
      pbVar8 = pbVar14 + -uVar7;
      if ((((int)uVar10 != 0xf) && (7 < uVar3)) && (param_2 <= pbVar8)) {
        *(undefined8 *)pbVar14 = *(undefined8 *)pbVar8;
        *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)(pbVar8 + 8);
        *(undefined2 *)(pbVar14 + 0x10) = *(undefined2 *)(pbVar8 + 0x10);
        __dest = pbVar14 + uVar10 + 4;
        goto LAB_00100484;
      }
      do {
        if (uVar10 == 0xf) {
          uVar6 = 0;
          puVar5 = __src;
          do {
            __src = (ushort *)((long)puVar5 + 1);
            uVar3 = *puVar5;
            if (pbVar1 + -5 <= puVar5) {
              __src = (ushort *)((long)puVar5 + 1);
              goto LAB_00100a34;
            }
            uVar6 = uVar6 + (byte)uVar3;
            puVar5 = __src;
          } while ((byte)uVar3 == 0xff);
          uVar10 = (ulong)uVar6 + 0xf;
          if (~(ulong)pbVar14 < uVar10) goto LAB_00100a34;
        }
        if (pbVar8 < param_2) goto LAB_00100a34;
        __dest = pbVar14 + uVar10 + 4;
        if (uVar7 < 8) {
          pbVar14[0] = 0;
          pbVar14[1] = 0;
          pbVar14[2] = 0;
          pbVar14[3] = 0;
          *pbVar14 = *pbVar8;
          pbVar14[1] = pbVar8[1];
          uVar6 = *(uint *)(&DAT_038888e0 + uVar7 * 4);
          pbVar14[2] = pbVar8[2];
          pbVar14[3] = pbVar8[3];
          *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar8 + uVar6);
          pbVar9 = pbVar8 + uVar6 + -(long)*(int *)(&DAT_03888520 + uVar7 * 4);
          if (__dest <= pbVar11) goto LAB_001006b0;
LAB_00100824:
          pbVar8 = pbVar14 + 8;
          if (pbVar2 + -5 < __dest) goto LAB_00100a34;
          if (pbVar8 < pbVar12) {
            uVar7 = ((ulong)(param_2 + (((long)param_4 + -0x10) - (long)pbVar14)) >> 3) + 1;
            pbVar13 = pbVar9;
            if (uVar7 < 8) {
              pbVar19 = pbVar8;
LAB_00100910:
              do {
                pbVar20 = pbVar19 + 8;
                *(undefined8 *)pbVar19 = *(undefined8 *)pbVar13;
                pbVar13 = pbVar13 + 8;
                pbVar19 = pbVar20;
              } while (pbVar20 < pbVar12);
            }
            else {
              uVar16 = (ulong)(param_2 + (((long)param_4 + -0x10) - (long)pbVar14)) &
                       0xfffffffffffffff8;
              if ((pbVar8 < pbVar9 + uVar16 + 8) &&
                 (pbVar19 = pbVar8, pbVar9 < pbVar14 + uVar16 + 0x10)) goto LAB_00100910;
              uVar15 = uVar7 & 0x3ffffffffffffff8;
              uVar16 = (uVar15 - 8 >> 3) + 1;
              uVar17 = uVar16 & 1;
              lVar18 = 0;
              if (uVar15 - 8 != 0) {
                lVar21 = uVar17 - uVar16;
                pbVar13 = pbVar14 + 0x48;
                pbVar19 = pbVar9 + 0x40;
                do {
                  uVar23 = *(undefined8 *)(pbVar19 + -0x40);
                  uVar25 = *(undefined8 *)(pbVar19 + -0x28);
                  uVar24 = *(undefined8 *)(pbVar19 + -0x30);
                  lVar18 = lVar18 + 0x10;
                  lVar21 = lVar21 + 2;
                  uVar27 = *(undefined8 *)(pbVar19 + -0x18);
                  uVar26 = *(undefined8 *)(pbVar19 + -0x20);
                  uVar29 = *(undefined8 *)(pbVar19 + -8);
                  uVar28 = *(undefined8 *)(pbVar19 + -0x10);
                  *(undefined8 *)(pbVar13 + -0x38) = *(undefined8 *)(pbVar19 + -0x38);
                  *(undefined8 *)(pbVar13 + -0x40) = uVar23;
                  *(undefined8 *)(pbVar13 + -0x28) = uVar25;
                  *(undefined8 *)(pbVar13 + -0x30) = uVar24;
                  *(undefined8 *)(pbVar13 + -0x18) = uVar27;
                  *(undefined8 *)(pbVar13 + -0x20) = uVar26;
                  *(undefined8 *)(pbVar13 + -8) = uVar29;
                  *(undefined8 *)(pbVar13 + -0x10) = uVar28;
                  uVar23 = *(undefined8 *)pbVar19;
                  uVar25 = *(undefined8 *)(pbVar19 + 0x18);
                  uVar24 = *(undefined8 *)(pbVar19 + 0x10);
                  uVar27 = *(undefined8 *)(pbVar19 + 0x28);
                  uVar26 = *(undefined8 *)(pbVar19 + 0x20);
                  uVar29 = *(undefined8 *)(pbVar19 + 0x38);
                  uVar28 = *(undefined8 *)(pbVar19 + 0x30);
                  *(undefined8 *)(pbVar13 + 8) = *(undefined8 *)(pbVar19 + 8);
                  *(undefined8 *)pbVar13 = uVar23;
                  *(undefined8 *)(pbVar13 + 0x18) = uVar25;
                  *(undefined8 *)(pbVar13 + 0x10) = uVar24;
                  pbVar19 = pbVar19 + 0x80;
                  *(undefined8 *)(pbVar13 + 0x28) = uVar27;
                  *(undefined8 *)(pbVar13 + 0x20) = uVar26;
                  *(undefined8 *)(pbVar13 + 0x38) = uVar29;
                  *(undefined8 *)(pbVar13 + 0x30) = uVar28;
                  pbVar13 = pbVar13 + 0x80;
                } while (lVar21 != 0);
              }
              if (uVar17 != 0) {
                pbVar13 = pbVar9 + lVar18 * 8;
                pbVar19 = pbVar8 + lVar18 * 8;
                uVar23 = *(undefined8 *)pbVar13;
                uVar25 = *(undefined8 *)(pbVar13 + 0x18);
                uVar24 = *(undefined8 *)(pbVar13 + 0x10);
                uVar27 = *(undefined8 *)(pbVar13 + 0x28);
                uVar26 = *(undefined8 *)(pbVar13 + 0x20);
                uVar29 = *(undefined8 *)(pbVar13 + 0x38);
                uVar28 = *(undefined8 *)(pbVar13 + 0x30);
                *(undefined8 *)(pbVar19 + 8) = *(undefined8 *)(pbVar13 + 8);
                *(undefined8 *)pbVar19 = uVar23;
                *(undefined8 *)(pbVar19 + 0x18) = uVar25;
                *(undefined8 *)(pbVar19 + 0x10) = uVar24;
                *(undefined8 *)(pbVar19 + 0x28) = uVar27;
                *(undefined8 *)(pbVar19 + 0x20) = uVar26;
                *(undefined8 *)(pbVar19 + 0x38) = uVar29;
                *(undefined8 *)(pbVar19 + 0x30) = uVar28;
              }
              if (uVar7 != uVar15) {
                pbVar13 = pbVar9 + uVar15 * 8;
                pbVar19 = pbVar8 + uVar15 * 8;
                goto LAB_00100910;
              }
            }
            pbVar9 = pbVar9 + ((long)pbVar12 - (long)pbVar8);
            pbVar8 = pbVar12;
          }
          if (pbVar8 < __dest) {
            pbVar13 = pbVar14 + (uVar10 - (long)pbVar8) + 4;
            if ((pbVar13 < &DAT_00000040) ||
               ((pbVar8 < pbVar9 + (long)pbVar14 + (uVar10 - (long)pbVar8) + 4 && (pbVar9 < __dest))
               )) {
              pbVar14 = pbVar8;
              pbVar19 = pbVar9;
            }
            else {
              pbVar20 = (byte *)((ulong)pbVar13 & 0xffffffffffffffc0);
              uVar10 = ((ulong)(pbVar20 + -0x40) >> 6) + 1;
              lVar18 = 0;
              uVar7 = uVar10 & 1;
              if (pbVar20 + -0x40 != (byte *)0x0) {
                lVar21 = uVar10 - uVar7;
                do {
                  pbVar14 = pbVar9 + lVar18 + 0x70;
                  pbVar19 = pbVar8 + lVar18 + 0x40;
                  lVar18 = lVar18 + 0x80;
                  uVar23 = *(undefined8 *)(pbVar14 + -0x70);
                  uVar25 = *(undefined8 *)(pbVar14 + -0x58);
                  uVar24 = *(undefined8 *)(pbVar14 + -0x60);
                  uVar27 = *(undefined8 *)(pbVar14 + -0x48);
                  uVar26 = *(undefined8 *)(pbVar14 + -0x50);
                  uVar29 = *(undefined8 *)(pbVar14 + -0x38);
                  uVar28 = *(undefined8 *)(pbVar14 + -0x40);
                  *(undefined8 *)(pbVar19 + -0x38) = *(undefined8 *)(pbVar14 + -0x68);
                  *(undefined8 *)(pbVar19 + -0x40) = uVar23;
                  *(undefined8 *)(pbVar19 + -0x28) = uVar25;
                  *(undefined8 *)(pbVar19 + -0x30) = uVar24;
                  lVar21 = lVar21 + -2;
                  *(undefined8 *)(pbVar19 + -0x18) = uVar27;
                  *(undefined8 *)(pbVar19 + -0x20) = uVar26;
                  *(undefined8 *)(pbVar19 + -8) = uVar29;
                  *(undefined8 *)(pbVar19 + -0x10) = uVar28;
                  uVar23 = *(undefined8 *)(pbVar14 + -0x30);
                  uVar25 = *(undefined8 *)(pbVar14 + -0x18);
                  uVar24 = *(undefined8 *)(pbVar14 + -0x20);
                  uVar27 = *(undefined8 *)(pbVar14 + -8);
                  uVar26 = *(undefined8 *)(pbVar14 + -0x10);
                  uVar29 = *(undefined8 *)(pbVar14 + 8);
                  uVar28 = *(undefined8 *)pbVar14;
                  *(undefined8 *)(pbVar19 + 8) = *(undefined8 *)(pbVar14 + -0x28);
                  *(undefined8 *)pbVar19 = uVar23;
                  *(undefined8 *)(pbVar19 + 0x18) = uVar25;
                  *(undefined8 *)(pbVar19 + 0x10) = uVar24;
                  *(undefined8 *)(pbVar19 + 0x28) = uVar27;
                  *(undefined8 *)(pbVar19 + 0x20) = uVar26;
                  *(undefined8 *)(pbVar19 + 0x38) = uVar29;
                  *(undefined8 *)(pbVar19 + 0x30) = uVar28;
                } while (lVar21 != 0);
              }
              pbVar14 = pbVar8 + (long)pbVar20;
              pbVar19 = pbVar9 + (long)pbVar20;
              if (uVar7 != 0) {
                pbVar9 = pbVar9 + lVar18;
                uVar23 = *(undefined8 *)pbVar9;
                uVar25 = *(undefined8 *)(pbVar9 + 0x18);
                uVar24 = *(undefined8 *)(pbVar9 + 0x10);
                uVar27 = *(undefined8 *)(pbVar9 + 0x28);
                uVar26 = *(undefined8 *)(pbVar9 + 0x20);
                uVar29 = *(undefined8 *)(pbVar9 + 0x38);
                uVar28 = *(undefined8 *)(pbVar9 + 0x30);
                pbVar8 = pbVar8 + lVar18;
                *(undefined8 *)(pbVar8 + 8) = *(undefined8 *)(pbVar9 + 8);
                *(undefined8 *)pbVar8 = uVar23;
                *(undefined8 *)(pbVar8 + 0x18) = uVar25;
                *(undefined8 *)(pbVar8 + 0x10) = uVar24;
                *(undefined8 *)(pbVar8 + 0x28) = uVar27;
                *(undefined8 *)(pbVar8 + 0x20) = uVar26;
                *(undefined8 *)(pbVar8 + 0x38) = uVar29;
                *(undefined8 *)(pbVar8 + 0x30) = uVar28;
              }
              if (pbVar20 == pbVar13) goto LAB_00100484;
            }
            do {
              pbVar8 = pbVar14 + 1;
              *pbVar14 = *pbVar19;
              pbVar14 = pbVar8;
              pbVar19 = pbVar19 + 1;
            } while (pbVar8 < __dest);
          }
        }
        else {
          pbVar9 = pbVar8 + 8;
          *(undefined8 *)pbVar14 = *(undefined8 *)pbVar8;
          if (pbVar11 < __dest) goto LAB_00100824;
LAB_001006b0:
          *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)pbVar9;
          if (0x10 < uVar10 + 4) {
            pbVar8 = pbVar14 + 0x18;
            pbVar13 = __dest;
            if (__dest <= pbVar8) {
              pbVar13 = pbVar8;
            }
            uVar10 = ((ulong)(pbVar13 + (-0x11 - (long)pbVar14)) >> 3) + 1;
            pbVar13 = pbVar14 + 0x10;
            if (7 < uVar10) {
              pbVar19 = __dest;
              if (__dest <= pbVar8) {
                pbVar19 = pbVar8;
              }
              if ((pbVar9 + ((ulong)(pbVar19 + (-0x11 - (long)pbVar14)) & 0xfffffffffffffff8) + 0x10
                   <= pbVar13) ||
                 (pbVar8 + ((ulong)(pbVar19 + (-0x11 - (long)pbVar14)) & 0xfffffffffffffff8) <=
                  pbVar9 + 8)) {
                uVar16 = uVar10 & 0x3ffffffffffffff8;
                uVar7 = (uVar16 - 8 >> 3) + 1;
                uVar15 = uVar7 & 1;
                lVar18 = 0;
                if (uVar16 - 8 != 0) {
                  lVar21 = uVar15 - uVar7;
                  pbVar14 = pbVar14 + 0x40;
                  pbVar8 = pbVar9 + 0x48;
                  do {
                    uVar23 = *(undefined8 *)(pbVar8 + -0x40);
                    uVar25 = *(undefined8 *)(pbVar8 + -0x28);
                    uVar24 = *(undefined8 *)(pbVar8 + -0x30);
                    lVar18 = lVar18 + 0x10;
                    lVar21 = lVar21 + 2;
                    uVar27 = *(undefined8 *)(pbVar8 + -0x18);
                    uVar26 = *(undefined8 *)(pbVar8 + -0x20);
                    uVar29 = *(undefined8 *)(pbVar8 + -8);
                    uVar28 = *(undefined8 *)(pbVar8 + -0x10);
                    *(undefined8 *)(pbVar14 + -0x28) = *(undefined8 *)(pbVar8 + -0x38);
                    *(undefined8 *)(pbVar14 + -0x30) = uVar23;
                    *(undefined8 *)(pbVar14 + -0x18) = uVar25;
                    *(undefined8 *)(pbVar14 + -0x20) = uVar24;
                    *(undefined8 *)(pbVar14 + -8) = uVar27;
                    *(undefined8 *)(pbVar14 + -0x10) = uVar26;
                    *(undefined8 *)(pbVar14 + 8) = uVar29;
                    *(undefined8 *)pbVar14 = uVar28;
                    uVar23 = *(undefined8 *)pbVar8;
                    uVar25 = *(undefined8 *)(pbVar8 + 0x18);
                    uVar24 = *(undefined8 *)(pbVar8 + 0x10);
                    uVar27 = *(undefined8 *)(pbVar8 + 0x28);
                    uVar26 = *(undefined8 *)(pbVar8 + 0x20);
                    uVar29 = *(undefined8 *)(pbVar8 + 0x38);
                    uVar28 = *(undefined8 *)(pbVar8 + 0x30);
                    *(undefined8 *)(pbVar14 + 0x18) = *(undefined8 *)(pbVar8 + 8);
                    *(undefined8 *)(pbVar14 + 0x10) = uVar23;
                    *(undefined8 *)(pbVar14 + 0x28) = uVar25;
                    *(undefined8 *)(pbVar14 + 0x20) = uVar24;
                    pbVar8 = pbVar8 + 0x80;
                    *(undefined8 *)(pbVar14 + 0x38) = uVar27;
                    *(undefined8 *)(pbVar14 + 0x30) = uVar26;
                    *(undefined8 *)(pbVar14 + 0x48) = uVar29;
                    *(undefined8 *)(pbVar14 + 0x40) = uVar28;
                    pbVar14 = pbVar14 + 0x80;
                  } while (lVar21 != 0);
                }
                if (uVar15 != 0) {
                  lVar18 = lVar18 * 8;
                  uVar23 = *(undefined8 *)(pbVar9 + lVar18 + 8);
                  uVar25 = *(undefined8 *)(pbVar9 + lVar18 + 0x20);
                  uVar24 = *(undefined8 *)(pbVar9 + lVar18 + 0x18);
                  uVar27 = *(undefined8 *)(pbVar9 + lVar18 + 0x30);
                  uVar26 = *(undefined8 *)(pbVar9 + lVar18 + 0x28);
                  uVar29 = *(undefined8 *)(pbVar9 + lVar18 + 0x40);
                  uVar28 = *(undefined8 *)(pbVar9 + lVar18 + 0x38);
                  pbVar14 = pbVar13 + lVar18;
                  *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)(pbVar9 + lVar18 + 0x10);
                  *(undefined8 *)pbVar14 = uVar23;
                  *(undefined8 *)(pbVar14 + 0x18) = uVar25;
                  *(undefined8 *)(pbVar14 + 0x10) = uVar24;
                  *(undefined8 *)(pbVar14 + 0x28) = uVar27;
                  *(undefined8 *)(pbVar14 + 0x20) = uVar26;
                  *(undefined8 *)(pbVar14 + 0x38) = uVar29;
                  *(undefined8 *)(pbVar14 + 0x30) = uVar28;
                }
                pbVar13 = pbVar13 + uVar16 * 8;
                pbVar9 = pbVar9 + uVar16 * 8;
                if (uVar10 == uVar16) goto LAB_00100484;
              }
            }
            do {
              pbVar14 = pbVar13 + 8;
              *(undefined8 *)pbVar13 = *(undefined8 *)(pbVar9 + 8);
              pbVar13 = pbVar14;
              pbVar9 = pbVar9 + 8;
            } while (pbVar14 < __dest);
          }
        }
LAB_00100484:
        puVar5 = (ushort *)((long)__src + 1);
        uVar10 = (ulong)(byte)*__src;
        bVar4 = (byte)*__src >> 4;
        __src = puVar5;
        if (bVar4 != 0xf) goto LAB_001005fc;
LAB_00100494:
        if (pbVar1 + -0xf <= __src) {
LAB_00100a34:
          return ~(uint)__src + (int)param_1;
        }
        uVar6 = 0;
        puVar5 = __src;
        do {
          __src = (ushort *)((long)puVar5 + 1);
          uVar3 = *puVar5;
          uVar6 = uVar6 + (byte)uVar3;
          if (pbVar1 + -0xf <= __src) break;
          puVar5 = __src;
        } while ((byte)uVar3 == 0xff);
        uVar7 = (ulong)uVar6 + 0xf;
        if ((~(ulong)__dest < uVar7) || (~(ulong)__src < uVar7)) goto LAB_00100a34;
LAB_001004d8:
        pbVar14 = __dest + uVar7;
        if ((pbVar11 < pbVar14) || (puVar5 = (ushort *)((long)__src + uVar7), pbVar1 + -8 < puVar5))
        {
          if (((byte *)((long)__src + uVar7) == pbVar1) && (pbVar14 <= pbVar2)) {
            memmove(__dest,__src,uVar7);
            return (int)pbVar14 - (int)param_2;
          }
          goto LAB_00100a34;
        }
        pbVar8 = __dest + 8;
        pbVar9 = pbVar14;
        if (pbVar14 <= pbVar8) {
          pbVar9 = pbVar8;
        }
        uVar7 = ((ulong)(pbVar9 + ~(ulong)__dest) >> 3) + 1;
        if (uVar7 < 8) {
LAB_001005d0:
          do {
            pbVar8 = __dest + 8;
            *(undefined8 *)__dest = *(undefined8 *)__src;
            __src = __src + 4;
            __dest = pbVar8;
          } while (pbVar8 < pbVar14);
        }
        else {
          pbVar9 = pbVar14;
          if (pbVar14 <= pbVar8) {
            pbVar9 = pbVar8;
          }
          if (__dest < (byte *)((long)__src +
                               ((ulong)(pbVar9 + ~(ulong)__dest) & 0xfffffffffffffff8) + 8)) {
            if (__src < pbVar8 + ((ulong)(pbVar9 + ~(ulong)__dest) & 0xfffffffffffffff8))
            goto LAB_001005d0;
          }
          uVar15 = uVar7 & 0x3ffffffffffffff8;
          uVar16 = (uVar15 - 8 >> 3) + 1;
          uVar17 = uVar16 & 1;
          lVar18 = 0;
          if (uVar15 - 8 != 0) {
            lVar21 = uVar17 - uVar16;
            pbVar8 = __dest + 0x40;
            puVar22 = __src + 0x20;
            do {
              uVar23 = *(undefined8 *)(puVar22 + -0x20);
              uVar25 = *(undefined8 *)(puVar22 + -0x14);
              uVar24 = *(undefined8 *)(puVar22 + -0x18);
              lVar18 = lVar18 + 0x10;
              lVar21 = lVar21 + 2;
              uVar27 = *(undefined8 *)(puVar22 + -0xc);
              uVar26 = *(undefined8 *)(puVar22 + -0x10);
              uVar29 = *(undefined8 *)(puVar22 + -4);
              uVar28 = *(undefined8 *)(puVar22 + -8);
              *(undefined8 *)(pbVar8 + -0x38) = *(undefined8 *)(puVar22 + -0x1c);
              *(undefined8 *)(pbVar8 + -0x40) = uVar23;
              *(undefined8 *)(pbVar8 + -0x28) = uVar25;
              *(undefined8 *)(pbVar8 + -0x30) = uVar24;
              *(undefined8 *)(pbVar8 + -0x18) = uVar27;
              *(undefined8 *)(pbVar8 + -0x20) = uVar26;
              *(undefined8 *)(pbVar8 + -8) = uVar29;
              *(undefined8 *)(pbVar8 + -0x10) = uVar28;
              uVar23 = *(undefined8 *)puVar22;
              uVar25 = *(undefined8 *)(puVar22 + 0xc);
              uVar24 = *(undefined8 *)(puVar22 + 8);
              uVar27 = *(undefined8 *)(puVar22 + 0x14);
              uVar26 = *(undefined8 *)(puVar22 + 0x10);
              uVar29 = *(undefined8 *)(puVar22 + 0x1c);
              uVar28 = *(undefined8 *)(puVar22 + 0x18);
              *(undefined8 *)(pbVar8 + 8) = *(undefined8 *)(puVar22 + 4);
              *(undefined8 *)pbVar8 = uVar23;
              *(undefined8 *)(pbVar8 + 0x18) = uVar25;
              *(undefined8 *)(pbVar8 + 0x10) = uVar24;
              puVar22 = puVar22 + 0x40;
              *(undefined8 *)(pbVar8 + 0x28) = uVar27;
              *(undefined8 *)(pbVar8 + 0x20) = uVar26;
              *(undefined8 *)(pbVar8 + 0x38) = uVar29;
              *(undefined8 *)(pbVar8 + 0x30) = uVar28;
              pbVar8 = pbVar8 + 0x80;
            } while (lVar21 != 0);
          }
          if (uVar17 != 0) {
            puVar22 = __src + lVar18 * 4;
            pbVar8 = __dest + lVar18 * 8;
            uVar23 = *(undefined8 *)puVar22;
            uVar25 = *(undefined8 *)(puVar22 + 0xc);
            uVar24 = *(undefined8 *)(puVar22 + 8);
            uVar27 = *(undefined8 *)(puVar22 + 0x14);
            uVar26 = *(undefined8 *)(puVar22 + 0x10);
            uVar29 = *(undefined8 *)(puVar22 + 0x1c);
            uVar28 = *(undefined8 *)(puVar22 + 0x18);
            *(undefined8 *)(pbVar8 + 8) = *(undefined8 *)(puVar22 + 4);
            *(undefined8 *)pbVar8 = uVar23;
            *(undefined8 *)(pbVar8 + 0x18) = uVar25;
            *(undefined8 *)(pbVar8 + 0x10) = uVar24;
            *(undefined8 *)(pbVar8 + 0x28) = uVar27;
            *(undefined8 *)(pbVar8 + 0x20) = uVar26;
            *(undefined8 *)(pbVar8 + 0x38) = uVar29;
            *(undefined8 *)(pbVar8 + 0x30) = uVar28;
          }
          if (uVar7 != uVar15) {
            __src = __src + uVar15 * 4;
            __dest = __dest + uVar15 * 8;
            goto LAB_001005d0;
          }
        }
        __src = puVar5 + 1;
        uVar7 = (ulong)*puVar5;
        pbVar8 = pbVar14 + -uVar7;
        uVar10 = uVar10 & 0xf;
      } while( true );
    }
  }
  return -1;
}


