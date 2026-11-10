/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00515534; name: FUN_00515534
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00515534(long param_1)

{
  ulong uVar1;
  byte bVar2;
  __tree_node_base _Var3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  int iVar10;
  size_t sVar11;
  ulong uVar12;
  undefined8 *puVar13;
  size_t sVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  long *plVar19;
  char *pcVar20;
  long lVar21;
  undefined8 uVar22;
  void *pvVar23;
  byte *pbVar24;
  long *plVar25;
  __tree_node_base *p_Var26;
  __tree_node_base *p_Var27;
  __tree_node_base *local_2d0;
  undefined8 local_2c8;
  long *plStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  long *local_280;
  long local_278;
  long local_270;
  long *local_268;
  long local_260;
  long local_258;
  ulong local_250;
  long lStack_248;
  long local_240;
  undefined8 local_238;
  ulong local_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  ulong local_210;
  long lStack_208;
  long local_200;
  undefined8 local_1f8;
  ulong local_1e8;
  size_t sStack_1e0;
  void *local_1d8;
  undefined1 auStack_1d0 [8];
  undefined8 local_1c8;
  ulong local_1b8;
  size_t sStack_1b0;
  void *local_1a8;
  ulong *local_1a0;
  undefined8 local_198;
  ulong local_188;
  size_t sStack_180;
  void *local_178;
  ulong local_170;
  size_t local_168;
  void *local_160;
  ulong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulong local_140;
  undefined8 uStack_138;
  ulong local_130;
  long *local_128;
  long local_120;
  long local_118;
  long *local_110;
  long local_108;
  long local_100;
  char local_f8 [8];
  long local_f0;
  long lStack_e8;
  undefined8 local_e0;
  char local_d8 [8];
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  long *local_98 [4];
  undefined1 auStack_78 [24];
  
  lVar17 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x38);
  if (((lVar17 == 0) || (*(long *)(lVar17 + 0x18) != param_1)) ||
     (plVar25 = (long *)(param_1 + 0x98), *plVar25 == 0)) {
    local_2d0 = (__tree_node_base *)0x3942339;
    local_2c8 = CONCAT44(local_2c8._4_4_,0x4a5);
    FUN_00515458(param_1,&local_2d0,"ADS+OnResponseReceivedLocked");
    return;
  }
  FUN_003c86e0(auStack_78);
  FUN_003c8870(local_98,auStack_78);
  FUN_003c8710(auStack_78);
  FUN_003c8500(*(undefined8 *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x98) = 0;
  local_d8[0] = '\0';
  uStack_c8 = 0;
  local_d0 = 0;
  local_a0 = 0;
  local_f8[0] = '\0';
  local_f0 = 0;
  local_e0 = 0;
  lStack_e8 = 0;
  local_170 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_108 = 0;
  local_100 = 0;
  local_118 = 0;
  local_120 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_148 = 0;
  local_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  local_160 = (void *)0x0;
  lStack_a8 = 0;
  local_b0 = 0;
  lVar17 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
  pcVar20 = *(char **)PTR_PTR_04374a60;
  local_178 = (void *)0x0;
  local_188 = 0;
  sStack_180 = 0;
  local_128 = &local_120;
  local_110 = &local_108;
  sVar11 = strlen(pcVar20);
  if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 00516374 to 0051637b has its CatchHandler @ 00516448 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_188 = CONCAT71(local_188._1_7_,(char)((int)sVar11 << 1));
    pvVar23 = (void *)((ulong)&local_188 | 1);
    if (sVar11 != 0) goto LAB_005156c4;
  }
  else {
    uVar12 = sVar11 + 0x10 & 0xfffffffffffffff0;
    pvVar23 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar12);
    local_188 = uVar12 | 1;
    sStack_180 = sVar11;
    local_178 = pvVar23;
