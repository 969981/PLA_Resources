/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e488e0; name: FUN_02e488e0
 */


undefined8
FUN_02e488e0(long param_1,ushort *param_2,long param_3,undefined8 *param_4,undefined8 *param_5,
            undefined8 *param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9,
            undefined8 param_10,byte param_11)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  if (*(uint *)(param_9 + 1) == 0) {
LAB_02e48960:
    local_70 = *param_4;
    local_68 = *(undefined4 *)(param_4 + 1);
    local_80 = *param_5;
    local_78 = *(undefined4 *)(param_5 + 1);
    local_90 = *param_6;
    local_88 = *(undefined4 *)(param_6 + 1);
    lVar4 = FUN_02e490d8(param_8,&local_70,&local_80,&local_90);
    if (lVar4 != 0) {
      FUN_02e49084(lVar4,param_3,param_4,param_5,param_6);
      if (*(long *)(param_3 + 0x38) == 0) {
        FUN_02e4afbc(lVar4);
        FUN_02e4b008(param_8,lVar4);
        lVar4 = *(long *)(param_3 + 0x38);
        goto joined_r0x02e48b48;
      }
      plVar2 = (long *)FUN_02e49a38(param_9);
      if (plVar2 != (long *)0x0) {
        *plVar2 = lVar4;
      }
    }
  }
  else {
    lVar4 = (ulong)*(uint *)(param_9 + 1) * 8;
    puVar8 = (undefined8 *)*param_9;
    do {
      lVar4 = lVar4 + -8;
      uVar1 = FUN_02e49084(*puVar8,param_3,param_4,param_5,param_6);
      if (lVar4 == 0) break;
      puVar8 = puVar8 + 1;
    } while ((uVar1 & 1) == 0);
    if ((uVar1 & 1) == 0) goto LAB_02e48960;
  }
  lVar4 = *(long *)(param_3 + 0x38);
joined_r0x02e48b48:
  if (lVar4 == 0) {
    uVar3 = 2;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
    pfVar5 = (float *)(lVar4 + (ulong)*param_2 * 0xc);
    pfVar7 = (float *)(lVar4 + (ulong)param_2[1] * 0xc);
    pfVar6 = (float *)(lVar4 + (ulong)param_2[2] * 0xc);
    fVar10 = *pfVar5;
    fVar11 = pfVar5[1];
    uVar17 = NEON_fminnm(fVar10,0x7f7fffff);
    if (fVar10 <= -3.4028235e+38) {
      fVar10 = -3.4028235e+38;
    }
    fVar18 = *pfVar7;
    fVar19 = pfVar7[1];
    fVar13 = *pfVar6;
    fVar16 = pfVar6[1];
    uVar17 = NEON_fminnm(uVar17,fVar18);
    if (fVar10 <= fVar18) {
      fVar10 = fVar18;
    }
    fVar18 = fVar11;
    if (fVar11 <= -3.4028235e+38) {
      fVar18 = -3.4028235e+38;
    }
    uVar12 = NEON_fminnm(fVar11,0x7f7fffff);
    uVar17 = NEON_fminnm(uVar17,fVar13);
    if (fVar10 <= fVar13) {
      fVar10 = fVar13;
    }
    auVar14 = NEON_fmov(0x3f800000,4);
    uVar12 = NEON_fminnm(uVar12,fVar19);
    if (fVar18 <= fVar19) {
      fVar18 = fVar19;
    }
    fVar13 = pfVar7[2];
    fVar11 = pfVar5[2];
    uVar9 = NEON_fminnm(fVar11,0x7f7fffff);
    uVar12 = NEON_fminnm(uVar12,fVar16);
    fVar19 = pfVar6[2];
    if (fVar18 <= fVar16) {
      fVar18 = fVar16;
    }
    if (fVar11 <= fVar13) {
      fVar11 = fVar13;
    }
    uVar9 = NEON_fminnm(uVar9,fVar13);
    uStack_a0 = CONCAT44(uVar12,uVar17);
    auVar15._0_8_ = CONCAT44(fVar18,fVar10);
    uVar17 = NEON_fminnm(uVar9,fVar19);
    uStack_98 = CONCAT44(auVar14._12_4_,uVar17);
    if (fVar11 <= fVar19) {
      fVar11 = fVar19;
    }
    auVar15._8_4_ = fVar11;
    auVar15._12_4_ = auVar14._12_4_;
    uStack_a8 = auVar15._8_8_;
    local_b8 = param_3;
    local_b0 = auVar15._0_8_;
    FUN_02e49128(param_7,&uStack_a0,&local_b0,&local_b8);
    if ((param_11 & 1) != 0) {
      uVar1 = (ulong)((long)param_2 - *(long *)(param_1 + 8)) >> 3;
      FUN_02e49180(*param_2,param_2[1],uVar1 & 0xffffffff,*(undefined8 *)(param_3 + 0x38),param_10);
      FUN_02e49180(param_2[1],param_2[2],uVar1 & 0xffffffff,*(undefined8 *)(param_3 + 0x38),param_10
                  );
      FUN_02e49180(param_2[2],*param_2,uVar1 & 0xffffffff,*(undefined8 *)(param_3 + 0x38),param_10);
    }
    uVar3 = 1;
  }
  return uVar3;
}


