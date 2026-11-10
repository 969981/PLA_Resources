/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f65c2c; name: FUN_02f65c2c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f65c2c(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  byte bVar15;
  byte bVar20;
  byte bVar21;
  int iVar16;
  byte bVar22;
  byte bVar23;
  byte bVar25;
  byte bVar26;
  int iVar24;
  byte bVar27;
  int iVar28;
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  int iVar29;
  undefined1 auVar19 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  int iVar33;
  int iVar37;
  int iVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined4 local_450 [256];
  undefined4 *local_50;
  
  uVar7 = _UNK_03889708;
  uVar6 = _DAT_03889700;
  if (*(char *)(param_4 + 0x88) == '\0') {
    fVar3 = *(float *)(param_2 + 2);
    fVar4 = *(float *)((long)param_2 + 0x14);
    fVar5 = *(float *)(param_2 + 3);
    fVar10 = (float)*param_2;
    fVar12 = (float)((ulong)*param_2 >> 0x20);
    fVar13 = (float)param_2[1];
    local_468 = *param_3;
    local_450[0] = 1;
    puVar8 = (undefined4 *)((ulong)local_450 | 4);
    uVar14 = local_468;
    do {
      while( true ) {
        local_50 = puVar8 + -1;
        pfVar1 = (float *)((long)param_1 + (long)(int)puVar8[-1] * 0x80 + *param_1);
        fVar31 = (float)*(undefined8 *)(pfVar1 + 6);
        fVar32 = (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
        fVar11 = (float)*(undefined8 *)(pfVar1 + 4);
        fVar30 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
        auVar34._0_4_ = fVar10 - fVar11;
        auVar34._4_4_ = fVar10 - fVar30;
        auVar34._8_4_ = fVar10 - fVar31;
        auVar34._12_4_ = fVar10 - fVar32;
        auVar35 = NEON_smax(auVar34,ZEXT816(0),4);
        auVar40._0_4_ = fVar12 - pfVar1[0xc];
        auVar40._4_4_ = fVar12 - pfVar1[0xd];
        auVar40._8_4_ = fVar12 - pfVar1[0xe];
        auVar40._12_4_ = fVar12 - pfVar1[0xf];
        auVar41 = NEON_smax(auVar40,ZEXT816(0),4);
        auVar36._4_4_ = fVar3 - pfVar1[1];
        auVar36._0_4_ = fVar3 - *pfVar1;
        auVar36._8_4_ = fVar3 - pfVar1[2];
        auVar36._12_4_ = fVar3 - pfVar1[3];
        auVar36 = NEON_smin(auVar35,auVar36,4);
        auVar35._4_4_ = fVar4 - (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20);
        auVar35._0_4_ = fVar4 - (float)*(undefined8 *)(pfVar1 + 8);
        auVar35._8_4_ = fVar4 - (float)*(undefined8 *)(pfVar1 + 10);
        auVar35._12_4_ = fVar4 - (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20);
        auVar35 = NEON_smin(auVar41,auVar35,4);
        auVar42._0_4_ = fVar13 - pfVar1[0x14];
        auVar42._4_4_ = fVar13 - pfVar1[0x15];
        auVar42._8_4_ = fVar13 - pfVar1[0x16];
        auVar42._12_4_ = fVar13 - pfVar1[0x17];
        auVar43 = NEON_smax(auVar42,ZEXT816(0),4);
        auVar41._4_4_ = fVar5 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20);
        auVar41._0_4_ = fVar5 - (float)*(undefined8 *)(pfVar1 + 0x10);
        auVar41._8_4_ = fVar5 - (float)*(undefined8 *)(pfVar1 + 0x12);
        auVar41._12_4_ = fVar5 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20);
        auVar41 = NEON_smin(auVar43,auVar41,4);
        iVar16 = -(uint)(*pfVar1 <= fVar11);
        iVar24 = -(uint)(pfVar1[1] <= fVar30);
        iVar28 = -(uint)(pfVar1[2] <= fVar31);
        iVar29 = -(uint)(pfVar1[3] <= fVar32);
        fVar11 = (float)local_468;
        iVar33 = -(uint)(auVar36._0_4_ * auVar36._0_4_ + auVar35._0_4_ * auVar35._0_4_ +
                         auVar41._0_4_ * auVar41._0_4_ <= fVar11);
        iVar37 = -(uint)(auVar36._4_4_ * auVar36._4_4_ + auVar35._4_4_ * auVar35._4_4_ +
                         auVar41._4_4_ * auVar41._4_4_ <= (float)((ulong)local_468 >> 0x20));
        iVar38 = -(uint)(auVar36._8_4_ * auVar36._8_4_ + auVar35._8_4_ * auVar35._8_4_ +
                         auVar41._8_4_ * auVar41._8_4_ <= (float)uVar14);
        iVar39 = -(uint)(auVar36._12_4_ * auVar36._12_4_ + auVar35._12_4_ * auVar35._12_4_ +
                         auVar41._12_4_ * auVar41._12_4_ <= (float)((ulong)uVar14 >> 0x20));
        bVar15 = (byte)iVar33 & (byte)iVar16;
        bVar20 = (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar16 >> 8);
        bVar21 = (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar16 >> 0x10);
        bVar22 = (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar16 >> 0x18);
        iVar16 = CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(bVar20,bVar15)));
        bVar23 = (byte)iVar37 & (byte)iVar24;
        bVar25 = (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar24 >> 8);
        bVar26 = (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar24 >> 0x10);
        bVar27 = (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar24 >> 0x18);
        auVar17._0_8_ = CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar23,iVar16))));
        auVar17[8] = (byte)iVar38 & (byte)iVar28;
        auVar17[9] = (byte)((uint)iVar38 >> 8) & (byte)((uint)iVar28 >> 8);
        auVar17[10] = (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar28 >> 0x10);
        auVar17[0xb] = (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar28 >> 0x18);
        auVar43[0xc] = (byte)iVar39 & (byte)iVar29;
        auVar43._0_12_ = auVar17;
        auVar43[0xd] = (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar29 >> 8);
        auVar43[0xe] = (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar29 >> 0x10);
        auVar43[0xf] = (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar29 >> 0x18);
        if (((iVar16 == 0 && (int)((ulong)auVar17._0_8_ >> 0x20) == 0) && auVar17._8_4_ == 0) &&
            auVar43._12_4_ == 0) break;
        iVar16 = CONCAT13(bVar22 & (byte)((ulong)uVar6 >> 0x18),
                          CONCAT12(bVar21 & (byte)((ulong)uVar6 >> 0x10),
                                   CONCAT11(bVar20 & (byte)((ulong)uVar6 >> 8),bVar15 & (byte)uVar6)
                                  ));
        auVar18._0_8_ =
             CONCAT17(bVar27 & (byte)((ulong)uVar6 >> 0x38),
                      CONCAT16(bVar26 & (byte)((ulong)uVar6 >> 0x30),
                               CONCAT15(bVar25 & (byte)((ulong)uVar6 >> 0x28),
                                        CONCAT14(bVar23 & (byte)((ulong)uVar6 >> 0x20),iVar16))));
        auVar18[8] = auVar17[8] & (byte)uVar7;
        auVar18[9] = auVar17[9] & (byte)((ulong)uVar7 >> 8);
        auVar18[10] = auVar17[10] & (byte)((ulong)uVar7 >> 0x10);
        auVar18[0xb] = auVar17[0xb] & (byte)((ulong)uVar7 >> 0x18);
        auVar19[0xc] = auVar43[0xc] & (byte)((ulong)uVar7 >> 0x20);
        auVar19._0_12_ = auVar18;
        auVar19[0xd] = auVar43[0xd] & (byte)((ulong)uVar7 >> 0x28);
        auVar19[0xe] = auVar43[0xe] & (byte)((ulong)uVar7 >> 0x30);
        auVar19[0xf] = auVar43[0xf] & (byte)((ulong)uVar7 >> 0x38);
        uVar9 = (ulong)(uint)(iVar16 + (int)((ulong)auVar18._0_8_ >> 0x20) +
                             auVar18._8_4_ + auVar19._12_4_);
        iVar16 = *(int *)(&DAT_03aadfe0 + uVar9 * 4);
        auVar2._12_4_ = (int)((ulong)*(undefined8 *)(pfVar1 + 0x1a) >> 0x20);
        auVar2._0_12_ = *(undefined1 (*) [12])(pfVar1 + 0x18);
        auVar35 = a64_TBL(ZEXT816(0),auVar2,*(undefined1 (*) [16])(&DAT_03aae120 + uVar9 * 0x10));
        uStack_458 = auVar35._8_8_;
        local_460 = auVar35._0_8_;
        if (*(char *)(pfVar1 + 0x1c) == '\0') {
          *(undefined8 *)(puVar8 + -1) = local_460;
          auVar35 = NEON_ext(auVar35,auVar35,8,1);
          *(long *)(puVar8 + 1) = auVar35._0_8_;
          local_50 = local_50 + iVar16;
        }
        else {
          local_468 = CONCAT44(fVar11,fVar11);
          FUN_02f6b854(param_4,&local_460,(long)iVar16,&local_468);
          uVar14 = local_468;
          if (*(char *)(param_4 + 0x88) != '\0') {
            return;
          }
        }
        puVar8 = local_50;
        if (local_450 == local_50) {
          return;
        }
      }
      puVar8 = local_50;
    } while (local_450 != local_50);
  }
  return;
}


