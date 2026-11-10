/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027baf8; name: FUN_0027baf8
 */


void FUN_0027baf8(float param_1,float param_2,undefined8 param_3,long param_4,int *param_5,
                 long param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  float fVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined1 uVar18;
  byte bVar19;
  undefined1 uVar20;
  byte bVar21;
  undefined1 uVar22;
  byte bVar23;
  undefined1 uVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined1 uVar28;
  byte bVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_90 [2];
  
  iVar5 = *(int *)(param_4 + 0x70);
  if (iVar5 < 3) {
    *(undefined4 *)(param_4 + 0x78) = 0;
  }
  else {
    iVar7 = (iVar5 + -1) * (int)(float)param_5[4];
    uVar1 = iVar7 + iVar5;
    fVar45 = 1.0 / (float)((int)(float)param_5[4] + 1);
    if ((int)uVar1 < 1) {
      *(undefined4 *)(param_4 + 0x78) = 0;
      iVar5 = *param_5;
    }
    else {
      uVar10 = 0;
      lVar9 = *(long *)(*(long *)(param_4 + 0x58) + 0x30);
      iVar11 = 0;
      puVar12 = (undefined8 *)(param_6 + 0x50);
      do {
        fVar46 = (float)(int)uVar10;
        fVar13 = fVar45 * fVar46;
        iVar4 = (int)fVar13;
        if (iVar11 < iVar4) {
          lVar9 = *(long *)(lVar9 + 0x30);
          iVar11 = iVar4;
        }
        FUN_0027bd68(SUB41(fVar13 - (float)iVar4,0),local_90,&local_a0,lVar9,iVar4,iVar5);
        puVar12[-10] = local_90[0];
        *(int *)(puVar12 + -9) = (int)local_90[1];
        *puVar12 = local_90[0];
        *(int *)(puVar12 + 1) = (int)local_90[1];
        fVar13 = *(float *)(lVar9 + 0xc);
        *(float *)((long)puVar12 + -0x44) = fVar13;
        fVar35 = *(float *)(lVar9 + 0xc);
        *(float *)((long)puVar12 + -0x44) = fVar13 * param_2;
        fVar13 = (1.0 / (param_1 + -1.0 + (float)iVar7)) * fVar46;
        *(float *)((long)puVar12 + 0xc) = -(fVar35 * param_2);
        *(undefined4 *)(puVar12 + -8) = local_a0;
        *(undefined4 *)((long)puVar12 + -0x3c) = uStack_9c;
        *(undefined4 *)(puVar12 + -7) = uStack_98;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(puVar12 + 2) = local_a0;
        *(undefined4 *)((long)puVar12 + 0x14) = uStack_9c;
        *(undefined4 *)(puVar12 + 3) = uStack_98;
        *(float *)((long)puVar12 + -0x34) = fVar13;
        *(float *)((long)puVar12 + 0x1c) = fVar13;
        *(float *)((long)puVar12 + -0x24) = fVar46;
        *(float *)((long)puVar12 + 0x2c) = fVar46;
        puVar12 = puVar12 + 0x14;
      } while (uVar1 != uVar10);
      *(uint *)(param_4 + 0x78) = uVar1 * 2;
      iVar5 = *param_5;
    }
    if ((iVar5 != 0) && (0 < (int)uVar1)) {
      uVar10 = 0;
      iVar5 = 0;
      puVar6 = (undefined4 *)(param_6 + 0x78);
      lVar9 = *(long *)(*(long *)(param_4 + 0x58) + 0x30);
      do {
        fVar13 = fVar45 * (float)(int)uVar10;
        iVar7 = (int)fVar13;
        if (iVar5 < iVar7) {
          lVar9 = *(long *)(lVar9 + 0x30);
          iVar5 = iVar7;
        }
        fVar13 = fVar13 - (float)iVar7;
        lVar8 = *(long *)(lVar9 + 0x30);
        fVar38 = (float)*(undefined8 *)(lVar9 + 0x20);
        fVar39 = (float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20);
        fVar40 = (float)*(undefined8 *)(lVar9 + 0x28);
        fVar41 = (float)((ulong)*(undefined8 *)(lVar9 + 0x28) >> 0x20);
        fVar38 = fVar38 + (*(float *)(lVar8 + 0x20) - fVar38) * fVar13;
        fVar39 = fVar39 + (*(float *)(lVar8 + 0x24) - fVar39) * fVar13;
        fVar40 = fVar40 + (*(float *)(lVar8 + 0x28) - fVar40) * fVar13;
        fVar41 = fVar41 + (*(float *)(lVar8 + 0x2c) - fVar41) * fVar13;
        fVar13 = fVar38 * fVar38;
        fVar46 = fVar39 * fVar39;
        uVar18 = (undefined1)((uint)fVar46 >> 8);
        uVar20 = (undefined1)((uint)fVar46 >> 0x10);
        uVar22 = (undefined1)((uint)fVar46 >> 0x18);
        fVar35 = fVar40 * fVar40;
        uVar24 = (undefined1)((uint)fVar35 >> 8);
        uVar28 = (undefined1)((uint)fVar35 >> 0x10);
        uVar30 = (undefined1)((uint)fVar35 >> 0x18);
        fVar41 = fVar41 * fVar41;
        uVar32 = (undefined1)((uint)fVar41 >> 8);
        uVar33 = (undefined1)((uint)fVar41 >> 0x10);
        uVar34 = (undefined1)((uint)fVar41 >> 0x18);
        auVar36[4] = SUB41(fVar46,0);
        auVar36._0_4_ = fVar13;
        auVar36[5] = uVar18;
        auVar36[6] = uVar20;
        auVar36[7] = uVar22;
        auVar36[8] = SUB41(fVar35,0);
        auVar36[9] = uVar24;
        auVar36[10] = uVar28;
        auVar36[0xb] = uVar30;
        auVar36[0xc] = SUB41(fVar41,0);
        auVar36[0xd] = uVar32;
        auVar36[0xe] = uVar33;
        auVar36[0xf] = uVar34;
        auVar43[4] = SUB41(fVar46,0);
        auVar43._0_4_ = fVar13;
        auVar43[5] = uVar18;
        auVar43[6] = uVar20;
        auVar43[7] = uVar22;
        auVar43[8] = SUB41(fVar35,0);
        auVar43[9] = uVar24;
        auVar43[10] = uVar28;
        auVar43[0xb] = uVar30;
        auVar43[0xc] = SUB41(fVar41,0);
        auVar43[0xd] = uVar32;
        auVar43[0xe] = uVar33;
        auVar43[0xf] = uVar34;
        auVar36 = NEON_ext(auVar36,auVar43,8,1);
        fVar13 = auVar36._0_4_ + fVar13;
        fVar46 = auVar36._4_4_ + fVar46;
        fVar35 = fVar13 + fVar46;
        fVar13 = fVar13 + fVar46;
        uVar18 = SUB41(fVar13,0);
        uVar20 = (undefined1)((uint)fVar13 >> 8);
        uVar22 = (undefined1)((uint)fVar13 >> 0x10);
        uVar24 = (undefined1)((uint)fVar13 >> 0x18);
        uVar10 = uVar10 + 1;
        auVar2[4] = uVar18;
        auVar2._0_4_ = fVar35;
        auVar2[5] = uVar20;
        auVar2[6] = uVar22;
        auVar2[7] = uVar24;
        auVar2[8] = SUB41(fVar35,0);
        auVar2[9] = (char)((uint)fVar35 >> 8);
        auVar2[10] = (char)((uint)fVar35 >> 0x10);
        auVar2[0xb] = (char)((uint)fVar35 >> 0x18);
        auVar2[0xc] = uVar18;
        auVar2[0xd] = uVar20;
        auVar2[0xe] = uVar22;
        auVar2[0xf] = uVar24;
        auVar36 = NEON_frsqrte(auVar2,4);
        auVar42._0_4_ = auVar36._0_4_ * fVar35;
        auVar42._4_4_ = auVar36._4_4_ * fVar13;
        auVar42._8_4_ = auVar36._8_4_ * fVar35;
        uVar3 = (undefined2)(CONCAT15(uVar20,CONCAT14(uVar18,fVar35)) >> 0x20);
        auVar42._12_4_ = auVar36._12_4_ * (float)CONCAT13(uVar24,CONCAT12(uVar22,uVar3));
        auVar43 = NEON_frsqrts(auVar36,auVar42,4);
        auVar37._0_4_ = auVar36._0_4_ * auVar43._0_4_;
        auVar37._4_4_ = auVar36._4_4_ * auVar43._4_4_;
        auVar37._8_4_ = auVar36._8_4_ * auVar43._8_4_;
        auVar37._12_4_ = auVar36._12_4_ * auVar43._12_4_;
        auVar44._0_4_ = fVar35 * auVar37._0_4_;
        auVar44._4_4_ = fVar13 * auVar37._4_4_;
        auVar44._8_4_ = fVar35 * auVar37._8_4_;
        auVar44._12_4_ = (float)CONCAT13(uVar24,CONCAT12(uVar22,uVar3)) * auVar37._12_4_;
        iVar7 = -(uint)(fVar35 == 0.0);
        iVar11 = -(uint)(fVar13 == 0.0);
        iVar4 = -(uint)(fVar35 == 0.0);
        auVar36 = NEON_frsqrts(auVar37,auVar44,4);
        fVar38 = fVar38 * auVar37._0_4_ * auVar36._0_4_;
        fVar39 = fVar39 * auVar37._4_4_ * auVar36._4_4_;
        fVar40 = fVar40 * auVar37._8_4_ * auVar36._8_4_;
        bVar14 = SUB41(fVar38,0) & ~(byte)iVar7;
        bVar15 = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar7 >> 8);
        bVar16 = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
        bVar17 = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
        bVar19 = SUB41(fVar39,0) & ~(byte)iVar11;
        bVar21 = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar11 >> 8);
        bVar23 = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
        bVar25 = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
        bVar26 = SUB41(fVar40,0) & ~(byte)iVar4;
        bVar27 = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar4 >> 8);
        bVar29 = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10);
        bVar31 = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18);
        *(ulong *)(puVar6 + -0x16) =
             CONCAT17(bVar25,CONCAT16(bVar23,CONCAT15(bVar21,CONCAT14(bVar19,CONCAT13(bVar17,
                                                  CONCAT12(bVar16,CONCAT11(bVar15,bVar14)))))));
        puVar6[-0x14] = CONCAT13(bVar31,CONCAT12(bVar29,CONCAT11(bVar27,bVar26)));
        *(ulong *)(puVar6 + -2) =
             CONCAT17(bVar25,CONCAT16(bVar23,CONCAT15(bVar21,CONCAT14(bVar19,CONCAT13(bVar17,
                                                  CONCAT12(bVar16,CONCAT11(bVar15,bVar14)))))));
        *puVar6 = CONCAT13(bVar31,CONCAT12(bVar29,CONCAT11(bVar27,bVar26)));
        puVar6 = puVar6 + 0x28;
      } while (uVar1 != uVar10);
    }
  }
  return;
}