LAB_005156c4:
    memcpy(pvVar23,pcVar20,sVar11);
  }
  *(undefined1 *)((long)pvVar23 + sVar11) = 0;
                    /* try { // try from 005156d8 to 005156e7 has its CatchHandler @ 00516728 */
  FUN_0050ff38(&local_2d0,param_1,&local_188);
  pcVar20 = *(char **)PTR_PTR_04374a68;
  local_1b8 = 0;
  sStack_1b0 = 0;
  local_1a8 = (void *)0x0;
  sVar11 = strlen(pcVar20);
  if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 0051637c to 00516383 has its CatchHandler @ 00516440 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_1b8 = CONCAT71(local_1b8._1_7_,(char)((int)sVar11 << 1));
    pvVar23 = (void *)((ulong)&local_1b8 | 1);
    if (sVar11 != 0) goto LAB_00515758;
  }
  else {
    uVar12 = sVar11 + 0x10 & 0xfffffffffffffff0;
    pvVar23 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar12);
    local_1b8 = uVar12 | 1;
    sStack_1b0 = sVar11;
    local_1a8 = pvVar23;
LAB_00515758:
    memcpy(pvVar23,pcVar20,sVar11);
  }
  *(undefined1 *)((long)pvVar23 + sVar11) = 0;
                    /* try { // try from 0051576c to 0051577b has its CatchHandler @ 005166f4 */
  FUN_0050ff38(&local_1a0,param_1,&local_1b8);
  pcVar20 = *(char **)PTR_PTR_04374a70;
  local_1e8 = 0;
  sStack_1e0 = 0;
  local_1d8 = (void *)0x0;
  sVar11 = strlen(pcVar20);
  if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 00516384 to 0051638b has its CatchHandler @ 00516438 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_1e8 = CONCAT71(local_1e8._1_7_,(char)((int)sVar11 << 1));
    pvVar23 = (void *)((ulong)&local_1e8 | 1);
    if (sVar11 != 0) goto LAB_005157ec;
  }
  else {
    uVar12 = sVar11 + 0x10 & 0xfffffffffffffff0;
    pvVar23 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar12);
    local_1e8 = uVar12 | 1;
    sStack_1e0 = sVar11;
    local_1d8 = pvVar23;
