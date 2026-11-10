/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0320aad4; name: FUN_0320aad4
 */


void FUN_0320aad4(long param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  uint uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined1 auVar24 [16];
  int local_2e0 [2];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  long local_268;
  undefined8 local_260;
  long local_258;
  int local_250;
  long local_248;
  undefined8 local_240;
  long local_238;
  int local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 *local_210;
  undefined8 local_208;
  undefined8 *local_200;
  int local_1f8;
  undefined4 *local_1f0;
  undefined4 uStack_1e8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  uint local_9c;
  long local_98;
  undefined8 local_90;
  int local_78 [2];
  long local_70;
  
  lVar10 = tpidr_el0;
  if (*(long *)(lVar10 + 0x38d490) == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar14;
    lVar14 = *(long *)(lVar14 + 0x10);
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar10 + 0x38d490) + 0x10);
  }
  if (lVar14 != 0) {
    FUN_032d5af0(lVar14,"TtCutFace",9);
  }
  local_70 = lVar14;
  FUN_033299e0(0x72ec1a2d);
  lVar22 = *(long *)(param_1 + 0x918);
  puVar16 = (uint *)(lVar22 + (long)param_3 * 0x30 + 0x10);
  uVar21 = (ulong)*puVar16 & 0x3fffff;
  lVar23 = (long)param_3;
  iVar20 = (int)uVar21;
  if (0 < *(int *)(DAT_04434dc8 + 0x18)) {
    plVar11 = (long *)(lVar22 + lVar23 * 0x30 + 8);
    FUN_031530a8(&local_248,*(undefined4 *)(DAT_04434dc8 + 0x20),
                 *(undefined4 *)(*(long *)(*plVar11 + 0x20) + 0x180),0);
    uVar5 = (undefined4)local_248;
    local_1f0 = (undefined4 *)0x0;
    if ((lVar14 != 0) &&
       (FUN_032d5c74(lVar14,&DAT_038f7b98,&local_1f0,&DAT_04356710,4,4),
       local_1f0 != (undefined4 *)0x0)) {
      *local_1f0 = uVar5;
    }
    local_78[0] = iVar20;
    FUN_03193814(*plVar11,local_78,&local_1f0);
    lVar12 = *(long *)(lVar10 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar12;
    }
    local_210 = (undefined8 *)0x0;
    if ((*(long *)(lVar12 + 0x10) != 0) &&
       (FUN_032d5c74(*(long *)(lVar12 + 0x10),&DAT_038f7b98,&local_210,&DAT_04356378,0xc,4),
       local_210 != (undefined8 *)0x0)) {
      *local_210 = local_1f0;
      *(undefined4 *)(local_210 + 1) = uStack_1e8;
    }
  }
  if (lVar14 != 0) {
    FUN_032d5af0(lVar14,"Ttinit",6);
  }
  FUN_03264350(&local_1f0);
  local_b0 = 0xffffffff;
  local_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_9c = 0x80000000;
  local_90 = -0x8000000000000000;
  local_98 = 0;
  plVar11 = (long *)(lVar22 + lVar23 * 0x30 + 8);
  lVar17 = *plVar11;
  lVar12 = *(long *)(lVar17 + 0x20);
  iVar9 = iVar20 - *(int *)(lVar12 + 0x20);
  if (iVar20 < *(int *)(lVar12 + 0x20)) {
    iVar9 = iVar20;
    if ((*(int *)(lVar12 + 0x98) == 0) ||
       (iVar9 = *(int *)(*(long *)(lVar12 + 0x90) + uVar21 * 4), iVar9 != -1)) {
      lVar12 = *(long *)(lVar12 + 0xb0);
      goto LAB_0320ac00;
    }
    lVar12 = *(long *)(lVar12 + 0x18) + uVar21 * 0x10;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0xd0);
