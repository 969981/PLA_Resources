/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a463d4; name: FUN_01a463d4
 */


void FUN_01a463d4(long param_1,ulong param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0xdf60) == '\0') {
    return;
  }
  pcVar2 = (char *)(param_1 + 0xde00);
  if ((*pcVar2 != '\0') && ((param_2 & 1) == 0)) {
    return;
  }
  if (*(char *)(param_1 + 0x3f9) == '\0') {
    cVar10 = *(char *)(param_1 + 0xe110);
    if (cVar10 != '\0') goto LAB_01a46420;
  }
  else {
    FUN_01a3ac2c(param_1);
    cVar10 = *(char *)(param_1 + 0xe110);
    if (cVar10 == '\0') {
      cVar10 = '\0';
    }
    else {
LAB_01a46420:
      if ((param_2 & 1) == 0) {
        local_88 = *(undefined8 *)(param_1 + 0xe218);
        local_98 = *(undefined8 *)(param_1 + 0xe208);
        local_a8 = *(undefined8 *)(param_1 + 0xe1f8);
        local_90 = *(undefined8 *)(param_1 + 0xe210);
        local_80 = *(undefined8 *)(param_1 + 0xe220);
        local_b0 = *(long **)(param_1 + 0xe1f0);
        local_a0 = *(undefined8 *)(param_1 + 0xe200);
        FUN_01832100(&local_70,&local_b0,0);
        local_98 = local_58;
        local_90 = local_50;
        local_88 = local_48;
        local_80 = local_40;
        local_a0 = local_60;
        local_b0 = local_70;
        local_a8 = uStack_68;
        FUN_01a47264(&local_70,param_1,1);
        uVar5 = *(uint *)(param_1 + 0xe25c);
        *(undefined8 *)(param_1 + 0xe148) = local_88;
        *(undefined8 *)(param_1 + 0xe138) = local_98;
        *(undefined8 *)(param_1 + 0xe128) = local_a8;
        *(undefined8 *)(param_1 + 0xe130) = local_a0;
        *(long **)(param_1 + 0xe120) = local_b0;
        *(long *)(param_1 + 0xe150) = local_80;
        *(undefined8 *)(param_1 + 0xe140) = local_90;
        *(undefined8 *)(param_1 + 0xe1b0) = local_a0;
        *(long **)(param_1 + 0xe1a0) = local_b0;
        *(undefined8 *)(param_1 + 0xe1a8) = local_a8;
        *(long *)(param_1 + 0xe1d0) = local_80;
        *(undefined8 *)(param_1 + 0xe1c0) = local_90;
        *(undefined8 *)(param_1 + 0xe1c8) = local_88;
        *(undefined8 *)(param_1 + 0xe1b8) = local_98;
        *(undefined8 *)(param_1 + 0xe170) = local_60;
        *(undefined8 *)(param_1 + 0xe168) = uStack_68;
        *(long **)(param_1 + 0xe160) = local_70;
        *(long *)(param_1 + 0xe190) = local_40;
        *(undefined8 *)(param_1 + 0xe188) = local_48;
        *(undefined8 *)(param_1 + 0xe180) = local_50;
        *(undefined8 *)(param_1 + 0xe178) = local_58;
        *(undefined4 *)(param_1 + 0xe1e0) = *(undefined4 *)(param_1 + 0xe260);
        *(uint *)(param_1 + 0xe1e8) = uVar5;
        if (uVar5 == 0) {
          fVar13 = 1.0;
        }
        else {
          fVar13 = 1.0 / (float)uVar5;
        }
        *(float *)(param_1 + 0xe1e4) = fVar13;
        *(undefined4 *)(param_1 + 0xe1ec) = 0;
        *(undefined8 *)(param_1 + 0xe208) = local_98;
        *(undefined8 *)(param_1 + 0xe218) = local_88;
        *(long **)(param_1 + 0xe1f0) = local_b0;
        *(undefined8 *)(param_1 + 0xe1f8) = local_a8;
        *(undefined8 *)(param_1 + 0xe200) = local_a0;
        *(long *)(param_1 + 0xe220) = local_80;
        *(undefined8 *)(param_1 + 0xe210) = local_90;
        *(undefined4 *)(param_1 + 0xe230) = local_90._4_4_;
        *(undefined4 *)(param_1 + 0xe234) = (undefined4)local_90;
        *(undefined8 *)(param_1 + 0xe238) = 0;
        *(undefined1 *)(param_1 + 0xe250) = 0;
        *(undefined8 *)(param_1 + 0x434) = 0;
        *(undefined8 *)(param_1 + 0x43c) = 0x3f8000003f800000;
        fVar13 = (float)*(undefined8 *)(param_1 + 0x358);
        if (*(char *)(param_1 + 0x370) != '\0') {
          fVar14 = (float)*(undefined8 *)(param_1 + 0x350) - *(float *)(param_1 + 0x340);
          fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x350) >> 0x20) -
                   *(float *)(param_1 + 0x344);
          fVar13 = fVar13 - *(float *)(param_1 + 0x348);
          fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 0x358) >> 0x20) -
                   *(float *)(param_1 + 0x34c);
          fVar14 = fVar14 * fVar14;
          fVar15 = fVar15 * fVar15;
          fVar13 = fVar13 * fVar13;
          fVar16 = fVar16 * fVar16;
          auVar8._4_4_ = fVar15;
          auVar8._0_4_ = fVar14;
          auVar8._8_4_ = fVar13;
          auVar8._12_4_ = fVar16;
          auVar9._4_4_ = fVar15;
          auVar9._0_4_ = fVar14;
          auVar9._8_4_ = fVar13;
          auVar9._12_4_ = fVar16;
          auVar17 = NEON_ext(auVar8,auVar9,8,1);
          fVar13 = SQRT(auVar17._0_4_ + fVar14 + auVar17._4_4_ + fVar15);
        }
        *(undefined1 *)(param_1 + 0xde01) = 0;
        *(undefined1 *)(param_1 + 0xe110) = 1;
        goto LAB_01a46658;
      }
    }
  }
  local_80 = (ulong)(uint3)((uint)(undefined4)local_80 >> 8) << 8;
  local_b0 = (long *)0x0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  if (cVar10 == '\0') {
    if (*pcVar2 != '\0') {
      local_88 = *(undefined8 *)(param_1 + 0xdf08);
      local_98 = *(undefined8 *)(param_1 + 0xdef8);
      local_a8 = *(undefined8 *)(param_1 + 0xdee8);
      local_b0 = *(long **)(param_1 + 0xdee0);
      local_a0 = *(undefined8 *)(param_1 + 0xdef0);
      lVar11 = 0xdf00;
      lVar12 = 0xdf10;
      goto LAB_01a469a0;
    }
    iVar4 = *(int *)(param_1 + 0x3e4);
    if (iVar4 == 0) {
LAB_01a4644c:
      local_98 = *(undefined8 *)(param_1 + 0xdd78);
      local_a8 = *(undefined8 *)(param_1 + 0xdd68);
      local_b0 = *(long **)(param_1 + 0xdd60);
      local_a0 = *(undefined8 *)(param_1 + 0xdd70);
      local_90 = *(undefined8 *)(param_1 + 0xdd80);
      local_80 = *(long *)(param_1 + 0xdd90);
      local_88 = CONCAT44(*(undefined4 *)(param_1 + 0x36c),(int)*(undefined8 *)(param_1 + 0xdd88));
    }
    else if (iVar4 == 1) {
      puVar3 = (undefined8 *)(param_1 + 0x500);
      if (1.0 <= *(float *)(param_1 + 0x54c)) {
        puVar3 = (undefined8 *)(param_1 + 0x4c0);
      }
      local_b0 = (long *)*puVar3;
      local_a8 = puVar3[1];
      local_a0 = puVar3[2];
      local_98 = puVar3[3];
      local_90 = puVar3[4];
      local_88 = puVar3[5];
      local_80 = puVar3[6];
      uStack_38 = puVar3[7];
      local_70 = local_b0;
      uStack_68 = local_a8;
      local_60 = local_a0;
      local_58 = local_98;
      local_50 = local_90;
      local_48 = local_88;
      local_40 = local_80;
    }
    else if (iVar4 == 2) {
      if (1.0 <= *(float *)(param_1 + 0x54c)) goto LAB_01a4644c;
      local_88 = *(undefined8 *)(param_1 + 0x528);
      local_98 = *(undefined8 *)(param_1 + 0x518);
      local_a8 = *(undefined8 *)(param_1 + 0x508);
      local_b0 = *(long **)(param_1 + 0x500);
      local_a0 = *(undefined8 *)(param_1 + 0x510);
      local_90 = *(undefined8 *)(param_1 + 0x520);
      local_80 = *(long *)(param_1 + 0x530);
    }
  }
  else {
    local_88 = *(undefined8 *)(param_1 + 0xe218);
    local_98 = *(undefined8 *)(param_1 + 0xe208);
    local_a8 = *(undefined8 *)(param_1 + 0xe1f8);
    local_b0 = *(long **)(param_1 + 0xe1f0);
    local_a0 = *(undefined8 *)(param_1 + 0xe200);
    lVar11 = 0xe210;
    lVar12 = 0xe220;
LAB_01a469a0:
    local_90 = *(undefined8 *)(param_1 + lVar11);
    local_80 = *(long *)(param_1 + lVar12);
  }
  FUN_01832100(&local_70,&local_b0,0);
  local_98 = local_58;
  local_80 = local_40;
  local_90 = local_50;
  local_88 = local_48;
  local_a0 = local_60;
  local_b0 = local_70;
  local_a8 = uStack_68;
  FUN_01a46b00(&local_70,param_1);
  uVar5 = *(uint *)(param_1 + 0xdff0);
  *(undefined8 *)(param_1 + 0xde38) = local_88;
  *(undefined8 *)(param_1 + 0xde28) = local_98;
  *(undefined8 *)(param_1 + 0xde18) = local_a8;
  *(undefined8 *)(param_1 + 0xde20) = local_a0;
  *(long **)(param_1 + 0xde10) = local_b0;
  *(long *)(param_1 + 0xde40) = local_80;
  *(undefined8 *)(param_1 + 0xde30) = local_90;
  *(undefined8 *)(param_1 + 0xdea0) = local_a0;
  *(long **)(param_1 + 0xde90) = local_b0;
  *(undefined8 *)(param_1 + 0xde98) = local_a8;
  *(long *)(param_1 + 0xdec0) = local_80;
  *(undefined8 *)(param_1 + 0xdeb0) = local_90;
  *(undefined8 *)(param_1 + 0xdeb8) = local_88;
  *(undefined8 *)(param_1 + 57000) = local_98;
  *(undefined8 *)(param_1 + 0xde60) = local_60;
  *(undefined8 *)(param_1 + 0xde58) = uStack_68;
  *(long **)(param_1 + 0xde50) = local_70;
  *(long *)(param_1 + 0xde80) = local_40;
  *(undefined8 *)(param_1 + 0xde78) = local_48;
  *(undefined8 *)(param_1 + 0xde70) = local_50;
  *(undefined8 *)(param_1 + 0xde68) = local_58;
  *(undefined4 *)(param_1 + 0xded0) = *(undefined4 *)(param_1 + 0xdff4);
  *(uint *)(param_1 + 0xded8) = uVar5;
  if (uVar5 == 0) {
    fVar13 = 1.0;
  }
  else {
    fVar13 = 1.0 / (float)uVar5;
  }
  *(float *)(param_1 + 0xded4) = fVar13;
  *(undefined4 *)(param_1 + 0xdedc) = 0;
  *(undefined8 *)(param_1 + 0xdef8) = local_98;
  *(undefined8 *)(param_1 + 0xdf08) = local_88;
  *(undefined8 *)(param_1 + 0xdee8) = local_a8;
  *(undefined8 *)(param_1 + 0xdef0) = local_a0;
  *(long **)(param_1 + 0xdee0) = local_b0;
  *(long *)(param_1 + 0xdf10) = local_80;
  *(undefined8 *)(param_1 + 0xdf00) = local_90;
  *(undefined8 *)(param_1 + 0x434) = 0;
  *(undefined8 *)(param_1 + 0x43c) = 0x3f8000003f800000;
  fVar13 = (float)*(undefined8 *)(param_1 + 0x358);
  if (*(char *)(param_1 + 0x370) != '\0') {
    fVar14 = (float)*(undefined8 *)(param_1 + 0x350) - *(float *)(param_1 + 0x340);
    fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x350) >> 0x20) - *(float *)(param_1 + 0x344);
    fVar13 = fVar13 - *(float *)(param_1 + 0x348);
    fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 0x358) >> 0x20) - *(float *)(param_1 + 0x34c);
    fVar14 = fVar14 * fVar14;
    fVar15 = fVar15 * fVar15;
    fVar13 = fVar13 * fVar13;
    fVar16 = fVar16 * fVar16;
    auVar17._4_4_ = fVar15;
    auVar17._0_4_ = fVar14;
    auVar17._8_4_ = fVar13;
    auVar17._12_4_ = fVar16;
    auVar7._4_4_ = fVar15;
    auVar7._0_4_ = fVar14;
    auVar7._8_4_ = fVar13;
    auVar7._12_4_ = fVar16;
    auVar17 = NEON_ext(auVar17,auVar7,8,1);
    fVar13 = SQRT(auVar17._0_4_ + fVar14 + auVar17._4_4_ + fVar15);
  }
