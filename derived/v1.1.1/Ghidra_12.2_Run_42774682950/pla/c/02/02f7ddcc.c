/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7ddcc; name: FUN_02f7ddcc
 */


/* WARNING: Removing unreachable block (ram,0x02f7dfac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f7ddcc(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  float *pfVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  byte bVar16;
  byte bVar22;
  byte bVar23;
  int iVar17;
  uint uVar18;
  byte bVar24;
  byte bVar25;
  byte bVar27;
  byte bVar28;
  int iVar26;
  byte bVar29;
  int iVar30;
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  int iVar31;
  undefined1 auVar21 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  int iVar35;
  int iVar39;
  int iVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
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
    fVar11 = (float)*param_2;
    fVar13 = (float)((ulong)*param_2 >> 0x20);
    fVar14 = (float)param_2[1];
    local_488 = *param_3;
    local_480[0] = 1;
    puVar10 = (undefined4 *)((ulong)local_480 | 4);
    uVar15 = local_488;
    do {
      while( true ) {
        local_80 = puVar10 + -1;
        pfVar1 = (float *)((long)param_1 + (long)(int)puVar10[-1] * 0x80 + *param_1);
        auVar42._0_4_ = fVar13 - pfVar1[0xc];
        auVar42._4_4_ = fVar13 - pfVar1[0xd];
        auVar42._8_4_ = fVar13 - pfVar1[0xe];
        auVar42._12_4_ = fVar13 - pfVar1[0xf];
        fVar33 = (float)*(undefined8 *)(pfVar1 + 6);
        fVar34 = (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
        fVar12 = (float)*(undefined8 *)(pfVar1 + 4);
        fVar32 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
        auVar36._0_4_ = fVar11 - fVar12;
        auVar36._4_4_ = fVar11 - fVar32;
        auVar36._8_4_ = fVar11 - fVar33;
        auVar36._12_4_ = fVar11 - fVar34;
        auVar44._0_4_ = fVar14 - pfVar1[0x14];
        auVar44._4_4_ = fVar14 - pfVar1[0x15];
        auVar44._8_4_ = fVar14 - pfVar1[0x16];
        auVar44._12_4_ = fVar14 - pfVar1[0x17];
        iVar17 = -(uint)(*pfVar1 <= fVar12);
        iVar26 = -(uint)(pfVar1[1] <= fVar32);
        iVar30 = -(uint)(pfVar1[2] <= fVar33);
        iVar31 = -(uint)(pfVar1[3] <= fVar34);
        auVar37 = NEON_smax(auVar36,ZEXT816(0),4);
        auVar43 = NEON_smax(auVar42,ZEXT816(0),4);
        auVar38._4_4_ = fVar4 - pfVar1[1];
        auVar38._0_4_ = fVar4 - *pfVar1;
        auVar38._8_4_ = fVar4 - pfVar1[2];
        auVar38._12_4_ = fVar4 - pfVar1[3];
        auVar38 = NEON_smin(auVar37,auVar38,4);
        auVar37._4_4_ = fVar5 - (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20);
        auVar37._0_4_ = fVar5 - (float)*(undefined8 *)(pfVar1 + 8);
        auVar37._8_4_ = fVar5 - (float)*(undefined8 *)(pfVar1 + 10);
        auVar37._12_4_ = fVar5 - (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20);
        auVar37 = NEON_smin(auVar43,auVar37,4);
        auVar45 = NEON_smax(auVar44,ZEXT816(0),4);
        auVar43._4_4_ = fVar6 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20);
        auVar43._0_4_ = fVar6 - (float)*(undefined8 *)(pfVar1 + 0x10);
        auVar43._8_4_ = fVar6 - (float)*(undefined8 *)(pfVar1 + 0x12);
        auVar43._12_4_ = fVar6 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20);
        auVar43 = NEON_smin(auVar45,auVar43,4);
        fVar12 = (float)local_488;
        iVar35 = -(uint)(auVar38._0_4_ * auVar38._0_4_ + auVar37._0_4_ * auVar37._0_4_ +
                         auVar43._0_4_ * auVar43._0_4_ <= fVar12);
        iVar39 = -(uint)(auVar38._4_4_ * auVar38._4_4_ + auVar37._4_4_ * auVar37._4_4_ +
                         auVar43._4_4_ * auVar43._4_4_ <= (float)((ulong)local_488 >> 0x20));
        iVar40 = -(uint)(auVar38._8_4_ * auVar38._8_4_ + auVar37._8_4_ * auVar37._8_4_ +
                         auVar43._8_4_ * auVar43._8_4_ <= (float)uVar15);
        iVar41 = -(uint)(auVar38._12_4_ * auVar38._12_4_ + auVar37._12_4_ * auVar37._12_4_ +
                         auVar43._12_4_ * auVar43._12_4_ <= (float)((ulong)uVar15 >> 0x20));
        bVar16 = (byte)iVar35 & (byte)iVar17;
        bVar22 = (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar17 >> 8);
        bVar23 = (byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar17 >> 0x10);
        bVar24 = (byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar17 >> 0x18);
        iVar17 = CONCAT13(bVar24,CONCAT12(bVar23,CONCAT11(bVar22,bVar16)));
        bVar25 = (byte)iVar39 & (byte)iVar26;
        bVar27 = (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar26 >> 8);
        bVar28 = (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar26 >> 0x10);
        bVar29 = (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar26 >> 0x18);
        auVar19._0_8_ = CONCAT17(bVar29,CONCAT16(bVar28,CONCAT15(bVar27,CONCAT14(bVar25,iVar17))));
        auVar19[8] = (byte)iVar40 & (byte)iVar30;
        auVar19[9] = (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar30 >> 8);
        auVar19[10] = (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar30 >> 0x10);
        auVar19[0xb] = (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar30 >> 0x18);
        auVar45[0xc] = (byte)iVar41 & (byte)iVar31;
        auVar45._0_12_ = auVar19;
        auVar45[0xd] = (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar31 >> 8);
        auVar45[0xe] = (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar31 >> 0x10);
        auVar45[0xf] = (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar31 >> 0x18);
        if (((iVar17 == 0 && (int)((ulong)auVar19._0_8_ >> 0x20) == 0) && auVar19._8_4_ == 0) &&
            auVar45._12_4_ == 0) break;
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
        iVar17 = CONCAT13(bVar24 & bStack_4fd,
                          CONCAT12(bVar23 & bStack_4fe,
                                   CONCAT11(bVar22 & bStack_4ff,bVar16 & local_500)));
        auVar20._0_8_ =
             CONCAT17(bVar29 & bStack_4f9,
                      CONCAT16(bVar28 & bStack_4fa,
                               CONCAT15(bVar27 & bStack_4fb,CONCAT14(bVar25 & bStack_4fc,iVar17))));
        auVar20[8] = auVar19[8] & bStack_4f8;
        auVar20[9] = auVar19[9] & bStack_4f7;
        auVar20[10] = auVar19[10] & bStack_4f6;
        auVar20[0xb] = auVar19[0xb] & bStack_4f5;
        auVar21[0xc] = auVar45[0xc] & bStack_4f4;
        auVar21._0_12_ = auVar20;
        auVar21[0xd] = auVar45[0xd] & bStack_4f3;
        auVar21[0xe] = auVar45[0xe] & bStack_4f2;
        auVar21[0xf] = auVar45[0xf] & bStack_4f1;
        uVar18 = iVar17 + (int)((ulong)auVar20._0_8_ >> 0x20) + auVar20._8_4_ + auVar21._12_4_;
        uVar2 = *(uint *)(&DAT_03aadfe0 + (ulong)uVar18 * 4);
        auVar3._12_4_ = (int)((ulong)*(undefined8 *)(pfVar1 + 0x1a) >> 0x20);
        auVar3._0_12_ = *(undefined1 (*) [12])(pfVar1 + 0x18);
        auVar37 = a64_TBL(ZEXT816(0),auVar3,
                          *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar18 * 0x10));
        if (*(char *)(pfVar1 + 0x1c) == '\0') {
          *(long *)(puVar10 + -1) = auVar37._0_8_;
          auVar37 = NEON_ext(auVar37,auVar37,8,1);
          *(long *)(puVar10 + 1) = auVar37._0_8_;
          local_80 = local_80 + (int)uVar2;
        }
        else {
          local_488 = CONCAT44(fVar12,fVar12);
          if (uVar18 != 0) {
            uVar18 = 0;
            do {
              switch(uVar18) {
              default:
                uVar9 = auVar37._0_4_;
                break;
              case 1:
                uVar9 = auVar37._4_4_;
                break;
              case 2:
                uVar9 = auVar37._8_4_;
                break;
              case 3:
                uVar9 = auVar37._12_4_;
              }
              while( true ) {
                FUN_02f7e564(param_4,uVar9,&local_488);
                uVar18 = uVar18 + 1;
                if (uVar2 == uVar18) goto LAB_02f7e000;
                if (uVar18 < 4) break;
                uVar9 = 0;
              }
            } while( true );
          }
LAB_02f7e000:
          if ((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) != 0) {
            return;
          }
          uVar15 = local_488;
          if (*(char *)(*(long *)(param_4 + 0x88) + 0x18) != '\0') {
            return;
          }
        }
        puVar10 = local_80;
        if (local_480 == local_80) {
          return;
        }
      }
      puVar10 = local_80;
    } while (local_480 != local_80);
  }
  return;
}


