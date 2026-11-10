/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033188c8; name: FUN_033188c8
 */


int FUN_033188c8(long *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [16];
  uint local_b0 [14];
  char *local_78;
  undefined8 uStack_70;
  int local_60 [2];
  int local_58 [2];
  
  local_60[0] = 0;
  if (param_2 == param_3) {
    local_58[0] = 0;
  }
  else {
    puVar11 = param_2;
    do {
      iVar7 = FUN_03318fd0(param_1,*puVar11);
      if ((iVar7 < 0) && (FUN_03319240(local_60), *(char *)*param_1 != '\0')) {
        return local_60[0];
      }
      puVar11 = puVar11 + 1;
    } while (param_3 != puVar11);
    local_58[0] = local_60[0];
    if (local_60[0] < 0) {
      if (*(char *)(*(long *)(*param_1 + 0x28) + 0x50) == '\0') {
        return local_60[0];
      }
      FUN_03326994(local_b0,*(long *)(*param_1 + 0x28),1);
      uStack_70 = 0x428;
LAB_03318acc:
      local_78 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      uVar10 = FUN_03326338(local_b0,"HK_RETURN_IF_FAILED({}) returning {}. ",&DAT_0434f920,"status"
                            ,local_58);
      FUN_03326338(uVar10,&DAT_03996322,PTR_DAT_04372528);
      FUN_033269dc(local_b0);
      return local_58[0];
    }
    puVar11 = param_2;
    do {
      iVar7 = FUN_03319250(param_1,*puVar11);
      if ((iVar7 < 0) && (FUN_03319240(local_60), *(char *)*param_1 != '\0')) {
        return local_60[0];
      }
      puVar11 = puVar11 + 1;
    } while (param_3 != puVar11);
    local_58[0] = local_60[0];
    if (local_60[0] < 0) {
      if (*(char *)(*(long *)(*param_1 + 0x28) + 0x50) == '\0') {
        return local_60[0];
      }
      FUN_03326994(local_b0,*(long *)(*param_1 + 0x28),1);
      uStack_70 = 0x430;
      goto LAB_03318acc;
    }
    puVar11 = param_2;
    do {
      iVar7 = FUN_033195e8(param_1,*puVar11);
      if ((iVar7 < 0) && (FUN_03319240(local_60), *(char *)*param_1 != '\0')) {
        return local_60[0];
      }
      puVar11 = puVar11 + 1;
    } while (param_3 != puVar11);
    local_58[0] = local_60[0];
    if (local_60[0] < 0) {
      if (*(char *)(*(long *)(*param_1 + 0x28) + 0x50) == '\0') {
        return local_60[0];
      }
      FUN_03326994(local_b0,*(long *)(*param_1 + 0x28),1);
      uStack_70 = 0x436;
      goto LAB_03318acc;
    }
    puVar11 = param_2;
    do {
      iVar7 = FUN_03319704(param_1,*puVar11);
      if ((iVar7 < 0) && (FUN_03319240(local_60), *(char *)*param_1 != '\0')) {
        return local_60[0];
      }
      puVar11 = puVar11 + 1;
    } while (param_3 != puVar11);
    local_58[0] = local_60[0];
    if (local_60[0] < 0) {
      if (*(char *)(*(long *)(*param_1 + 0x28) + 0x50) == '\0') {
        return local_60[0];
      }
      FUN_03326994(local_b0,*(long *)(*param_1 + 0x28),1);
      uStack_70 = 0x43d;
      goto LAB_03318acc;
    }
    puVar11 = param_2;
    do {
      iVar7 = FUN_0331993c(param_1,*puVar11);
      if ((iVar7 < 0) && (FUN_03319240(local_60), *(char *)*param_1 != '\0')) {
        return local_60[0];
      }
      puVar11 = puVar11 + 1;
    } while (param_3 != puVar11);
    local_58[0] = local_60[0];
    if (local_60[0] < 0) {
      if (*(char *)(*(long *)(*param_1 + 0x28) + 0x50) == '\0') {
        return local_60[0];
      }
      FUN_03326994(local_b0,*(long *)(*param_1 + 0x28),1);
      uStack_70 = 0x444;
      goto LAB_03318acc;
    }
  }
  iVar7 = local_58[0];
  puVar5 = PTR_PTR_0434a080;
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0x8000000000000000;
  uVar4 = *(uint *)(param_4 + 1);
  puVar11 = (undefined8 *)*param_4;
  local_b0[0] = uVar4;
  local_60[0] = local_58[0];
  if ((int)uVar4 < 1) {
    local_d0 = (undefined8 *)0x0;
    local_c8 = -0x8000000000000000;
  }
  else {
    local_d0 = (undefined8 *)FUN_032cf190(PTR_PTR_0434a080,8,local_b0);
    local_c8 = CONCAT44(local_b0[0],uVar4);
    uVar3 = uVar4 & 3;
    puVar2 = local_d0;
    if (2 < uVar4 - 1) {
      iVar8 = uVar3 - uVar4;
      puVar9 = local_d0;
      do {
        *puVar9 = *puVar11;
        puVar9[1] = puVar11[1];
        puVar9[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar2 = puVar9 + 4;
        puVar11 = puVar11 + 4;
        iVar8 = iVar8 + 4;
        puVar9[3] = *puVar1;
        puVar9 = puVar2;
      } while (iVar8 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *puVar11;
      puVar2 = puVar2 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  FUN_032c2680(auStack_c0,param_4 + 2);
  iVar8 = FUN_0331acb8(param_1,param_2,param_3,&local_d0);
  if ((-1 < iVar8) || (FUN_03319240(local_60), iVar7 = local_60[0], *(char *)*param_1 == '\0')) {
    local_58[0] = iVar7;
    if (iVar7 < 0) {
      if (*(char *)(*(long *)(*param_1 + 0x28) + 0x50) != '\0') {
        FUN_03326994(local_b0,*(long *)(*param_1 + 0x28),1);
        local_78 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        uStack_70 = 0x449;
        uVar10 = FUN_03326338(local_b0,"HK_RETURN_IF_FAILED({}) returning {}. ",&DAT_0434f920,
                              "status",local_58);
        FUN_03326338(uVar10,&DAT_03996322,PTR_DAT_04372528);
        FUN_033269dc(local_b0);
      }
      goto LAB_03318bc8;
    }
    if (&local_d0 != (undefined8 **)param_4) {
      *(undefined4 *)(param_4 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)param_4 + 0xc)) && (*param_4 != 0)) {
        FUN_032cf244(puVar5,*param_4,8,*(uint *)((long)param_4 + 0xc) & 0x3fffffff);
      }
      *param_4 = 0;
      param_4[1] = -0x8000000000000000;
      if (local_c8 < 0) {
        FUN_032bcf84(puVar5,&local_d0,8);
      }
      *param_4 = (long)local_d0;
      *(undefined4 *)(param_4 + 1) = (undefined4)local_c8;
      *(uint *)((long)param_4 + 0xc) = local_c8._4_4_;
      local_d0 = (undefined8 *)0x0;
      local_c8 = 0;
    }
    FUN_032c2a14(param_4 + 2,auStack_c0);
  }
  local_58[0] = iVar7;
LAB_03318bc8:
  FUN_032c20d0(auStack_c0);
  lVar6 = local_c8;
  uVar4 = local_c8._4_4_;
  local_c8 = (ulong)local_c8._4_4_ << 0x20;
  if ((-1 < lVar6) && (local_d0 != (undefined8 *)0x0)) {
    FUN_032cf244(puVar5,local_d0,8,uVar4 & 0x3fffffff);
  }
  return local_58[0];
}