LAB_0320ac00:
    lVar12 = lVar12 + (long)iVar9 * 0x10;
  }
  sVar4 = *(short *)(lVar12 + 8);
  FUN_033299e0(0xbcdc1799);
  iVar9 = (int)sVar4 + 1;
  local_210 = (undefined8 *)0x0;
  local_208 = 0x8000000000000000;
  local_1f8 = iVar9;
  if ((uint)(int)sVar4 < 0xffffffff) {
    lVar12 = *(long *)(lVar10 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar12;
    }
    lVar12 = *(long *)(lVar12 + 8);
    uVar21 = (ulong)(int)(iVar9 * 0x10 + 0x7fU & 0xffffff80);
    if (uVar21 <= *(ulong *)(lVar12 + 0x10)) {
      local_200 = *(undefined8 **)(lVar12 + 0x18);
      uVar21 = (long)local_200 + uVar21;
      if (uVar21 <= *(ulong *)(lVar12 + 0x20)) {
        *(ulong *)(lVar12 + 0x18) = uVar21;
        goto LAB_0320ac78;
      }
    }
    local_200 = (undefined8 *)FUN_032ce670(lVar12);
  }
  else {
    local_200 = (undefined8 *)0x0;
  }
LAB_0320ac78:
  local_208 = CONCAT44(iVar9,(int)local_208) | 0x8000000000000000;
  local_210 = local_200;
  FUN_033299e0(0x9bbad363);
  local_218 = *(undefined8 *)(param_1 + 0x948);
  lVar12 = lVar22 + lVar23 * 0x30;
  local_220 = *(undefined8 *)(param_1 + 0x940);
  uVar3 = *(uint *)(lVar12 + 0x18);
  plVar2 = (long *)(*(long *)(param_1 + 0x928) + (long)*(int *)(lVar12 + 0x14) * 8);
  if (uVar3 == 0) {
    FUN_0325f380(&local_1f0,*puVar16,0);
  }
  else {
    iVar9 = 0;
    lVar12 = (long)(int)uVar3 << 3;
    plVar15 = plVar2;
    do {
      iVar8 = (**(code **)(**(long **)(*plVar15 + 0x20) + 0x20))();
      iVar9 = iVar8 + iVar9;
      lVar12 = lVar12 + -8;
      plVar15 = plVar15 + 1;
    } while (lVar12 != 0);
    FUN_0325f380(&local_1f0,*puVar16,iVar9);
    FUN_0325f3f4(&local_1f0,*(undefined8 *)(lVar17 + 0x20),&local_220,
                 *(char *)(lVar22 + lVar23 * 0x30 + 0x24) != '\0',*puVar16,&local_210);
  }
  if (lVar14 != 0) {
    FUN_032d5b34(lVar14,&DAT_0390f40e);
  }
  puVar6 = PTR_PTR_0434a080;
  uVar5 = *(undefined4 *)(lVar22 + lVar23 * 0x30 + 0x1c);
  local_228 = CONCAT44(uVar5,uVar5);
  if (0 < (int)uVar3) {
    uVar21 = 0;
    puVar1 = (undefined4 *)(lVar22 + lVar23 * 0x30 + 0x20);
    do {
      FUN_033299e0(0xf3cd92e7);
      local_248 = 0;
      local_240 = 0x8000000000000000;
      local_230 = 0x800;
      lVar12 = *(long *)(lVar10 + 0x38d490);
      if (lVar12 == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar12;
      }
      lVar12 = *(long *)(lVar12 + 8);
      if (*(ulong *)(lVar12 + 0x10) < 0x8000) {
LAB_0320b4c0:
        lVar17 = FUN_032ce670(lVar12,0x8000);
      }
      else {
        lVar17 = *(long *)(lVar12 + 0x18);
        if (*(ulong *)(lVar12 + 0x20) < lVar17 + 0x8000U) goto LAB_0320b4c0;
        *(ulong *)(lVar12 + 0x18) = lVar17 + 0x8000U;
      }
      local_240 = CONCAT44(0x80000800,(undefined4)local_240);
      local_248 = lVar17;
      local_238 = lVar17;
      FUN_033299e0(0xa3c9ad65);
      local_268 = 0;
      local_260 = 0x8000000000000000;
      local_250 = 0x10;
      lVar12 = *(long *)(lVar10 + 0x38d490);
      if (lVar12 == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar12;
      }
      lVar12 = *(long *)(lVar12 + 8);
      if (*(ulong *)(lVar12 + 0x10) < 0x80) {
LAB_0320b4d0:
        lVar17 = FUN_032ce670(lVar12,0x80);
      }
      else {
        lVar17 = *(long *)(lVar12 + 0x18);
        if (*(ulong *)(lVar12 + 0x20) < lVar17 + 0x80U) goto LAB_0320b4d0;
        *(ulong *)(lVar12 + 0x18) = lVar17 + 0x80U;
      }
      local_260 = CONCAT44(0x80000010,(int)local_260);
      puVar13 = (undefined8 *)plVar2[uVar21];
      local_288 = puVar13[1];
      plVar15 = (long *)puVar13[4];
      local_290 = *puVar13;
      local_278 = puVar13[3];
      local_280 = puVar13[2];
      local_268 = lVar17;
      local_258 = lVar17;
      (**(code **)(*plVar15 + 0x48))(*puVar1,plVar15,&local_290,param_1 + 0x940,&local_2b0);
      if (lVar14 != 0) {
        FUN_032d5af0(lVar14,"TtgatherSilhouettes",0x13);
      }
      local_2c8 = uStack_2a8;
      uStack_2c0 = local_2a0;
      local_2b8 = uStack_298;
      local_2d8 = 0;
      uStack_2d0 = local_2b0;
      FUN_031f1660(&uStack_2d0,&local_220,&local_228,&local_2d8,1);
      iVar9 = FUN_03198de0(&uStack_2d0,local_210,local_210 + (long)(int)local_208 * 2);
      if (iVar9 != 0) {
        FUN_033299e0(0x354af60);
        (**(code **)(*plVar15 + 0x38))
                  (*puVar1,plVar15,&local_290,param_1 + 0x940,&local_248,&local_268);
        if (lVar14 != 0) {
          FUN_032d5b34(lVar14,&DAT_0390f40e);
          FUN_032d5af0(lVar14,"TtaddToCutter",0xd);
        }
        uVar19 = local_260 & 0xffffffff;
        if (0 < (int)local_260) {
          uVar18 = 0;
          iVar9 = 0;
          do {
            iVar8 = *(int *)(local_268 + uVar18 * 4);
            if (1 < iVar8) {
              lVar12 = local_248 + (long)iVar9 * 0x10;
              FUN_0325f7a4(&local_1f0,lVar12,lVar12 + (long)iVar8 * 0x10,plVar15);
            }
            uVar18 = uVar18 + 1;
            iVar9 = iVar8 + iVar9;
          } while (uVar19 != uVar18);
        }
      }
      if (lVar14 != 0) {
        FUN_032d5b34(lVar14,&DAT_0390f40e);
      }
      iVar9 = local_250;
      lVar12 = local_258;
      if (local_258 == local_268) {
        local_260 = local_260 & 0xffffffff00000000;
      }
      lVar17 = *(long *)(lVar10 + 0x38d490);
      if (lVar17 == 0) {
        lVar17 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar17;
      }
      lVar17 = *(long *)(lVar17 + 8);
      uVar19 = (ulong)(int)(iVar9 * 4 + 0x7fU & 0xffffff80);
      if (((*(ulong *)(lVar17 + 0x10) < uVar19) || (*(long *)(lVar17 + 0x18) != uVar19 + lVar12)) ||
         (*(long *)(lVar17 + 0x28) == lVar12)) {
        FUN_032cedf0(lVar17,lVar12);
      }
      else {
        *(long *)(lVar17 + 0x18) = lVar12;
      }
      uVar19 = local_260;
      uVar7 = local_260._4_4_;
      local_260 = (ulong)local_260._4_4_ << 0x20;
      if ((-1 < (long)uVar19) && (local_268 != 0)) {
        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_268,uVar7 << 2);
      }
      iVar9 = local_230;
      lVar12 = local_238;
      if (local_238 == local_248) {
        local_240 = local_240 & 0xffffffff00000000;
      }
      lVar17 = *(long *)(lVar10 + 0x38d490);
      if (lVar17 == 0) {
        lVar17 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar17;
      }
      lVar17 = *(long *)(lVar17 + 8);
      uVar19 = (ulong)(int)(iVar9 * 0x10 + 0x7fU & 0xffffff80);
      if (((*(ulong *)(lVar17 + 0x10) < uVar19) || (*(long *)(lVar17 + 0x18) != uVar19 + lVar12)) ||
         (*(long *)(lVar17 + 0x28) == lVar12)) {
        FUN_032cedf0(lVar17,lVar12);
      }
      else {
        *(long *)(lVar17 + 0x18) = lVar12;
      }
      uVar19 = local_240;
      uVar18 = (ulong)local_240._4_4_;
      local_240 = (ulong)local_240._4_4_ << 0x20;
      if ((-1 < (long)uVar19) && (local_248 != 0)) {
        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_248,(uVar18 & 0x3fffffff) << 4);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar3);
  }
  FUN_033299e0(0xb488d316);
  if (lVar14 != 0) {
    FUN_032d5af0(lVar14,"Ttconvexify",0xb);
  }
  local_2e0[0] = iVar20;
  local_248 = lVar14;
  auVar24 = FUN_03153e20(*plVar11,local_2e0);
  puVar13 = (undefined8 *)(lVar22 + lVar23 * 0x30);
  FUN_0325f884(*(undefined4 *)(param_1 + 0x938),&local_1f0,puVar13[5],*plVar11,local_210,
               local_210 + (long)(int)local_208 * 2,auVar24._0_8_,auVar24._8_8_,*puVar13);
  if (lVar14 != 0) {
    FUN_032d5b34(lVar14,&DAT_0390f40e);
  }
  FUN_033299e0(0x22353398);
  iVar20 = local_1f8;
  puVar13 = local_200;
  if (local_200 == local_210) {
    local_208 = local_208 & 0xffffffff00000000;
  }
  lVar22 = *(long *)(lVar10 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar22;
  }
  lVar10 = *(long *)(lVar22 + 8);
  uVar21 = (ulong)(int)(iVar20 * 0x10 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar10 + 0x10) < uVar21) || (*(long *)(lVar10 + 0x18) != uVar21 + (long)puVar13))
     || (*(undefined8 **)(lVar10 + 0x28) == puVar13)) {
    FUN_032cedf0(lVar10,puVar13);
  }
  else {
    *(undefined8 **)(lVar10 + 0x18) = puVar13;
  }
  uVar21 = local_208;
  puVar6 = PTR_PTR_0434a080;
  uVar19 = (ulong)local_208._4_4_;
  local_208 = (ulong)local_208._4_4_ << 0x20;
  if ((-1 < (long)uVar21) && (local_210 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_210,(uVar19 & 0x3fffffff) << 4);
  }
  lVar10 = local_90;
  uVar21 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_98 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_98,(uVar21 & 0x3fffffff) * 0x30);
  }
  local_98 = 0;
  local_90 = CONCAT44(0x80000000,(undefined4)local_90);
  local_a0 = 0;
  if ((-1 < (int)local_9c) && (CONCAT44(uStack_a4,uStack_a8) != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,CONCAT44(uStack_a4,uStack_a8),((ulong)local_9c & 0x3fffffff) << 3);
  }
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_9c = 0x80000000;
  FUN_031cd520(&local_1f0);
  if (lVar14 != 0) {
    FUN_032d5b34(lVar14,&DAT_0390f40e);
  }
  return;
}


