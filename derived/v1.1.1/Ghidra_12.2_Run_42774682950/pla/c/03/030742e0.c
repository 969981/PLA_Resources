/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030742e0; name: FUN_030742e0
 */


int FUN_030742e0(long param_1,uint param_2,undefined1 (*param_3) [16],float *param_4,long param_5,
                undefined4 *param_6)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  float fVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  *param_6 = 1;
  fVar16 = (float)*(undefined8 *)param_4;
  fVar17 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  fVar18 = (float)*(undefined8 *)(param_4 + 2);
  if ((0.0001 <= ABS(fVar18) || (0.0001 <= ABS(fVar16) || 0.0001 <= ABS(fVar17))) &&
     (-1 < (int)param_2)) {
    iVar14 = 0;
    fVar6 = fVar18 * fVar18 + fVar16 * fVar16 + fVar17 * fVar17;
    fVar30 = fVar18 * fVar18 + fVar16 * fVar16 + fVar17 * fVar17;
    uVar23 = SUB41(fVar30,0);
    uVar24 = (undefined1)((uint)fVar30 >> 8);
    uVar25 = (undefined1)((uint)fVar30 >> 0x10);
    uVar26 = (undefined1)((uint)fVar30 >> 0x18);
    uVar40 = NEON_frsqrte(CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,fVar6)))),
                          4);
    fVar32 = (float)uVar40;
    fVar35 = (float)((ulong)uVar40 >> 0x20);
    uVar40 = NEON_frsqrts(CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,fVar6)))),
                          CONCAT44(fVar35 * fVar35,fVar32 * fVar32),4);
    fVar32 = fVar32 * (float)uVar40;
    fVar35 = fVar35 * (float)((ulong)uVar40 >> 0x20);
    fVar28 = (float)-(uint)(fVar6 <= 0.0);
    fVar30 = (float)-(uint)(fVar30 <= 0.0);
    uVar40 = NEON_frsqrts(CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,fVar6)))),
                          CONCAT44(fVar35 * fVar35,fVar32 * fVar32),4);
    fVar32 = (float)uVar40 * fVar32;
    fVar35 = (float)((ulong)uVar40 >> 0x20) * fVar35;
    bVar19 = SUB41(fVar32,0) & ~SUB41(fVar28,0);
    bVar20 = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)fVar28 >> 8);
    bVar21 = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)fVar28 >> 0x10);
    bVar22 = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)fVar28 >> 0x18);
    uVar29 = param_2 - 1;
    uVar15 = 0;
    fVar6 = fVar30;
    do {
      puVar2 = (uint *)(param_1 + (long)(int)uVar29 * 0x10);
      fVar32 = (float)*(undefined8 *)(puVar2 + 2);
      fVar27 = (float)((ulong)*(undefined8 *)(puVar2 + 2) >> 0x20);
      uVar11 = *puVar2;
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      uVar31 = *puVar2;
      uVar10 = puVar2[1];
      uVar29 = 0;
      if (param_2 != uVar15) {
        uVar29 = uVar15;
      }
      auVar8 = *param_3;
      puVar3 = (undefined8 *)(param_1 + (ulong)uVar29 * 0x10);
      uVar9 = puVar3[1];
      uVar40 = *puVar3;
      auVar42 = NEON_ext(auVar8,auVar8,8,1);
      fVar4 = (float)*(undefined8 *)puVar2;
      fVar33 = (float)uVar40 - fVar4;
      fVar5 = (float)((ulong)*(undefined8 *)puVar2 >> 0x20);
      fVar36 = (float)((ulong)uVar40 >> 0x20) - fVar5;
      fVar38 = (float)uVar9 - fVar32;
      fVar39 = (float)((ulong)uVar9 >> 0x20) - fVar27;
      auVar41._4_4_ = fVar36;
      auVar41._0_4_ = fVar33;
      auVar41._8_4_ = fVar38;
      auVar41._12_4_ = fVar39;
      auVar7._4_4_ = fVar36;
      auVar7._0_4_ = fVar33;
      auVar7._8_4_ = fVar38;
      auVar7._12_4_ = fVar39;
      auVar41 = NEON_ext(auVar41,auVar7,4,1);
      uVar40 = NEON_ext(auVar8._0_8_,auVar42._0_8_,4,1);
      fVar34 = fVar33 * (float)uVar40 - auVar8._0_4_ * auVar41._0_4_;
      fVar37 = fVar36 * (float)((ulong)uVar40 >> 0x20) - auVar8._4_4_ * auVar41._4_4_;
      fVar33 = fVar38 * auVar8._0_4_ - auVar8._8_4_ * fVar33;
      fVar36 = fVar39 * auVar8._4_4_ - auVar8._12_4_ * fVar36;
      auVar8._4_4_ = fVar37;
      auVar8._0_4_ = fVar34;
      auVar8._8_4_ = fVar33;
      auVar8._12_4_ = fVar36;
      auVar42._4_4_ = fVar37;
      auVar42._0_4_ = fVar34;
      auVar42._8_4_ = fVar33;
      auVar42._12_4_ = fVar36;
      auVar41 = NEON_ext(auVar8,auVar42,4,1);
      fVar33 = fVar16 * (float)CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(bVar20,bVar19))) *
               auVar41._0_4_;
      fVar37 = fVar17 * (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)fVar30 >> 0x18)
                                        ,CONCAT12((byte)((uint)fVar35 >> 0x10) &
                                                  ~(byte)((uint)fVar30 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar35 >> 8) &
                                                           ~(byte)((uint)fVar30 >> 8),
                                                           SUB41(fVar35,0) & ~SUB41(fVar30,0)))) *
               auVar41._4_4_;
      fVar34 = fVar18 * (float)CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(bVar20,bVar19))) * fVar34;
      fVar36 = fVar33 + fVar37 + fVar34;
      fVar34 = fVar33 + fVar37 + fVar34;
      if (uVar15 != 0) {
        fVar33 = *param_4;
        fVar37 = param_4[1];
        fVar38 = param_4[3];
        puVar1 = (uint *)(param_5 + (long)iVar14 * 0x10);
        iVar14 = iVar14 + 2;
        puVar1[2] = (uint)(param_4[2] + fVar32) ^
                    ((uint)(param_4[2] + fVar32) ^ puVar2[2]) & -(uint)(fVar28 <= 0.0);
        puVar1[3] = (uint)(fVar38 + fVar27) ^
                    ((uint)(fVar38 + fVar27) ^ (uint)fVar27) & -(uint)(fVar6 <= 0.0);
        *puVar1 = (uint)(fVar33 + fVar4) ^
                  ((uint)(fVar33 + fVar4) ^ uVar31) & -(uint)(fVar28 <= 0.0);
        puVar1[1] = (uint)(fVar37 + fVar5) ^
                    ((uint)(fVar37 + fVar5) ^ uVar10) & -(uint)(fVar6 <= 0.0);
        uVar29 = -(uint)(fVar36 <= 0.0);
        uVar31 = -(uint)(fVar34 <= 0.0);
        fVar6 = *param_4;
        fVar28 = param_4[1];
        fVar33 = param_4[3];
        puVar1[6] = (uint)(param_4[2] + fVar32) ^ ((uint)(param_4[2] + fVar32) ^ uVar13) & uVar29;
        puVar1[7] = (uint)(fVar33 + fVar27) ^ ((uint)(fVar33 + fVar27) ^ (uint)fVar27) & uVar31;
        puVar1[4] = (uint)(fVar6 + fVar4) ^ ((uint)(fVar6 + fVar4) ^ uVar11) & uVar29;
        puVar1[5] = (uint)(fVar28 + fVar5) ^ ((uint)(fVar28 + fVar5) ^ uVar12) & uVar31;
      }
      uVar31 = uVar15 + 1;
      uVar29 = uVar15;
      uVar15 = uVar31;
      fVar28 = fVar36;
      fVar6 = fVar34;
    } while (param_2 + 1 != uVar31);
    return iVar14;
  }
  return 0;
}


