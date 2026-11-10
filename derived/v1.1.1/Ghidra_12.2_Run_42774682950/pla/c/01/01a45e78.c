/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a45e78; name: FUN_01a45e78
 */


void FUN_01a45e78(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  long *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (*(char *)(param_1 + 0xde00) != '\0') {
    if (*(char *)(param_1 + 0xe110) == '\0') {
      if (0.0 < *(float *)(param_1 + 0xdfb0)) {
        lVar9 = 0xdf20;
      }
      else {
        lVar9 = 0xdee0;
      }
      puVar2 = (undefined8 *)(param_1 + lVar9);
      local_48 = puVar2[7];
      local_58 = puVar2[5];
      local_68 = puVar2[3];
      local_78 = puVar2[1];
      local_80 = (long *)*puVar2;
      local_70 = puVar2[2];
      local_60 = puVar2[4];
      local_50 = puVar2[6];
      if (*(char *)(param_1 + 0xe064) != '\0') {
        FUN_01a470ac(&local_c0,param_1,&local_80);
        local_60 = CONCAT44(uStack_9c,local_a0);
        local_68 = local_a8;
        local_58 = CONCAT44(uStack_94,local_98);
        local_50 = local_90;
        local_70 = local_b0;
        local_80 = local_c0;
        local_78 = local_b8;
      }
      FUN_01832100(&local_c0,&local_80,1);
      local_60 = CONCAT44(uStack_9c,local_a0);
      local_68 = local_a8;
      local_58 = CONCAT44(uStack_94,local_98);
      local_50 = local_90;
      local_70 = local_b0;
      local_80 = local_c0;
      local_78 = local_b8;
      lVar9 = param_1 + 0x5b0;
      if ((*(int *)(param_1 + 0xdd50) == 0) && (*(char *)(param_1 + 0xe328) != '\0')) {
        lVar8 = param_1 + 0xe340;
      }
      else {
        lVar8 = param_1 + (long)*(int *)(param_1 + 0xdd50) * 0x960 + 0xf10;
      }
      FUN_019039e0(lVar9,lVar8);
      fVar10 = (float)FUN_01904460(local_60._4_4_,lVar9);
      *(double *)(param_1 + 0x700) = (double)fVar10;
      FUN_01903f90(&local_c0,lVar9);
      *(undefined4 *)(param_1 + 0xdd80) = (undefined4)local_60;
      uVar4 = *(uint *)(param_1 + 0xdff0);
      *(undefined8 *)(param_1 + 0x4a8) = local_58;
      *(undefined8 *)(param_1 + 0x498) = local_68;
      *(undefined8 *)(param_1 + 0x488) = local_78;
      *(undefined8 *)(param_1 + 0x490) = local_70;
      *(long **)(param_1 + 0x480) = local_80;
      *(undefined8 *)(param_1 + 0x4b0) = local_50;
      *(undefined8 *)(param_1 + 0x4a0) = local_60;
      *(undefined8 *)(param_1 + 0x510) = local_70;
      *(long **)(param_1 + 0x500) = local_80;
      *(undefined8 *)(param_1 + 0x508) = local_78;
      *(undefined8 *)(param_1 + 0x530) = local_50;
      *(undefined8 *)(param_1 + 0x520) = local_60;
      *(undefined8 *)(param_1 + 0x528) = local_58;
      *(undefined8 *)(param_1 + 0x518) = local_68;
      *(undefined4 *)(param_1 + 0x4e0) = (undefined4)local_60;
      *(undefined8 *)(param_1 + 0x4c8) = local_b8;
      *(long **)(param_1 + 0x4c0) = local_c0;
      *(undefined8 *)(param_1 + 0x4d8) = local_a8;
      *(undefined8 *)(param_1 + 0x4d0) = local_b0;
      *(ulong *)(param_1 + 0x4e4) = CONCAT44(local_98,uStack_9c);
      *(undefined4 *)(param_1 + 0x4ec) = local_58._4_4_;
      *(undefined4 *)(param_1 + 0x4f0) = (undefined4)local_90;
      *(undefined4 *)(param_1 + 0x4f4) = 1;
      *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0xdff4);
      *(uint *)(param_1 + 0x548) = uVar4;
      if (uVar4 == 0) {
        fVar10 = 1.0;
      }
      else {
        fVar10 = 1.0 / (float)uVar4;
      }
      *(float *)(param_1 + 0x544) = fVar10;
      *(undefined4 *)(param_1 + 0x54c) = 0;
      *(undefined4 *)(param_1 + 0x3e4) = 1;
    }
    else {
      local_a8 = *(undefined8 *)(param_1 + 0xe208);
      local_98 = (undefined4)*(undefined8 *)(param_1 + 0xe218);
      uStack_94 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xe218) >> 0x20);
      local_b8 = *(undefined8 *)(param_1 + 0xe1f8);
      local_90 = *(undefined8 *)(param_1 + 0xe220);
      local_a0 = (undefined4)*(undefined8 *)(param_1 + 0xe210);
      uStack_9c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xe210) >> 0x20);
      local_c0 = *(long **)(param_1 + 0xe1f0);
      local_b0 = *(undefined8 *)(param_1 + 0xe200);
      FUN_01832100(&local_80,&local_c0,0);
      local_a8 = local_68;
      local_a0 = (undefined4)local_60;
      uStack_9c = (undefined4)((ulong)local_60 >> 0x20);
      local_98 = (undefined4)local_58;
      uStack_94 = (undefined4)((ulong)local_58 >> 0x20);
      local_90 = local_50;
      local_b0 = local_70;
      local_c0 = local_80;
      local_b8 = local_78;
      FUN_01a47264(&local_80,param_1,1);
      uVar4 = *(uint *)(param_1 + 0xe25c);
      *(ulong *)(param_1 + 0xe148) = CONCAT44(uStack_94,local_98);
      *(undefined8 *)(param_1 + 0xe138) = local_a8;
      *(undefined8 *)(param_1 + 0xe128) = local_b8;
      *(undefined8 *)(param_1 + 0xe130) = local_b0;
      *(long **)(param_1 + 0xe120) = local_c0;
      *(undefined8 *)(param_1 + 0xe150) = local_90;
      *(ulong *)(param_1 + 0xe140) = CONCAT44(uStack_9c,local_a0);
      *(undefined8 *)(param_1 + 0xe1b0) = local_b0;
      *(long **)(param_1 + 0xe1a0) = local_c0;
      *(undefined8 *)(param_1 + 0xe1a8) = local_b8;
      *(undefined8 *)(param_1 + 0xe1d0) = local_90;
      *(ulong *)(param_1 + 0xe1c0) = CONCAT44(uStack_9c,local_a0);
      *(ulong *)(param_1 + 0xe1c8) = CONCAT44(uStack_94,local_98);
      *(undefined8 *)(param_1 + 0xe1b8) = local_a8;
      *(undefined8 *)(param_1 + 0xe170) = local_70;
      *(undefined8 *)(param_1 + 0xe168) = local_78;
      *(long **)(param_1 + 0xe160) = local_80;
      *(undefined8 *)(param_1 + 0xe190) = local_50;
      *(undefined8 *)(param_1 + 0xe188) = local_58;
      *(undefined8 *)(param_1 + 0xe180) = local_60;
      *(undefined8 *)(param_1 + 0xe178) = local_68;
      *(undefined4 *)(param_1 + 0xe1e0) = *(undefined4 *)(param_1 + 0xe260);
      *(uint *)(param_1 + 0xe1e8) = uVar4;
      if (uVar4 == 0) {
        fVar10 = 1.0;
      }
      else {
        fVar10 = 1.0 / (float)uVar4;
      }
      *(float *)(param_1 + 0xe1e4) = fVar10;
      *(undefined4 *)(param_1 + 0xe1ec) = 0;
      *(undefined8 *)(param_1 + 0xe208) = local_a8;
      *(ulong *)(param_1 + 0xe218) = CONCAT44(uStack_94,local_98);
      *(long **)(param_1 + 0xe1f0) = local_c0;
      *(undefined8 *)(param_1 + 0xe1f8) = local_b8;
      *(undefined8 *)(param_1 + 0xe200) = local_b0;
      *(undefined8 *)(param_1 + 0xe220) = local_90;
      *(ulong *)(param_1 + 0xe210) = CONCAT44(uStack_9c,local_a0);
      *(undefined4 *)(param_1 + 0xe230) = uStack_9c;
      *(undefined4 *)(param_1 + 0xe234) = local_a0;
      *(undefined8 *)(param_1 + 0xe238) = 0;
      *(undefined1 *)(param_1 + 0xe250) = 0;
      *(undefined8 *)(param_1 + 0x434) = 0;
      *(undefined8 *)(param_1 + 0x43c) = 0x3f8000003f800000;
      fVar10 = (float)*(undefined8 *)(param_1 + 0x358);
      if (*(char *)(param_1 + 0x370) != '\0') {
        fVar11 = (float)*(undefined8 *)(param_1 + 0x350) - *(float *)(param_1 + 0x340);
        fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x350) >> 0x20) -
                 *(float *)(param_1 + 0x344);
        fVar10 = fVar10 - *(float *)(param_1 + 0x348);
        fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0x358) >> 0x20) -
                 *(float *)(param_1 + 0x34c);
        fVar11 = fVar11 * fVar11;
        fVar12 = fVar12 * fVar12;
        fVar10 = fVar10 * fVar10;
        fVar13 = fVar13 * fVar13;
        auVar14._4_4_ = fVar12;
        auVar14._0_4_ = fVar11;
        auVar14._8_4_ = fVar10;
        auVar14._12_4_ = fVar13;
        auVar7._4_4_ = fVar12;
        auVar7._0_4_ = fVar11;
        auVar7._8_4_ = fVar10;
        auVar7._12_4_ = fVar13;
        auVar14 = NEON_ext(auVar14,auVar7,8,1);
        fVar10 = SQRT(auVar14._0_4_ + fVar11 + auVar14._4_4_ + fVar12);
      }
      *(float *)(param_1 + 0x46c) = fVar10;
      *(float *)(param_1 + 0x468) = fVar10;
      *(undefined1 *)(param_1 + 0xde01) = 0;
      *(undefined1 *)(param_1 + 0xe110) = 1;
    }
    *(undefined2 *)(param_1 + 0xde01) = 0;
    *(undefined4 *)(param_1 + 0xdfb0) = 0;
    if (*(char *)(param_1 + 0xdfc0) != '\0') {
      *(undefined1 *)(param_1 + 0xdfc0) = 0;
    }
    *(undefined8 *)(param_1 + 0xdfe0) = 0;
    *(undefined1 *)(param_1 + 0xe064) = 0;
    *(undefined1 *)(param_1 + 0xde00) = 0;
    if (((*(long *)(param_1 + 0xe0f0) != 0) && (FUN_009b8830(&local_80), local_80 != (long *)0x0))
       && ((*(char *)(param_1 + 0xdf60) == '\0' ||
           (FUN_01f333e4(local_80,param_1 + 0xdf70), local_80 != (long *)0x0)))) {
      lVar9 = local_80[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
  }
  return;
}


