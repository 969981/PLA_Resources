/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e48cd0; name: FUN_02e48cd0
 */


void FUN_02e48cd0(long param_1,ushort *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 *param_6)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float *pfVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  long *plVar11;
  ulong *puVar12;
  float *pfVar13;
  ulong *puVar14;
  long *plVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar8 = *(long *)(param_1 + 0x10);
  pfVar5 = (float *)(lVar8 + (ulong)*param_2 * 0xc);
  pfVar13 = (float *)(lVar8 + (ulong)param_2[1] * 0xc);
  fVar17 = *pfVar5;
  fVar18 = pfVar5[1];
  pfVar9 = (float *)(lVar8 + (ulong)param_2[2] * 0xc);
  fVar25 = *pfVar13;
  fVar26 = pfVar13[1];
  uVar24 = NEON_fminnm(fVar17,0x7f7fffff);
  if (fVar17 <= -3.4028235e+38) {
    fVar17 = -3.4028235e+38;
  }
  fVar20 = *pfVar9;
  fVar23 = pfVar9[1];
  uVar24 = NEON_fminnm(uVar24,fVar25);
  if (fVar17 <= fVar25) {
    fVar17 = fVar25;
  }
  fVar25 = fVar18;
  if (fVar18 <= -3.4028235e+38) {
    fVar25 = -3.4028235e+38;
  }
  uVar19 = NEON_fminnm(fVar18,0x7f7fffff);
  uVar24 = NEON_fminnm(uVar24,fVar20);
  if (fVar17 <= fVar20) {
    fVar17 = fVar20;
  }
  auVar21 = NEON_fmov(0x3f800000,4);
  uVar19 = NEON_fminnm(uVar19,fVar26);
  if (fVar25 <= fVar26) {
    fVar25 = fVar26;
  }
  fVar26 = pfVar13[2];
  fVar18 = pfVar5[2];
  uVar16 = NEON_fminnm(fVar18,0x7f7fffff);
  uVar19 = NEON_fminnm(uVar19,fVar23);
  fVar20 = pfVar9[2];
  if (fVar25 <= fVar23) {
    fVar25 = fVar23;
  }
  auVar22._0_8_ = CONCAT44(fVar25,fVar17);
  uStack_50 = CONCAT44(uVar19,uVar24);
  uVar24 = NEON_fminnm(uVar16,fVar26);
  if (fVar18 <= fVar26) {
    fVar18 = fVar26;
  }
  uVar24 = NEON_fminnm(uVar24,fVar20);
  uStack_48 = CONCAT44(auVar21._12_4_,uVar24);
  if (fVar18 <= fVar20) {
    fVar18 = fVar20;
  }
  auVar22._8_4_ = fVar18;
  auVar22._12_4_ = auVar21._12_4_;
  uStack_58 = auVar22._8_8_;
  local_60 = auVar22._0_8_;
  local_38 = param_3;
  FUN_02e48ef8(param_4,&uStack_50,&local_60,&local_38);
  lVar8 = *(long *)(param_3 + 0x38);
  if (lVar8 != 0) {
    uVar4 = (ulong)*(uint *)(lVar8 + 0x38);
    if (*(uint *)(lVar8 + 0x38) != 0) {
      puVar6 = *(ulong **)(lVar8 + 0x30);
      puVar14 = puVar6 + uVar4;
      puVar12 = puVar6;
      do {
        if ((*puVar12 < *(ulong *)(param_1 + 0x28)) ||
           (*(ulong *)(param_1 + 0x28) + (ulong)*(ushort *)(param_1 + 0x36) * 0x88 <= *puVar12)) {
          puVar12 = puVar12 + 1;
        }
        else {
          if (1 < (uint)uVar4) {
            *puVar12 = puVar14[-1];
            uVar4 = (ulong)*(uint *)(lVar8 + 0x38);
            puVar6 = *(ulong **)(lVar8 + 0x30);
          }
          uVar3 = (int)uVar4 - 1;
          uVar4 = (ulong)uVar3;
          *(uint *)(lVar8 + 0x38) = uVar3;
        }
        puVar14 = puVar6 + uVar4;
      } while (puVar14 != puVar12);
    }
    iVar2 = FUN_02e48f60(lVar8,param_3);
    if (iVar2 == 0) {
      uVar3 = *(uint *)(param_6 + 1);
      if (uVar3 != 0) {
        plVar7 = (long *)*param_6;
        if (*plVar7 == lVar8) {
          plVar11 = plVar7;
        }
        else {
          lVar10 = (ulong)uVar3 * 8;
          plVar15 = plVar7;
          do {
            lVar10 = lVar10 + -8;
            if (lVar10 == 0) goto LAB_02e48ed0;
            plVar11 = plVar15 + 1;
            plVar1 = plVar15 + 1;
            plVar15 = plVar11;
          } while (*plVar1 != lVar8);
        }
        if (1 < uVar3) {
          *plVar11 = plVar7[(ulong)uVar3 - 1];
          uVar3 = *(uint *)(param_6 + 1);
        }
        *(uint *)(param_6 + 1) = uVar3 - 1;
      }
LAB_02e48ed0:
      FUN_02e4afbc(lVar8);
      FUN_02e4b008(param_5,lVar8);
      return;
    }
  }
  return;
}


