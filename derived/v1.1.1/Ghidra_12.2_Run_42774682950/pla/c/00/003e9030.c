/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e9030; name: FUN_003e9030
 */


void FUN_003e9030(long *param_1,char *param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  size_t sVar5;
  char *pcVar6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  void *pvVar9;
  char *pcVar10;
  ulong uVar11;
  byte local_1a0;
  char acStack_19f [5];
  undefined2 uStack_19a;
  char cStack_198;
  char acStack_197 [7];
  undefined8 local_190;
  byte local_188;
  undefined4 uStack_187;
  undefined1 uStack_183;
  undefined2 uStack_182;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined6 uStack_17e;
  void *local_178;
  undefined4 local_170 [2];
  byte local_168 [16];
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  byte bStack_120;
  undefined7 uStack_11f;
  char cStack_118;
  undefined2 uStack_117;
  undefined1 uStack_115;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  byte local_100;
  undefined8 local_f0;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined1 auStack_d0 [24];
  long *local_b8;
  long local_b0;
  long local_a8;
  byte local_a0;
  char acStack_9f [5];
  undefined2 uStack_9a;
  undefined4 uStack_98;
  char cStack_94;
  char cStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  char *local_90;
  ulong *local_88;
  ulong local_80;
  ulong local_78;
  __tree_node_base *local_70;
  __tree_node_base *local_68;
  long local_60;
  undefined8 local_58;
  
  if (param_3 == 0) {
    return;
  }
  local_68 = (__tree_node_base *)0x0;
  local_60 = 0;
  local_70 = (__tree_node_base *)&local_68;
                    /* try { // try from 003e9068 to 003e9073 has its CatchHandler @ 003e9a70 */
  puVar3 = (undefined8 *)FUN_003eb610(param_3,1);
  if (puVar3 == (undefined8 *)0x0) {
LAB_003e90c0:
    uStack_182 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    uStack_17e = 0;
    local_188 = 8;
    uStack_187 = 0x656d616e;
    local_178 = (void *)0x0;
    uStack_183 = 0;
                    /* try { // try from 003e90e8 to 003e90f3 has its CatchHandler @ 003e9a3c */
    FUN_003e9cf0(local_170,param_3,0);
                    /* try { // try from 003e90f4 to 003e9103 has its CatchHandler @ 003e99fc */
    FUN_003e6510(&local_88,&local_188,1);
    uStack_91 = 0;
    local_a0 = 0x1a;
    local_90 = (char *)0x0;
    acStack_9f[0] = s_other_address_039a0b96[0];
    acStack_9f[1] = s_other_address_039a0b96[1];
    acStack_9f[2] = s_other_address_039a0b96[2];
    acStack_9f[3] = s_other_address_039a0b96[3];
    acStack_9f[4] = s_other_address_039a0b96[4];
    uStack_9a = s_other_address_039a0b96._5_2_;
    uStack_98 = (undefined4)
                (CONCAT53(s_other_address_039a0b96._8_5_,s_other_address_039a0b96._5_3_) >> 0x10);
    cStack_94 = s_other_address_039a0b96[0xb];
    cStack_93 = s_other_address_039a0b96[0xc];
    uStack_92 = 0;
                    /* try { // try from 003e9130 to 003e913f has its CatchHandler @ 003e99d0 */
    puVar4 = (undefined8 *)FUN_003ea500(&local_70,&local_b8,&local_a0);
LAB_003e9140:
    p_Var7 = (__tree_node_base *)*puVar4;
    if (p_Var7 == (__tree_node_base *)0x0) {
      p_Var7 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(char **)(p_Var7 + 0x30) = local_90;
      *(ulong *)(p_Var7 + 0x28) =
           CONCAT17(uStack_91,CONCAT16(uStack_92,CONCAT15(cStack_93,CONCAT14(cStack_94,uStack_98))))
      ;
      *(ulong *)(p_Var7 + 0x20) = CONCAT26(uStack_9a,CONCAT51(acStack_9f,local_a0));
      uStack_98 = 0;
      cStack_94 = '\0';
      cStack_93 = '\0';
      uStack_92 = 0;
      uStack_91 = 0;
      local_90 = (char *)0x0;
      local_a0 = 0;
      acStack_9f[0] = '\0';
      acStack_9f[1] = '\0';
      acStack_9f[2] = '\0';
      acStack_9f[3] = '\0';
      acStack_9f[4] = '\0';
      uStack_9a = 0;
      *(undefined8 *)(p_Var7 + 0x60) = 0;
      *(undefined8 *)(p_Var7 + 0x58) = 0;
      *(undefined8 *)(p_Var7 + 0x68) = 0;
      *(undefined8 *)(p_Var7 + 0x70) = 0;
      *(__tree_node_base **)(p_Var7 + 0x58) = p_Var7 + 0x60;
      *(undefined8 *)(p_Var7 + 0x50) = 0;
      *(undefined8 *)(p_Var7 + 0x48) = 0;
      *(undefined8 *)(p_Var7 + 0x40) = 0;
      *(undefined8 *)(p_Var7 + 0x38) = 0;
      *(undefined8 *)(p_Var7 + 0x78) = 0;
      *(undefined8 *)(p_Var7 + 0x80) = 0;
      *(long **)(p_Var7 + 0x10) = local_b8;
      *(undefined8 *)p_Var7 = 0;
      *(undefined8 *)(p_Var7 + 8) = 0;
      *puVar4 = p_Var7;
      if (*(__tree_node_base **)local_70 == (__tree_node_base *)0x0) {
        p_Var8 = p_Var7;
      }
      else {
        p_Var8 = (__tree_node_base *)*puVar4;
        local_70 = *(__tree_node_base **)local_70;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_68,p_Var8);
      local_60 = local_60 + 1;
    }
    p_Var8 = p_Var7 + 0x60;
    *(undefined4 *)(p_Var7 + 0x38) = 5;
    FUN_003e9f80(p_Var7 + 0x58,*(undefined8 *)p_Var8);
    *(ulong **)(p_Var7 + 0x58) = local_88;
    *(ulong *)(p_Var7 + 0x60) = local_80;
    *(ulong *)(p_Var7 + 0x68) = local_78;
    if (local_78 == 0) {
      *(__tree_node_base **)(p_Var7 + 0x58) = p_Var8;
    }
    else {
      *(__tree_node_base **)(local_80 + 0x10) = p_Var8;
      local_88 = &local_80;
      local_80 = 0;
    }
    local_78 = 0;
    if ((local_a0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_90);
    }
    FUN_003e9f80(&local_88,local_80);
    FUN_003e7200(&local_138);
    FUN_003e9f80(&local_150,local_148);
    if ((local_168[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_158);
    }
    if ((local_188 & 1) != 0) {
      pvVar9 = local_178;
LAB_003e9688:
      FUN_002e2ea0(PTR_LAB_04373088,pvVar9);
    }
  }
  else {
    pcVar10 = (char *)*puVar3;
    iVar2 = strcmp(pcVar10,"ipv4");
    if ((iVar2 != 0) && (iVar2 = strcmp(pcVar10,"ipv6"), iVar2 != 0)) {
      iVar2 = strcmp(pcVar10,"unix");
      if (iVar2 != 0) goto LAB_003e90c0;
      uStack_17e = 0;
      local_188 = 0x10;
      local_178 = (void *)0x0;
      uStack_187 = 0x656c6966;
      uStack_183 = 0x6e;
      uStack_182 = 0x6d61;
      uStack_180 = 0x65;
      uStack_17f = 0;
                    /* try { // try from 003e9420 to 003e9427 has its CatchHandler @ 003e98a0 */
      FUN_003ea108(local_170,puVar3[2],0);
                    /* try { // try from 003e9428 to 003e9437 has its CatchHandler @ 003e989c */
      FUN_003e6510(&local_88,&local_188,1);
      cStack_93 = '\0';
      uStack_92 = 0;
      uStack_91 = 0;
      local_a0 = 0x16;
      local_90 = (char *)0x0;
      acStack_9f = s_uds_address_039373b2._0_5_;
      uStack_9a = s_uds_address_039373b2._5_2_;
      uStack_98 = CONCAT31(0x737365,s_uds_address_039373b2[7]);
      cStack_94 = '\0';
                    /* try { // try from 003e9468 to 003e9477 has its CatchHandler @ 003e988c */
      puVar4 = (undefined8 *)FUN_003ea500(&local_70,&local_b8,&local_a0);
      goto LAB_003e9140;
    }
    pcVar6 = (char *)puVar3[2];
    local_80 = 0;
    local_78 = 0;
    pcVar10 = pcVar6 + 1;
    if (*pcVar6 != '/') {
      pcVar10 = pcVar6;
    }
    local_90 = (char *)0x0;
    local_88 = (ulong *)0x0;
    local_a0 = 0;
    acStack_9f[0] = '\0';
    acStack_9f[1] = '\0';
    acStack_9f[2] = '\0';
    acStack_9f[3] = '\0';
    acStack_9f[4] = '\0';
    uStack_9a = 0;
    uStack_98 = 0;
    cStack_94 = '\0';
    cStack_93 = '\0';
    uStack_92 = 0;
    uStack_91 = 0;
    if (pcVar10 == (char *)0x0) {
      sVar5 = 0;
    }
    else {
      sVar5 = strlen(pcVar10);
      if ((long)sVar5 < 0) {
                    /* try { // try from 003e91f4 to 003e9227 has its CatchHandler @ 003e99c0 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
    }
    uVar11 = FUN_002fec00(pcVar10,sVar5,&local_88,&local_a0);
    if ((uVar11 & 1) == 0) {
                    /* try { // try from 003e9860 to 003e9887 has its CatchHandler @ 003e99c0 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channelz.cc",0x186,2,
                   "assertion failed: %s","SplitHostPort(host_port, &host, &port)");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar11 = (ulong)(local_a0 >> 1);
    if ((local_a0 & 1) != 0) {
      uVar11 = CONCAT17(uStack_91,
                        CONCAT16(uStack_92,CONCAT15(cStack_93,CONCAT14(cStack_94,uStack_98))));
    }
    if (uVar11 == 0) {
      iVar2 = -1;
    }
    else {
      pcVar10 = (char *)((ulong)&local_a0 | 1);
      if ((local_a0 & 1) != 0) {
        pcVar10 = local_90;
      }
      iVar2 = atoi(pcVar10);
    }
    uVar11 = (ulong)local_88 >> 1 & 0x7f;
    uVar1 = (ulong)&local_88 | 1;
    if (((ulong)local_88 & 1) != 0) {
      uVar11 = local_80;
      uVar1 = local_78;
    }
                    /* try { // try from 003e9288 to 003e9293 has its CatchHandler @ 003e9a40 */
    pvVar9 = (void *)FUN_003eca70(uVar1,uVar11,0,0);
    local_178 = (void *)0x0;
    uStack_182 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    uStack_17e = 0;
    local_188 = 8;
    uStack_187 = 0x74726f70;
    uStack_183 = 0;
    local_170[0] = 3;
                    /* try { // try from 003e92c8 to 003e92cf has its CatchHandler @ 003e99b0 */
    FUN_003ea010(local_168,iVar2);
    local_150 = &local_148;
    local_148 = 0;
    uStack_140 = 0;
    uStack_110 = 0;
    uStack_114 = 0;
    local_128 = 0;
    bStack_120 = 0x14;
    uStack_130 = 0;
    local_138 = 0;
    uStack_117 = 0x7373;
    uStack_11f = s_ip_address_038be3cf._0_7_;
    cStack_118 = s_ip_address_038be3cf[7];
    uStack_115 = 0;
                    /* try { // try from 003e9314 to 003e931f has its CatchHandler @ 003e9910 */
    FUN_003ea108(auStack_108,pvVar9,0);
                    /* try { // try from 003e9320 to 003e932f has its CatchHandler @ 003e98d0 */
    FUN_003e6510(&local_b8,&local_188,2);
    acStack_197[6] = 0;
    local_1a0 = 0x1a;
    acStack_19f[0] = s_tcpip_address_03940ecd[0];
    acStack_19f[1] = s_tcpip_address_03940ecd[1];
    acStack_19f[2] = s_tcpip_address_03940ecd[2];
    acStack_19f[3] = s_tcpip_address_03940ecd[3];
    acStack_19f[4] = s_tcpip_address_03940ecd[4];
    local_190 = 0;
    acStack_197[5] = 0;
    uStack_19a = s_tcpip_address_03940ecd._5_2_;
    cStack_198 = s_tcpip_address_03940ecd[7];
    acStack_197[0] = s_tcpip_address_03940ecd[8];
    acStack_197[1] = s_tcpip_address_03940ecd[9];
    acStack_197[2] = s_tcpip_address_03940ecd[10];
    acStack_197[3] = s_tcpip_address_03940ecd[0xb];
    acStack_197[4] = s_tcpip_address_03940ecd[0xc];
                    /* try { // try from 003e935c to 003e936b has its CatchHandler @ 003e98a4 */
    puVar4 = (undefined8 *)FUN_003ea500(&local_70,&local_58,&local_1a0);
    p_Var7 = (__tree_node_base *)*puVar4;
    if (p_Var7 == (__tree_node_base *)0x0) {
      p_Var7 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(undefined8 *)(p_Var7 + 0x30) = local_190;
      *(ulong *)(p_Var7 + 0x28) =
           CONCAT17(acStack_197[6],CONCAT16(acStack_197[5],CONCAT51(acStack_197._0_5_,cStack_198)));
      *(ulong *)(p_Var7 + 0x20) = CONCAT26(uStack_19a,CONCAT51(acStack_19f,local_1a0));
      cStack_198 = '\0';
      acStack_197[0] = '\0';
      acStack_197[1] = '\0';
      acStack_197[2] = '\0';
      acStack_197[3] = '\0';
      acStack_197[4] = '\0';
      acStack_197[5] = 0;
      acStack_197[6] = 0;
      local_190 = 0;
      local_1a0 = 0;
      acStack_19f[0] = '\0';
      acStack_19f[1] = '\0';
      acStack_19f[2] = '\0';
      acStack_19f[3] = '\0';
      acStack_19f[4] = '\0';
      uStack_19a = 0;
      *(undefined8 *)(p_Var7 + 0x60) = 0;
      *(undefined8 *)(p_Var7 + 0x58) = 0;
      *(undefined8 *)(p_Var7 + 0x68) = 0;
      *(undefined8 *)(p_Var7 + 0x70) = 0;
      *(__tree_node_base **)(p_Var7 + 0x58) = p_Var7 + 0x60;
      *(undefined8 *)(p_Var7 + 0x50) = 0;
      *(undefined8 *)(p_Var7 + 0x48) = 0;
      *(undefined8 *)(p_Var7 + 0x40) = 0;
      *(undefined8 *)(p_Var7 + 0x38) = 0;
      *(undefined8 *)(p_Var7 + 0x78) = 0;
      *(undefined8 *)(p_Var7 + 0x80) = 0;
      *(undefined8 *)(p_Var7 + 0x10) = local_58;
      *(undefined8 *)p_Var7 = 0;
      *(undefined8 *)(p_Var7 + 8) = 0;
      *puVar4 = p_Var7;
      if (*(__tree_node_base **)local_70 == (__tree_node_base *)0x0) {
        p_Var8 = p_Var7;
      }
      else {
        p_Var8 = (__tree_node_base *)*puVar4;
        local_70 = *(__tree_node_base **)local_70;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_68,p_Var8);
      local_60 = local_60 + 1;
    }
    p_Var8 = p_Var7 + 0x60;
    *(undefined4 *)(p_Var7 + 0x38) = 5;
    FUN_003e9f80(p_Var7 + 0x58,*(undefined8 *)p_Var8);
    *(long **)(p_Var7 + 0x58) = local_b8;
    *(long *)(p_Var7 + 0x60) = local_b0;
    *(long *)(p_Var7 + 0x68) = local_a8;
    if (local_a8 == 0) {
      *(__tree_node_base **)(p_Var7 + 0x58) = p_Var8;
    }
    else {
      *(__tree_node_base **)(local_b0 + 0x10) = p_Var8;
      local_b8 = &local_b0;
      local_b0 = 0;
    }
    local_a8 = 0;
    if ((local_1a0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_190);
    }
    FUN_003e9f80(&local_b8,local_b0);
    FUN_003e7200(auStack_d0);
    FUN_003e9f80(auStack_e8,local_e0);
    if ((local_100 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_f0);
    }
    if ((bStack_120 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,uStack_110);
    }
    FUN_003e7200(&local_138);
    FUN_003e9f80(&local_150,local_148);
    if ((local_168[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_158);
    }
    if ((local_188 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_178);
    }
                    /* try { // try from 003e965c to 003e9663 has its CatchHandler @ 003e9a40 */
    free(pvVar9);
    if ((local_a0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_90);
    }
    if (((ulong)local_88 & 1) != 0) {
      pvVar9 = (void *)local_78;
      goto LAB_003e9688;
    }
  }
                    /* try { // try from 003e9694 to 003e969b has its CatchHandler @ 003e9a70 */
  FUN_003ec320(puVar3);
  uStack_180 = 0;
  uStack_17f = 0;
  uStack_17e = 0;
  local_178 = (void *)0x0;
  local_188 = 0;
  uStack_187 = 0;
  uStack_183 = 0;
  uStack_182 = 0;
  sVar5 = strlen(param_2);
  if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 003e9858 to 003e985f has its CatchHandler @ 003e9888 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    local_188 = (byte)((int)sVar5 << 1);
    pvVar9 = (void *)((ulong)&local_188 | 1);
    if (sVar5 == 0) goto LAB_003e9710;
  }
  else {
    uVar11 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar9 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar11);
    local_188 = (byte)uVar11 | 1;
    uStack_187 = (undefined4)(uVar11 >> 8);
    uStack_183 = (undefined1)(uVar11 >> 0x28);
    uStack_182 = (undefined2)(uVar11 >> 0x30);
    uStack_180 = (undefined1)sVar5;
    uStack_17f = (undefined1)(sVar5 >> 8);
    uStack_17e = (undefined6)(sVar5 >> 0x10);
    local_178 = pvVar9;
  }
  memcpy(pvVar9,param_2,sVar5);
LAB_003e9710:
  *(undefined1 *)((long)pvVar9 + sVar5) = 0;
                    /* try { // try from 003e9714 to 003e9723 has its CatchHandler @ 003e9a50 */
  puVar3 = (undefined8 *)FUN_003ea500(param_1,&local_88,&local_188);
  p_Var7 = (__tree_node_base *)*puVar3;
  if (p_Var7 == (__tree_node_base *)0x0) {
    p_Var7 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
    *(void **)(p_Var7 + 0x30) = local_178;
    *(ulong *)(p_Var7 + 0x28) = CONCAT62(uStack_17e,CONCAT11(uStack_17f,uStack_180));
    *(ulong *)(p_Var7 + 0x20) =
         CONCAT26(uStack_182,CONCAT15(uStack_183,CONCAT41(uStack_187,local_188)));
    uStack_180 = 0;
    uStack_17f = 0;
    uStack_17e = 0;
    local_178 = (void *)0x0;
    local_188 = 0;
    uStack_187 = 0;
    uStack_183 = 0;
    uStack_182 = 0;
    *(undefined8 *)(p_Var7 + 0x60) = 0;
    *(undefined8 *)(p_Var7 + 0x58) = 0;
    *(undefined8 *)(p_Var7 + 0x68) = 0;
    *(undefined8 *)(p_Var7 + 0x70) = 0;
    *(__tree_node_base **)(p_Var7 + 0x58) = p_Var7 + 0x60;
    *(undefined8 *)(p_Var7 + 0x50) = 0;
    *(undefined8 *)(p_Var7 + 0x48) = 0;
    *(undefined8 *)(p_Var7 + 0x40) = 0;
    *(undefined8 *)(p_Var7 + 0x38) = 0;
    *(undefined8 *)(p_Var7 + 0x78) = 0;
    *(undefined8 *)(p_Var7 + 0x80) = 0;
    *(ulong **)(p_Var7 + 0x10) = local_88;
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *puVar3 = p_Var7;
    if (*(long *)*param_1 == 0) {
      p_Var8 = p_Var7;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var8 = (__tree_node_base *)*puVar3;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var8);
    param_1[2] = param_1[2] + 1;
  }
  p_Var8 = p_Var7 + 0x60;
  *(undefined4 *)(p_Var7 + 0x38) = 5;
  FUN_003e9f80(p_Var7 + 0x58,*(undefined8 *)p_Var8);
  *(__tree_node_base **)(p_Var7 + 0x58) = local_70;
  *(__tree_node_base **)(p_Var7 + 0x60) = local_68;
  *(long *)(p_Var7 + 0x68) = local_60;
  if (local_60 == 0) {
    *(__tree_node_base **)(p_Var7 + 0x58) = p_Var8;
  }
  else {
    *(__tree_node_base **)(local_68 + 0x10) = p_Var8;
    local_68 = (__tree_node_base *)0x0;
    local_70 = (__tree_node_base *)&local_68;
  }
  local_60 = 0;
  if ((local_188 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_178);
  }
  FUN_003e9f80(&local_70,local_68);
  return;
}


