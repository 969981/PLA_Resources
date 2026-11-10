/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c2f7c4; name: FUN_01c2f7c4
 */


void FUN_01c2f7c4(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 uVar12;
  byte bVar13;
  undefined1 uVar14;
  byte bVar15;
  undefined1 uVar16;
  byte bVar17;
  byte bVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined1 uVar21;
  byte bVar22;
  undefined1 uVar23;
  byte bVar24;
  byte bVar25;
  undefined1 uVar26;
  byte bVar27;
  undefined1 uVar28;
  byte bVar29;
  undefined1 uVar30;
  float fVar31;
  int iVar32;
  float fVar35;
  int iVar36;
  int iVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  if (*(int *)((long)param_2 + 0x14) != 0) {
    uVar4 = param_2[7];
    *(undefined8 *)(param_1 + 0x238) = param_2[5];
    *(undefined8 *)(param_1 + 0x248) = uVar4;
    uVar4 = param_2[3];
    *(undefined8 *)(param_1 + 0x218) = param_2[1];
    *(undefined8 *)(param_1 + 0x228) = uVar4;
    *(undefined8 *)(param_1 + 0x210) = *param_2;
    fVar41 = (float)*(undefined8 *)(param_1 + 0x210);
    auVar33._0_4_ = fVar41 * fVar41;
    fVar1 = (float)((ulong)*(undefined8 *)(param_1 + 0x210) >> 0x20);
    auVar33._4_4_ = fVar1 * fVar1;
    fVar2 = (float)*(undefined8 *)(param_1 + 0x218);
    auVar33._8_4_ = fVar2 * fVar2;
    fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x218) >> 0x20);
    auVar33._12_4_ = fVar3 * fVar3;
    auVar39 = NEON_ext(auVar33,auVar33,8,1);
    fVar31 = auVar39._0_4_ + auVar33._0_4_;
    fVar35 = auVar39._4_4_ + auVar33._4_4_;
    fVar5 = fVar31 + fVar35;
    fVar31 = fVar31 + fVar35;
    auVar34._8_8_ = CONCAT44(fVar31,fVar5);
    auVar34._0_8_ = CONCAT44(fVar31,fVar5);
    uVar4 = param_2[2];
    auVar39 = NEON_frsqrte(auVar34,4);
    auVar42._0_4_ = auVar39._0_4_ * fVar5;
    auVar42._4_4_ = auVar39._4_4_ * fVar31;
    auVar42._8_4_ = auVar39._8_4_ * fVar5;
    auVar42._12_4_ = auVar39._12_4_ * fVar31;
    *(undefined8 *)(param_1 + 0x230) = param_2[4];
    auVar43 = NEON_frsqrts(auVar39,auVar42,4);
    *(undefined8 *)(param_1 + 0x220) = uVar4;
    auVar40._0_4_ = auVar39._0_4_ * auVar43._0_4_;
    auVar40._4_4_ = auVar39._4_4_ * auVar43._4_4_;
    auVar40._8_4_ = auVar39._8_4_ * auVar43._8_4_;
    auVar40._12_4_ = auVar39._12_4_ * auVar43._12_4_;
    uVar4 = param_2[6];
    auVar44._0_4_ = fVar5 * auVar40._0_4_;
    auVar44._4_4_ = fVar31 * auVar40._4_4_;
    auVar44._8_4_ = fVar5 * auVar40._8_4_;
    auVar44._12_4_ = fVar31 * auVar40._12_4_;
    iVar32 = -(uint)(fVar5 == 0.0);
    iVar36 = -(uint)(fVar31 == 0.0);
    iVar37 = -(uint)(fVar5 == 0.0);
    iVar38 = -(uint)(fVar31 == 0.0);
    *(undefined8 *)(param_1 + 0x250) = param_2[8];
    auVar39 = NEON_frsqrts(auVar40,auVar44,4);
    *(undefined8 *)(param_1 + 0x240) = uVar4;
    *(undefined4 *)(param_1 + 0x280) = 0;
    fVar41 = fVar41 * auVar40._0_4_ * auVar39._0_4_;
    fVar1 = fVar1 * auVar40._4_4_ * auVar39._4_4_;
    fVar2 = fVar2 * auVar40._8_4_ * auVar39._8_4_;
    fVar3 = fVar3 * auVar40._12_4_ * auVar39._12_4_;
    bVar6 = SUB41(fVar41,0) & ~(byte)iVar32;
    bVar7 = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar32 >> 8);
    bVar8 = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
    bVar9 = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
    bVar10 = SUB41(fVar1,0) & ~(byte)iVar36;
    bVar11 = (byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar36 >> 8);
    bVar13 = (byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
    bVar15 = (byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
    bVar17 = SUB41(fVar2,0) & ~(byte)iVar37;
    bVar18 = (byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar37 >> 8);
    bVar20 = (byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
    bVar22 = (byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
    bVar24 = SUB41(fVar3,0) & ~(byte)iVar38;
    bVar25 = (byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar38 >> 8);
    bVar27 = (byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10);
    bVar29 = (byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18);
    fVar41 = *(float *)(param_1 + 0x220);
    auVar45._0_8_ =
         CONCAT44((float)CONCAT13(bVar15,CONCAT12(bVar13,CONCAT11(bVar11,bVar10))) * fVar41,
                  (float)CONCAT13(bVar9,CONCAT12(bVar8,CONCAT11(bVar7,bVar6))) * fVar41);
    auVar45._8_4_ = (float)CONCAT13(bVar22,CONCAT12(bVar20,CONCAT11(bVar18,bVar17))) * fVar41;
    auVar45._12_4_ = (float)CONCAT13(bVar29,CONCAT12(bVar27,CONCAT11(bVar25,bVar24))) * fVar41;
    fVar41 = -(float)CONCAT13(bVar15,CONCAT12(bVar13,CONCAT11(bVar11,bVar10)));
    fVar1 = -(float)CONCAT13(bVar29,CONCAT12(bVar27,CONCAT11(bVar25,bVar24)));
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(long *)(param_1 + 0x278) = auVar45._8_8_;
    *(undefined8 *)(param_1 + 0x270) = auVar45._0_8_;
    *(ulong *)(param_1 + 0x218) =
         CONCAT17((char)((uint)fVar1 >> 0x18),
                  CONCAT16((char)((uint)fVar1 >> 0x10),
                           CONCAT15((char)((uint)fVar1 >> 8),
                                    CONCAT14(SUB41(fVar1,0),
                                             -(float)CONCAT13(bVar22,CONCAT12(bVar20,CONCAT11(bVar18
                                                  ,bVar17)))))));
    *(ulong *)(param_1 + 0x210) =
         CONCAT17((char)((uint)fVar41 >> 0x18),
                  CONCAT16((char)((uint)fVar41 >> 0x10),
                           CONCAT15((char)((uint)fVar41 >> 8),
                                    CONCAT14(SUB41(fVar41,0),
                                             -(float)CONCAT13(bVar9,CONCAT12(bVar8,CONCAT11(bVar7,
                                                  bVar6)))))));
    *(undefined1 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(float *)(param_1 + 0x284) = 1.0 / ((float)*(uint *)(param_1 + 0x224) * 0.5);
    *(undefined8 *)(param_1 + 0x294) = 0;
    *(undefined8 *)(param_1 + 0x29c) = 0;
    fVar41 = (float)*(undefined8 *)(param_1 + 0x240);
    fVar41 = fVar41 * fVar41;
    fVar1 = (float)((ulong)*(undefined8 *)(param_1 + 0x240) >> 0x20);
    fVar1 = fVar1 * fVar1;
    uVar12 = (undefined1)((uint)fVar1 >> 8);
    uVar14 = (undefined1)((uint)fVar1 >> 0x10);
    uVar16 = (undefined1)((uint)fVar1 >> 0x18);
    fVar2 = (float)*(undefined8 *)(param_1 + 0x248);
    fVar2 = fVar2 * fVar2;
    uVar19 = (undefined1)((uint)fVar2 >> 8);
    uVar21 = (undefined1)((uint)fVar2 >> 0x10);
    uVar23 = (undefined1)((uint)fVar2 >> 0x18);
    fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x248) >> 0x20);
    fVar3 = fVar3 * fVar3;
    uVar26 = (undefined1)((uint)fVar3 >> 8);
    uVar28 = (undefined1)((uint)fVar3 >> 0x10);
    uVar30 = (undefined1)((uint)fVar3 >> 0x18);
    auVar39[4] = SUB41(fVar1,0);
    auVar39._0_4_ = fVar41;
    auVar39[5] = uVar12;
    auVar39[6] = uVar14;
    auVar39[7] = uVar16;
    auVar39[8] = SUB41(fVar2,0);
    auVar39[9] = uVar19;
    auVar39[10] = uVar21;
    auVar39[0xb] = uVar23;
    auVar39[0xc] = SUB41(fVar3,0);
    auVar39[0xd] = uVar26;
    auVar39[0xe] = uVar28;
    auVar39[0xf] = uVar30;
    auVar43[4] = SUB41(fVar1,0);
    auVar43._0_4_ = fVar41;
    auVar43[5] = uVar12;
    auVar43[6] = uVar14;
    auVar43[7] = uVar16;
    auVar43[8] = SUB41(fVar2,0);
    auVar43[9] = uVar19;
    auVar43[10] = uVar21;
    auVar43[0xb] = uVar23;
    auVar43[0xc] = SUB41(fVar3,0);
    auVar43[0xd] = uVar26;
    auVar43[0xe] = uVar28;
    auVar43[0xf] = uVar30;
    auVar39 = NEON_ext(auVar39,auVar43,8,1);
    *(undefined1 *)(param_1 + 0x204) = 1;
    if (1.1920929e-07 < auVar39._0_4_ + fVar41 + auVar39._4_4_ + fVar1) {
      local_50 = *(undefined8 *)(param_1 + 0x240);
      uStack_48 = *(undefined8 *)(param_1 + 0x248);
      local_40 = *(uint *)(param_1 + 0x224) >> 1;
      local_38 = *(undefined4 *)(param_1 + 0x230);
      local_34 = *(undefined4 *)(param_1 + 0x250);
      local_30 = *(undefined4 *)(param_1 + 0x254);
      uStack_3c = local_40;
      FUN_01c2f948(param_1,&local_50,0);
    }
    *(uint *)(param_1 + 0x200) = *(uint *)(param_1 + 0x200) & 0xfffffffb | 1;
  }
  return;
}


