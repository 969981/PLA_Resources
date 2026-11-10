/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00654ea8; name: FUN_00654ea8
 */


/* WARNING: Removing unreachable block (ram,0x00655b84) */
/* WARNING: Removing unreachable block (ram,0x00655b88) */
/* WARNING: Removing unreachable block (ram,0x00655b90) */
/* WARNING: Removing unreachable block (ram,0x00655b98) */
/* WARNING: Removing unreachable block (ram,0x00655b9c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00654ea8(undefined8 *param_1,byte *param_2,long *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  byte *pbVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  size_t sVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  code *pcVar17;
  byte *pbVar18;
  size_t sVar19;
  undefined8 *puVar20;
  long *plVar21;
  char *pcVar22;
  long *plVar23;
  void *pvVar24;
  ulong uVar25;
  long *plVar26;
  long local_300 [4];
  long *local_2e0;
  long local_2d0 [4];
  long *local_2b0;
  long local_298;
  long *local_290;
  undefined1 auStack_288 [8];
  long *local_280;
  ulong local_278;
  size_t local_270;
  void *local_268;
  long *local_260;
  undefined8 local_258;
  size_t local_250;
  void *local_248;
  long *local_240;
  char acStack_238 [16];
  ulong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  long *plStack_210;
  ulong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  long *plStack_1f0;
  ulong local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  long *plStack_1d0;
  ulong local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  long *plStack_1b0;
  ulong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  long *plStack_190;
  undefined1 local_188;
  long *local_180;
  long *local_178;
  long local_170;
  long *plStack_168;
  long local_160;
  long *local_158;
  long local_150 [4];
  long *local_130;
  long *local_120;
  long *local_118;
  long local_110;
  long *plStack_108;
  long local_100;
  long *local_f8;
  long local_f0 [4];
  long *local_d0;
  long *local_c0;
  long *local_b8;
  char *local_b0;
  long *plStack_a8;
  long local_a0;
  long *local_98;
  long local_90 [4];
  long *local_70;
  
  plStack_210 = (long *)FUN_00612290();
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  plStack_1f0 = (long *)FUN_00612290();
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  plStack_1d0 = (long *)FUN_00612290();
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  plStack_1b0 = (long *)FUN_00612290();
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  plStack_190 = (long *)FUN_00612290();
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_188 = *PTR_DAT_043758c8;
  local_198 = 0;
  FUN_006d7c98(&local_228);
  sprintf(acStack_238,":%u",(ulong)*(uint *)(param_2 + 0x40));
  plVar21 = *(long **)(param_2 + 0x38);
  local_b8 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_b0 = (char *)0x0;
  plStack_a8 = plVar21;
  if ((param_2[0x20] & 1) == 0) {
    sVar19 = (size_t)(param_2[0x20] >> 1);
    sVar7 = strlen(acStack_238);
    pbVar18 = param_2 + 0x21;
    uVar25 = sVar19 + sVar7;
  }
  else {
    sVar19 = *(size_t *)(param_2 + 0x28);
    sVar7 = strlen(acStack_238);
    pbVar18 = *(byte **)(param_2 + 0x30);
    uVar25 = sVar19 + sVar7;
  }
  if (0xffffffffffffffef < uVar25) {
                    /* try { // try from 00655dd8 to 00655ddf has its CatchHandler @ 00655e34 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar25 < 0x17) {
    uVar25 = (ulong)local_c0 >> 8;
    local_c0 = (long *)CONCAT71((int7)uVar25,(char)((int)sVar19 << 1));
    pcVar22 = (char *)((ulong)&local_c0 | 1);
  }
  else {
    uVar25 = uVar25 + 0x10 & 0xfffffffffffffff0;
    pcVar22 = (char *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar25,1);
    local_c0 = (long *)(uVar25 | 1);
    local_b0 = pcVar22;
    local_b8 = (long *)sVar19;
  }
  if (sVar19 != 0) {
    memcpy(pcVar22,pbVar18,sVar19);
  }
  pcVar22[sVar19] = '\0';
                    /* try { // try from 00655010 to 00655023 has its CatchHandler @ 00655e34 */
  FUN_002a45d4(&local_c0,acStack_238,sVar7);
  pcVar22 = (char *)((ulong)&local_c0 | 1);
  if (((ulong)local_c0 & 1) != 0) {
    pcVar22 = local_b0;
  }
  sVar19 = strlen(pcVar22);
                    /* try { // try from 00655044 to 0065504f has its CatchHandler @ 00655e30 */
  FUN_02762710(&local_228,pcVar22,sVar19);
  if (((ulong)local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))(plStack_a8,local_b0,(ulong)local_c0 & 0xfffffffffffffffe,1);
  }
  local_270 = 0;
  local_268 = (void *)0x0;
  local_278 = 0;
  pbVar18 = param_2 + 0x79;
  if ((param_2[0x78] & 1) != 0) {
    pbVar18 = *(byte **)(param_2 + 0x88);
  }
  pbVar2 = param_2 + 0x99;
  if ((param_2[0x98] & 1) != 0) {
    pbVar2 = *(byte **)(param_2 + 0xa8);
  }
  plVar21 = (long *)FUN_00612290();
  local_260 = plVar21;
  sVar19 = strlen((char *)pbVar18);
  if (0xffffffffffffffef < sVar19) {
                    /* try { // try from 00655de0 to 00655de7 has its CatchHandler @ 00655e28 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar19 < 0x17) {
    local_278 = CONCAT71(local_278._1_7_,(char)((int)sVar19 << 1));
    pvVar24 = (void *)((ulong)&local_278 | 1);
    if (sVar19 != 0) goto LAB_0065511c;
  }
  else {
    uVar25 = sVar19 + 0x10 & 0xfffffffffffffff0;
    pvVar24 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar25,1);
    local_278 = uVar25 | 1;
    local_270 = sVar19;
    local_268 = pvVar24;
LAB_0065511c:
    memcpy(pvVar24,pbVar18,sVar19);
  }
  *(undefined1 *)((long)pvVar24 + sVar19) = 0;
  local_250 = 0;
  local_248 = (void *)0x0;
  local_258 = 0;
  plVar21 = (long *)FUN_00612290();
  local_240 = plVar21;
  sVar19 = strlen((char *)pbVar2);
  if (0xffffffffffffffef < sVar19) {
                    /* try { // try from 00655de8 to 00655def has its CatchHandler @ 00655e14 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar19 < 0x17) {
    pvVar24 = (void *)((long)&local_258 + 1);
    local_258 = CONCAT71(local_258._1_7_,(char)((int)sVar19 << 1));
    if (sVar19 != 0) goto LAB_006551ac;
  }
  else {
    uVar25 = sVar19 + 0x10 & 0xfffffffffffffff0;
    pvVar24 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar25,1);
    local_258 = uVar25 | 1;
    local_250 = sVar19;
    local_248 = pvVar24;
LAB_006551ac:
    memcpy(pvVar24,pbVar2,sVar19);
  }
  *(undefined1 *)((long)pvVar24 + sVar19) = 0;
  pbVar18 = param_2 + 0x59;
  if ((param_2[0x58] & 1) != 0) {
    pbVar18 = *(byte **)(param_2 + 0x68);
  }
  pbVar2 = param_2 + 0x79;
  if ((param_2[0x78] & 1) != 0) {
    pbVar2 = *(byte **)(param_2 + 0x88);
  }
  FUN_00678210(auStack_288,&local_228,&local_278,pbVar18,pbVar2,param_5);
  FUN_0064bc70(&local_298,auStack_288);
  pbVar18 = *(byte **)(param_2 + 0x10);
  lVar15 = local_298 + 0x40;
  if ((*param_2 & 1) == 0) {
    pbVar18 = param_2 + 1;
  }
  sVar19 = strlen((char *)pbVar18);
                    /* try { // try from 00655228 to 00655233 has its CatchHandler @ 00655e2c */
  FUN_02762710(lVar15,pbVar18,sVar19);
  lVar15 = local_298;
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(local_298 + 0x68) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(local_298 + 0x60) = uVar8;
  if (local_2d0 == param_4) {
LAB_0065526c:
    if ((long *)(lVar15 + 0x70) != local_2d0) goto LAB_00655278;
LAB_00655308:
    if (local_2b0 != (long *)0x0) {
LAB_00655310:
      if (local_2b0 == local_2d0) {
        pcVar17 = *(code **)(*local_2b0 + 0x10);
        plVar21 = local_2d0;
      }
      else {
        pcVar17 = *(code **)(*local_2b0 + 0x18);
        plVar21 = local_2b0;
      }
      (*pcVar17)(plVar21);
    }
  }
  else {
    plVar21 = (long *)param_4[4];
    if (plVar21 == (long *)0x0) {
      local_2b0 = (long *)0x0;
    }
    else {
      if (plVar21 != param_4) {
        local_2b0 = (long *)(**(code **)(*plVar21 + 0x30))();
        goto LAB_0065526c;
      }
      local_2b0 = local_2d0;
      (**(code **)(*plVar21 + 0x28))(plVar21,local_2d0);
    }
    if ((long *)(lVar15 + 0x70) == local_2d0) goto LAB_00655308;
LAB_00655278:
    if (local_2b0 != (long *)0x0) {
      if (local_2b0 == local_2d0) {
        *(long *)(lVar15 + 0x90) = lVar15 + 0x70;
        (**(code **)(local_2d0[0] + 0x28))(local_2d0);
        goto LAB_00655308;
      }
      uVar8 = (**(code **)(*local_2b0 + 0x30))();
      *(undefined8 *)(lVar15 + 0x90) = uVar8;
      if (local_2b0 == (long *)0x0) goto LAB_00655334;
      goto LAB_00655310;
    }
    *(undefined8 *)(lVar15 + 0x90) = 0;
  }
LAB_00655334:
  plVar13 = local_290;
  plVar21 = (long *)*param_5;
  plVar3 = (long *)param_5[1];
  if (plVar3 != (long *)0x0) {
    plVar16 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (local_290 != (long *)0x0) {
    plVar16 = local_290 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar15 = *param_3;
  plVar16 = (long *)param_3[1];
  if (plVar16 != (long *)0x0) {
    plVar14 = plVar16 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar14 = local_300;
  if (plVar14 != param_4) {
    plVar9 = (long *)param_4[4];
    if (plVar9 == (long *)0x0) {
      local_2e0 = (long *)0x0;
    }
    else if (plVar9 == param_4) {
      local_2e0 = plVar14;
      (**(code **)(*param_4 + 0x28))(param_4,plVar14);
    }
    else {
      local_2e0 = (long *)(**(code **)(*plVar9 + 0x30))();
    }
  }
  plVar23 = (long *)plVar21[0x33];
  puVar20 = (undefined8 *)plVar21[0x69];
  plVar10 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0xe0,8);
  plVar10[2] = 0;
  plVar11 = plVar10 + 1;
  *plVar11 = 0;
  puVar6 = PTR_DAT_043758d0;
  plVar10[3] = (long)plVar23;
  plVar9 = plVar10 + 4;
  *plVar10 = (long)(puVar6 + 0x10);
  FUN_00782ef8(plVar9);
  plVar10[4] = (long)(PTR_DAT_043758d8 + 0x10);
  nn::os::InitializeEvent(plVar10 + 6,0,0);
  plVar10[4] = (long)(PTR_DAT_043758e0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar10 + 0xb),false,0);
  *(undefined1 *)(plVar10 + 0x1b) = 0;
  if (plVar10 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x1c0,0x10);
  plVar11[2] = 0;
  plVar26 = plVar11 + 1;
  *plVar26 = 0;
  *plVar11 = (long)&PTR_LAB_04194bf8;
  plVar11[4] = (long)plVar23;
  FUN_007840dc(plVar11 + 6);
  plVar11[6] = (long)&PTR_LAB_04194c48;
  lVar12 = (**(code **)(*plVar23 + 0x10))(plVar23,0x10000,0x10);
  if (lVar12 == 0) {
    local_c0 = (long *)CONCAT44(local_c0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_c0,"");
  }
  FUN_00782cfc(plVar11 + 0xc,plVar9,0,lVar12,0x10000,1);
  plVar11[0xc] = (long)&PTR_LAB_04194c90;
  plVar11[0x32] = (long)plVar23;
  plVar11[0x33] = 0x10000;
  *(undefined1 *)((long)plVar11 + 0x1b1) = 1;
  plVar11[0x34] = (long)plVar9;
  plVar11[0x35] = (long)plVar10;
  if (plVar3 != (long *)0x0) {
    plVar23 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = *plVar23 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_168 = plVar13;
  local_170 = local_298;
  if (plVar16 != (long *)0x0) {
    plVar13 = plVar16 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar13 = local_150;
  local_180 = plVar21;
  local_178 = plVar3;
  local_160 = lVar15;
  local_158 = plVar16;
  if (local_2e0 == (long *)0x0) {
    local_130 = (long *)0x0;
  }
  else if (local_2e0 == plVar14) {
    local_130 = plVar13;
    (**(code **)(local_300[0] + 0x28))(plVar14,plVar13);
  }
  else {
    local_130 = (long *)(**(code **)(*local_2e0 + 0x30))();
  }
  plStack_108 = plStack_168;
  local_110 = local_170;
  local_120 = local_180;
  local_118 = local_178;
  if (local_178 != (long *)0x0) {
    plVar21 = local_178 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = *plVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_170 = 0;
  plStack_168 = (long *)0x0;
  local_100 = local_160;
  local_f8 = local_158;
  if (local_158 != (long *)0x0) {
    plVar21 = local_158 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = *plVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar21 = local_f0;
  if (local_130 == (long *)0x0) {
    local_d0 = (long *)0x0;
  }
  else if (local_130 == plVar13) {
    local_d0 = plVar21;
    (**(code **)(local_150[0] + 0x28))(plVar13,plVar21);
  }
  else {
    local_d0 = (long *)(**(code **)(*local_130 + 0x30))();
  }
  plStack_a8 = plStack_108;
  local_b0 = (char *)local_110;
  local_c0 = local_120;
  local_b8 = local_118;
  if (local_118 != (long *)0x0) {
    plVar23 = local_118 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = *plVar23 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_110 = 0;
  plStack_108 = (long *)0x0;
  local_a0 = local_100;
  local_98 = local_f8;
  if (local_f8 != (long *)0x0) {
    plVar23 = local_f8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = *plVar23 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar23 = local_90;
  if (local_d0 == (long *)0x0) {
    local_70 = (long *)0x0;
  }
  else if (local_d0 == plVar21) {
    local_70 = plVar23;
    (**(code **)(local_f0[0] + 0x28))(plVar21,plVar23);
  }
  else {
    local_70 = (long *)(**(code **)(*local_d0 + 0x30))();
  }
  plVar11[0x26] = (long)local_c0;
  plVar11[0x27] = (long)local_b8;
  if (local_b8 != (long *)0x0) {
    plVar1 = local_b8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11[0x29] = (long)plStack_a8;
  plVar11[0x28] = (long)local_b0;
  local_b0 = (char *)0x0;
  plStack_a8 = (long *)0x0;
  plVar11[0x2a] = local_a0;
  plVar11[0x2b] = (long)local_98;
  if (local_98 != (long *)0x0) {
    plVar1 = local_98 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (&local_c0 != (long **)(plVar11 + 0x26)) {
    if (local_70 == (long *)0x0) {
      plVar11[0x30] = 0;
      goto LAB_006557f8;
    }
    if (local_70 == plVar23) {
      plVar11[0x30] = (long)(plVar11 + 0x2c);
      (**(code **)(local_90[0] + 0x28))(plVar23);
    }
    else {
      lVar15 = (**(code **)(*local_70 + 0x30))();
      plVar11[0x30] = lVar15;
    }
  }
  if (local_70 != (long *)0x0) {
    if (local_70 == plVar23) {
      pcVar17 = *(code **)(*local_70 + 0x10);
    }
    else {
      pcVar17 = *(code **)(*local_70 + 0x18);
      plVar23 = local_70;
    }
    (*pcVar17)(plVar23);
  }
LAB_006557f8:
  if (local_98 != (long *)0x0) {
    plVar23 = local_98 + 1;
    do {
      lVar15 = *plVar23;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*local_98 + 0x10))(local_98);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_a8 != (long *)0x0) {
    plVar23 = plStack_a8 + 1;
    do {
      lVar15 = *plVar23;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_b8 != (long *)0x0) {
    plVar23 = local_b8 + 1;
    do {
      lVar15 = *plVar23;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*local_b8 + 0x10))(local_b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0 != (long *)0x0) {
    if (local_d0 == plVar21) {
      pcVar17 = *(code **)(*local_d0 + 0x10);
    }
    else {
      pcVar17 = *(code **)(*local_d0 + 0x18);
      plVar21 = local_d0;
    }
    (*pcVar17)(plVar21);
  }
  if (local_f8 != (long *)0x0) {
    plVar21 = local_f8 + 1;
    do {
      lVar15 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*local_f8 + 0x10))(local_f8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_108 != (long *)0x0) {
    plVar21 = plStack_108 + 1;
    do {
      lVar15 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_118 != (long *)0x0) {
    plVar21 = local_118 + 1;
    do {
      lVar15 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*local_118 + 0x10))(local_118);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_130 != (long *)0x0) {
    if (local_130 == plVar13) {
      pcVar17 = *(code **)(*local_130 + 0x10);
    }
    else {
      pcVar17 = *(code **)(*local_130 + 0x18);
      plVar13 = local_130;
    }
    (*pcVar17)(plVar13);
  }
  if (local_158 != (long *)0x0) {
    plVar21 = local_158 + 1;
    do {
      lVar15 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*local_158 + 0x10))(local_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_168 != (long *)0x0) {
    plVar21 = plStack_168 + 1;
    do {
      lVar15 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_178 != (long *)0x0) {
    plVar21 = local_178 + 1;
    do {
      lVar15 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*local_178 + 0x10))(local_178);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_118 = (long *)0x0;
  local_120 = (long *)0x0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar5) {
      *plVar26 = *plVar26 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_c0 = plVar11 + 6;
  local_b8 = plVar11;
  (**(code **)*puVar20)(puVar20,&local_c0,&local_120);
  if (local_b8 != (long *)0x0) {
    plVar21 = local_b8 + 1;
    do {
      lVar15 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*local_b8 + 0x10))(local_b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_118 != (long *)0x0) {
    plVar21 = local_118 + 1;
    do {
      lVar15 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*local_118 + 0x10))(local_118);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar9;
  param_1[1] = plVar10;
  do {
    lVar15 = *plVar26;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar5) {
      *plVar26 = lVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar15 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    std::__shared_weak_count::__release_weak();
  }
  if (local_2e0 != (long *)0x0) {
    if (local_2e0 == plVar14) {
      pcVar17 = *(code **)(*local_2e0 + 0x10);
    }
    else {
      pcVar17 = *(code **)(*local_2e0 + 0x18);
      plVar14 = local_2e0;
    }
    (*pcVar17)(plVar14);
  }
  if (plVar16 != (long *)0x0) {
    plVar21 = plVar16 + 1;
    do {
      lVar15 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar21 = plVar3 + 1;
    do {
      lVar15 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_290 != (long *)0x0) {
    plVar21 = local_290 + 1;
    do {
      lVar15 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*local_290 + 0x10))(local_290);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_280 != (long *)0x0) {
    plVar21 = local_280 + 1;
    do {
      lVar15 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*local_280 + 0x10))(local_280);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((local_258 & 1) != 0) {
    (**(code **)(*local_240 + 0x18))(local_240,local_248,local_258 & 0xfffffffffffffffe,1);
  }
  if ((local_278 & 1) != 0) {
    (**(code **)(*local_260 + 0x18))(local_260,local_268,local_278 & 0xfffffffffffffffe,1);
  }
  if ((local_1a8 & 1) != 0) {
    (**(code **)(*plStack_190 + 0x18))(plStack_190,local_198,local_1a8 & 0xfffffffffffffffe,1);
  }
  if ((local_1c8 & 1) != 0) {
    (**(code **)(*plStack_1b0 + 0x18))(plStack_1b0,local_1b8,local_1c8 & 0xfffffffffffffffe,1);
  }
  if ((local_1e8 & 1) != 0) {
    (**(code **)(*plStack_1d0 + 0x18))(plStack_1d0,local_1d8,local_1e8 & 0xfffffffffffffffe,1);
  }
  if ((local_208 & 1) != 0) {
    (**(code **)(*plStack_1f0 + 0x18))(plStack_1f0,local_1f8,local_208 & 0xfffffffffffffffe,1);
  }
  if ((local_228 & 1) != 0) {
    (**(code **)(*plStack_210 + 0x18))(plStack_210,local_218,local_228 & 0xfffffffffffffffe,1);
  }
  return;
}


