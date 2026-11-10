/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00266e08; name: FUN_00266e08
 */


undefined8 FUN_00266e08(long param_1,undefined8 param_2)

{
  short *psVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ushort uVar20;
  undefined8 local_418;
  undefined1 *local_410;
  undefined8 *local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8 [32];
  undefined1 auStack_2e8 [4];
  short local_2e4 [2];
  undefined8 local_2e0;
  char *local_2d8 [79];
  
  if (*(long *)(param_1 + 0x340) == 0) {
    return 0;
  }
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x340) + 8);
  memset(auStack_2e8,0,0x280);
  if (*(long *)(param_1 + 0x78) == 0) {
    uVar14 = 0;
    uVar6 = 0;
  }
  else {
    iVar4 = FUN_0087d8bc(uVar11,0,0,"sysPosAttr");
    bVar2 = iVar4 != -1;
    if (bVar2) {
      FUN_00876d40(auStack_2e8);
      local_2d8[0] = "sysPosAttr";
      local_2e4[0] = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),0)
      ;
      local_2e0._4_4_ =
           (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),0);
      local_2e0._0_4_ =
           (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),0);
    }
    uVar15 = (ulong)bVar2;
    iVar4 = FUN_0087d8bc(uVar11,0,0,"sysNormalAttr");
    uVar14 = uVar15;
    if (iVar4 != -1) {
      FUN_00876d40(auStack_2e8 + uVar15 * 0x28);
      local_2d8[uVar15 * 5] = "sysNormalAttr";
      sVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),1);
      local_2e4[uVar15 * 0x14] = sVar3;
      uVar5 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),1);
      *(undefined4 *)((long)local_2d8 + uVar15 * 0x28 + -4) = uVar5;
      uVar5 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),1);
      uVar14 = (ulong)(bVar2 + 1);
      *(undefined4 *)(local_2e4 + uVar15 * 0x14 + 2) = uVar5;
    }
    iVar4 = FUN_0087d8bc(uVar11,0,0,"sysTangentAttr");
    uVar15 = uVar14;
    if (iVar4 != -1) {
      FUN_00876d40(auStack_2e8 + uVar14 * 0x28);
      local_2d8[uVar14 * 5] = "sysTangentAttr";
      sVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),2);
      local_2e4[uVar14 * 0x14] = sVar3;
      uVar5 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),2);
      *(undefined4 *)((long)local_2d8 + uVar14 * 0x28 + -4) = uVar5;
      uVar5 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),2);
      uVar15 = (ulong)((int)uVar14 + 1);
      *(undefined4 *)(local_2e4 + uVar14 * 0x14 + 2) = uVar5;
    }
    iVar4 = FUN_0087d8bc(uVar11,0,0,"sysVertexColor0Attr");
    uVar16 = uVar15;
    if (iVar4 != -1) {
      FUN_00876d40(auStack_2e8 + uVar15 * 0x28);
      local_2d8[uVar15 * 5] = "sysVertexColor0Attr";
      sVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),3);
      local_2e4[uVar15 * 0x14] = sVar3;
      uVar5 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),3);
      *(undefined4 *)((long)local_2d8 + uVar15 * 0x28 + -4) = uVar5;
      uVar5 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),3);
      uVar16 = (ulong)((int)uVar15 + 1);
      *(undefined4 *)(local_2e4 + uVar15 * 0x14 + 2) = uVar5;
    }
    iVar4 = FUN_0087d8bc(uVar11,0,0,"sysTexCoordAttr");
    uVar14 = uVar16;
    if (iVar4 != -1) {
      FUN_00876d40(auStack_2e8 + uVar16 * 0x28);
      local_2d8[uVar16 * 5] = "sysTexCoordAttr";
      sVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),4);
      local_2e4[uVar16 * 0x14] = sVar3;
      uVar5 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),4);
      *(undefined4 *)((long)local_2d8 + uVar16 * 0x28 + -4) = uVar5;
      uVar5 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),4);
      uVar14 = (ulong)((int)uVar16 + 1);
      *(undefined4 *)(local_2e4 + uVar16 * 0x14 + 2) = uVar5;
    }
    uVar6 = (**(code **)(**(long **)(param_1 + 0x78) + 0x30))();
  }
  iVar4 = FUN_0087d8bc(uVar11,0,0,"sysLocalPosAttr");
  if (iVar4 == -1) {
    uVar17 = 0xffffffff;
    uVar19 = uVar6;
  }
  else {
    FUN_00876d40(auStack_2e8 + uVar14 * 0x28);
    local_2e4[uVar14 * 0x14] = (short)uVar6;
    psVar1 = local_2e4 + uVar14 * 0x14 + 2;
    psVar1[0] = 0;
    psVar1[1] = 0;
    psVar1[2] = 0x1905;
    psVar1[3] = 0;
    local_2d8[uVar14 * 5] = "sysLocalPosAttr";
    uVar19 = uVar6 + 1;
    uVar17 = uVar6;
  }
  bVar2 = iVar4 != -1;
  uVar15 = (ulong)bVar2;
  *(uint *)(param_1 + 0x3a4) = uVar17;
  iVar4 = FUN_0087d8bc(uVar11,0,0,"sysLocalVecAttr");
  iVar13 = (int)uVar14;
  if (iVar4 == -1) {
    uVar8 = 0xffffffff;
    uVar17 = uVar19;
  }
  else {
    uVar17 = (uint)bVar2;
    uVar16 = (ulong)(uVar17 + iVar13);
    FUN_00876d40(auStack_2e8 + uVar16 * 0x28);
    local_2e4[uVar16 * 0x14] = (short)uVar19;
    uVar15 = (ulong)(uVar17 + 1);
    psVar1 = local_2e4 + uVar16 * 0x14 + 2;
    psVar1[0] = 0;
    psVar1[1] = 0;
    psVar1[2] = 0x1905;
    psVar1[3] = 0;
    local_2d8[uVar16 * 5] = "sysLocalVecAttr";
    uVar17 = uVar19 + 1;
    uVar8 = uVar19;
  }
  *(uint *)(param_1 + 0x3a8) = uVar8;
  iVar4 = FUN_0087d8bc(uVar11,0,0,"sysLocalDiffAttr");
  if (iVar4 == -1) {
    uVar8 = 0xffffffff;
    uVar19 = uVar17;
  }
  else {
    uVar16 = (ulong)(uint)((int)uVar15 + iVar13);
    FUN_00876d40(auStack_2e8 + uVar16 * 0x28);
    local_2e4[uVar16 * 0x14] = (short)uVar17;
    uVar15 = (ulong)((int)uVar15 + 1);
    psVar1 = local_2e4 + uVar16 * 0x14 + 2;
    psVar1[0] = 0;
    psVar1[1] = 0;
    psVar1[2] = 0x1905;
    psVar1[3] = 0;
    local_2d8[uVar16 * 5] = "sysLocalDiffAttr";
    uVar19 = uVar17 + 1;
    uVar8 = uVar17;
  }
  *(uint *)(param_1 + 0x3ac) = uVar8;
  iVar4 = FUN_0087d8bc(uVar11,0,0,"sysScaleAttr");
  if (iVar4 == -1) {
    uVar8 = 0xffffffff;
    uVar17 = uVar19;
  }
  else {
    uVar16 = (ulong)(uint)((int)uVar15 + iVar13);
    FUN_00876d40(auStack_2e8 + uVar16 * 0x28);
    local_2e4[uVar16 * 0x14] = (short)uVar19;
    uVar15 = (ulong)((int)uVar15 + 1);
    psVar1 = local_2e4 + uVar16 * 0x14 + 2;
    psVar1[0] = 0;
    psVar1[1] = 0;
    psVar1[2] = 0x1905;
    psVar1[3] = 0;
    local_2d8[uVar16 * 5] = "sysScaleAttr";
    uVar17 = uVar19 + 1;
    uVar8 = uVar19;
  }
  *(uint *)(param_1 + 0x3b0) = uVar8;
  iVar4 = FUN_0087d8bc(uVar11,0,0,"sysRandomAttr");
  if (iVar4 == -1) {
    uVar8 = 0xffffffff;
    uVar19 = uVar17;
  }
  else {
    uVar16 = (ulong)(uint)((int)uVar15 + iVar13);
    FUN_00876d40(auStack_2e8 + uVar16 * 0x28);
    local_2e4[uVar16 * 0x14] = (short)uVar17;
    uVar15 = (ulong)((int)uVar15 + 1);
    psVar1 = local_2e4 + uVar16 * 0x14 + 2;
    psVar1[0] = 0;
    psVar1[1] = 0;
    psVar1[2] = 0x1905;
    psVar1[3] = 0;
    local_2d8[uVar16 * 5] = "sysRandomAttr";
    uVar19 = uVar17 + 1;
    uVar8 = uVar17;
  }
  *(uint *)(param_1 + 0x3b4) = uVar8;
  iVar4 = FUN_0087d8bc(uVar11,0,0,"sysInitRotateAttr");
  if (iVar4 == -1) {
    uVar8 = 0xffffffff;
    uVar17 = uVar19;
  }
  else {
    uVar16 = (ulong)(uint)((int)uVar15 + iVar13);
    FUN_00876d40(auStack_2e8 + uVar16 * 0x28);
    local_2e4[uVar16 * 0x14] = (short)uVar19;
    uVar15 = (ulong)((int)uVar15 + 1);
    psVar1 = local_2e4 + uVar16 * 0x14 + 2;
    psVar1[0] = 0;
    psVar1[1] = 0;
    psVar1[2] = 0x1905;
    psVar1[3] = 0;
    local_2d8[uVar16 * 5] = "sysInitRotateAttr";
    uVar17 = uVar19 + 1;
    uVar8 = uVar19;
  }
  *(uint *)(param_1 + 0x3b8) = uVar8;
  iVar4 = FUN_0087d8bc(uVar11,0,0,"sysColor0Attr");
  if (iVar4 == -1) {
    uVar8 = 0xffffffff;
    uVar19 = uVar17;
  }
  else {
    uVar16 = (ulong)(uint)((int)uVar15 + iVar13);
    FUN_00876d40(auStack_2e8 + uVar16 * 0x28);
    local_2e4[uVar16 * 0x14] = (short)uVar17;
    uVar15 = (ulong)((int)uVar15 + 1);
    psVar1 = local_2e4 + uVar16 * 0x14 + 2;
    psVar1[0] = 0;
    psVar1[1] = 0;
    psVar1[2] = 0x1905;
    psVar1[3] = 0;
    local_2d8[uVar16 * 5] = "sysColor0Attr";
    uVar19 = uVar17 + 1;
    uVar8 = uVar17;
  }
  *(uint *)(param_1 + 0x3bc) = uVar8;
  iVar4 = FUN_0087d8bc(uVar11,0,0,"sysColor1Attr");
  if (iVar4 == -1) {
    uVar8 = 0xffffffff;
    uVar17 = uVar19;
  }
  else {
    uVar16 = (ulong)(uint)((int)uVar15 + iVar13);
    FUN_00876d40(auStack_2e8 + uVar16 * 0x28);
    local_2e4[uVar16 * 0x14] = (short)uVar19;
    uVar15 = (ulong)((int)uVar15 + 1);
    psVar1 = local_2e4 + uVar16 * 0x14 + 2;
    psVar1[0] = 0;
    psVar1[1] = 0;
    psVar1[2] = 0x1905;
    psVar1[3] = 0;
    local_2d8[uVar16 * 5] = "sysColor1Attr";
    uVar17 = uVar19 + 1;
    uVar8 = uVar19;
  }
  *(uint *)(param_1 + 0x3c0) = uVar8;
  iVar4 = FUN_0087d8bc(uVar11,0,0,"sysEmtMat0Attr");
  if (iVar4 == -1) {
    uVar8 = 0xffffffff;
    uVar19 = uVar17;
  }
  else {
    uVar16 = (ulong)(uint)((int)uVar15 + iVar13);
    FUN_00876d40(auStack_2e8 + uVar16 * 0x28);
    local_2e4[uVar16 * 0x14] = (short)uVar17;
    uVar15 = (ulong)((int)uVar15 + 1);
    psVar1 = local_2e4 + uVar16 * 0x14 + 2;
    psVar1[0] = 0;
    psVar1[1] = 0;
    psVar1[2] = 0x1905;
    psVar1[3] = 0;
    local_2d8[uVar16 * 5] = "sysEmtMat0Attr";
    uVar19 = uVar17 + 1;
    uVar8 = uVar17;
  }
  *(uint *)(param_1 + 0x3c4) = uVar8;
  iVar4 = FUN_0087d8bc(uVar11,0,0,"sysEmtMat1Attr");
  if (iVar4 == -1) {
    uVar8 = 0xffffffff;
    uVar17 = uVar19;
  }
  else {
    uVar16 = (ulong)(uint)((int)uVar15 + iVar13);
    FUN_00876d40(auStack_2e8 + uVar16 * 0x28);
    local_2e4[uVar16 * 0x14] = (short)uVar19;
    uVar15 = (ulong)((int)uVar15 + 1);
    psVar1 = local_2e4 + uVar16 * 0x14 + 2;
    psVar1[0] = 0;
    psVar1[1] = 0;
    psVar1[2] = 0x1905;
    psVar1[3] = 0;
    local_2d8[uVar16 * 5] = "sysEmtMat1Attr";
    uVar17 = uVar19 + 1;
    uVar8 = uVar19;
  }
  *(uint *)(param_1 + 0x3c8) = uVar8;
  iVar4 = FUN_0087d8bc(uVar11,0,0,"sysEmtMat2Attr");
  iVar18 = (int)uVar15;
  if (iVar4 == -1) {
    *(undefined4 *)(param_1 + 0x3cc) = 0xffffffff;
    if (iVar18 == 0 && iVar13 == 0) goto LAB_0026758c;
  }
  else {
    uVar16 = (ulong)(uint)(iVar18 + iVar13);
    FUN_00876d40(auStack_2e8 + uVar16 * 0x28);
    local_2e4[uVar16 * 0x14] = (short)uVar17;
    uVar15 = (ulong)(iVar18 + 1U);
    psVar1 = local_2e4 + uVar16 * 0x14 + 2;
    psVar1[0] = 0;
    psVar1[1] = 0;
    psVar1[2] = 0x1905;
    psVar1[3] = 0;
    local_2d8[uVar16 * 5] = "sysEmtMat2Attr";
    *(uint *)(param_1 + 0x3cc) = uVar17;
    uVar17 = uVar17 + 1;
    if (iVar18 + 1U == 0 && iVar13 == 0) {
LAB_0026758c:
      iVar4 = FUN_0087d8bc(uVar11,0,0,"sysEmitterPluginAttr0");
      lVar9 = (long)(int)uVar17;
      FUN_00876d40(auStack_2e8 + (long)(int)uVar17 * 0x28);
      if (iVar4 != -1) {
        uVar17 = uVar17 + 1;
        local_2e4[lVar9 * 0x14] = 0;
        psVar1 = local_2e4 + lVar9 * 0x14 + 2;
        psVar1[0] = 0;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[lVar9 * 5] = "sysEmitterPluginAttr0";
        lVar9 = (long)(int)uVar17;
      }
      uVar20 = (ushort)(iVar4 != -1);
      iVar4 = FUN_0087d8bc(uVar11,0,0,"sysEmitterPluginAttr1");
      FUN_00876d40(auStack_2e8 + lVar9 * 0x28);
      lVar10 = lVar9;
      if (iVar4 != -1) {
        uVar17 = uVar17 + 1;
        local_2e4[lVar9 * 0x14] = 0;
        uVar20 = uVar20 + 1;
        lVar10 = (long)(int)uVar17;
        psVar1 = local_2e4 + lVar9 * 0x14 + 2;
        psVar1[0] = 0x10;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[lVar9 * 5] = "sysEmitterPluginAttr1";
      }
      iVar4 = FUN_0087d8bc(uVar11,0,0,"sysEmitterPluginAttr2");
      FUN_00876d40(auStack_2e8 + lVar10 * 0x28);
      lVar9 = lVar10;
      if (iVar4 != -1) {
        uVar17 = uVar17 + 1;
        local_2e4[lVar10 * 0x14] = 0;
        uVar20 = uVar20 + 1;
        lVar9 = (long)(int)uVar17;
        psVar1 = local_2e4 + lVar10 * 0x14 + 2;
        psVar1[0] = 0x20;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[lVar10 * 5] = "sysEmitterPluginAttr2";
      }
      iVar4 = FUN_0087d8bc(uVar11,0,0,"sysEmitterPluginAttr3");
      FUN_00876d40(auStack_2e8 + lVar9 * 0x28);
      lVar10 = lVar9;
      if (iVar4 != -1) {
        local_2e4[lVar9 * 0x14] = 0;
        uVar20 = uVar20 + 1;
        lVar10 = (long)(int)(uVar17 + 1);
        psVar1 = local_2e4 + lVar9 * 0x14 + 2;
        psVar1[0] = 0x30;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[lVar9 * 5] = "sysEmitterPluginAttr3";
      }
      iVar4 = FUN_0087d8bc(uVar11,0,0,"sysEmitterPluginAttr4");
      FUN_00876d40(auStack_2e8 + lVar10 * 0x28);
      if (iVar4 != -1) {
        uVar20 = uVar20 + 1;
        local_2e4[lVar10 * 0x14] = 0;
        psVar1 = local_2e4 + lVar10 * 0x14 + 2;
        psVar1[0] = 0x40;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[lVar10 * 5] = "sysEmitterPluginAttr4";
      }
      *(undefined4 *)(param_1 + 0x3d0) = 0;
      goto LAB_00267760;
    }
  }
  uVar20 = 0;
