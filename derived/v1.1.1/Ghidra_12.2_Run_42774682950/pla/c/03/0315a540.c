/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315a540; name: FUN_0315a540
 */


uint FUN_0315a540(long *param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [12];
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  float fVar29;
  int iVar32;
  undefined1 auVar26 [16];
  int iVar30;
  float fVar33;
  int iVar35;
  undefined1 auVar27 [16];
  float fVar31;
  float fVar34;
  undefined1 auVar28 [16];
  float fVar36;
  float fVar40;
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  uVar4 = *(uint *)(param_4 + 0x20);
  lVar8 = tpidr_el0;
  if (*(long *)(lVar8 + 0x38d490) == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar11;
    lVar11 = *(long *)(lVar11 + 0x10);
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar8 + 0x38d490) + 0x10);
  }
  if (lVar11 != 0) {
    puVar1 = *(undefined8 **)(lVar11 + 8);
    uVar7 = (long)puVar1 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar7 <= *(ulong *)(lVar11 + 0x10)) &&
       (*(ulong *)(lVar11 + 8) = uVar7, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "LtcoherentBrc";
      puVar1[2] = "StgetMesh";
      uVar6 = nn::os::GetSystemTick();
      puVar1[1] = uVar6;
    }
  }
  if ((uVar4 != 0xffffffff) &&
     (lVar10 = *(long *)(*(long *)(param_2 + 0x38) + (ulong)(uVar4 >> 0x16) * 0xf0), lVar10 != 0)) {
    lVar9 = *(long *)(lVar10 + 0x20);
    fVar33 = (float)((ulong)uVar4 & 0x3fffff);
    if ((((int)fVar33 < *(int *)(lVar9 + 0xd8) + *(int *)(lVar9 + 0x20)) &&
        ((*(int *)(lVar9 + 0x108) == 0 ||
         ((*(byte *)(*(long *)(lVar9 + 0x100) + ((ulong)uVar4 & 0x3fffff)) & 1) == 0)))) &&
       ((plVar5 = *(long **)(param_3 + 0x10), plVar5 == (long *)0x0 ||
        (local_90 = fVar33,
        iVar3 = (**(code **)(*plVar5 + 0x28))
                          (plVar5,lVar10,&local_90,*(undefined4 *)(param_3 + 0x18),
                           *(undefined8 *)(param_3 + 0x20)), iVar3 != 0)))) {
      if (*(long *)(lVar8 + 0x38d490) == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar8 + 0x38d490) = lVar9;
        lVar9 = *(long *)(lVar9 + 0x10);
      }
      else {
        lVar9 = *(long *)(*(long *)(lVar8 + 0x38d490) + 0x10);
      }
      if (lVar9 != 0) {
        puVar1 = *(undefined8 **)(lVar9 + 8);
        uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
        if ((uVar7 <= *(ulong *)(lVar9 + 0x10)) &&
           (*(ulong *)(lVar9 + 8) = uVar7, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = "Stprev";
          uVar6 = nn::os::GetSystemTick();
          puVar1[1] = uVar6;
        }
      }
      fVar33 = (float)*(undefined8 *)(param_3 + 0x30);
      fVar31 = (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
      fVar34 = (float)*(undefined8 *)(param_3 + 0x38);
      fVar36 = (float)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20);
      fVar49 = (fVar33 + fVar33) - *(float *)(param_3 + 0x40);
      fVar50 = (fVar31 + fVar31) - *(float *)(param_3 + 0x44);
      fVar51 = (fVar34 + fVar34) - *(float *)(param_3 + 0x48);
      fVar52 = (fVar36 + fVar36) - *(float *)(param_3 + 0x4c);
      local_58 = 0;
      fVar33 = *(float *)(param_3 + 0x40) - fVar49;
      fVar31 = *(float *)(param_3 + 0x44) - fVar50;
      fVar34 = *(float *)(param_3 + 0x48) - fVar51;
      auVar26 = ZEXT816(0x3f800000);
      auVar37 = *(undefined1 (*) [16])(lVar10 + 0x60);
      pauVar2 = (undefined1 (*) [12])(lVar10 + 0x70);
      uVar45 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x78) >> 0x20);
      fVar43 = (float)*(undefined8 *)*pauVar2;
      fVar44 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
      auVar46 = NEON_ext(auVar37,auVar37,8,1);
      auVar47._12_4_ = uVar45;
      auVar47._0_12_ = *pauVar2;
      auVar48._12_4_ = uVar45;
      auVar48._0_12_ = *pauVar2;
      auVar47 = NEON_ext(auVar47,auVar48,8,1);
      auVar42 = *(undefined1 (*) [16])(lVar10 + 0x80);
      fVar36 = fVar49 - *(float *)(lVar10 + 0x90);
      fVar40 = fVar50 - *(float *)(lVar10 + 0x94);
      fVar41 = fVar51 - *(float *)(lVar10 + 0x98);
      auVar48 = NEON_ext(auVar42,auVar42,8,1);
      fVar29 = auVar42._4_4_;
      iVar3 = -(uint)(fVar33 == 0.0);
      iVar30 = -(uint)(fVar31 == 0.0);
      iVar32 = -(uint)(fVar34 == 0.0);
      iVar35 = -(uint)(auVar26._0_4_ == 0.0);
      bVar24 = auVar26[2] & ~(byte)((uint)iVar35 >> 0x10);
      bVar25 = auVar26[3] & ~(byte)((uint)iVar35 >> 0x18);
      fVar33 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18),
                               CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10),
                                        CONCAT11((byte)((uint)fVar33 >> 8) &
                                                 ~(byte)((uint)iVar3 >> 8),
                                                 SUB41(fVar33,0) & ~(byte)iVar3)));
      local_90 = auVar46._0_4_ * fVar41 + auVar37._0_4_ * fVar36 + auVar37._4_4_ * fVar40;
      fStack_8c = auVar47._0_4_ * fVar41 + fVar43 * fVar36 + fVar44 * fVar40;
      fStack_88 = auVar48._0_4_ * fVar41 + auVar42._0_4_ * fVar36 + fVar29 * fVar40;
      fStack_84 = auVar48._4_4_ * fVar41 + fVar29 * fVar36 + auVar48._4_4_ * fVar40;
      fVar31 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                               CONCAT12((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar31 >> 8) &
                                                  ~(byte)((uint)iVar30 >> 8),
                                                  SUB41(fVar31,0) & ~(byte)iVar30)));
      fVar34 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                               CONCAT12((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar34 >> 8) &
                                                  ~(byte)((uint)iVar32 >> 8),
                                                  SUB41(fVar34,0) & ~(byte)iVar32)));
      fVar36 = auVar46._0_4_ * fVar34 + auVar37._0_4_ * fVar33 + auVar37._4_4_ * fVar31;
      fVar40 = auVar47._0_4_ * fVar34 + fVar43 * fVar33 + fVar44 * fVar31;
      fVar33 = auVar48._0_4_ * fVar34 + auVar42._0_4_ * fVar33 + fVar29 * fVar31;
      iVar3 = -(uint)(fVar36 == 0.0);
      iVar30 = -(uint)(fVar40 == 0.0);
      iVar32 = -(uint)(fVar33 == 0.0);
      iVar35 = -(uint)((float)((uint)CONCAT11(bVar25,bVar24) << 0x10) == 0.0);
      bVar12 = SUB41(fVar36,0) & ~(byte)iVar3;
      bVar13 = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar3 >> 8);
      bVar14 = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10);
      bVar15 = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18);
      bVar16 = SUB41(fVar40,0) & ~(byte)iVar30;
      bVar17 = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar30 >> 8);
      bVar18 = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
      bVar19 = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
      bVar20 = SUB41(fVar33,0) & ~(byte)iVar32;
      bVar21 = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar32 >> 8);
      bVar22 = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
      bVar23 = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
      bVar24 = bVar24 & ~(byte)((uint)iVar35 >> 0x10);
      bVar25 = bVar25 & ~(byte)((uint)iVar35 >> 0x18);
      auVar37[1] = bVar13;
      auVar37[0] = bVar12;
      auVar37[2] = bVar14;
      auVar37[3] = bVar15;
      auVar37[4] = bVar16;
      auVar37[5] = bVar17;
      auVar37[6] = bVar18;
      auVar37[7] = bVar19;
      auVar37[8] = bVar20;
      auVar37[9] = bVar21;
      auVar37[10] = bVar22;
      auVar37[0xb] = bVar23;
      auVar37._12_2_ = 0;
      auVar37[0xe] = bVar24;
      auVar37[0xf] = bVar25;
      auVar37 = NEON_frecpe(auVar37,4);
      auVar42[1] = bVar13;
      auVar42[0] = bVar12;
      auVar42[2] = bVar14;
      auVar42[3] = bVar15;
      auVar42[4] = bVar16;
      auVar42[5] = bVar17;
      auVar42[6] = bVar18;
      auVar42[7] = bVar19;
      auVar42[8] = bVar20;
      auVar42[9] = bVar21;
      auVar42[10] = bVar22;
      auVar42[0xb] = bVar23;
      auVar42._12_2_ = 0;
      auVar42[0xe] = bVar24;
      auVar42[0xf] = bVar25;
      auVar42 = NEON_frecps(auVar42,auVar37,4);
      iVar3 = -(uint)((float)CONCAT13(bVar15,CONCAT12(bVar14,CONCAT11(bVar13,bVar12))) == 0.0);
      iVar30 = -(uint)((float)CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16))) == 0.0);
      iVar32 = -(uint)((float)CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar20))) == 0.0);
      iVar35 = -(uint)((float)((uint)CONCAT11(bVar25,bVar24) << 0x10) == 0.0);
      auVar46[0] = ~(byte)iVar3;
      auVar46[1] = ~(byte)((uint)iVar3 >> 8);
      auVar46[2] = ~(byte)((uint)iVar3 >> 0x10);
      auVar46[3] = ~(byte)((uint)iVar3 >> 0x18);
      auVar46[4] = ~(byte)iVar30;
      auVar46[5] = ~(byte)((uint)iVar30 >> 8);
      auVar46[6] = ~(byte)((uint)iVar30 >> 0x10);
      auVar46[7] = ~(byte)((uint)iVar30 >> 0x18);
      auVar46[8] = ~(byte)iVar32;
      auVar46[9] = ~(byte)((uint)iVar32 >> 8);
      auVar46[10] = ~(byte)((uint)iVar32 >> 0x10);
      auVar46[0xb] = ~(byte)((uint)iVar32 >> 0x18);
      auVar46[0xc] = ~(byte)iVar35;
      auVar46[0xd] = ~(byte)((uint)iVar35 >> 8);
      auVar46[0xe] = ~(byte)((uint)iVar35 >> 0x10);
      auVar46[0xf] = ~(byte)((uint)iVar35 >> 0x18);
      auVar38._0_4_ = auVar37._0_4_ * auVar42._0_4_;
      auVar38._4_4_ = auVar37._4_4_ * auVar42._4_4_;
      auVar38._8_4_ = auVar37._8_4_ * auVar42._8_4_;
      auVar38._12_4_ = auVar37._12_4_ * auVar42._12_4_;
      auVar26[1] = bVar13;
      auVar26[0] = bVar12;
      auVar26[2] = bVar14;
      auVar26[3] = bVar15;
      auVar26[4] = bVar16;
      auVar26[5] = bVar17;
      auVar26[6] = bVar18;
      auVar26[7] = bVar19;
      auVar26[8] = bVar20;
      auVar26[9] = bVar21;
      auVar26[10] = bVar22;
      auVar26[0xb] = bVar23;
      auVar26._12_2_ = 0;
      auVar26[0xe] = bVar24;
      auVar26[0xf] = bVar25;
      auVar37 = NEON_frecps(auVar26,auVar38,4);
      auVar39._0_4_ = auVar38._0_4_ * auVar37._0_4_;
      auVar39._4_4_ = auVar38._4_4_ * auVar37._4_4_;
      auVar39._8_4_ = auVar38._8_4_ * auVar37._8_4_;
      auVar39._12_4_ = auVar38._12_4_ * auVar37._12_4_;
      auVar27._8_4_ = 0x7f7fffee;
      auVar27._0_8_ = 0x7f7fffee7f7fffee;
      auVar27._12_4_ = 0x7f7fffee;
      auVar27 = auVar27 ^ (auVar27 ^ auVar39) & auVar46;
      uStack_78 = CONCAT17(bVar25,CONCAT16(bVar24,(uint6)CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(
                                                  bVar21,bVar20)))));
      local_80 = CONCAT17(bVar19,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar16,CONCAT13(bVar15,
                                                  CONCAT12(bVar14,CONCAT11(bVar13,bVar12)))))));
      uStack_68 = auVar27._8_8_;
      uStack_70 = auVar27._0_8_;
      uVar7 = FUN_031952d0(*(undefined8 *)(lVar10 + 0x20),*(uint *)(param_4 + 0x20) & 0x3fffff,
                           &local_90,&local_58);
      if ((uVar7 & 1) != 0) {
        fVar29 = (float)local_58;
        fVar40 = (float)((ulong)local_58 >> 0x20);
        fVar33 = (fVar49 + ((float)*(undefined8 *)(param_3 + 0x40) - fVar49) * fVar29) -
                 *(float *)(param_3 + 0x30);
        fVar31 = (fVar50 + ((float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20) - fVar50) *
                           fVar40) - *(float *)(param_3 + 0x34);
        fVar34 = (fVar51 + ((float)*(undefined8 *)(param_3 + 0x48) - fVar51) * fVar29) -
                 *(float *)(param_3 + 0x38);
        fVar36 = (fVar52 + ((float)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x20) - fVar52) *
                           fVar40) - *(float *)(param_3 + 0x3c);
        auVar28._0_4_ = fVar33 * fVar33;
        auVar28._4_4_ = fVar31 * fVar31;
        auVar28._8_4_ = fVar34 * fVar34;
        auVar28._12_4_ = fVar36 * fVar36;
        auVar37 = NEON_ext(auVar28,auVar28,8,1);
        fVar33 = (float)*(undefined8 *)(param_4 + 0x30);
        if (auVar28._0_4_ + auVar28._4_4_ + auVar37._0_4_ < fVar33 * fVar33) {
          fVar33 = fVar40 + -0.5 + fVar40 + -0.5;
          *(uint *)(param_5 + 1) = uVar4;
          *param_5 = CONCAT17((char)((uint)fVar33 >> 0x18),
                              CONCAT16((char)((uint)fVar33 >> 0x10),
                                       CONCAT15((char)((uint)fVar33 >> 8),
                                                CONCAT14(SUB41(fVar33,0),
                                                         fVar29 + -0.5 + fVar29 + -0.5))));
          uVar4 = 1;
          goto joined_r0x0315a8b0;
        }
      }
    }
  }
  if (*(long *)(lVar8 + 0x38d490) == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar10;
    lVar8 = *(long *)(lVar10 + 0x10);
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38d490) + 0x10);
  }
  if (lVar8 != 0) {
    puVar1 = *(undefined8 **)(lVar8 + 8);
    uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= *(ulong *)(lVar8 + 0x10)) &&
       (*(ulong *)(lVar8 + 8) = uVar7, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "Stfull";
      uVar6 = nn::os::GetSystemTick();
      puVar1[1] = uVar6;
    }
  }
  uVar4 = (**(code **)(*param_1 + 0x38))(param_1,param_3,param_5);
joined_r0x0315a8b0:
  if (lVar11 != 0) {
    puVar1 = *(undefined8 **)(lVar11 + 8);
    uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= *(ulong *)(lVar11 + 0x10)) &&
       (*(ulong *)(lVar11 + 8) = uVar7, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03922da5;
      uVar6 = nn::os::GetSystemTick();
      puVar1[1] = uVar6;
    }
  }
  return uVar4 & 1;
}


