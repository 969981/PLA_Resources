/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03182fd8; name: FUN_03182fd8
 */


void FUN_03182fd8(long param_1,undefined1 (*param_2) [12])

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  int iVar25;
  int iVar27;
  int iVar28;
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  auVar13 = *(undefined1 (*) [16])(param_1 + 0x20);
  auVar14 = *(undefined1 (*) [16])(param_1 + 0x30);
  uVar15 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  auVar26 = *(undefined1 (*) [16])(param_2[1] + 4);
  iVar25 = -(uint)(auVar14._0_4_ <= auVar26._0_4_);
  iVar27 = -(uint)(auVar14._4_4_ <= auVar26._4_4_);
  iVar28 = -(uint)(auVar14._8_4_ <= auVar26._8_4_);
  iVar10 = -(uint)((float)*(undefined8 *)*param_2 <= auVar13._0_4_);
  iVar3 = -(uint)((float)((ulong)*(undefined8 *)*param_2 >> 0x20) <= auVar13._4_4_);
  iVar5 = -(uint)((float)*(undefined8 *)(*param_2 + 8) <= auVar13._8_4_);
  if ((CONCAT13((byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar10 >> 0x18),
                CONCAT12((byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar10 >> 0x10),
                         CONCAT11((byte)((uint)iVar25 >> 8) & (byte)((uint)iVar10 >> 8),
                                  (byte)iVar25 & (byte)iVar10))) &
       CONCAT13((byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar3 >> 0x18),
                CONCAT12((byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar3 >> 0x10),
                         CONCAT11((byte)((uint)iVar27 >> 8) & (byte)((uint)iVar3 >> 8),
                                  (byte)iVar27 & (byte)iVar3))) &
      CONCAT13((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar5 >> 0x18),
               CONCAT12((byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar5 >> 0x10),
                        CONCAT11((byte)((uint)iVar28 >> 8) & (byte)((uint)iVar5 >> 8),
                                 (byte)iVar28 & (byte)iVar5)))) == 0) {
    auVar29._12_4_ = uVar15;
    auVar29._0_12_ = *param_2;
    auVar31 = NEON_fmin(auVar13,auVar29,4);
    auVar32 = NEON_fmax(auVar14,auVar26,4);
    auVar2._12_4_ = uVar15;
    auVar2._0_12_ = *param_2;
    auVar13 = NEON_fmax(auVar13,auVar2,4);
    auVar14 = NEON_fmin(auVar14,auVar26,4);
    auVar29 = NEON_fmov(0x3f800000,4);
    fVar30 = auVar32._0_4_ - auVar31._0_4_;
    fVar4 = auVar32._4_4_ - auVar31._4_4_;
    uVar16 = (undefined1)((uint)fVar4 >> 8);
    uVar17 = (undefined1)((uint)fVar4 >> 0x10);
    uVar18 = (undefined1)((uint)fVar4 >> 0x18);
    fVar6 = auVar32._8_4_ - auVar31._8_4_;
    uVar19 = (undefined1)((uint)fVar6 >> 8);
    uVar20 = (undefined1)((uint)fVar6 >> 0x10);
    uVar21 = (undefined1)((uint)fVar6 >> 0x18);
    fVar7 = auVar32._12_4_ - auVar31._12_4_;
    uVar22 = (undefined1)((uint)fVar7 >> 8);
    uVar23 = (undefined1)((uint)fVar7 >> 0x10);
    uVar24 = (undefined1)((uint)fVar7 >> 0x18);
    auVar26._0_4_ = auVar14._0_4_ - auVar13._0_4_;
    auVar26._4_4_ = auVar14._4_4_ - auVar13._4_4_;
    auVar26._8_4_ = auVar14._8_4_ - auVar13._8_4_;
    auVar26._12_4_ = auVar14._12_4_ - auVar13._12_4_;
    auVar13[4] = SUB41(fVar4,0);
    auVar13._0_4_ = fVar30;
    auVar13[5] = uVar16;
    auVar13[6] = uVar17;
    auVar13[7] = uVar18;
    auVar13[8] = SUB41(fVar6,0);
    auVar13[9] = uVar19;
    auVar13[10] = uVar20;
    auVar13[0xb] = uVar21;
    auVar13[0xc] = SUB41(fVar7,0);
    auVar13[0xd] = uVar22;
    auVar13[0xe] = uVar23;
    auVar13[0xf] = uVar24;
    auVar14[4] = SUB41(fVar4,0);
    auVar14._0_4_ = fVar30;
    auVar14[5] = uVar16;
    auVar14[6] = uVar17;
    auVar14[7] = uVar18;
    auVar14[8] = SUB41(fVar6,0);
    auVar14[9] = uVar19;
    auVar14[10] = uVar20;
    auVar14[0xb] = uVar21;
    auVar14[0xc] = SUB41(fVar7,0);
    auVar14[0xd] = uVar22;
    auVar14[0xe] = uVar23;
    auVar14[0xf] = uVar24;
    auVar14 = auVar14 ^ (auVar13 ^ auVar29) & *(undefined1 (*) [16])(param_1 + 0x50);
    auVar13 = NEON_ext(auVar14,auVar14,8,1);
    auVar26 = auVar26 ^ (auVar26 ^ auVar29) & *(undefined1 (*) [16])(param_1 + 0x50);
    auVar29 = NEON_ext(auVar26,auVar26,8,1);
    fVar30 = *(float *)(*(long *)(param_2[2] + 8) + 0x28) -
             auVar29._0_4_ * auVar26._0_4_ * auVar26._4_4_;
    if (auVar13._0_4_ * auVar14._0_4_ * auVar14._4_4_ <
        *(float *)(param_1 + 0x60) * (*(float *)(param_1 + 0x10) + fVar30)) {
      plVar12 = *(long **)(param_1 + 8);
      iVar10 = (int)plVar12[1];
      uVar11 = *(uint *)((long)plVar12 + 0xc);
      uVar1 = iVar10 + 1;
      if (iVar10 < (int)(uVar11 & 0x3fffffff)) {
        lVar9 = *plVar12;
      }
      else {
        lVar9 = *plVar12;
        if (0x3ffffffe < iVar10) {
          FUN_032bd0a8(uVar1);
          uVar11 = *(uint *)((long)plVar12 + 0xc);
        }
        uVar11 = (uVar11 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar11) {
          uVar11 = 0x3fffffff;
        }
        uVar8 = uVar1;
        if ((int)uVar1 <= (int)uVar11) {
          uVar8 = uVar11;
        }
        lVar9 = FUN_032bd1d4(PTR_PTR_0434a090,uVar8,4,lVar9,iVar10);
        *plVar12 = lVar9;
        iVar10 = (int)plVar12[1];
      }
      *(undefined4 *)(lVar9 + (long)iVar10 * 4) = *(undefined4 *)(param_2[3] + 4);
      *(uint *)(plVar12 + 1) = uVar1;
      *(long *)(param_1 + 0x28) = auVar31._8_8_;
      *(long *)(param_1 + 0x20) = auVar31._0_8_;
      *(long *)(param_1 + 0x38) = auVar32._8_8_;
      *(long *)(param_1 + 0x30) = auVar32._0_8_;
      *(float *)(param_1 + 0x40) = fVar30 + *(float *)(param_1 + 0x40);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(*(long *)(param_1 + 8) + 8) = 0;
  }
  return;
}


