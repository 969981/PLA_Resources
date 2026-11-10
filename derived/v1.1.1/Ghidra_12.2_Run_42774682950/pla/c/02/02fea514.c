/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fea514; name: FUN_02fea514
 */


/* WARNING: Removing unreachable block (ram,0x02fea72c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fea514(long *param_1,float *param_2,undefined8 *param_3,long param_4)

{
  float *pfVar1;
  char cVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  int *piVar19;
  ulong uVar20;
  long lVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  byte bVar25;
  byte bVar31;
  byte bVar32;
  int iVar26;
  uint uVar27;
  byte bVar33;
  byte bVar34;
  byte bVar36;
  byte bVar37;
  int iVar35;
  byte bVar38;
  int iVar39;
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  int iVar40;
  undefined1 auVar30 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  int iVar47;
  int iVar51;
  int iVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  byte local_630;
  byte bStack_62f;
  byte bStack_62e;
  byte bStack_62d;
  byte bStack_62c;
  byte bStack_62b;
  byte bStack_62a;
  byte bStack_629;
  byte bStack_628;
  byte bStack_627;
  byte bStack_626;
  byte bStack_625;
  byte bStack_624;
  byte bStack_623;
  byte bStack_622;
  byte bStack_621;
  undefined4 local_570 [256];
  undefined4 *local_170;
  undefined1 auStack_160 [64];
  undefined8 local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  uVar15 = DAT_0388a148;
  uVar14 = DAT_0388a140;
  uVar13 = _UNK_03889a88;
  uVar12 = _DAT_03889a80;
  uVar11 = _UNK_03889708;
  uVar10 = _DAT_03889700;
  uVar9 = _UNK_03888d18;
  uVar8 = _DAT_03888d10;
  if (*(char *)(*(long *)(param_4 + 0x138) + 0x18) == '\0') {
    fVar5 = *param_2;
    fVar6 = param_2[1];
    fVar7 = param_2[2];
    fVar44 = (float)*(undefined8 *)(param_2 + 6);
    fVar41 = (float)*(undefined8 *)(param_2 + 4);
    fVar42 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
    uVar23 = *param_3;
    local_570[0] = 1;
    NEON_fmov(0x3f800000,4);
    puVar16 = (undefined4 *)((ulong)local_570 | 4);
    uVar24 = uVar23;
    do {
      while( true ) {
        local_170 = puVar16 + -1;
        pfVar1 = (float *)((long)param_1 + (long)(int)puVar16[-1] * 0x80 + *param_1);
        auVar54._0_4_ = fVar6 - pfVar1[0xc];
        auVar54._4_4_ = fVar6 - pfVar1[0xd];
        auVar54._8_4_ = fVar6 - pfVar1[0xe];
        auVar54._12_4_ = fVar6 - pfVar1[0xf];
        fVar45 = (float)*(undefined8 *)(pfVar1 + 6);
        fVar46 = (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
        fVar22 = (float)*(undefined8 *)(pfVar1 + 4);
        fVar43 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
        auVar48._0_4_ = fVar5 - fVar22;
        auVar48._4_4_ = fVar5 - fVar43;
        auVar48._8_4_ = fVar5 - fVar45;
        auVar48._12_4_ = fVar5 - fVar46;
        auVar56._0_4_ = fVar7 - pfVar1[0x14];
        auVar56._4_4_ = fVar7 - pfVar1[0x15];
        auVar56._8_4_ = fVar7 - pfVar1[0x16];
        auVar56._12_4_ = fVar7 - pfVar1[0x17];
        iVar26 = -(uint)(*pfVar1 <= fVar22);
        iVar35 = -(uint)(pfVar1[1] <= fVar43);
        iVar39 = -(uint)(pfVar1[2] <= fVar45);
        iVar40 = -(uint)(pfVar1[3] <= fVar46);
        auVar49 = NEON_smax(auVar48,ZEXT816(0),4);
        auVar55 = NEON_smax(auVar54,ZEXT816(0),4);
        auVar50._4_4_ = fVar41 - pfVar1[1];
        auVar50._0_4_ = fVar41 - *pfVar1;
        auVar50._8_4_ = fVar41 - pfVar1[2];
        auVar50._12_4_ = fVar41 - pfVar1[3];
        auVar50 = NEON_smin(auVar49,auVar50,4);
        auVar49._4_4_ = fVar42 - (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20);
        auVar49._0_4_ = fVar42 - (float)*(undefined8 *)(pfVar1 + 8);
        auVar49._8_4_ = fVar42 - (float)*(undefined8 *)(pfVar1 + 10);
        auVar49._12_4_ = fVar42 - (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20);
        auVar49 = NEON_smin(auVar55,auVar49,4);
        auVar57 = NEON_smax(auVar56,ZEXT816(0),4);
        auVar55._4_4_ = fVar44 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20);
        auVar55._0_4_ = fVar44 - (float)*(undefined8 *)(pfVar1 + 0x10);
        auVar55._8_4_ = fVar44 - (float)*(undefined8 *)(pfVar1 + 0x12);
        auVar55._12_4_ = fVar44 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20);
        auVar55 = NEON_smin(auVar57,auVar55,4);
        fVar22 = (float)uVar23;
        iVar47 = -(uint)(auVar50._0_4_ * auVar50._0_4_ + auVar49._0_4_ * auVar49._0_4_ +
                         auVar55._0_4_ * auVar55._0_4_ <= fVar22);
        iVar51 = -(uint)(auVar50._4_4_ * auVar50._4_4_ + auVar49._4_4_ * auVar49._4_4_ +
                         auVar55._4_4_ * auVar55._4_4_ <= (float)((ulong)uVar23 >> 0x20));
        iVar52 = -(uint)(auVar50._8_4_ * auVar50._8_4_ + auVar49._8_4_ * auVar49._8_4_ +
                         auVar55._8_4_ * auVar55._8_4_ <= (float)uVar24);
        iVar53 = -(uint)(auVar50._12_4_ * auVar50._12_4_ + auVar49._12_4_ * auVar49._12_4_ +
                         auVar55._12_4_ * auVar55._12_4_ <= (float)((ulong)uVar24 >> 0x20));
        bVar25 = (byte)iVar47 & (byte)iVar26;
        bVar31 = (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar26 >> 8);
        bVar32 = (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar26 >> 0x10);
        bVar33 = (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar26 >> 0x18);
        iVar26 = CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar25)));
        bVar34 = (byte)iVar51 & (byte)iVar35;
        bVar36 = (byte)((uint)iVar51 >> 8) & (byte)((uint)iVar35 >> 8);
        bVar37 = (byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar35 >> 0x10);
        bVar38 = (byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar35 >> 0x18);
        auVar28._0_8_ = CONCAT17(bVar38,CONCAT16(bVar37,CONCAT15(bVar36,CONCAT14(bVar34,iVar26))));
        auVar28[8] = (byte)iVar52 & (byte)iVar39;
        auVar28[9] = (byte)((uint)iVar52 >> 8) & (byte)((uint)iVar39 >> 8);
        auVar28[10] = (byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar39 >> 0x10);
        auVar28[0xb] = (byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar39 >> 0x18);
        auVar57[0xc] = (byte)iVar53 & (byte)iVar40;
        auVar57._0_12_ = auVar28;
        auVar57[0xd] = (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar40 >> 8);
        auVar57[0xe] = (byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar40 >> 0x10);
        auVar57[0xf] = (byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar40 >> 0x18);
        if (((iVar26 == 0 && (int)((ulong)auVar28._0_8_ >> 0x20) == 0) && auVar28._8_4_ == 0) &&
            auVar57._12_4_ == 0) break;
        local_630 = (byte)uVar10;
        bStack_62f = (byte)((ulong)uVar10 >> 8);
        bStack_62e = (byte)((ulong)uVar10 >> 0x10);
        bStack_62d = (byte)((ulong)uVar10 >> 0x18);
        bStack_62c = (byte)((ulong)uVar10 >> 0x20);
        bStack_62b = (byte)((ulong)uVar10 >> 0x28);
        bStack_62a = (byte)((ulong)uVar10 >> 0x30);
        bStack_629 = (byte)((ulong)uVar10 >> 0x38);
        bStack_628 = (byte)uVar11;
        bStack_627 = (byte)((ulong)uVar11 >> 8);
        bStack_626 = (byte)((ulong)uVar11 >> 0x10);
        bStack_625 = (byte)((ulong)uVar11 >> 0x18);
        bStack_624 = (byte)((ulong)uVar11 >> 0x20);
        bStack_623 = (byte)((ulong)uVar11 >> 0x28);
        bStack_622 = (byte)((ulong)uVar11 >> 0x30);
        bStack_621 = (byte)((ulong)uVar11 >> 0x38);
        iVar26 = CONCAT13(bVar33 & bStack_62d,
                          CONCAT12(bVar32 & bStack_62e,
                                   CONCAT11(bVar31 & bStack_62f,bVar25 & local_630)));
        auVar29._0_8_ =
             CONCAT17(bVar38 & bStack_629,
                      CONCAT16(bVar37 & bStack_62a,
                               CONCAT15(bVar36 & bStack_62b,CONCAT14(bVar34 & bStack_62c,iVar26))));
        auVar29[8] = auVar28[8] & bStack_628;
        auVar29[9] = auVar28[9] & bStack_627;
        auVar29[10] = auVar28[10] & bStack_626;
        auVar29[0xb] = auVar28[0xb] & bStack_625;
        auVar30[0xc] = auVar57[0xc] & bStack_624;
        auVar30._0_12_ = auVar29;
        auVar30[0xd] = auVar57[0xd] & bStack_623;
        auVar30[0xe] = auVar57[0xe] & bStack_622;
        auVar30[0xf] = auVar57[0xf] & bStack_621;
        uVar27 = iVar26 + (int)((ulong)auVar29._0_8_ >> 0x20) + auVar29._8_4_ + auVar30._12_4_;
        uVar3 = *(uint *)(&DAT_03aadfe0 + (ulong)uVar27 * 4);
        auVar4._12_4_ = (int)((ulong)*(undefined8 *)(pfVar1 + 0x1a) >> 0x20);
        auVar4._0_12_ = *(undefined1 (*) [12])(pfVar1 + 0x18);
        auVar49 = a64_TBL(ZEXT816(0),auVar4,
                          *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar27 * 0x10));
        if (*(char *)(pfVar1 + 0x1c) == '\0') {
          *(long *)(puVar16 + -1) = auVar49._0_8_;
          auVar49 = NEON_ext(auVar49,auVar49,8,1);
          *(long *)(puVar16 + 1) = auVar49._0_8_;
          puVar16 = local_170 + (int)uVar3;
          if (local_570 == local_170 + (int)uVar3) {
            return;
          }
        }
        else {
          if (uVar27 != 0) {
            uVar27 = 0;
            do {
              switch(uVar27) {
              default:
                uVar20 = (ulong)auVar49._0_4_;
                break;
              case 1:
                uVar20 = (ulong)auVar49._4_4_;
                break;
              case 2:
                uVar20 = (ulong)auVar49._8_4_;
                break;
              case 3:
                uVar20 = (ulong)auVar49._12_4_;
              }
              while( true ) {
                lVar17 = *(long *)(param_4 + 0xb8);
                lVar21 = *(long *)(lVar17 + 0x50);
                puVar18 = (undefined8 *)
                          (*(long *)(lVar21 + 0x110) +
                          (-(uVar20 >> 0x1f) & 0xffffffe000000000 | uVar20 << 5));
                uStack_88 = puVar18[1];
                local_90 = *puVar18;
                iVar26 = (int)uVar20;
                if (*(char *)(lVar21 + 0x15dc) == '\0') {
                  uStack_b8 = uVar13;
                  local_c0 = uVar12;
                  uStack_98 = uVar9;
                  local_a0 = uVar8;
                  uStack_a8 = uVar15;
                  local_b0 = uVar14;
                }
                else {
                  FUN_032c9fc0(&local_c0,*(long *)(lVar21 + 0x120) + (long)iVar26 * 0x10);
                  lVar17 = *(long *)(param_4 + 0xb8);
                }
                puVar18 = *(undefined8 **)(param_4 + 0xd8);
                local_120 = *puVar18;
                local_118 = puVar18[1];
                local_f8 = 0;
                local_f0 = *(undefined1 *)(puVar18 + 6);
                local_ec = *(undefined4 *)((long)puVar18 + 0x34);
                uStack_d8 = puVar18[9];
                local_e0 = puVar18[8];
                uStack_c8 = puVar18[0xb];
                local_d0 = puVar18[10];
                local_e8 = *(undefined4 *)(puVar18 + 7);
                local_108 = CONCAT44(0x20,iVar26);
                local_110 = lVar17;
                local_100 = &local_c0;
                FUN_032ca498(auStack_160,&local_c0,param_4 + 0xf0);
                lVar17 = *(long *)(param_4 + 200);
                if (*(char *)(lVar17 + 0x20) == '\x02') {
                  if (*(int *)(lVar21 + 0x30) == 0) {
                    piVar19 = (int *)(lVar21 + 0x20);
                  }
                  else {
                    piVar19 = (int *)(*(long *)(lVar21 + 0x28) +
                                     (long)*(int *)(lVar21 + 0x34) * (long)iVar26);
                  }
                  *(int *)(*(long *)(param_4 + 0xb0) + 0x20) =
                       (int)*(undefined8 *)
                             (*(long *)(*(long *)(*(long *)(lVar21 + 0x18) + 0x18) +
                                       (long)*piVar19 * 8) + 0x10);
                  uVar23 = *(undefined8 *)(param_4 + 0xb0);
                  lVar17 = *(long *)(param_4 + 200);
                }
                else {
                  if (*(int *)(lVar21 + 0x30) == 0) {
                    piVar19 = (int *)(lVar21 + 0x20);
                  }
                  else {
                    piVar19 = (int *)(*(long *)(lVar21 + 0x28) +
                                     (long)*(int *)(lVar21 + 0x34) * (long)iVar26);
                  }
                  uVar23 = *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(lVar21 + 0x18) + 0x18) +
                                      (long)*piVar19 * 8) + 0xa0);
                }
                FUN_02f912e0(**(undefined8 **)(param_4 + 0xc0),*(undefined8 **)(param_4 + 0xc0),
                             lVar17,*(undefined8 *)(param_4 + 0xd0),uVar23,
                             *(undefined8 *)(param_4 + 0xe0),&local_120,auStack_160,
                             *(undefined1 *)(param_4 + 0x130),*(undefined8 *)(param_4 + 0x138));
                uVar27 = uVar27 + 1;
                if (uVar3 == uVar27) {
                  uVar23 = NEON_fmax(*(undefined8 *)(*(long *)(param_4 + 0x138) + 0x10),0,4);
                  fVar22 = (float)((ulong)uVar23 >> 0x20);
                  uVar23 = CONCAT44(fVar22 * fVar22,(float)uVar23 * (float)uVar23);
                  cVar2 = *(char *)(*(long *)(param_4 + 0x138) + 0x18);
                  goto joined_r0x02fea924;
                }
                if (uVar27 < 4) break;
                uVar20 = 0;
              }
            } while( true );
          }
          uVar23 = CONCAT44(fVar22,fVar22);
          cVar2 = *(char *)(*(long *)(param_4 + 0x138) + 0x18);
joined_r0x02fea924:
          if (cVar2 != '\0') {
            return;
          }
          puVar16 = local_170;
          uVar24 = uVar23;
          if (local_570 == local_170) {
            return;
          }
        }
      }
      puVar16 = local_170;
    } while (local_570 != local_170);
  }
  return;
}


