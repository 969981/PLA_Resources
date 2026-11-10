/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7bc28; name: FUN_02f7bc28
 */


/* WARNING: Removing unreachable block (ram,0x02f7be08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f7bc28(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  float *pfVar1;
  long lVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  byte bVar20;
  byte bVar26;
  byte bVar27;
  int iVar21;
  uint uVar22;
  byte bVar28;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  int iVar30;
  byte bVar33;
  int iVar34;
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  int iVar35;
  undefined1 auVar25 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  int iVar39;
  int iVar43;
  int iVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  byte local_500;
  byte bStack_4ff;
  byte bStack_4fe;
  byte bStack_4fd;
  byte bStack_4fc;
  byte bStack_4fb;
  byte bStack_4fa;
  byte bStack_4f9;
  byte bStack_4f8;
  byte bStack_4f7;
  byte bStack_4f6;
  byte bStack_4f5;
  byte bStack_4f4;
  byte bStack_4f3;
  byte bStack_4f2;
  byte bStack_4f1;
  undefined8 local_488;
  undefined4 local_480 [256];
  undefined4 *local_80;
  
  uVar9 = _UNK_03889708;
  uVar8 = _DAT_03889700;
  if (((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) == 0) &&
     (*(char *)(*(long *)(param_4 + 0x88) + 0x18) == '\0')) {
    fVar5 = *(float *)(param_2 + 2);
    fVar6 = *(float *)((long)param_2 + 0x14);
    fVar7 = *(float *)(param_2 + 3);
    fVar15 = (float)*param_2;
    fVar17 = (float)((ulong)*param_2 >> 0x20);
    fVar18 = (float)param_2[1];
    local_488 = *param_3;
    local_480[0] = 1;
    puVar11 = (undefined4 *)((ulong)local_480 | 4);
    uVar19 = local_488;
    do {
      while( true ) {
        local_80 = puVar11 + -1;
        pfVar1 = (float *)((long)param_1 + (long)(int)puVar11[-1] * 0x80 + *param_1);
        auVar46._0_4_ = fVar17 - pfVar1[0xc];
        auVar46._4_4_ = fVar17 - pfVar1[0xd];
        auVar46._8_4_ = fVar17 - pfVar1[0xe];
        auVar46._12_4_ = fVar17 - pfVar1[0xf];
        fVar37 = (float)*(undefined8 *)(pfVar1 + 6);
        fVar38 = (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
        fVar16 = (float)*(undefined8 *)(pfVar1 + 4);
        fVar36 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
        auVar40._0_4_ = fVar15 - fVar16;
        auVar40._4_4_ = fVar15 - fVar36;
        auVar40._8_4_ = fVar15 - fVar37;
        auVar40._12_4_ = fVar15 - fVar38;
        auVar48._0_4_ = fVar18 - pfVar1[0x14];
        auVar48._4_4_ = fVar18 - pfVar1[0x15];
        auVar48._8_4_ = fVar18 - pfVar1[0x16];
        auVar48._12_4_ = fVar18 - pfVar1[0x17];
        iVar21 = -(uint)(*pfVar1 <= fVar16);
        iVar30 = -(uint)(pfVar1[1] <= fVar36);
        iVar34 = -(uint)(pfVar1[2] <= fVar37);
        iVar35 = -(uint)(pfVar1[3] <= fVar38);
        auVar41 = NEON_smax(auVar40,ZEXT816(0),4);
        auVar47 = NEON_smax(auVar46,ZEXT816(0),4);
        auVar42._4_4_ = fVar5 - pfVar1[1];
        auVar42._0_4_ = fVar5 - *pfVar1;
        auVar42._8_4_ = fVar5 - pfVar1[2];
        auVar42._12_4_ = fVar5 - pfVar1[3];
        auVar42 = NEON_smin(auVar41,auVar42,4);
        auVar41._4_4_ = fVar6 - (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20);
        auVar41._0_4_ = fVar6 - (float)*(undefined8 *)(pfVar1 + 8);
        auVar41._8_4_ = fVar6 - (float)*(undefined8 *)(pfVar1 + 10);
        auVar41._12_4_ = fVar6 - (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20);
        auVar41 = NEON_smin(auVar47,auVar41,4);
        auVar49 = NEON_smax(auVar48,ZEXT816(0),4);
        auVar47._4_4_ = fVar7 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20);
        auVar47._0_4_ = fVar7 - (float)*(undefined8 *)(pfVar1 + 0x10);
        auVar47._8_4_ = fVar7 - (float)*(undefined8 *)(pfVar1 + 0x12);
        auVar47._12_4_ = fVar7 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20);
        auVar47 = NEON_smin(auVar49,auVar47,4);
        fVar16 = (float)local_488;
        iVar39 = -(uint)(auVar42._0_4_ * auVar42._0_4_ + auVar41._0_4_ * auVar41._0_4_ +
                         auVar47._0_4_ * auVar47._0_4_ <= fVar16);
        iVar43 = -(uint)(auVar42._4_4_ * auVar42._4_4_ + auVar41._4_4_ * auVar41._4_4_ +
                         auVar47._4_4_ * auVar47._4_4_ <= (float)((ulong)local_488 >> 0x20));
        iVar44 = -(uint)(auVar42._8_4_ * auVar42._8_4_ + auVar41._8_4_ * auVar41._8_4_ +
                         auVar47._8_4_ * auVar47._8_4_ <= (float)uVar19);
        iVar45 = -(uint)(auVar42._12_4_ * auVar42._12_4_ + auVar41._12_4_ * auVar41._12_4_ +
                         auVar47._12_4_ * auVar47._12_4_ <= (float)((ulong)uVar19 >> 0x20));
        bVar20 = (byte)iVar39 & (byte)iVar21;
        bVar26 = (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar21 >> 8);
        bVar27 = (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar21 >> 0x10);
        bVar28 = (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar21 >> 0x18);
        iVar21 = CONCAT13(bVar28,CONCAT12(bVar27,CONCAT11(bVar26,bVar20)));
        bVar29 = (byte)iVar43 & (byte)iVar30;
        bVar31 = (byte)((uint)iVar43 >> 8) & (byte)((uint)iVar30 >> 8);
        bVar32 = (byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar30 >> 0x10);
        bVar33 = (byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar30 >> 0x18);
        auVar23._0_8_ = CONCAT17(bVar33,CONCAT16(bVar32,CONCAT15(bVar31,CONCAT14(bVar29,iVar21))));
        auVar23[8] = (byte)iVar44 & (byte)iVar34;
        auVar23[9] = (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar34 >> 8);
        auVar23[10] = (byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar34 >> 0x10);
        auVar23[0xb] = (byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar34 >> 0x18);
        auVar49[0xc] = (byte)iVar45 & (byte)iVar35;
        auVar49._0_12_ = auVar23;
        auVar49[0xd] = (byte)((uint)iVar45 >> 8) & (byte)((uint)iVar35 >> 8);
        auVar49[0xe] = (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar35 >> 0x10);
        auVar49[0xf] = (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar35 >> 0x18);
        if (((iVar21 == 0 && (int)((ulong)auVar23._0_8_ >> 0x20) == 0) && auVar23._8_4_ == 0) &&
            auVar49._12_4_ == 0) break;
        local_500 = (byte)uVar8;
        bStack_4ff = (byte)((ulong)uVar8 >> 8);
        bStack_4fe = (byte)((ulong)uVar8 >> 0x10);
        bStack_4fd = (byte)((ulong)uVar8 >> 0x18);
        bStack_4fc = (byte)((ulong)uVar8 >> 0x20);
        bStack_4fb = (byte)((ulong)uVar8 >> 0x28);
        bStack_4fa = (byte)((ulong)uVar8 >> 0x30);
        bStack_4f9 = (byte)((ulong)uVar8 >> 0x38);
        bStack_4f8 = (byte)uVar9;
        bStack_4f7 = (byte)((ulong)uVar9 >> 8);
        bStack_4f6 = (byte)((ulong)uVar9 >> 0x10);
        bStack_4f5 = (byte)((ulong)uVar9 >> 0x18);
        bStack_4f4 = (byte)((ulong)uVar9 >> 0x20);
        bStack_4f3 = (byte)((ulong)uVar9 >> 0x28);
        bStack_4f2 = (byte)((ulong)uVar9 >> 0x30);
        bStack_4f1 = (byte)((ulong)uVar9 >> 0x38);
        iVar21 = CONCAT13(bVar28 & bStack_4fd,
                          CONCAT12(bVar27 & bStack_4fe,
                                   CONCAT11(bVar26 & bStack_4ff,bVar20 & local_500)));
        auVar24._0_8_ =
             CONCAT17(bVar33 & bStack_4f9,
                      CONCAT16(bVar32 & bStack_4fa,
                               CONCAT15(bVar31 & bStack_4fb,CONCAT14(bVar29 & bStack_4fc,iVar21))));
        auVar24[8] = auVar23[8] & bStack_4f8;
        auVar24[9] = auVar23[9] & bStack_4f7;
        auVar24[10] = auVar23[10] & bStack_4f6;
        auVar24[0xb] = auVar23[0xb] & bStack_4f5;
        auVar25[0xc] = auVar49[0xc] & bStack_4f4;
        auVar25._0_12_ = auVar24;
        auVar25[0xd] = auVar49[0xd] & bStack_4f3;
        auVar25[0xe] = auVar49[0xe] & bStack_4f2;
        auVar25[0xf] = auVar49[0xf] & bStack_4f1;
        uVar22 = iVar21 + (int)((ulong)auVar24._0_8_ >> 0x20) + auVar24._8_4_ + auVar25._12_4_;
        uVar3 = *(uint *)(&DAT_03aadfe0 + (ulong)uVar22 * 4);
        auVar4._12_4_ = (int)((ulong)*(undefined8 *)(pfVar1 + 0x1a) >> 0x20);
        auVar4._0_12_ = *(undefined1 (*) [12])(pfVar1 + 0x18);
        auVar41 = a64_TBL(ZEXT816(0),auVar4,
                          *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar22 * 0x10));
        if (*(char *)(pfVar1 + 0x1c) == '\0') {
          *(long *)(puVar11 + -1) = auVar41._0_8_;
          auVar41 = NEON_ext(auVar41,auVar41,8,1);
          *(long *)(puVar11 + 1) = auVar41._0_8_;
          puVar11 = local_80 + (int)uVar3;
          if (local_480 == local_80 + (int)uVar3) {
            return;
          }
        }
        else {
          local_488 = CONCAT44(fVar16,fVar16);
          if (uVar22 != 0) {
            uVar22 = 0;
            do {
              switch(uVar22) {
              default:
                uVar14 = auVar41._0_4_;
                break;
              case 1:
                uVar14 = auVar41._4_4_;
                break;
              case 2:
                uVar14 = auVar41._8_4_;
                break;
              case 3:
                uVar14 = auVar41._12_4_;
              }
              while( true ) {
                plVar12 = (long *)(*(long *)(param_4 + 8) + 0x28);
                lVar13 = *plVar12;
                lVar2 = 0;
                if (lVar13 != 0) {
                  lVar2 = lVar13 + (long)plVar12;
                }
                uVar10 = FUN_02f89744(lVar2,uVar14 & 0xffff);
                if ((uVar10 & 1) != 0) {
                  FUN_02f7c40c(param_4,uVar14,&local_488);
                }
                uVar22 = uVar22 + 1;
                if (uVar3 == uVar22) goto LAB_02f7be84;
                if (uVar22 < 4) break;
                uVar14 = 0;
              }
            } while( true );
          }
LAB_02f7be84:
          if ((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) != 0) {
            return;
          }
          if (*(char *)(*(long *)(param_4 + 0x88) + 0x18) != '\0') {
            return;
          }
          puVar11 = local_80;
          uVar19 = local_488;
          if (local_480 == local_80) {
            return;
          }
        }
      }
      puVar11 = local_80;
    } while (local_480 != local_80);
  }
  return;
}