LAB_005157ec:
    memcpy(pvVar23,pcVar20,sVar11);
  }
  *(undefined1 *)((long)pvVar23 + sVar11) = 0;
                    /* try { // try from 00515800 to 0051580f has its CatchHandler @ 005166c0 */
  FUN_0050ff38(auStack_1d0,param_1,&local_1e8);
                    /* try { // try from 00515818 to 00515853 has its CatchHandler @ 005166a4 */
  uVar12 = FUN_005b8bc4(lVar17 + 0x40,local_98,lVar17 + 0x88,&local_2d0,&local_1a0,auStack_1d0,
                        local_d8,local_f8,&local_110,&local_128,&local_140,&local_158,&local_170);
  FUN_005215f4(auStack_1d0,local_1c8);
  if ((local_1e8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_1d8);
  }
  FUN_005215f4(&local_1a0,local_198);
  if ((local_1b8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_1a8);
  }
  FUN_005215f4(&local_2d0,local_2c8);
  if ((local_188 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_178);
  }
  if ((local_98[0] != (long *)0x0) && (plVar16 = (long *)*local_98[0], plVar16 != (long *)0x0)) {
    plVar19 = plVar16 + 1;
    lVar17 = *plVar16;
    do {
      lVar21 = *plVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((lVar17 != 0) && (*(char *)(lVar17 + 0x10) != '\0')) {
                    /* try { // try from 005158fc to 00515933 has its CatchHandler @ 00516750 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar17 + 8),plVar16,lVar21);
    }
    if (lVar21 < 1) {
                    /* try { // try from 0051638c to 005163b3 has its CatchHandler @ 00516750 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar21 == 1) {
      (*(code *)local_98[0][3])(local_98[0][4]);
    }
  }
  sVar11 = local_170 >> 1 & 0x7f;
  if ((local_170 & 1) != 0) {
    sVar11 = local_168;
  }
  if (sVar11 == 0) {
    uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
                    /* try { // try from 00515998 to 005159df has its CatchHandler @ 00516750 */
    uVar22 = FUN_002f1480(uVar12);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x4c9,2,"[xds_client %p] Error parsing ADS response (%s) -- ignoring",uVar15,
                 uVar22);
    if (4 < uVar12) {
      FUN_002f0430(uVar12,
                   "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x4cc);
    }
    goto LAB_00515cc4;
  }
  plVar16 = (long *)(param_1 + 0x188);
  local_1a0 = &local_170;
                    /* try { // try from 00515958 to 00515967 has its CatchHandler @ 00516754 */
  puVar13 = (undefined8 *)FUN_005213b8(plVar16,&local_188,&local_170);
  p_Var27 = (__tree_node_base *)*puVar13;
  if (p_Var27 == (__tree_node_base *)0x0) {
                    /* try { // try from 005159e4 to 00515cc3 has its CatchHandler @ 00516754 */
    FUN_005214d4(&local_2d0,plVar16,&DAT_03a2945a,&local_1a0,&local_1b8);
    *(ulong *)(local_2d0 + 0x10) = local_188;
    *(undefined8 *)local_2d0 = 0;
    *(undefined8 *)(local_2d0 + 8) = 0;
    *puVar13 = local_2d0;
    p_Var27 = local_2d0;
    if (*(long *)*plVar16 != 0) {
      *plVar16 = *(long *)*plVar16;
      p_Var27 = (__tree_node_base *)*puVar13;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 400),p_Var27);
    *(long *)(param_1 + 0x198) = *(long *)(param_1 + 0x198) + 1;
    p_Var26 = local_2d0 + 0x50;
    p_Var27 = local_2d0;
    if (((byte)*p_Var26 & 1) != 0) goto LAB_00515a50;
LAB_00515984:
    *(undefined2 *)p_Var26 = 0;
    p_Var27 = local_2d0;
  }
  else {
    p_Var26 = p_Var27 + 0x50;
    local_2d0 = p_Var27;
    if (((byte)*p_Var26 & 1) == 0) goto LAB_00515984;
LAB_00515a50:
    **(undefined1 **)(p_Var27 + 0x60) = 0;
    *(undefined8 *)(p_Var27 + 0x58) = 0;
    if (((byte)p_Var27[0x50] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var27 + 0x60));
      *(undefined8 *)(p_Var27 + 0x50) = 0;
    }
  }
  *(undefined8 *)(p_Var26 + 0x10) = local_148;
  *(undefined8 *)(p_Var26 + 8) = uStack_150;
  *(ulong *)p_Var26 = local_158;
  uStack_150 = 0;
  local_148 = 0;
  local_158 = 0;
  if (uVar12 != 0) {
    if (4 < *(ulong *)(p_Var27 + 0x68)) {
      FUN_002f0430(*(ulong *)(p_Var27 + 0x68),
                   "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x4d3);
    }
    *(ulong *)(p_Var27 + 0x68) = uVar12;
    uVar22 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
    pvVar23 = (void *)((ulong)&local_170 | 1);
    if ((local_170 & 1) != 0) {
      pvVar23 = local_160;
    }
    uVar1 = (ulong)&local_140 | 1;
    if ((local_140 & 1) != 0) {
      uVar1 = local_130;
    }
    if (((byte)p_Var27[0x50] & 1) == 0) {
      p_Var26 = p_Var26 + 1;
    }
    else {
      p_Var26 = *(__tree_node_base **)(p_Var27 + 0x60);
    }
    uVar15 = FUN_002f1480(uVar12);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x4d6,2,
                 "[xds_client %p] ADS response invalid for resource type %s version %s, will NACK: nonce=%s error=%s"
                 ,uVar22,pvVar23,uVar1,p_Var26,uVar15);
    FUN_0050f8bc(param_1,&local_170);
    goto LAB_00515cc4;
  }
  *(undefined1 *)(param_1 + 0x21) = 1;
  pcVar20 = *(char **)PTR_PTR_04374a58;
  sVar14 = strlen(pcVar20);
  uVar12 = local_170;
  sVar11 = local_170 >> 1 & 0x7f;
  if ((local_170 & 1) != 0) {
    sVar11 = local_168;
  }
  if (sVar14 == sVar11) {
    if (sVar14 != 0) {
      if (sVar14 == 0xffffffffffffffff) {
                    /* try { // try from 00516404 to 0051640b has its CatchHandler @ 00516430 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pvVar23 = (void *)((ulong)&local_170 | 1);
      if ((local_170 & 1) != 0) {
        pvVar23 = local_160;
      }
      iVar10 = memcmp(pvVar23,pcVar20,sVar14);
      if (iVar10 != 0) goto LAB_00515b68;
    }
    uVar9 = local_a0;
    lVar21 = lStack_a8;
    lVar17 = local_b0;
    uVar15 = local_c0;
    uVar22 = uStack_c8;
    uVar12 = local_d0;
    lStack_208 = 0;
    local_210 = 0;
    local_1f8 = 0;
    local_200 = 0;
    uStack_228 = 0;
    local_230 = 0;
    local_218 = 0;
    uStack_220 = 0;
    if (local_d8[0] != '\0') {
      uStack_c8 = 0;
      local_d0 = 0;
      local_c0 = 0;
      local_218 = uVar15;
      uStack_220 = uVar22;
      uStack_228 = uVar12;
      lStack_208 = 0;
      local_1f8 = 0;
      local_200 = 0;
      if ((char)uStack_b8 != '\0') {
        lStack_a8 = 0;
        local_b0 = 0;
        local_a0 = 0;
        local_200 = lVar21;
        lStack_208 = lVar17;
        local_1f8 = uVar9;
      }
      local_210 = (ulong)((char)uStack_b8 != '\0');
      local_230 = 1;
    }
                    /* try { // try from 00516020 to 0051602b has its CatchHandler @ 0051657c */
    FUN_00510270(param_1,&local_230);
    lVar17 = lStack_208;
    puVar8 = PTR_LAB_04373088;
    if ((char)local_230 != '\0') {
      if ((char)local_210 != '\0') {
        if (lStack_208 != 0) {
          if (local_200 != lStack_208) {
            pbVar24 = *(byte **)(local_200 + -0x18);
            lVar21 = local_200;
            while( true ) {
              lVar7 = lVar21 + -0x78;
              if (pbVar24 != (byte *)0x0) {
                pbVar18 = *(byte **)(lVar21 + -0x10);
                if (pbVar18 == pbVar24) {
                  pbVar18 = pbVar24;
                }
                else {
                  bVar2 = pbVar18[-0x20];
                  pbVar6 = pbVar18 + -0x20;
                  while( true ) {
                    if ((bVar2 & 1) != 0) {
                      FUN_002e2ea0(puVar8,*(undefined8 *)(pbVar18 + -0x10));
                    }
                    if (pbVar24 == pbVar6) break;
                    bVar2 = pbVar6[-0x20];
                    pbVar18 = pbVar6;
                    pbVar6 = pbVar6 + -0x20;
                  }
                  pbVar18 = *(byte **)(lVar21 + -0x18);
                }
                *(byte **)(lVar21 + -0x10) = pbVar24;
                FUN_002e2ea0(puVar8,pbVar18);
              }
              if ((*(byte *)(lVar21 + -0x30) & 1) != 0) {
                FUN_002e2ea0(puVar8,*(undefined8 *)(lVar21 + -0x20));
              }
              FUN_0051e8b0(lVar7);
              if (lVar7 == lVar17) break;
              pbVar24 = *(byte **)(lVar21 + -0x90);
              lVar21 = lVar7;
            }
          }
          local_200 = lVar17;
          FUN_002e2ea0(PTR_LAB_04373088,lStack_208);
        }
        local_210 = local_210 & 0xffffffffffffff00;
      }
      if ((uStack_228 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_218);
      }
      local_230 = local_230 & 0xffffffffffffff00;
    }
LAB_005162f4:
    if (((byte)p_Var27[0x38] & 1) != 0) goto LAB_00516308;
LAB_00516300:
    *(undefined2 *)(p_Var27 + 0x38) = 0;
  }
  else {
LAB_00515b68:
    pcVar20 = *(char **)PTR_PTR_04374a60;
    sVar14 = strlen(pcVar20);
    if (sVar14 == sVar11) {
      if (sVar11 != 0) {
        if (sVar11 == 0xffffffffffffffff) {
                    /* try { // try from 0051640c to 00516413 has its CatchHandler @ 0051642c */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_out_of_range();
        }
        pvVar23 = (void *)((ulong)&local_170 | 1);
        if ((uVar12 & 1) != 0) {
          pvVar23 = local_160;
        }
        iVar10 = memcmp(pvVar23,pcVar20,sVar11);
        if (iVar10 != 0) goto LAB_00515bb4;
      }
      uVar22 = local_e0;
      lVar21 = lStack_e8;
      lVar17 = local_f0;
      lStack_248 = 0;
      local_238 = 0;
      local_240 = 0;
      if (local_f8[0] != '\0') {
        lStack_e8 = 0;
        local_f0 = 0;
        local_e0 = 0;
        local_240 = lVar21;
        lStack_248 = lVar17;
        local_238 = uVar22;
      }
                    /* try { // try from 00516130 to 0051613b has its CatchHandler @ 00516484 */
      local_250 = (ulong)(local_f8[0] != '\0');
      FUN_00512a40(param_1,&local_250);
      lVar17 = lStack_248;
      puVar8 = PTR_LAB_04373088;
      if ((char)local_250 == '\0') goto LAB_005162f4;
      if (lStack_248 != 0) {
        if (local_240 != lStack_248) {
          pbVar24 = *(byte **)(local_240 + -0x18);
          lVar21 = local_240;
          while( true ) {
            lVar7 = lVar21 + -0x78;
            if (pbVar24 != (byte *)0x0) {
              pbVar18 = *(byte **)(lVar21 + -0x10);
              if (pbVar18 == pbVar24) {
                pbVar18 = pbVar24;
              }
              else {
                bVar2 = pbVar18[-0x20];
                pbVar6 = pbVar18 + -0x20;
                while( true ) {
                  if ((bVar2 & 1) != 0) {
                    FUN_002e2ea0(puVar8,*(undefined8 *)(pbVar18 + -0x10));
                  }
                  if (pbVar24 == pbVar6) break;
                  bVar2 = pbVar6[-0x20];
                  pbVar18 = pbVar6;
                  pbVar6 = pbVar6 + -0x20;
                }
                pbVar18 = *(byte **)(lVar21 + -0x18);
              }
              *(byte **)(lVar21 + -0x10) = pbVar24;
              FUN_002e2ea0(puVar8,pbVar18);
            }
            if ((*(byte *)(lVar21 + -0x30) & 1) != 0) {
              FUN_002e2ea0(puVar8,*(undefined8 *)(lVar21 + -0x20));
            }
            FUN_0051e8b0(lVar7);
            if (lVar7 == lVar17) break;
            pbVar24 = *(byte **)(lVar21 + -0x90);
            lVar21 = lVar7;
          }
        }
        local_240 = lVar17;
        FUN_002e2ea0(PTR_LAB_04373088,lStack_248);
      }
      local_250 = local_250 & 0xffffffffffffff00;
      _Var3 = p_Var27[0x38];
    }
    else {
LAB_00515bb4:
      pcVar20 = *(char **)PTR_PTR_04374a68;
      sVar14 = strlen(pcVar20);
      if (sVar14 == sVar11) {
        if (sVar11 != 0) {
          if (sVar11 == 0xffffffffffffffff) {
                    /* try { // try from 00516414 to 0051641b has its CatchHandler @ 00516428 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar23 = (void *)((ulong)&local_170 | 1);
          if ((uVar12 & 1) != 0) {
            pvVar23 = local_160;
          }
          iVar10 = memcmp(pvVar23,pcVar20,sVar11);
          if (iVar10 != 0) goto LAB_00515c00;
        }
        local_268 = local_110;
        local_260 = local_108;
        local_258 = local_100;
        if (local_100 == 0) {
          local_268 = &local_260;
        }
        else {
          *(long **)(local_108 + 0x10) = &local_260;
          local_108 = 0;
          local_100 = 0;
          local_110 = &local_108;
        }
                    /* try { // try from 00516234 to 0051623f has its CatchHandler @ 00516468 */
        FUN_00513080(param_1,&local_268);
        FUN_00522f94(&local_268,local_260);
        _Var3 = p_Var27[0x38];
      }
      else {
LAB_00515c00:
        pcVar20 = *(char **)PTR_PTR_04374a70;
        sVar14 = strlen(pcVar20);
        if (sVar14 != sVar11) goto LAB_005162f4;
        if (sVar11 != 0) {
          if (sVar11 == 0xffffffffffffffff) {
                    /* try { // try from 0051641c to 00516423 has its CatchHandler @ 00516424 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar23 = (void *)((ulong)&local_170 | 1);
          if ((uVar12 & 1) != 0) {
            pvVar23 = local_160;
          }
          iVar10 = memcmp(pvVar23,pcVar20,sVar11);
          if (iVar10 != 0) goto LAB_005162f4;
        }
        local_280 = local_128;
        local_278 = local_120;
        local_270 = local_118;
        if (local_118 == 0) {
          local_280 = &local_278;
        }
        else {
          *(long **)(local_120 + 0x10) = &local_278;
          local_120 = 0;
          local_118 = 0;
          local_128 = &local_120;
        }
                    /* try { // try from 00516270 to 0051627b has its CatchHandler @ 0051644c */
        FUN_00514354(param_1,&local_280);
        FUN_0052302c(&local_280,local_278);
        _Var3 = p_Var27[0x38];
      }
    }
    if (((byte)_Var3 & 1) == 0) goto LAB_00516300;
LAB_00516308:
    **(undefined1 **)(p_Var27 + 0x48) = 0;
    *(undefined8 *)(p_Var27 + 0x40) = 0;
    if (((byte)p_Var27[0x38] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var27 + 0x48));
      *(undefined8 *)(p_Var27 + 0x38) = 0;
    }
  }
  *(ulong *)(p_Var27 + 0x48) = local_130;
  *(undefined8 *)(p_Var27 + 0x40) = uStack_138;
  *(ulong *)(p_Var27 + 0x38) = local_140;
  uStack_138 = 0;
  local_130 = 0;
  local_140 = 0;
                    /* try { // try from 00516348 to 00516353 has its CatchHandler @ 00516754 */
  FUN_0050f8bc(param_1,&local_170);
  lVar17 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x40);
  if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
                    /* try { // try from 0051636c to 0051636f has its CatchHandler @ 00516698 */
    FUN_00516a7c();
  }
LAB_00515cc4:
  if (*(char *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18) + 0x170) == '\0') {
    local_288 = 0;
    uStack_290 = 0;
    local_298 = 0;
    uStack_2a0 = 0;
    local_2a8 = 0;
    local_2d0 = DAT_0388a848;
    local_2c8 = 0;
    uStack_2b0 = 0;
    local_2b8 = 0;
    plStack_2c0 = plVar25;
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* try { // try from 005163b4 to 005163db has its CatchHandler @ 00516434 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x4fe,2,"assertion failed: %s","call_ != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
                    /* try { // try from 00515d38 to 00515d43 has its CatchHandler @ 0051669c */
    iVar10 = FUN_003cba10(*(long *)(param_1 + 0x28),&local_2d0,1,param_1 + 0xa0);
    if (iVar10 != 0) {
                    /* try { // try from 005163dc to 00516403 has its CatchHandler @ 0051669c */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x502,2,"assertion failed: %s","GRPC_CALL_OK == call_error");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    local_2d0 = (__tree_node_base *)0x3942339;
    local_2c8 = CONCAT44(local_2c8._4_4_,0x4f4);
                    /* try { // try from 00515cec to 00515cff has its CatchHandler @ 005166a0 */
    FUN_00515458(param_1,&local_2d0,"ADS+OnResponseReceivedLocked+xds_shutdown");
  }
  if ((local_170 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_160);
  }
  if ((local_158 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_148);
  }
  if ((local_140 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_130);
  }
  FUN_0052302c(&local_128,local_120);
  FUN_00522f94(&local_110,local_108);
  lVar17 = local_f0;
  puVar8 = PTR_LAB_04373088;
  if (local_f8[0] != '\0') {
    if (local_f0 != 0) {
      if (lStack_e8 != local_f0) {
        pbVar24 = *(byte **)(lStack_e8 + -0x18);
        lVar21 = lStack_e8;
        while( true ) {
          lVar7 = lVar21 + -0x78;
          if (pbVar24 != (byte *)0x0) {
            pbVar18 = *(byte **)(lVar21 + -0x10);
            if (pbVar18 == pbVar24) {
              pbVar18 = pbVar24;
            }
            else {
              bVar2 = pbVar18[-0x20];
              pbVar6 = pbVar18 + -0x20;
              while( true ) {
                if ((bVar2 & 1) != 0) {
                  FUN_002e2ea0(puVar8,*(undefined8 *)(pbVar18 + -0x10));
                }
                if (pbVar24 == pbVar6) break;
                bVar2 = pbVar6[-0x20];
                pbVar18 = pbVar6;
                pbVar6 = pbVar6 + -0x20;
              }
              pbVar18 = *(byte **)(lVar21 + -0x18);
            }
            *(byte **)(lVar21 + -0x10) = pbVar24;
            FUN_002e2ea0(puVar8,pbVar18);
          }
          if ((*(byte *)(lVar21 + -0x30) & 1) != 0) {
            FUN_002e2ea0(puVar8,*(undefined8 *)(lVar21 + -0x20));
          }
          FUN_0051e8b0(lVar7);
          if (lVar7 == lVar17) break;
          pbVar24 = *(byte **)(lVar21 + -0x90);
          lVar21 = lVar7;
        }
      }
      lStack_e8 = lVar17;
      FUN_002e2ea0(PTR_LAB_04373088,local_f0);
    }
    local_f8[0] = '\0';
  }
  lVar17 = local_b0;
  puVar8 = PTR_LAB_04373088;
  if (local_d8[0] != '\0') {
    if ((char)uStack_b8 != '\0') {
      if (local_b0 != 0) {
        if (lStack_a8 != local_b0) {
          pbVar24 = *(byte **)(lStack_a8 + -0x18);
          lVar21 = lStack_a8;
          while( true ) {
            lVar7 = lVar21 + -0x78;
            if (pbVar24 != (byte *)0x0) {
              pbVar18 = *(byte **)(lVar21 + -0x10);
              if (pbVar18 == pbVar24) {
                pbVar18 = pbVar24;
              }
              else {
                bVar2 = pbVar18[-0x20];
                pbVar6 = pbVar18 + -0x20;
                while( true ) {
                  if ((bVar2 & 1) != 0) {
                    FUN_002e2ea0(puVar8,*(undefined8 *)(pbVar18 + -0x10));
                  }
                  if (pbVar24 == pbVar6) break;
                  bVar2 = pbVar6[-0x20];
                  pbVar18 = pbVar6;
                  pbVar6 = pbVar6 + -0x20;
                }
                pbVar18 = *(byte **)(lVar21 + -0x18);
              }
              *(byte **)(lVar21 + -0x10) = pbVar24;
              FUN_002e2ea0(puVar8,pbVar18);
            }
            if ((*(byte *)(lVar21 + -0x30) & 1) != 0) {
              FUN_002e2ea0(puVar8,*(undefined8 *)(lVar21 + -0x20));
            }
            FUN_0051e8b0(lVar7);
            if (lVar7 == lVar17) break;
            pbVar24 = *(byte **)(lVar21 + -0x90);
            lVar21 = lVar7;
          }
        }
        lStack_a8 = lVar17;
        FUN_002e2ea0(PTR_LAB_04373088,local_b0);
      }
      uStack_b8 = uStack_b8 & 0xffffffffffffff00;
    }
    if ((local_d0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_c0);
    }
  }
  return;
}


