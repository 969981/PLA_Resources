/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029da128; name: FUN_029da128
 */


void FUN_029da128(long param_1,undefined8 *param_2,char *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined1 auStack_90 [8];
  char local_88 [40];
  
  *(undefined8 *)((long)param_2 + 5) = 0;
  *param_2 = 0;
  if ((param_3[0x2a] != '\0') && (*param_3 != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*param_3,0);
  }
  uVar8 = DAT_03a7f7a8;
  uVar7 = DAT_03a7f7a4;
  uVar6 = DAT_03a7f7a0;
  uVar5 = DAT_03a7f79c;
  uVar4 = DAT_03a7f798;
  uVar3 = DAT_03a7f794;
  if (param_3[0x26] != '\0') {
    uVar16 = (ulong)DAT_03a7f794;
    uVar17 = (ulong)DAT_03a7f798;
    uVar18 = (ulong)DAT_03a7f79c;
    uVar19 = (ulong)DAT_03a7f7a0;
    uVar1 = (ulong)DAT_03a7f7a4;
    uVar2 = (ulong)DAT_03a7f7a8;
    uVar23 = 0;
    do {
      lVar22 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) +
                         (ulong)(byte)param_3[uVar23 + 8] * 8 + 0x120);
      lVar21 = *(long *)(lVar22 + 0x60);
      uVar10 = FUN_02c6cf3c(*(undefined8 *)(lVar21 + 0x98));
      if ((((uVar10 & 1) == 0) &&
          ((*(ushort *)(*(long *)(*(long *)(lVar21 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) &&
         (*(short *)(lVar22 + 0x74) != 0)) {
        lVar21 = lVar22 + 0x90;
        uVar20 = *(uint *)(param_3 + 4);
LAB_029da280:
        if ((*(byte *)(lVar22 + 0x98) & 7) == 0) {
          if ((*(byte *)(lVar22 + 0xa0) & 7) != 0) {
            uVar14 = 2;
            goto joined_r0x029da2cc;
          }
          if ((*(byte *)(lVar22 + 0xa8) & 7) != 0) {
            uVar14 = 3;
            goto joined_r0x029da2cc;
          }
          if ((*(byte *)(lVar22 + 0xb0) & 7) != 0) {
            uVar14 = 4;
            goto joined_r0x029da2cc;
          }
          uVar14 = 5;
          if ((*(byte *)(lVar22 + 0xb8) & 7) != 0) goto joined_r0x029da2cc;
          if ((*(byte *)(lVar22 + 0xc0) & 7) == 0) {
            uVar14 = 0;
            if ((*(byte *)(lVar22 + 200) & 7) != 0) {
              uVar14 = 7;
            }
            goto joined_r0x029da2cc;
          }
          uVar14 = 6;
          if (uVar20 == 0x35) goto LAB_029da418;
LAB_029da308:
          if (uVar20 == 0x37) {
            uVar9 = uVar20;
            uVar14 = uVar3;
            if (((((*(byte *)(lVar21 + uVar16 * 8) & 7) != 0) ||
                 (uVar9 = 0x37, uVar14 = uVar4, (*(byte *)(lVar21 + uVar17 * 8) & 7) != 0)) ||
                ((uVar9 = 0x37, uVar14 = uVar5, (*(byte *)(lVar21 + uVar18 * 8) & 7) != 0 ||
                 ((uVar9 = 0x37, uVar14 = uVar6, (*(byte *)(lVar21 + uVar19 * 8) & 7) != 0 ||
                  (uVar9 = 0x37, uVar14 = uVar7, (*(byte *)(lVar21 + uVar1 * 8) & 7) != 0)))))) ||
               (uVar9 = 0x37, uVar14 = uVar8, (*(byte *)(lVar21 + uVar2 * 8) & 7) != 0))
            goto joined_r0x029da3c8;
            goto LAB_029da1d4;
          }
          if (uVar20 != 0x36) {
            if (((*(ulong *)(lVar22 + (ulong)uVar20 * 8 + 0x90) & 7) != 0) && (uVar20 != 0))
            goto LAB_029da420;
            goto LAB_029da1d4;
          }
          if (uVar14 == 0) {
            if ((*(byte *)(lVar22 + 0xd0) & 7) != 0) {
              uVar20 = 0;
              uVar14 = 8;
              goto LAB_029da440;
            }
            goto LAB_029da1d4;
          }
          uVar20 = 8;
        }
        else {
          uVar14 = 1;
joined_r0x029da2cc:
          if (uVar20 != 0x35) goto LAB_029da308;
LAB_029da418:
          uVar20 = uVar14;
          if (uVar20 == 0) goto LAB_029da1d4;
LAB_029da420:
          uVar9 = 0;
          uVar14 = uVar20;
joined_r0x029da3c8:
          uVar20 = uVar9;
          if ((uVar14 == 0x1e) &&
             (uVar10 = FUN_0298765c(*(undefined8 *)(param_1 + 0x38),lVar22), (uVar10 & 1) != 0))
          goto LAB_029da280;
        }
LAB_029da440:
        FUN_02a3ba10(*(undefined8 *)(param_1 + 0x20),lVar22,uVar14,auStack_90);
        if (param_3[0x2b] == '\0') {
          local_88[0x20] = '\0';
          local_88[0x21] = '\0';
          local_88[0x22] = '\0';
          local_88[0x23] = '\0';
          local_88[0x10] = '\0';
          local_88[0x11] = '\0';
          local_88[0x12] = '\0';
          local_88[0x13] = '\0';
          local_88[0x14] = '\0';
          local_88[0x15] = '\0';
          local_88[0x16] = '\0';
          local_88[0x17] = '\0';
          local_88[0x18] = '\0';
          local_88[0x19] = '\0';
          local_88[0x1a] = '\0';
          local_88[0x1b] = '\0';
          local_88[0x1c] = '\0';
          local_88[0x1d] = '\0';
          local_88[0x1e] = '\0';
          local_88[0x1f] = '\0';
          local_88[0] = '\0';
          local_88[1] = '\0';
          local_88[2] = '\0';
          local_88[3] = '\0';
          local_88[4] = '\0';
          local_88[5] = '\0';
          local_88[6] = '\0';
          local_88[7] = '\0';
          local_88[8] = '\0';
          local_88[9] = '\0';
          local_88[10] = '\0';
          local_88[0xb] = '\0';
          local_88[0xc] = '\0';
          local_88[0xd] = '\0';
          local_88[0xe] = '\0';
          local_88[0xf] = '\0';
          uVar10 = FUN_02956eb0(uVar14,auStack_90,lVar22,*(undefined2 *)(param_3 + 0x28),local_88);
          if ((uVar10 & 1) == 0) goto LAB_029da4a8;
          uVar11 = *(undefined8 *)(param_1 + 0x20);
          pcVar12 = local_88;
        }
        else {
          if ((param_3[0x2e] & 0x7fU) == 0) goto LAB_029da4a8;
          uVar11 = *(undefined8 *)(param_1 + 0x20);
          pcVar12 = param_3 + 0x2c;
        }
        FUN_02a3a6c4(uVar11,pcVar12);
LAB_029da4a8:
        if (uVar14 == 0x15) {
          lVar15 = *(long *)(*(long *)(param_1 + 0x60) + 800);
          lVar13 = *(long *)(*(long *)(*(long *)(lVar15 + 0x10) + 8) +
                             (ulong)*(byte *)(lVar22 + 0x7d) * 8 + 0x120);
          if (*(short *)(lVar13 + 0x76) != 0) {
            FUN_029825a0(*(undefined8 *)(lVar15 + 0x38),lVar13,7);
          }
        }
        *(undefined1 *)param_2 = 1;
        *(undefined1 *)((long)param_2 + uVar23 + 1) = 1;
        goto LAB_029da280;
      }
LAB_029da1d4:
      uVar23 = uVar23 + 1;
    } while (uVar23 < (byte)param_3[0x26]);
  }
  if ((param_3[0x2a] != '\0') && (*param_3 != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
  }
  return;
}


