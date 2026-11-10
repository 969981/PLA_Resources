/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314f6a8; name: FUN_0314f6a8
 */


void FUN_0314f6a8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined1 uVar21;
  byte bVar22;
  undefined1 uVar23;
  byte bVar24;
  undefined1 uVar25;
  byte bVar26;
  int iVar27;
  int iVar29;
  undefined1 auVar28 [16];
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  undefined1 auStack_60 [16];
  
  uVar5 = (**(code **)(**(long **)(param_1 + 0x28) + 0x80))
                    (*(long **)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  if ('\0' < *(char *)(*(long *)(param_1 + 0x38) + 0x30)) {
    lVar6 = 0;
    puVar7 = (undefined4 *)(param_2 + 0x20);
    lVar8 = 0xa0;
    lVar9 = 0x10;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x90) + lVar8);
      *(undefined4 *)(puVar1 + -8) = puVar7[5];
      uVar31 = *(undefined8 *)(puVar7 + -8);
      lVar2 = *(long *)(param_1 + 0x90) + lVar8;
      *(undefined8 *)(lVar2 + -0x98) = *(undefined8 *)(puVar7 + -6);
      *(undefined8 *)(lVar2 + -0xa0) = uVar31;
      uVar31 = *(undefined8 *)(puVar7 + -4);
      *(undefined8 *)(lVar2 + -0x88) = *(undefined8 *)(puVar7 + -2);
      *(undefined8 *)(lVar2 + -0x90) = uVar31;
      *(undefined4 *)(*(long *)(param_1 + 0x90) + lVar8 + -0x80) = *puVar7;
      *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar8 + -0x78) = *(undefined8 *)(puVar7 + 2);
      *(undefined4 *)(*(long *)(param_1 + 0x90) + lVar8 + -0x70) = puVar7[4];
      fVar12 = *(float *)(*(long *)(param_1 + 0x118) + lVar6 * 4) * 0.5;
      puVar3 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 0x18) + lVar9);
      uVar31 = *puVar3;
      fVar13 = (float)uVar31 * fVar12;
      fVar14 = (float)((ulong)uVar31 >> 0x20) * fVar12;
      fVar12 = (float)puVar3[1] * fVar12;
      fVar30 = fVar13 * fVar13;
      fVar32 = fVar14 * fVar14;
      uVar19 = (undefined1)((uint)fVar32 >> 8);
      uVar21 = (undefined1)((uint)fVar32 >> 0x10);
      uVar23 = (undefined1)((uint)fVar32 >> 0x18);
      auVar28[4] = SUB41(fVar32,0);
      auVar28._0_4_ = fVar30;
      auVar28[5] = uVar19;
      auVar28[6] = uVar21;
      auVar28[7] = uVar23;
      auVar28._8_4_ = fVar12 * fVar12;
      auVar28._12_4_ = 0x3f800000;
      auVar4[4] = SUB41(fVar32,0);
      auVar4._0_4_ = fVar30;
      auVar4[5] = uVar19;
      auVar4[6] = uVar21;
      auVar4[7] = uVar23;
      auVar4._8_4_ = fVar12 * fVar12;
      auVar4._12_4_ = 0x3f800000;
      auVar28 = NEON_ext(auVar28,auVar4,8,1);
      fVar11 = auVar28._0_4_ + auVar28._4_4_;
      fVar10 = fVar30 + fVar32 + fVar11;
      fVar11 = fVar30 + fVar32 + fVar11;
      uVar19 = SUB41(fVar11,0);
      uVar21 = (undefined1)((uint)fVar11 >> 8);
      uVar23 = (undefined1)((uint)fVar11 >> 0x10);
      uVar25 = (undefined1)((uint)fVar11 >> 0x18);
      uVar31 = NEON_frsqrte(CONCAT17(uVar25,CONCAT16(uVar23,CONCAT15(uVar21,CONCAT14(uVar19,fVar10))
                                                    )),4);
      fVar30 = (float)uVar31;
      fVar32 = (float)((ulong)uVar31 >> 0x20);
      uVar31 = NEON_frsqrts(CONCAT17(uVar25,CONCAT16(uVar23,CONCAT15(uVar21,CONCAT14(uVar19,fVar10))
                                                    )),CONCAT44(fVar32 * fVar32,fVar30 * fVar30),4);
      fVar30 = fVar30 * (float)uVar31;
      fVar32 = fVar32 * (float)((ulong)uVar31 >> 0x20);
      iVar27 = -(uint)(fVar10 <= 0.0);
      iVar29 = -(uint)(fVar11 <= 0.0);
      uVar31 = NEON_frsqrts(CONCAT17(uVar25,CONCAT16(uVar23,CONCAT15(uVar21,CONCAT14(uVar19,fVar10))
                                                    )),CONCAT44(fVar32 * fVar32,fVar30 * fVar30),4);
      fVar30 = (float)uVar31 * fVar30;
      fVar32 = (float)((ulong)uVar31 >> 0x20) * fVar32;
      bVar15 = SUB41(fVar30,0) & ~(byte)iVar27;
      bVar16 = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar27 >> 8);
      bVar17 = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
      bVar18 = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
      bVar20 = SUB41(fVar32,0) & ~(byte)iVar29;
      bVar22 = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar29 >> 8);
      bVar24 = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
      bVar26 = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
      fVar30 = (float)CONCAT13(bVar18,CONCAT12(bVar17,CONCAT11(bVar16,bVar15)));
      puVar1[1] = CONCAT44((float)(CONCAT17(bVar26,CONCAT16(bVar24,CONCAT15(bVar22,CONCAT14(bVar20,
                                                  fVar30)))) >> 0x20) * 1.0,fVar12 * fVar30);
      *puVar1 = CONCAT44(fVar14 * (float)CONCAT13(bVar26,CONCAT12(bVar24,CONCAT11(bVar22,bVar20))),
                         fVar13 * (float)CONCAT13(bVar18,CONCAT12(bVar17,CONCAT11(bVar16,bVar15))));
      uVar31 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60);
      puVar1[-3] = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68);
      puVar1[-4] = uVar31;
      FUN_032cc5bc(auStack_60,puVar1);
      FUN_032cc384(puVar1 + -2,uVar5,auStack_60);
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0xd0;
      lVar9 = lVar9 + 0x30;
      puVar7 = puVar7 + 0x10;
    } while (lVar6 < *(char *)(*(long *)(param_1 + 0x38) + 0x30));
  }
  return;
}