LAB_01a46658:
  *(float *)(param_1 + 0x46c) = fVar13;
  *(float *)(param_1 + 0x468) = fVar13;
  *(undefined2 *)(param_1 + 0xde01) = 0;
  *(undefined4 *)(param_1 + 0xdfb0) = 0;
  if (*(char *)(param_1 + 0xdfc0) != '\0') {
    *(undefined1 *)(param_1 + 0xdfc0) = 0;
  }
  *(undefined8 *)(param_1 + 0xdfe0) = 0;
  *(undefined1 *)(param_1 + 0xe064) = 0;
  *pcVar2 = '\x01';
  *(undefined8 *)(param_1 + 0xe0c0) = *(undefined8 *)(param_1 + 0xdf90);
  *(undefined8 *)(param_1 + 0xe0c8) = *(undefined8 *)(param_1 + 0xdf98);
  *(undefined8 *)(param_1 + 0xe0d0) = *(undefined8 *)(param_1 + 0xdf90);
  *(undefined8 *)(param_1 + 0xe0d8) = *(undefined8 *)(param_1 + 0xdf98);
  *(undefined8 *)(param_1 + 0xe0e0) = 0x100000001;
  *(undefined4 *)(param_1 + 0xe0e8) = 0;
  if (((*(long *)(param_1 + 0xe0f0) != 0) && (FUN_009b8830(&local_70), local_70 != (long *)0x0)) &&
     (FUN_01f32e3c(), local_70 != (long *)0x0)) {
    lVar11 = local_70[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar10 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
}


