/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bc554; name: FUN_031bc554
 */


void FUN_031bc554(long param_1,int *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  undefined4 *puVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int *local_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined1 local_cc;
  undefined4 local_cb;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_a0;
  uint uStack_9c;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if (*(char *)((long)param_2 + 5) == '\x02') {
    iVar17 = *(int *)(param_1 + 0x24) + -1;
    uVar20 = *(undefined4 *)(param_1 + 0x104);
joined_r0x031bc628:
    if (iVar17 == -1) goto LAB_031bc59c;
    puVar11 = (undefined4 *)(*(long *)(param_1 + 0x40) + (long)iVar17 * 0x80 + 0xc);
  }
  else {
    if (*(char *)((long)param_2 + 5) != '\x01') {
      if (((((float)*(undefined8 *)(param_1 + 0x18) < 1.1920929e-07) ||
           (*(char *)((long)param_2 + 7) != '\0')) ||
          (bVar3 = *(byte *)(param_2 + 1), bVar3 == 0xff)) || (*(char *)((long)param_2 + 6) == '\0')
         ) {
        uVar13 = *(undefined8 *)param_2;
        *(char *)(param_3 + 1) = (char)param_2[2];
        *param_3 = uVar13;
        uVar13 = *(undefined8 *)(param_2 + 4);
        param_3[3] = *(undefined8 *)(param_2 + 6);
        param_3[2] = uVar13;
        uVar13 = *(undefined8 *)(param_2 + 8);
        param_3[5] = *(undefined8 *)(param_2 + 10);
        param_3[4] = uVar13;
        return;
      }
      local_a0 = *param_2;
      if ((local_a0 < 0) || (*(int *)(param_1 + 0x24) <= local_a0)) {
        iVar16 = -1;
      }
      else {
        piVar14 = (int *)(*(long *)(param_1 + 0x40) + (long)local_a0 * 0x80);
        piVar2 = piVar14 + 1;
        if (bVar3 != 1) {
          piVar2 = piVar14;
        }
        iVar16 = *piVar2;
      }
      uStack_98 = 0;
      uStack_9c = (uint)bVar3;
      FUN_031bb258(param_1,&local_a0);
      lVar18 = (long)*param_2;
      if (*param_2 < *(int *)(param_1 + 0x24)) {
        fVar21 = (float)*(undefined8 *)(param_2 + 4) - (float)param_2[8];
        fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) - (float)param_2[9];
        fVar27 = (float)*(undefined8 *)(param_2 + 6) - (float)param_2[10];
        fVar30 = (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20) - (float)param_2[0xb];
        auVar32._4_4_ = fVar24;
        auVar32._0_4_ = fVar21;
        auVar32._8_4_ = fVar27;
        auVar32._12_4_ = fVar30;
        auVar33._4_4_ = fVar24;
        auVar33._0_4_ = fVar21;
        auVar33._8_4_ = fVar27;
        auVar33._12_4_ = fVar30;
        auVar32 = NEON_ext(auVar32,auVar33,4,1);
        uVar12 = 0xff;
        if ((uStack_9c & 0xff) == 0) {
          uVar12 = 1;
        }
        uVar1 = 0;
        if ((uStack_9c & 0xff) != 1) {
          uVar1 = uVar12;
        }
        lVar19 = lVar18 << 0x20;
        lVar15 = lVar18 << 7;
        iVar17 = -1;
        do {
          local_118 = param_2 + 4;
          if (lVar18 < 0) {
            if (iVar16 != -1) goto LAB_031bc824;
          }
          else {
            piVar14 = (int *)(*(long *)(param_1 + 0x40) + lVar15);
            piVar2 = piVar14 + 1;
            if ((char)param_2[1] != '\x01') {
              piVar2 = piVar14;
            }
            if (*piVar2 != iVar16) goto LAB_031bc824;
          }
          local_cb = 0;
          iVar17 = (int)lVar18;
          local_d0 = iVar17;
          local_cc = uVar1;
          FUN_031bb258(param_1,&local_d0);
          local_110 = (float)local_90;
          fStack_10c = (float)((ulong)local_90 >> 0x20);
          fStack_108 = (float)uStack_88;
          fStack_104 = (float)((ulong)uStack_88 >> 0x20);
          local_110 = (float)local_c0 - local_110;
          fStack_10c = (float)((ulong)local_c0 >> 0x20) - fStack_10c;
          fStack_108 = (float)uStack_b8 - fStack_108;
          fStack_104 = (float)((ulong)uStack_b8 >> 0x20) - fStack_104;
          auVar4._4_4_ = fStack_10c;
          auVar4._0_4_ = local_110;
          auVar4._8_4_ = fStack_108;
          auVar4._12_4_ = fStack_104;
          auVar5._4_4_ = fStack_10c;
          auVar5._0_4_ = local_110;
          auVar5._8_4_ = fStack_108;
          auVar5._12_4_ = fStack_104;
          auVar33 = NEON_ext(auVar4,auVar5,4,1);
          fVar22 = fVar21 * auVar33._0_4_ - auVar32._0_4_ * local_110;
          fVar25 = fVar24 * auVar33._4_4_ - auVar32._4_4_ * fStack_10c;
          fVar28 = fVar27 * local_110 - fVar21 * fStack_108;
          fVar31 = fVar30 * fStack_10c - fVar24 * fStack_104;
          auVar6._4_4_ = fVar25;
          auVar6._0_4_ = fVar22;
          auVar6._8_4_ = fVar28;
          auVar6._12_4_ = fVar31;
          auVar7._4_4_ = fVar25;
          auVar7._0_4_ = fVar22;
          auVar7._8_4_ = fVar28;
          auVar7._12_4_ = fVar31;
          auVar33 = NEON_ext(auVar6,auVar7,4,1);
          fVar28 = (float)*(undefined8 *)(param_1 + 0x90) * auVar33._0_4_;
          fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) * auVar33._4_4_;
          fVar22 = (float)*(undefined8 *)(param_1 + 0x98) * fVar22;
          fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) * fVar25;
          auVar8._4_4_ = fVar31;
          auVar8._0_4_ = fVar28;
          auVar8._8_4_ = fVar22;
          auVar8._12_4_ = fVar25;
          auVar9._4_4_ = fVar31;
          auVar9._0_4_ = fVar28;
          auVar9._8_4_ = fVar22;
          auVar9._12_4_ = fVar25;
          auVar33 = NEON_ext(auVar8,auVar9,8,1);
          if (((char)param_2[1] == '\0') != 0.0 < fVar28 + fVar31 + auVar33._0_4_) {
            local_d8 = *(undefined8 *)(param_2 + 6);
            local_e0 = *(undefined8 *)local_118;
            piVar14 = (int *)&local_e0;
            uVar10 = FUN_031898b0(*(undefined8 *)(param_1 + 0x28),param_1 + 0x90,
                                  *(undefined4 *)
                                   (*(long *)(param_1 + 0x40) + (lVar19 >> 0x19) + 0x20),&local_e0);
            iVar17 = param_2[2];
            *param_3 = *(undefined8 *)param_2;
            *(char *)(param_3 + 1) = (char)iVar17;
            uVar26 = (undefined4)*(undefined8 *)(param_2 + 6);
            uVar29 = (undefined4)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
            uVar20 = (undefined4)*(undefined8 *)(param_2 + 4);
            uVar23 = (undefined4)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
            goto LAB_031bc5dc;
          }
          lVar18 = lVar18 + 1;
          lVar19 = lVar19 + 0x100000000;
          lVar15 = lVar15 + 0x80;
        } while (lVar18 < *(int *)(param_1 + 0x24));
        iVar17 = (int)lVar18 + -1;
      }
      else {
        iVar17 = -1;
      }