LAB_00267760:
  local_3e8[0x1e] = 0;
  local_3e8[0x1f] = 0;
  local_3e8[0x1c] = 0;
  local_3e8[0x1d] = 0;
  local_3e8[0x1a] = 0;
  local_3e8[0x1b] = 0;
  local_3e8[0x18] = 0;
  local_3e8[0x19] = 0;
  local_3e8[0x16] = 0;
  local_3e8[0x17] = 0;
  local_3e8[0x14] = 0;
  local_3e8[0x15] = 0;
  local_3e8[0x12] = 0;
  local_3e8[0x13] = 0;
  local_3e8[0x10] = 0;
  local_3e8[0x11] = 0;
  local_3e8[0xe] = 0;
  local_3e8[0xf] = 0;
  local_3e8[0xc] = 0;
  local_3e8[0xd] = 0;
  local_3e8[10] = 0;
  local_3e8[0xb] = 0;
  local_3e8[8] = 0;
  local_3e8[9] = 0;
  local_3e8[6] = 0;
  local_3e8[7] = 0;
  local_3e8[4] = 0;
  local_3e8[5] = 0;
  local_3e8[2] = 0;
  local_3e8[3] = 0;
  local_3e8[0] = 0;
  local_3e8[1] = 0;
  FUN_00876d54(local_3e8);
  if ((iVar13 != 0) && (0 < (int)uVar6)) {
    uVar16 = 0;
    puVar12 = local_3e8;
    do {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x78) + 0x10))
                        (*(long **)(param_1 + 0x78),uVar16 & 0xffffffff);
      uVar16 = uVar16 + 1;
      *(undefined4 *)puVar12 = uVar5;
      puVar12 = puVar12 + 2;
    } while (uVar6 != uVar16);
  }
  if ((int)uVar15 != 0) {
    uVar16 = uVar15;
    puVar12 = local_3e8 + (long)(int)uVar6 * 2;
    do {
      FUN_00876d54(puVar12);
      uVar16 = uVar16 - 1;
      *puVar12 = 0x100000010;
      puVar12 = puVar12 + 2;
    } while (uVar16 != 0);
  }
  if (uVar20 != 0) {
    local_3e8[0] = CONCAT44(local_3e8[0]._4_4_,0x50);
  }
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_408 = (undefined8 *)0x0;
  uStack_400 = 0;
  local_418 = 0;
  local_410 = (undefined1 *)0x0;
  FUN_00876d5c(&local_418);
  local_410 = auStack_2e8;
  local_408 = local_3e8;
  local_418._0_4_ =
       CONCAT22((short)uVar15 + (short)uVar6 + (ushort)(uVar20 != 0),
                (short)uVar15 + (short)uVar14 + uVar20);
  uVar7 = FUN_0087e3b0(&local_418);
  FUN_0087e430(param_1 + 0x370,*(undefined8 *)(param_1 + 0x360),uVar7);
  FUN_0087e444(param_1 + 0x370,param_2,&local_418,uVar11);
  return 1;
}


