/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00676ae4; name: FUN_00676ae4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00676ae4(long *param_1,undefined8 param_2,undefined8 param_3,char *param_4,char *param_5,
                 long *param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ostream oVar9;
  undefined6 uVar10;
  undefined1 uVar11;
  iostream *piVar12;
  bool bVar13;
  long *plVar14;
  size_t sVar15;
  long lVar16;
  char *pcVar17;
  ostream *poVar18;
  long lVar19;
  code *pcVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long *plVar27;
  void *pvVar28;
  ulong *puVar29;
  ulong uVar30;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined *local_1f0;
  long *local_1e8;
  undefined1 *local_1e0;
  undefined **local_1d0;
  ulong local_1b8;
  long *local_1b0;
  char *local_1a8;
  long *plStack_1a0;
  ulong local_198;
  long *local_190;
  void *local_188;
  iostream local_180;
  undefined7 uStack_17f;
  char cStack_178;
  undefined6 uStack_177;
  char cStack_171;
  ostream oStack_170;
  undefined6 uStack_16f;
  undefined1 uStack_169;
  long *local_168;
  iostream *local_160;
  long *local_158;
  undefined1 local_150;
  ulong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long *local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined *local_f8 [17];
  undefined8 local_70;
  undefined4 local_68;
  
  *param_1 = *param_6;
  lVar19 = param_6[1];
  param_1[1] = lVar19;
  if (lVar19 != 0) {
    plVar14 = (long *)(lVar19 + 8);
    do {
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = *plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar14 = (long *)FUN_00612290();
  param_1[0xc] = (long)plVar14;
  sVar15 = strlen(param_4);
  if (0xffffffffffffffef < sVar15) {
                    /* try { // try from 006776e8 to 006776ef has its CatchHandler @ 00677850 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar15 < 0x17) {
    pvVar28 = (void *)((long)param_1 + 0x49);
    *(char *)(param_1 + 9) = (char)((int)sVar15 << 1);
    if (sVar15 != 0) goto LAB_00676bc0;
  }
  else {
    uVar30 = sVar15 + 0x10 & 0xfffffffffffffff0;
    pvVar28 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar30,1);
    param_1[9] = uVar30 | 1;
    param_1[10] = sVar15;
    param_1[0xb] = (long)pvVar28;
LAB_00676bc0:
    memcpy(pvVar28,param_4,sVar15);
  }
  *(undefined1 *)((long)pvVar28 + sVar15) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  plVar14 = (long *)FUN_00612290();
  param_1[0x10] = (long)plVar14;
  sVar15 = strlen(param_5);
  if (0xffffffffffffffef < sVar15) {
                    /* try { // try from 006776f0 to 006776f7 has its CatchHandler @ 00677824 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar15 < 0x17) {
    pvVar28 = (void *)((long)param_1 + 0x69);
    *(char *)(param_1 + 0xd) = (char)((int)sVar15 << 1);
    if (sVar15 != 0) goto LAB_00676c4c;
  }
  else {
    uVar30 = sVar15 + 0x10 & 0xfffffffffffffff0;
    pvVar28 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar30,1);
    param_1[0xd] = uVar30 | 1;
    param_1[0xe] = sVar15;
    param_1[0xf] = (long)pvVar28;
LAB_00676c4c:
    memcpy(pvVar28,param_5,sVar15);
  }
  *(undefined1 *)((long)pvVar28 + sVar15) = 0;
  puVar29 = (ulong *)(param_1 + 0x11);
  *puVar29 = 0;
  param_1[0x12] = 0;
  local_160 = &local_180;
  local_1e8 = *(long **)(*param_1 + 400);
  oStack_170 = (ostream)0xb0;
  uStack_16f = 0x6779;
  uStack_169 = 0;
  local_1d0 = &local_1f0;
  local_1e0 = &LAB_00677de0;
  local_198 = 0;
  local_190 = (long *)0x0;
  local_1f0 = PTR_DAT_04373070 + 0x10;
  local_180 = SUB81(PTR_DAT_04375a08 + 0x10,0);
  uStack_17f = (undefined7)((ulong)(PTR_DAT_04375a08 + 0x10) >> 8);
  cStack_178 = (char)local_1e8;
  uStack_177 = (undefined6)((ulong)local_1e8 >> 8);
  cStack_171 = (char)((ulong)local_1e8 >> 0x38);
  local_208 = (undefined8 *)0x2bf20;
  FUN_00290a94(&local_1b8,param_1,&DAT_03996322,param_3,&local_180,&local_1f0,&local_208,&local_198)
  ;
  plVar14 = local_1b0;
  uVar30 = local_1b8;
  local_1b8 = 0;
  local_1b0 = (long *)0x0;
  *puVar29 = uVar30;
  plVar27 = (long *)param_1[0x12];
  param_1[0x12] = (long)plVar14;
  if (plVar27 != (long *)0x0) {
    plVar14 = plVar27 + 1;
    do {
      lVar19 = *plVar14;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1b0 != (long *)0x0) {
    plVar14 = local_1b0 + 1;
    do {
      lVar19 = *plVar14;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_1b0 + 0x10))(local_1b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_190 != (long *)0x0) {
    plVar14 = local_190 + 1;
    do {
      lVar19 = *plVar14;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_190 + 0x10))(local_190);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1d0 != (undefined **)0x0) {
    if (local_1d0 == &local_1f0) {
      pcVar20 = *(code **)(*local_1d0 + 0x10);
    }
    else {
      pcVar20 = *(code **)(*local_1d0 + 0x18);
    }
    (*pcVar20)();
  }
  if (local_160 != (iostream *)0x0) {
    if (local_160 == &local_180) {
      pcVar20 = *(code **)(*(long *)local_160 + 0x10);
    }
    else {
      pcVar20 = *(code **)(*(long *)local_160 + 0x18);
    }
    (*pcVar20)();
  }
  local_200 = (undefined8 *)0x0;
  local_1f8 = (undefined8 *)0x0;
  local_208 = (undefined8 *)0x0;
  plVar14 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  puVar2 = PTR_DAT_04375a10;
  if (plVar14 == (long *)0x0) {
LAB_00676e60:
    if (local_200 < local_1f8) goto LAB_00676e6c;
LAB_00676e90:
    lVar19 = (long)local_200 - (long)local_208 >> 3;
    uVar30 = lVar19 + 1;
    if (uVar30 >> 0x3d != 0) {
                    /* try { // try from 00677700 to 00677707 has its CatchHandler @ 00677708 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)((long)local_1f8 - (long)local_208 >> 3) < 0xfffffffffffffff) {
      uVar21 = (long)local_1f8 - (long)local_208 >> 2;
      if (uVar30 <= uVar21) {
        uVar30 = uVar21;
      }
      if (uVar30 != 0) goto LAB_00676ed4;
      lVar16 = 0;
    }
    else {
      uVar30 = 0x1fffffffffffffff;
LAB_00676ed4:
      lVar16 = FUN_002e2e80(PTR_FUN_04373078,uVar30 << 3);
    }
    puVar24 = local_208;
    puVar22 = (undefined8 *)(lVar16 + lVar19 * 8);
    local_1f8 = (undefined8 *)(lVar16 + uVar30 * 8);
    puVar25 = puVar22 + 1;
    *puVar22 = plVar14;
    if ((long)local_200 - (long)local_208 != 0) {
      uVar30 = ((long)local_200 - (long)local_208) - 8;
      uVar1 = ((uint)(uVar30 >> 3) & 0x1fffffff) + 1;
      puVar26 = local_200;
      if ((uVar1 & 3) != 0) {
        lVar19 = -((ulong)uVar1 & 3);
        do {
          puVar26 = puVar26 + -1;
          uVar23 = *puVar26;
          *puVar26 = 0;
          puVar22 = puVar22 + -1;
          *puVar22 = uVar23;
          bVar13 = lVar19 != -1;
          lVar19 = lVar19 + 1;
        } while (bVar13);
      }
      if (0x17 < uVar30) {
        do {
          uVar23 = puVar26[-1];
          puVar26[-1] = 0;
          puVar22[-1] = uVar23;
          uVar23 = puVar26[-2];
          puVar26[-2] = 0;
          puVar22[-2] = uVar23;
          uVar23 = puVar26[-3];
          puVar26[-3] = 0;
          puVar22[-3] = uVar23;
          puVar26 = puVar26 + -4;
          uVar23 = *puVar26;
          *puVar26 = 0;
          puVar22 = puVar22 + -4;
          *puVar22 = uVar23;
        } while (local_208 != puVar26);
      }
    }
    puVar2 = PTR_LAB_04373088;
    bVar13 = local_200 != local_208;
    local_208 = puVar22;
    if (bVar13) {
      puVar22 = local_200 + -1;
      puVar26 = (undefined8 *)*puVar22;
      *puVar22 = 0;
      local_200 = puVar25;
      if (puVar26 != (undefined8 *)0x0) goto LAB_00676fa8;
      while (puVar25 = local_200, puVar24 != puVar22) {
        while( true ) {
          puVar22 = puVar22 + -1;
          puVar26 = (undefined8 *)*puVar22;
          *puVar22 = 0;
          if (puVar26 == (undefined8 *)0x0) break;
LAB_00676fa8:
          (**(code **)*puVar26)(puVar26);
          FUN_002e2ea0(puVar2,puVar26);
          puVar25 = local_200;
          if (puVar24 == puVar22) goto LAB_00676fcc;
        }
      }
    }
LAB_00676fcc:
    local_200 = puVar25;
    if (puVar24 != (undefined8 *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088,puVar24);
    }
  }
  else {
    lVar19 = param_1[0x11];
    lVar16 = param_1[0x12];
    if (lVar16 != 0) {
      plVar27 = (long *)(lVar16 + 0x10);
      do {
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar13) {
          *plVar27 = *plVar27 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *plVar14 = (long)(puVar2 + 0x10);
      plVar14[1] = lVar19;
      plVar14[2] = lVar16;
      do {
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar13) {
          *plVar27 = *plVar27 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      std::__shared_weak_count::__release_weak();
      goto LAB_00676e60;
    }
    *plVar14 = (long)(PTR_DAT_04375a10 + 0x10);
    plVar14[1] = lVar19;
    plVar14[2] = 0;
    if (local_1f8 <= local_200) goto LAB_00676e90;
LAB_00676e6c:
    *local_200 = plVar14;
    local_200 = local_200 + 1;
  }
                    /* try { // try from 00676fe0 to 00676fe7 has its CatchHandler @ 00677930 */
  FUN_002e2f18(&local_1f0);
  local_180 = (iostream)0x2c;
  uStack_177._0_1_ = s_grpc_keepalive_time_ms_03996b3d[8];
  uStack_177._1_1_ = s_grpc_keepalive_time_ms_03996b3d[9];
  uStack_177._2_1_ = s_grpc_keepalive_time_ms_03996b3d[10];
  uStack_177._3_1_ = s_grpc_keepalive_time_ms_03996b3d[0xb];
  uStack_177._4_1_ = s_grpc_keepalive_time_ms_03996b3d[0xc];
  uStack_177._5_1_ = s_grpc_keepalive_time_ms_03996b3d[0xd];
  uStack_17f = s_grpc_keepalive_time_ms_03996b3d._0_7_;
  cStack_178 = s_grpc_keepalive_time_ms_03996b3d[7];
  cStack_171 = s_grpc_keepalive_time_ms_03996b3d[0xe];
  oStack_170 = s_grpc_keepalive_time_ms_03996b3d[0xf];
  uStack_16f._0_1_ = s_grpc_keepalive_time_ms_03996b3d[0x10];
  uStack_16f._1_1_ = s_grpc_keepalive_time_ms_03996b3d[0x11];
  uStack_16f._2_1_ = s_grpc_keepalive_time_ms_03996b3d[0x12];
  uStack_16f._3_1_ = s_grpc_keepalive_time_ms_03996b3d[0x13];
  uStack_16f._4_1_ = s_grpc_keepalive_time_ms_03996b3d[0x14];
  uStack_16f._5_1_ = s_grpc_keepalive_time_ms_03996b3d[0x15];
  uStack_169 = 0;
                    /* try { // try from 00677010 to 0067701f has its CatchHandler @ 00677904 */
  FUN_002e3af0(&local_1f0,&local_180,10000);
  if (((byte)local_180 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_169,CONCAT61(uStack_16f,oStack_170)));
  }
  cStack_178 = 0;
  uStack_177 = 0;
  cStack_171 = 0;
  oStack_170 = (ostream)0x0;
  uStack_16f = 0;
  uStack_169 = 0;
  local_180 = (iostream)0x0;
  uStack_17f = 0;
  pcVar17 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  uVar6 = s_grpc_keepalive_timeout_ms_038b315f._0_8_;
  oStack_170 = SUB81(pcVar17,0);
  uStack_16f = (undefined6)((ulong)pcVar17 >> 8);
  uStack_169 = (undefined1)((ulong)pcVar17 >> 0x38);
  uVar23 = CONCAT71(s_grpc_keepalive_timeout_ms_038b315f._9_7_,
                    s_grpc_keepalive_timeout_ms_038b315f[8]);
  cStack_178 = (char)_UNK_03888e88;
  uStack_177 = (undefined6)((ulong)_UNK_03888e88 >> 8);
  cStack_171 = (char)((ulong)_UNK_03888e88 >> 0x38);
  local_180 = SUB81(_DAT_03888e80,0);
  uStack_17f = (undefined7)((ulong)_DAT_03888e80 >> 8);
  uVar5 = CONCAT17(s_grpc_keepalive_timeout_ms_038b315f[0x10],
                   s_grpc_keepalive_timeout_ms_038b315f._9_7_);
  *(undefined8 *)(pcVar17 + 0x11) = s_grpc_keepalive_timeout_ms_038b315f._17_8_;
  *(undefined8 *)(pcVar17 + 9) = uVar5;
  *(undefined8 *)(pcVar17 + 8) = uVar23;
  *(undefined8 *)pcVar17 = uVar6;
  pcVar17[0x19] = '\0';
                    /* try { // try from 0067707c to 0067708b has its CatchHandler @ 006778f4 */
  FUN_002e3af0(&local_1f0,&local_180,20000);
  if (((byte)local_180 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_169,CONCAT61(uStack_16f,oStack_170)));
  }
  cStack_178 = 0;
  uStack_177 = 0;
  cStack_171 = 0;
  oStack_170 = (ostream)0x0;
  uStack_16f = 0;
  uStack_169 = 0;
  local_180 = (iostream)0x0;
  uStack_17f = 0;
  pcVar17 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  uVar7 = s_grpc_keepalive_permit_without_ca_0398d888._24_8_;
  uVar6 = s_grpc_keepalive_permit_without_ca_0398d888._16_8_;
  uVar5 = s_grpc_keepalive_permit_without_ca_0398d888._8_8_;
  uVar23 = s_grpc_keepalive_permit_without_ca_0398d888._0_8_;
  oStack_170 = SUB81(pcVar17,0);
  uStack_16f = (undefined6)((ulong)pcVar17 >> 8);
  uStack_169 = (undefined1)((ulong)pcVar17 >> 0x38);
  cStack_178 = (char)_UNK_03889538;
  uStack_177 = (undefined6)((ulong)_UNK_03889538 >> 8);
  cStack_171 = (char)((ulong)_UNK_03889538 >> 0x38);
  local_180 = SUB81(_DAT_03889530,0);
  uStack_17f = (undefined7)((ulong)_DAT_03889530 >> 8);
  pcVar17[0x23] = '\0';
  *(undefined8 *)(pcVar17 + 8) = uVar5;
  *(undefined8 *)pcVar17 = uVar23;
  *(undefined8 *)(pcVar17 + 0x18) = uVar7;
  *(undefined8 *)(pcVar17 + 0x10) = uVar6;
  pcVar17[0x1f] = 'a';
  pcVar17[0x20] = 'l';
  pcVar17[0x21] = 'l';
  pcVar17[0x22] = 's';
                    /* try { // try from 006770ec to 006770fb has its CatchHandler @ 006778e4 */
  FUN_002e3af0(&local_1f0,&local_180,0);
  if (((byte)local_180 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_169,CONCAT61(uStack_16f,oStack_170)));
  }
  cStack_178 = 0;
  uStack_177 = 0;
  cStack_171 = 0;
  oStack_170 = (ostream)0x0;
  uStack_16f = 0;
  uStack_169 = 0;
  local_180 = (iostream)0x0;
  uStack_17f = 0;
  pcVar17 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  oStack_170 = SUB81(pcVar17,0);
  uStack_16f = (undefined6)((ulong)pcVar17 >> 8);
  uStack_169 = (undefined1)((ulong)pcVar17 >> 0x38);
  cStack_178 = (char)_UNK_03889b68;
  uStack_177 = (undefined6)((ulong)_UNK_03889b68 >> 8);
  cStack_171 = (char)((ulong)_UNK_03889b68 >> 0x38);
  local_180 = SUB81(_DAT_03889b60,0);
  uStack_17f = (undefined7)((ulong)_DAT_03889b60 >> 8);
  pcVar17[0x20] = 'a';
  uVar7 = s_grpc_http2_max_pings_without_dat_0390f91e._24_8_;
  uVar6 = s_grpc_http2_max_pings_without_dat_0390f91e._16_8_;
  uVar5 = s_grpc_http2_max_pings_without_dat_0390f91e._8_8_;
  uVar23 = s_grpc_http2_max_pings_without_dat_0390f91e._0_8_;
  pcVar17[0x21] = '\0';
  *(undefined8 *)(pcVar17 + 8) = uVar5;
  *(undefined8 *)pcVar17 = uVar23;
  *(undefined8 *)(pcVar17 + 0x18) = uVar7;
  *(undefined8 *)(pcVar17 + 0x10) = uVar6;
                    /* try { // try from 00677158 to 00677167 has its CatchHandler @ 006778d4 */
  FUN_002e3af0(&local_1f0,&local_180,0);
  if (((byte)local_180 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_169,CONCAT61(uStack_16f,oStack_170)));
  }
  cStack_178 = 0;
  uStack_177 = 0;
  cStack_171 = 0;
  oStack_170 = (ostream)0x0;
  uStack_16f = 0;
  uStack_169 = 0;
  local_180 = (iostream)0x0;
  uStack_17f = 0;
  pcVar17 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  oStack_170 = SUB81(pcVar17,0);
  uStack_16f = (undefined6)((ulong)pcVar17 >> 8);
  uStack_169 = (undefined1)((ulong)pcVar17 >> 0x38);
  cStack_178 = (char)_UNK_03889548;
  uStack_177 = (undefined6)((ulong)_UNK_03889548 >> 8);
  cStack_171 = (char)((ulong)_UNK_03889548 >> 0x38);
  local_180 = SUB81(_DAT_03889540,0);
  uStack_17f = (undefined7)((ulong)_DAT_03889540 >> 8);
  pcVar17[0x20] = 's';
  uVar7 = s_grpc_http2_min_time_between_ping_03996b54._24_8_;
  uVar6 = s_grpc_http2_min_time_between_ping_03996b54._16_8_;
  uVar5 = s_grpc_http2_min_time_between_ping_03996b54._8_8_;
  uVar23 = s_grpc_http2_min_time_between_ping_03996b54._0_8_;
  pcVar17[0x21] = '_';
  pcVar17[0x22] = 'm';
  pcVar17[0x23] = 's';
  pcVar17[0x24] = '\0';
  *(undefined8 *)(pcVar17 + 8) = uVar5;
  *(undefined8 *)pcVar17 = uVar23;
  *(undefined8 *)(pcVar17 + 0x18) = uVar7;
  *(undefined8 *)(pcVar17 + 0x10) = uVar6;
                    /* try { // try from 006771c8 to 006771d7 has its CatchHandler @ 006778c4 */
  FUN_002e3af0(&local_1f0,&local_180,5000);
  if (((byte)local_180 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_169,CONCAT61(uStack_16f,oStack_170)));
  }
  puVar8 = PTR_DAT_043732f0;
  local_f8[0] = PTR_DAT_043732f8 + 0x40;
  puVar2 = PTR_DAT_043732f0 + 0x40;
  cStack_178 = 0;
  uStack_177 = 0;
  cStack_171 = 0;
  oStack_170 = SUB81(puVar2,0);
  oVar9 = oStack_170;
  uStack_16f = (undefined6)((ulong)puVar2 >> 8);
  uVar10 = uStack_16f;
  uStack_169 = (undefined1)((ulong)puVar2 >> 0x38);
  uVar11 = uStack_169;
  local_180 = SUB81(PTR_DAT_043732f8 + 0x18,0);
  uStack_17f = (undefined7)((ulong)(PTR_DAT_043732f8 + 0x18) >> 8);
                    /* try { // try from 00677228 to 00677233 has its CatchHandler @ 006778bc */
  std::ios_base::init((ios *)local_f8);
  local_68 = 0xffffffff;
  local_180 = SUB81(puVar8 + 0x18,0);
  uStack_17f = (undefined7)((ulong)(puVar8 + 0x18) >> 8);
  local_f8[0] = puVar8 + 0x68;
  local_70 = 0;
  oStack_170 = oVar9;
  uStack_16f = uVar10;
  uStack_169 = uVar11;
                    /* try { // try from 00677254 to 0067725b has its CatchHandler @ 006778b4 */
  std::streambuf::streambuf((streambuf *)&local_168);
  puVar2 = PTR_DAT_04373300;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_168 = (long *)(PTR_DAT_04373300 + 0x10);
  local_110 = (long *)FUN_00612290();
  uStack_108 = 0;
  local_118 = 0;
  local_100 = 0x18;
  local_128 = 0;
  uStack_120 = 0;
                    /* try { // try from 00677294 to 006772c3 has its CatchHandler @ 00677934 */
  poVar18 = std::__put_character_sequence<char,std::char_traits<char>>
                      (&oStack_170,
                       "\n{\n  \"methodConfig\": [ {\n    \"name\": [\n      { \"service\": \"",0x3b
                      );
  poVar18 = std::__put_character_sequence<char,std::char_traits<char>>
                      (poVar18,"nn.npln.gamesync.v1.Gamesync",0x1c);
  std::__put_character_sequence<char,std::char_traits<char>>
            (poVar18,
             "\" }\n    ],\n    \"retryPolicy\": {\n      \"maxAttempts\": 5,\n      \"initialBackoff\": \"1s\",\n      \"maxBackoff\": \"120s\",\n      \"backoffMultiplier\": 1.6,\n      \"retryableStatusCodes\": [ \"UNAVAILABLE\" ]\n    }\n  } ]\n}\n"
             ,0xd0);
                    /* try { // try from 006772c4 to 006772d3 has its CatchHandler @ 006778b0 */
  FUN_002a82f0(&local_1b8,(streambuf *)&local_168);
  pcVar17 = (char *)((ulong)&local_1b8 | 1);
  if ((local_1b8 & 1) != 0) {
    pcVar17 = local_1a8;
  }
  local_198 = 0;
  local_190 = (long *)0x0;
  local_188 = (void *)0x0;
  sVar15 = strlen(pcVar17);
  if (0xffffffffffffffef < sVar15) {
                    /* try { // try from 006776f8 to 006776ff has its CatchHandler @ 00677814 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar15 < 0x17) {
    local_198 = CONCAT71(local_198._1_7_,(char)((int)sVar15 << 1));
    pvVar28 = (void *)((ulong)&local_198 | 1);
    if (sVar15 == 0) goto LAB_00677364;
  }
  else {
    uVar30 = sVar15 + 0x10 & 0xfffffffffffffff0;
    pvVar28 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar30);
    local_198 = uVar30 | 1;
    local_190 = (long *)sVar15;
    local_188 = pvVar28;
  }
  memcpy(pvVar28,pcVar17,sVar15);
LAB_00677364:
  *(undefined1 *)((long)pvVar28 + sVar15) = 0;
                    /* try { // try from 00677368 to 00677373 has its CatchHandler @ 0067786c */
  FUN_002e3c44(&local_1f0,&local_198);
  if ((local_198 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_188);
  }
  if ((local_1b8 & 1) != 0) {
    (**(code **)(*plStack_1a0 + 0x18))(plStack_1a0,local_1a8,local_1b8 & 0xfffffffffffffffe,1);
  }
  puVar3 = puVar8 + 0x40;
  oStack_170 = SUB81(puVar3,0);
  uStack_16f = (undefined6)((ulong)puVar3 >> 8);
  uStack_169 = (undefined1)((ulong)puVar3 >> 0x38);
  local_180 = SUB81(puVar8 + 0x18,0);
  uStack_17f = (undefined7)((ulong)(puVar8 + 0x18) >> 8);
  local_f8[0] = puVar8 + 0x68;
  local_168 = (long *)(puVar2 + 0x10);
  if ((local_128 & 1) != 0) {
    (**(code **)(*local_110 + 0x18))(local_110,local_118,local_128 & 0xfffffffffffffffe,1);
  }
  std::streambuf::~streambuf((streambuf *)&local_168);
  std::iostream::~iostream(&local_180);
  std::ios::~ios((ios *)local_f8);
  FUN_006e41d0(&local_1b8,param_2,&local_208,&local_1f0);
  FUN_002e3804(&local_1f0);
  FUN_006d8290(&local_1f0,param_1);
  FUN_006d7de8(&local_180,&local_1f0,&local_1b8);
  lVar19 = CONCAT71(uStack_17f,local_180);
  lVar16 = CONCAT17(cStack_171,CONCAT61(uStack_177,cStack_178));
  local_180 = (iostream)0x0;
  uStack_17f = 0;
  cStack_178 = 0;
  uStack_177 = 0;
  cStack_171 = 0;
  plVar14 = (long *)param_1[3];
  param_1[2] = lVar19;
  param_1[3] = lVar16;
  if (plVar14 != (long *)0x0) {
    plVar27 = plVar14 + 1;
    do {
      lVar19 = *plVar27;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar13) {
        *plVar27 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar14 = local_168;
  lVar19 = CONCAT17(uStack_169,CONCAT61(uStack_16f,oStack_170));
  oStack_170 = (ostream)0x0;
  uStack_16f = 0;
  uStack_169 = 0;
  local_168 = (long *)0x0;
  plVar27 = (long *)param_1[5];
  param_1[4] = lVar19;
  param_1[5] = (long)plVar14;
  if (plVar27 != (long *)0x0) {
    plVar14 = plVar27 + 1;
    do {
      lVar19 = *plVar14;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar14 = local_158;
  piVar12 = local_160;
  local_160 = (iostream *)0x0;
  local_158 = (long *)0x0;
  plVar27 = (long *)param_1[7];
  param_1[6] = (long)piVar12;
  param_1[7] = (long)plVar14;
  if (plVar27 != (long *)0x0) {
    plVar14 = plVar27 + 1;
    do {
      lVar19 = *plVar14;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined1 *)(param_1 + 8) = local_150;
  if (local_158 != (long *)0x0) {
    plVar14 = local_158 + 1;
    do {
      lVar19 = *plVar14;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_158 + 0x10))(local_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_168 != (long *)0x0) {
    plVar14 = local_168 + 1;
    do {
      lVar19 = *plVar14;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_168 + 0x10))(local_168);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar14 = (long *)CONCAT17(cStack_171,CONCAT61(uStack_177,cStack_178));
  if (plVar14 != (long *)0x0) {
    plVar27 = plVar14 + 1;
    do {
      lVar19 = *plVar27;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar13) {
        *plVar27 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_002989e8(*puVar29 + 0x20,param_1 + 2);
  if (local_1e8 != (long *)0x0) {
    plVar14 = local_1e8 + 1;
    do {
      lVar19 = *plVar14;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_1e8 + 0x10))(local_1e8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1b0 != (long *)0x0) {
    plVar14 = local_1b0 + 1;
    do {
      lVar19 = *plVar14;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_1b0 + 0x10))(local_1b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar22 = local_208;
  puVar2 = PTR_LAB_04373088;
  if (local_208 != (undefined8 *)0x0) {
    if (local_200 != local_208) {
      puVar25 = local_200 + -1;
      puVar24 = (undefined8 *)*puVar25;
      *puVar25 = 0;
      if (puVar24 != (undefined8 *)0x0) goto LAB_00677688;
      while (puVar22 != puVar25) {
        while( true ) {
          puVar25 = puVar25 + -1;
          puVar24 = (undefined8 *)*puVar25;
          *puVar25 = 0;
          if (puVar24 == (undefined8 *)0x0) break;
LAB_00677688:
          (**(code **)*puVar24)(puVar24);
          FUN_002e2ea0(puVar2,puVar24);
          if (puVar22 == puVar25) goto LAB_006776b8;
        }
      }
    }
LAB_006776b8:
    local_200 = puVar22;
    FUN_002e2ea0(PTR_LAB_04373088,local_208);
  }
  return;
}


