/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f65864; name: FUN_02f65864
 */


/* WARNING: Removing unreachable block (ram,0x02f65a38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f65864(long *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 (*pauVar1) [16];
  char cVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined4 *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  byte bVar22;
  int iVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  byte bVar31;
  byte bVar32;
  byte bVar34;
  byte bVar36;
  byte bVar37;
  undefined1 auVar28 [16];
  byte bVar33;
  int iVar35;
  byte bVar38;
  int iVar39;
  int iVar40;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar41;
  int iVar42;
  float fVar45;
  int iVar46;
  float fVar47;
  int iVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar49;
  int iVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  byte local_570;
  byte bStack_56f;
  byte bStack_56e;
  byte bStack_56d;
  byte bStack_56c;
  byte bStack_56b;
  byte bStack_56a;
  byte bStack_569;
  byte bStack_568;
  byte bStack_567;
  byte bStack_566;
  byte bStack_565;
  byte bStack_564;
  byte bStack_563;
  byte bStack_562;
  byte bStack_561;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined4 local_500 [256];
  undefined4 *local_100;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined5 uStack_c4;
  undefined8 local_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_88 [2];
  undefined4 local_84;
  undefined8 local_80;
  
  uVar13 = _UNK_03889708;
  uVar12 = _DAT_03889700;
  if (*(char *)(param_4 + 0x11) == '\0') {
    local_510 = *param_3;
    fVar7 = *param_2;
    fVar8 = param_2[1];
    fVar9 = param_2[2];
    local_500[0] = 1;
    auVar10._12_4_ = fVar7;
    auVar10._8_4_ = fVar7;
    auVar10._4_4_ = fVar7;
    auVar10._0_4_ = fVar7;
    auVar5._4_4_ = fVar8;
    auVar5._0_4_ = fVar8;
    auVar28 = NEON_fmov(0x3f800000,4);
    puVar17 = (undefined4 *)((ulong)local_500 | 4);
    uStack_508 = local_510;
    do {
      while( true ) {
        local_100 = puVar17 + -1;
        pauVar1 = (undefined1 (*) [16])((long)param_1 + (long)(int)puVar17[-1] * 0x80 + *param_1);
        auVar5._8_4_ = fVar8;
        auVar44 = *pauVar1;
        fVar41 = (float)((ulong)*(undefined8 *)(pauVar1[1] + 8) >> 0x20);
        uVar25 = *(undefined8 *)pauVar1[1];
        auVar43 = NEON_fmax(auVar10,auVar44,4);
        auVar6._4_4_ = fVar9;
        auVar6._0_4_ = fVar9;
        auVar6._8_4_ = fVar9;
        iVar23 = -(uint)(auVar44._0_4_ <= (float)uVar25);
        iVar35 = -(uint)(auVar44._4_4_ <= (float)((ulong)uVar25 >> 0x20));
        iVar39 = -(uint)(auVar44._8_4_ <= (float)*(undefined8 *)(pauVar1[1] + 8));
        iVar40 = -(uint)(auVar44._12_4_ <= fVar41);
        auVar44._12_4_ = fVar41;
        auVar44._0_12_ = *(undefined1 (*) [12])pauVar1[1];
        auVar44 = NEON_fmin(auVar43,auVar44,4);
        fVar41 = auVar44._0_4_ - fVar7;
        fVar45 = auVar44._4_4_ - fVar7;
        fVar47 = auVar44._8_4_ - fVar7;
        fVar49 = auVar44._12_4_ - fVar7;
        auVar5._12_4_ = fVar8;
        auVar44 = NEON_fmax(auVar5,pauVar1[2],4);
        auVar44 = NEON_fmin(auVar44,pauVar1[3],4);
        fVar51 = auVar44._0_4_ - fVar8;
        fVar52 = auVar44._4_4_ - fVar8;
        fVar53 = auVar44._8_4_ - fVar8;
        fVar54 = auVar44._12_4_ - fVar8;
        auVar6._12_4_ = fVar9;
        auVar44 = NEON_fmax(auVar6,pauVar1[4],4);
        auVar43._12_4_ = (int)((ulong)*(undefined8 *)(pauVar1[5] + 8) >> 0x20);
        auVar43._0_12_ = *(undefined1 (*) [12])pauVar1[5];
        auVar44 = NEON_fmin(auVar44,auVar43,4);
        fVar55 = auVar44._0_4_ - fVar9;
        fVar56 = auVar44._4_4_ - fVar9;
        fVar57 = auVar44._8_4_ - fVar9;
        fVar58 = auVar44._12_4_ - fVar9;
        iVar42 = -(uint)(fVar41 * fVar41 + fVar51 * fVar51 + fVar55 * fVar55 <= (float)local_510);
        iVar46 = -(uint)(fVar45 * fVar45 + fVar52 * fVar52 + fVar56 * fVar56 <= local_510._4_4_);
        iVar48 = -(uint)(fVar47 * fVar47 + fVar53 * fVar53 + fVar57 * fVar57 <= (float)uStack_508);
        iVar50 = -(uint)(fVar49 * fVar49 + fVar54 * fVar54 + fVar58 * fVar58 <= uStack_508._4_4_);
        bVar22 = (byte)iVar42 & (byte)iVar23;
        bVar31 = (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar23 >> 8);
        bVar32 = (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar23 >> 0x10);
        bVar33 = (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar23 >> 0x18);
        iVar23 = CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar22)));
        bVar34 = (byte)iVar46 & (byte)iVar35;
        bVar36 = (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar35 >> 8);
        bVar37 = (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar35 >> 0x10);
        bVar38 = (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar35 >> 0x18);
        auVar26._0_8_ = CONCAT17(bVar38,CONCAT16(bVar37,CONCAT15(bVar36,CONCAT14(bVar34,iVar23))));
        auVar26[8] = (byte)iVar48 & (byte)iVar39;
        auVar26[9] = (byte)((uint)iVar48 >> 8) & (byte)((uint)iVar39 >> 8);
        auVar26[10] = (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar39 >> 0x10);
        auVar26[0xb] = (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar39 >> 0x18);
        auVar29[0xc] = (byte)iVar50 & (byte)iVar40;
        auVar29._0_12_ = auVar26;
        auVar29[0xd] = (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar40 >> 8);
        auVar29[0xe] = (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar40 >> 0x10);
        auVar29[0xf] = (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar40 >> 0x18);
        if (((iVar23 == 0 && (int)((ulong)auVar26._0_8_ >> 0x20) == 0) && auVar26._8_4_ == 0) &&
            auVar29._12_4_ == 0) break;
        local_570 = (byte)uVar12;
        bStack_56f = (byte)((ulong)uVar12 >> 8);
        bStack_56e = (byte)((ulong)uVar12 >> 0x10);
        bStack_56d = (byte)((ulong)uVar12 >> 0x18);
        bStack_56c = (byte)((ulong)uVar12 >> 0x20);
        bStack_56b = (byte)((ulong)uVar12 >> 0x28);
        bStack_56a = (byte)((ulong)uVar12 >> 0x30);
        bStack_569 = (byte)((ulong)uVar12 >> 0x38);
        bStack_568 = (byte)uVar13;
        bStack_567 = (byte)((ulong)uVar13 >> 8);
        bStack_566 = (byte)((ulong)uVar13 >> 0x10);
        bStack_565 = (byte)((ulong)uVar13 >> 0x18);
        bStack_564 = (byte)((ulong)uVar13 >> 0x20);
        bStack_563 = (byte)((ulong)uVar13 >> 0x28);
        bStack_562 = (byte)((ulong)uVar13 >> 0x30);
        bStack_561 = (byte)((ulong)uVar13 >> 0x38);
        iVar23 = CONCAT13(bVar33 & bStack_56d,
                          CONCAT12(bVar32 & bStack_56e,
                                   CONCAT11(bVar31 & bStack_56f,bVar22 & local_570)));
        auVar27._0_8_ =
             CONCAT17(bVar38 & bStack_569,
                      CONCAT16(bVar37 & bStack_56a,
                               CONCAT15(bVar36 & bStack_56b,CONCAT14(bVar34 & bStack_56c,iVar23))));
        auVar27[8] = auVar26[8] & bStack_568;
        auVar27[9] = auVar26[9] & bStack_567;
        auVar27[10] = auVar26[10] & bStack_566;
        auVar27[0xb] = auVar26[0xb] & bStack_565;
        auVar30[0xc] = auVar29[0xc] & bStack_564;
        auVar30._0_12_ = auVar27;
        auVar30[0xd] = auVar29[0xd] & bStack_563;
        auVar30[0xe] = auVar29[0xe] & bStack_562;
        auVar30[0xf] = auVar29[0xf] & bStack_561;
        uVar24 = iVar23 + (int)((ulong)auVar27._0_8_ >> 0x20) + auVar27._8_4_ + auVar30._12_4_;
        uVar3 = *(uint *)(&DAT_03aadfe0 + (ulong)uVar24 * 4);
        auVar4._12_4_ = (int)((ulong)*(undefined8 *)(pauVar1[6] + 8) >> 0x20);
        auVar4._0_12_ = *(undefined1 (*) [12])pauVar1[6];
        auVar44 = a64_TBL(ZEXT816(0),auVar4,
                          *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar24 * 0x10));
        if (pauVar1[7][0] == '\0') {
          *(long *)(puVar17 + -1) = auVar44._0_8_;
          auVar44 = NEON_ext(auVar44,auVar44,8,1);
          *(long *)(puVar17 + 1) = auVar44._0_8_;
          puVar17 = local_100 + (int)uVar3;
          if (local_500 == local_100 + (int)uVar3) {
            return;
          }
        }
        else {
          local_510 = CONCAT44((float)local_510,(float)local_510);
          if (uVar24 != 0) {
            uVar24 = 0;
LAB_02f65ae8:
            switch(uVar24) {
            default:
              cVar2 = *(char *)(param_4 + 0x11);
              uVar11 = auVar44._0_4_;
              break;
            case 1:
              cVar2 = *(char *)(param_4 + 0x11);
              uVar11 = auVar44._4_4_;
              goto joined_r0x02f65bc4;
            case 2:
              cVar2 = *(char *)(param_4 + 0x11);
              uVar11 = auVar44._8_4_;
joined_r0x02f65bc4:
              uVar18 = (ulong)uVar11;
              goto joined_r0x02f65bb4;
            case 3:
              cVar2 = *(char *)(param_4 + 0x11);
              uVar11 = auVar44._12_4_;
            }
            uVar18 = (ulong)uVar11;
joined_r0x02f65bb4:
            do {
              if (cVar2 == '\0') {
                lVar20 = param_4[1];
                lVar21 = lVar20 + uVar18 * 0xc0;
                if ((~*(uint *)(lVar21 + 0x50) & 0xffffff) != 0) {
                  lVar16 = param_4[2];
                  lVar19 = *(long *)(lVar16 + 0x38);
                  if ((lVar19 == 0) || (*(uint *)(lVar21 + 0x50) != *(uint *)(lVar19 + 0x50))) {
                    plVar14 = *(long **)(lVar16 + 8);
                    if (plVar14 != (long *)0x0) {
                      if (lVar19 != 0) {
                        uVar15 = (**(code **)(*plVar14 + 0x38))
                                           (plVar14,5,*(undefined8 *)(lVar19 + 0xb0),
                                            *(undefined8 *)(lVar20 + uVar18 * 0xc0 + 0xb0));
                        if ((uVar15 & 1) == 0) goto LAB_02f65ad4;
                        lVar16 = param_4[2];
                      }
                      uVar15 = (**(code **)(**(long **)(lVar16 + 8) + 0x30))
                                         (*(long **)(lVar16 + 8),5,lVar16 + 0x10,lVar21);
                      if ((uVar15 & 1) == 0) goto LAB_02f65ad4;
                      lVar16 = param_4[2];
                    }
                    lVar20 = lVar20 + uVar18 * 0xc0;
                    local_e8 = *(undefined8 *)(lVar20 + 0x78);
                    local_88[0] = *(undefined2 *)(lVar20 + 0x8a);
                    local_84 = *(undefined4 *)(lVar20 + 0x8c);
                    local_80 = *(undefined8 *)(lVar20 + 0x98);
                    local_d8 = 0xffffffff;
                    uStack_e0 = 0;
                    uStack_c4 = 0;
                    local_d4 = 0;
                    uStack_c8 = 0;
                    local_bc = 0;
                    local_a0 = 0;
                    uStack_98 = 0;
                    local_f0 = lVar21;
                    local_b0 = auVar28._0_8_;
                    uStack_a8 = auVar28._8_8_;
                    uStack_d0 = lVar21;
                    FUN_02ffa204(*param_4,lVar16,param_4 + 4,local_e8,local_88,&local_f0,
                                 param_4[0x10]);
                    uVar25 = NEON_fmax(*(undefined8 *)(param_4[0x10] + 0x10),0,4);
                    fVar41 = (float)((ulong)uVar25 >> 0x20);
                    local_510 = CONCAT44(fVar41 * fVar41,(float)uVar25 * (float)uVar25);
                    *(bool *)(param_4 + 0x11) = *(char *)(param_4[0x10] + 0x18) != '\0';
                  }
                }
              }
LAB_02f65ad4:
              uVar24 = uVar24 + 1;
              if (uVar3 == uVar24) break;
              if (uVar24 < 4) goto LAB_02f65ae8;
              uVar18 = 0;
              cVar2 = *(char *)(param_4 + 0x11);
            } while( true );
          }
          if (*(char *)(param_4 + 0x11) != '\0') {
            return;
          }
          uStack_508 = local_510;
          puVar17 = local_100;
          if (local_500 == local_100) {
            return;
          }
        }
      }
      puVar17 = local_100;
    } while (local_500 != local_100);
  }
  return;
}


