/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4cf34; name: FUN_02e4cf34
 */


bool FUN_02e4cf34(long param_1,undefined8 param_2)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  float *local_a0;
  float *pfStack_98;
  undefined4 local_88;
  undefined1 local_60;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
    bVar3 = true;
  }
  else {
    pfStack_98 = *(float **)(lVar5 + 0x18);
    pfVar1 = pfStack_98 + 0x14;
    if (*(char *)(lVar5 + 0x48) != '\0') {
      pfVar1 = pfStack_98 + 0xe;
    }
    local_a0 = *(float **)(param_1 + 0x18);
    uVar6 = (ulong)(uint)pfVar1[2];
    if (pfVar1[2] == 0.0) {
      plVar7 = (long *)0x0;
      cVar2 = DAT_00000008;
    }
    else {
      plVar7 = *(long **)pfVar1;
      do {
        if ((float *)*plVar7 == local_a0) goto LAB_02e4cf98;
        uVar6 = uVar6 - 1;
        plVar7 = plVar7 + 2;
      } while (uVar6 != 0);
      plVar7 = (long *)0x0;
LAB_02e4cf98:
      cVar2 = (char)plVar7[1];
    }
    if (cVar2 == '\0') {
      fVar8 = pfStack_98[0x1a] * 0.5;
      fVar9 = local_a0[0x1a] * 0.5;
      fVar12 = *pfStack_98 + pfStack_98[3] * fVar8;
      fVar13 = pfStack_98[1] + fVar8 * pfStack_98[4];
      fVar8 = pfStack_98[2] + fVar8 * pfStack_98[5];
      auVar10 = NEON_fmov(0x3f800000,4);
      local_60 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_88 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      uStack_178 = 0;
      auVar11._0_8_ = CONCAT44(fVar13,fVar12);
      auVar11._12_4_ = auVar10._12_4_;
      auVar11._8_4_ = fVar8;
      uStack_b0 = CONCAT44((local_a0[4] * fVar9 - fVar13) + local_a0[1],
                           (fVar9 * local_a0[3] - fVar12) + *local_a0);
      uStack_a8 = (ulong)(uint)((local_a0[5] * fVar9 - fVar8) + local_a0[2]);
      uStack_b8 = auVar11._8_8_;
      local_c0 = auVar11._0_8_;
      local_50 = uStack_b0;
      uStack_48 = uStack_a8;
      uStack_40 = auVar11._0_8_;
      uStack_38 = uStack_b8;
      FUN_02e4db28(param_2,&uStack_40,&local_50,&local_180,1);
      bVar4 = FUN_02e4dc20(&local_180);
      *(undefined1 *)(plVar7 + 1) = 1;
      *(byte *)((long)plVar7 + 9) = ~bVar4 & 1;
    }
    bVar3 = *(char *)((long)plVar7 + 9) != '\0';
  }
  return bVar3;
}


