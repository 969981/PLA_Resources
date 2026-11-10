/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7ccec; name: FUN_02f7ccec
 */


/* WARNING: Removing unreachable block (ram,0x02f7cecc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f7ccec(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  float *pfVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  byte bVar17;
  byte bVar23;
  byte bVar24;
  int iVar18;
  uint uVar19;
  byte bVar25;
  byte bVar26;
  byte bVar28;
  byte bVar29;
  int iVar27;
  byte bVar30;
  int iVar31;
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  int iVar32;
  undefined1 auVar22 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  int iVar40;
  int iVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
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
  
  uVar8 = _UNK_03889708;
  uVar7 = _DAT_03889700;
  if (((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) == 0) &&
     (*(char *)(*(long *)(param_4 + 0x88) + 0x18) == '\0')) {
    fVar4 = *(float *)(param_2 + 2);
    fVar5 = *(float *)((long)param_2 + 0x14);
    fVar6 = *(float *)(param_2 + 3);
    fVar12 = (float)*param_2;
    fVar14 = (float)((ulong)*param_2 >> 0x20);
    fVar15 = (float)param_2[1];
    local_488 = *param_3;
    local_480[0] = 1;
    puVar10 = (undefined4 *)((ulong)local_480 | 4);
    uVar16 = local_488;
    do {
      while( true ) {
        local_80 = puVar10 + -1;
        pfVar1 = (float *)((long)param_1 + (long)(int)puVar10[-1] * 0x80 + *param_1);
        auVar43._0_4_ = fVar14 - pfVar1[0xc];
        auVar43._4_4_ = fVar14 - pfVar1[0xd];
        auVar43._8_4_ = fVar14 - pfVar1[0xe];
        auVar43._12_4_ = fVar14 - pfVar1[0xf];
        fVar34 = (float)*(undefined8 *)(pfVar1 + 6);
        fVar35 = (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
        fVar13 = (float)*(undefined8 *)(pfVar1 + 4);
        fVar33 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
        auVar37._0_4_ = fVar12 - fVar13;
        auVar37._4_4_ = fVar12 - fVar33;
        auVar37._8_4_ = fVar12 - fVar34;
        auVar37._12_4_ = fVar12 - fVar35;
        auVar45._0_4_ = fVar15 - pfVar1[0x14];
        auVar45._4_4_ = fVar15 - pfVar1[0x15];
        auVar45._8_4_ = fVar15 - pfVar1[0x16];
        auVar45._12_4_ = fVar15 - pfVar1[0x17];
        iVar18 = -(uint)(*pfVar1 <= fVar13);
        iVar27 = -(uint)(pfVar1[1] <= fVar33);
        iVar31 = -(uint)(pfVar1[2] <= fVar34);
        iVar32 = -(uint)(pfVar1[3] <= fVar35);
        auVar38 = NEON_smax(auVar37,ZEXT816(0),4);
        auVar44 = NEON_smax(auVar43,ZEXT816(0),4);
        auVar39._4_4_ = fVar4 - pfVar1[1];
        auVar39._0_4_ = fVar4 - *pfVar1;
        auVar39._8_4_ = fVar4 - pfVar1[2];
        auVar39._12_4_ = fVar4 - pfVar1[3];
        auVar39 = NEON_smin(auVar38,auVar39,4);
        auVar38._4_4_ = fVar5 - (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20);
        auVar38._0_4_ = fVar5 - (float)*(undefined8 *)(pfVar1 + 8);
        auVar38._8_4_ = fVar5 - (float)*(undefined8 *)(pfVar1 + 10);
        auVar38._12_4_ = fVar5 - (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20);
        auVar38 = NEON_smin(auVar44,auVar38,4);
        auVar46 = NEON_smax(auVar45,ZEXT816(0),4);
        auVar44._4_4_ = fVar6 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20);
        auVar44._0_4_ = fVar6 - (float)*(undefined8 *)(pfVar1 + 0x10);
        auVar44._8_4_ = fVar6 - (float)*(undefined8 *)(pfVar1 + 0x12);
        auVar44._12_4_ = fVar6 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20);
        auVar44 = NEON_smin(auVar46,auVar44,4);
        fVar13 = (float)local_488;
        iVar36 = -(uint)(auVar39._0_4_ * auVar39._0_4_ + auVar38._0_4_ * auVar38._0_4_ +
                         auVar44._0_4_ * auVar44._0_4_ <= fVar13);
        iVar40 = -(uint)(auVar39._4_4_ * auVar39._4_4_ + auVar38._4_4_ * auVar38._4_4_ +
                         auVar44._4_4_ * auVar44._4_4_ <= (float)((ulong)local_488 >> 0x20));
        iVar41 = -(uint)(auVar39._8_4_ * auVar39._8_4_ + auVar38._8_4_ * auVar38._8_4_ +
                         auVar44._8_4_ * auVar44._8_4_ <= (float)uVar16);
        iVar42 = -(uint)(auVar39._12_4_ * auVar39._12_4_ + auVar38._12_4_ * auVar38._12_4_ +
                         auVar44._12_4_ * auVar44._12_4_ <= (float)((ulong)uVar16 >> 0x20));
        bVar17 = (byte)iVar36 & (byte)iVar18;
        bVar23 = (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar18 >> 8);
        bVar24 = (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar18 >> 0x10);
        bVar25 = (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar18 >> 0x18);
        iVar18 = CONCAT13(bVar25,CONCAT12(bVar24,CONCAT11(bVar23,bVar17)));
        bVar26 = (byte)iVar40 & (byte)iVar27;
        bVar28 = (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar27 >> 8);
        bVar29 = (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar27 >> 0x10);
        bVar30 = (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar27 >> 0x18);
        auVar20._0_8_ = CONCAT17(bVar30,CONCAT16(bVar29,CONCAT15(bVar28,CONCAT14(bVar26,iVar18))));
        auVar20[8] = (byte)iVar41 & (byte)iVar31;
        auVar20[9] = (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar31 >> 8);
        auVar20[10] = (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar31 >> 0x10);
        auVar20[0xb] = (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar31 >> 0x18);
        auVar46[0xc] = (byte)iVar42 & (byte)iVar32;
        auVar46._0_12_ = auVar20;
        auVar46[0xd] = (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar32 >> 8);
        auVar46[0xe] = (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar32 >> 0x10);
        auVar46[0xf] = (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar32 >> 0x18);
        if (((iVar18 == 0 && (int)((ulong)auVar20._0_8_ >> 0x20) == 0) && auVar20._8_4_ == 0) &&
            auVar46._12_4_ == 0) break;
        local_500 = (byte)uVar7;
        bStack_4ff = (byte)((ulong)uVar7 >> 8);
        bStack_4fe = (byte)((ulong)uVar7 >> 0x10);
        bStack_4fd = (byte)((ulong)uVar7 >> 0x18);
        bStack_4fc = (byte)((ulong)uVar7 >> 0x20);
        bStack_4fb = (byte)((ulong)uVar7 >> 0x28);
        bStack_4fa = (byte)((ulong)uVar7 >> 0x30);
        bStack_4f9 = (byte)((ulong)uVar7 >> 0x38);
        bStack_4f8 = (byte)uVar8;
        bStack_4f7 = (byte)((ulong)uVar8 >> 8);
        bStack_4f6 = (byte)((ulong)uVar8 >> 0x10);
        bStack_4f5 = (byte)((ulong)uVar8 >> 0x18);
        bStack_4f4 = (byte)((ulong)uVar8 >> 0x20);
        bStack_4f3 = (byte)((ulong)uVar8 >> 0x28);
        bStack_4f2 = (byte)((ulong)uVar8 >> 0x30);
        bStack_4f1 = (byte)((ulong)uVar8 >> 0x38);
        iVar18 = CONCAT13(bVar25 & bStack_4fd,
                          CONCAT12(bVar24 & bStack_4fe,
                                   CONCAT11(bVar23 & bStack_4ff,bVar17 & local_500)));
        auVar21._0_8_ =
             CONCAT17(bVar30 & bStack_4f9,
                      CONCAT16(bVar29 & bStack_4fa,
                               CONCAT15(bVar28 & bStack_4fb,CONCAT14(bVar26 & bStack_4fc,iVar18))));
        auVar21[8] = auVar20[8] & bStack_4f8;
        auVar21[9] = auVar20[9] & bStack_4f7;
        auVar21[10] = auVar20[10] & bStack_4f6;
        auVar21[0xb] = auVar20[0xb] & bStack_4f5;
        auVar22[0xc] = auVar46[0xc] & bStack_4f4;
        auVar22._0_12_ = auVar21;
        auVar22[0xd] = auVar46[0xd] & bStack_4f3;
        auVar22[0xe] = auVar46[0xe] & bStack_4f2;
        auVar22[0xf] = auVar46[0xf] & bStack_4f1;
        uVar19 = iVar18 + (int)((ulong)auVar21._0_8_ >> 0x20) + auVar21._8_4_ + auVar22._12_4_;
        uVar2 = *(uint *)(&DAT_03aadfe0 + (ulong)uVar19 * 4);
        auVar3._12_4_ = (int)((ulong)*(undefined8 *)(pfVar1 + 0x1a) >> 0x20);
        auVar3._0_12_ = *(undefined1 (*) [12])(pfVar1 + 0x18);
        auVar38 = a64_TBL(ZEXT816(0),auVar3,
                          *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar19 * 0x10));
        if (*(char *)(pfVar1 + 0x1c) == '\0') {
          *(long *)(puVar10 + -1) = auVar38._0_8_;
          auVar38 = NEON_ext(auVar38,auVar38,8,1);
          *(long *)(puVar10 + 1) = auVar38._0_8_;
          puVar10 = local_80 + (int)uVar2;
          if (local_480 == local_80 + (int)uVar2) {
            return;
          }
        }
        else {
          local_488 = CONCAT44(fVar13,fVar13);
          if (uVar19 != 0) {
            uVar19 = 0;
            do {
              switch(uVar19) {
              default:
                uVar9 = auVar38._0_4_;
                break;
              case 1:
                uVar9 = auVar38._4_4_;
                break;
              case 2:
                uVar9 = auVar38._8_4_;
                break;
              case 3:
                uVar9 = auVar38._12_4_;
              }
              while( true ) {
                plVar11 = (long *)(*(long *)(param_4 + 8) + 0x38);
                if ((*(uint *)((long)plVar11 + (long)((int)uVar9 >> 5) * 4 + *plVar11) &
                    1 << (ulong)(uVar9 & 0x1f)) != 0) {
                  FUN_02f7d4d4(param_4,uVar9,&local_488);
                }
                uVar19 = uVar19 + 1;
                if (uVar2 == uVar19) goto LAB_02f7cf44;
                if (uVar19 < 4) break;
                uVar9 = 0;
              }
            } while( true );
          }
LAB_02f7cf44:
          if ((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) != 0) {
            return;
          }
          if (*(char *)(*(long *)(param_4 + 0x88) + 0x18) != '\0') {
            return;
          }
          puVar10 = local_80;
          uVar16 = local_488;
          if (local_480 == local_80) {
            return;
          }
        }
      }
      puVar10 = local_80;
    } while (local_480 != local_80);
  }
  return;
}