LAB_031bc824:
      uVar20 = 0xffffffff;
      goto joined_r0x031bc628;
    }
    puVar11 = (undefined4 *)(param_1 + 0x104);
  }
  uVar20 = *puVar11;
LAB_031bc59c:
  uStack_98 = (undefined1)*(undefined8 *)(param_2 + 6);
  uStack_97 = (undefined7)((ulong)*(undefined8 *)(param_2 + 6) >> 8);
  uVar13 = *(undefined8 *)(param_2 + 4);
  local_a0 = (int)uVar13;
  uStack_9c = (uint)((ulong)uVar13 >> 0x20);
  piVar14 = &local_a0;
  uVar10 = FUN_031898b0(*(undefined8 *)(param_1 + 0x28),param_1 + 0x90,uVar20,&local_a0);
  iVar17 = param_2[2];
  *param_3 = *(undefined8 *)param_2;
  *(char *)(param_3 + 1) = (char)iVar17;
  uVar26 = (undefined4)*(undefined8 *)(param_2 + 6);
  uVar29 = (undefined4)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
  uVar13 = *(undefined8 *)(param_2 + 4);
  uVar20 = (undefined4)uVar13;
  uVar23 = (undefined4)((ulong)uVar13 >> 0x20);
LAB_031bc5dc:
  param_3[3] = CONCAT44(uVar29,uVar26);
  param_3[2] = CONCAT44(uVar23,uVar20);
  uVar13 = *(undefined8 *)(param_2 + 8);
  if ((uVar10 & 1) == 0) {
    piVar14 = param_2 + 4;
  }
  param_3[5] = *(undefined8 *)(param_2 + 10);
  param_3[4] = uVar13;
  uVar13 = *(undefined8 *)piVar14;
  param_3[3] = *(undefined8 *)(piVar14 + 2);
  param_3[2] = uVar13;
  return;
}


