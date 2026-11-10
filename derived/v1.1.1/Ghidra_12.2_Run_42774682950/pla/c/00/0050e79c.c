/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050e79c; name: FUN_0050e79c
 */


void FUN_0050e79c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  size_t sVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char *pcVar16;
  long *plVar17;
  void *pvVar18;
  ulong uVar19;
  ulong uVar20;
  ulong local_180;
  ulong uStack_178;
  void *local_170;
  ulong local_168;
  size_t local_160;
  void *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *local_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_04374a30;
  param_1[1] = (long)PTR_DAT_04374a30;
  plVar13 = param_1 + 2;
  *plVar13 = 1;
  *param_1 = (long)(PTR_DAT_04374a48 + 0x10);
  plVar9 = param_1 + 3;
  *plVar9 = 0;
  *plVar9 = *param_2;
  *param_2 = 0;
  plVar12 = param_1 + 0x13;
  *plVar12 = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[9] = 0;
  param_1[0x2e] = (long)(param_1 + 0x2f);
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = (long)(param_1 + 0x32);
  lVar7 = *(long *)(*(long *)(*plVar9 + 0x20) + 0x18);
  if (lVar7 == 0) {
                    /* try { // try from 0050f098 to 0050f15f has its CatchHandler @ 0050f23c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x2ab,2,"assertion failed: %s","xds_client() != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((*(byte *)(lVar7 + 0x88) & 1) == 0) {
    if (*(byte *)(lVar7 + 0x88) >> 1 == 0) goto LAB_0050f0c0;
  }
  else if (*(long *)(lVar7 + 0x90) == 0) {
LAB_0050f0c0:
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x2ac,2,"assertion failed: %s","!xds_client()->server_name_.empty()");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar15 = *(undefined8 *)(*(long *)(*plVar9 + 0x20) + 0x20);
  uVar14 = *(undefined8 *)(lVar7 + 0x30);
                    /* try { // try from 0050e85c to 0050e8cb has its CatchHandler @ 0050f23c */
  lVar7 = FUN_003db7f0();
  if (lVar7 != -0x35010ff23f0011ef) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                 "assertion failed: %s",
                 "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)PTR_DAT_04373fe0 == 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
                 "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = FUN_003e2f70(uVar15,0,0xffff,uVar14,*(long *)PTR_DAT_04373fe0 + 0x4a0,0,0x7fffffffffffffff
                       ,0);
  param_1[5] = lVar7;
  if (lVar7 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x2b3,2,"assertion failed: %s","call_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar9 = param_1 + 6;
  FUN_004fcf20(plVar9);
  FUN_004fcf20(param_1 + 0x1d);
  if (puVar3[0x10] != '\0') {
                    /* try { // try from 0050f054 to 0050f073 has its CatchHandler @ 0050f23c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x2b9,1,"[xds_client %p] Starting ADS call (chand: %p, calld: %p, call: %p)",
                 *(undefined8 *)(*(long *)(param_1[3] + 0x20) + 0x18),*(long *)(param_1[3] + 0x20),
                 param_1,param_1[5]);
  }
  local_138 = (long *)0x0;
  plStack_140 = (long *)0x0;
  local_150 = 0xa000000000;
  uStack_148 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
                    /* try { // try from 0050e908 to 0050e917 has its CatchHandler @ 0050f238 */
  iVar4 = FUN_003cba10(param_1[5],&local_150,1,0);
  puVar3 = PTR_LAB_04374a50;
  if (iVar4 != 0) {
                    /* try { // try from 0050f160 to 0050f1d7 has its CatchHandler @ 0050f238 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x2cc,2,"assertion failed: %s","GRPC_CALL_OK == call_error");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1[0xf] = (long)
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
  ;
  param_1[0xd] = 0;
  param_1[0xb] = (long)puVar3;
  param_1[0xc] = (long)param_1;
  *(undefined4 *)(param_1 + 0x10) = 0x2cf;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  lVar7 = *(long *)(*(long *)(param_1[3] + 0x20) + 0x18);
  if (*(long *)(lVar7 + 0xa0) == 0) goto LAB_0050eb18;
  pcVar16 = *(char **)PTR_PTR_04374a58;
  local_168 = 0;
  local_160 = 0;
  local_158 = (void *)0x0;
  sVar5 = strlen(pcVar16);
  if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 0050f1d8 to 0050f1df has its CatchHandler @ 0050f20c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    local_168 = CONCAT71(local_168._1_7_,(char)((int)sVar5 << 1));
    pvVar18 = (void *)((ulong)&local_168 | 1);
    if (sVar5 != 0) goto LAB_0050e9d4;
  }
  else {
    uVar19 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar18 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar19);
    local_168 = uVar19 | 1;
    local_160 = sVar5;
    local_158 = pvVar18;
LAB_0050e9d4:
    memcpy(pvVar18,pcVar16,sVar5);
  }
  *(undefined1 *)((long)pvVar18 + sVar5) = 0;
                    /* try { // try from 0050e9f8 to 0050ea03 has its CatchHandler @ 0050f228 */
  FUN_0050e590(param_1,&local_168,*(long *)(*(long *)(param_1[3] + 0x20) + 0x18) + 0x88);
  if ((local_168 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_158);
  }
  lVar7 = *(long *)(*(long *)(param_1[3] + 0x20) + 0x18);
  if (*(char *)(lVar7 + 0xb0) == '\0') goto LAB_0050eb18;
  if ((*(byte *)(lVar7 + 0xb8) & 1) == 0) {
    if (*(byte *)(lVar7 + 0xb8) >> 1 == 0) goto LAB_0050eb18;
  }
  else if (*(long *)(lVar7 + 0xc0) == 0) goto LAB_0050eb18;
  pcVar16 = *(char **)PTR_PTR_04374a60;
  local_168 = 0;
  local_160 = 0;
  local_158 = (void *)0x0;
  sVar5 = strlen(pcVar16);
  if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 0050f1e0 to 0050f1e7 has its CatchHandler @ 0050f208 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    local_168 = CONCAT71(local_168._1_7_,(char)((int)sVar5 << 1));
    pvVar18 = (void *)((ulong)&local_168 | 1);
    if (sVar5 != 0) goto LAB_0050eabc;
  }
  else {
    uVar19 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar18 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar19);
    local_168 = uVar19 | 1;
    local_160 = sVar5;
    local_158 = pvVar18;
LAB_0050eabc:
    memcpy(pvVar18,pcVar16,sVar5);
  }
  *(undefined1 *)((long)pvVar18 + sVar5) = 0;
  lVar7 = *(long *)(*(long *)(param_1[3] + 0x20) + 0x18);
  if (*(char *)(lVar7 + 0xb0) == '\0') {
                    /* try { // try from 0050f1e8 to 0050f207 has its CatchHandler @ 0050f220 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("this->engaged_","external/com_google_absl\\absl/types/optional.h",0x1a3,
                  "operator->");
  }
                    /* try { // try from 0050eae8 to 0050eaf3 has its CatchHandler @ 0050f220 */
  FUN_0050e590(param_1,&local_168,lVar7 + 0xb8);
  if ((local_168 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_158);
  }
  lVar7 = *(long *)(*(long *)(param_1[3] + 0x20) + 0x18);
LAB_0050eb18:
  puVar3 = PTR_LAB_04373088;
  if (*(long **)(lVar7 + 0x110) != (long *)(lVar7 + 0x118)) {
    plVar17 = *(long **)(lVar7 + 0x110);
    do {
      local_168 = 0;
      pcVar16 = *(char **)PTR_PTR_04374a68;
      local_160 = 0;
      local_158 = (void *)0x0;
      sVar5 = strlen(pcVar16);
      if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 0050f078 to 0050f07f has its CatchHandler @ 0050f21c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar5 < 0x17) {
        local_168 = CONCAT71(local_168._1_7_,(char)((int)sVar5 << 1));
        pvVar18 = (void *)((ulong)&local_168 | 1);
        if (sVar5 != 0) goto LAB_0050ebc8;
      }
      else {
        uVar19 = sVar5 + 0x10 & 0xfffffffffffffff0;
        pvVar18 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar19);
        local_168 = uVar19 | 1;
        local_160 = sVar5;
        local_158 = pvVar18;
LAB_0050ebc8:
        memcpy(pvVar18,pcVar16,sVar5);
      }
      *(undefined1 *)((long)pvVar18 + sVar5) = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = (void *)0x0;
      if ((plVar17[4] & 1U) == 0) {
        uStack_178 = plVar17[5];
        local_180 = plVar17[4];
        local_170 = (void *)plVar17[6];
      }
      else {
        uVar19 = plVar17[5];
        if (0xffffffffffffffef < uVar19) {
                    /* try { // try from 0050f088 to 0050f08f has its CatchHandler @ 0050f214 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        pvVar18 = (void *)plVar17[6];
        if (uVar19 < 0x17) {
          local_180 = (ulong)(byte)((int)uVar19 << 1);
          pvVar6 = (void *)((ulong)&local_180 | 1);
          if (uVar19 != 0) goto LAB_0050ec54;
        }
        else {
          uVar20 = uVar19 + 0x10 & 0xfffffffffffffff0;
          pvVar6 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar20);
          local_180 = uVar20 | 1;
          uStack_178 = uVar19;
          local_170 = pvVar6;
LAB_0050ec54:
          memcpy(pvVar6,pvVar18,uVar19);
        }
        *(undefined1 *)((long)pvVar6 + uVar19) = 0;
      }
                    /* try { // try from 0050ec68 to 0050ec77 has its CatchHandler @ 0050f254 */
      FUN_0050e590(param_1,&local_168,&local_180);
      if ((local_180 & 1) == 0) {
        if ((local_168 & 1) == 0) goto LAB_0050ec88;
LAB_0050eca8:
        FUN_002e2ea0(puVar3,local_158);
        plVar8 = (long *)plVar17[1];
        if ((long *)plVar17[1] != (long *)0x0) goto LAB_0050ecbc;
LAB_0050eccc:
        plVar8 = plVar17 + 2;
        plVar10 = (long *)*plVar8;
        if ((long *)*plVar10 != plVar17) {
          do {
            lVar11 = *plVar8;
            plVar8 = (long *)(lVar11 + 0x10);
            plVar10 = (long *)*plVar8;
          } while (*plVar10 != lVar11);
        }
      }
      else {
        FUN_002e2ea0(puVar3,local_170);
        if ((local_168 & 1) != 0) goto LAB_0050eca8;
LAB_0050ec88:
        plVar8 = (long *)plVar17[1];
        if ((long *)plVar17[1] == (long *)0x0) goto LAB_0050eccc;
LAB_0050ecbc:
        do {
          plVar10 = plVar8;
          plVar8 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      plVar17 = plVar10;
    } while (plVar10 != (long *)(lVar7 + 0x118));
    lVar7 = *(long *)(*(long *)(param_1[3] + 0x20) + 0x18);
  }
  puVar3 = PTR_LAB_04373088;
  if (*(long **)(lVar7 + 0x128) != (long *)(lVar7 + 0x130)) {
    plVar17 = *(long **)(lVar7 + 0x128);
    do {
      local_168 = 0;
      pcVar16 = *(char **)PTR_PTR_04374a70;
      local_160 = 0;
      local_158 = (void *)0x0;
      sVar5 = strlen(pcVar16);
      if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 0050f080 to 0050f087 has its CatchHandler @ 0050f218 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar5 < 0x17) {
        local_168 = CONCAT71(local_168._1_7_,(char)((int)sVar5 << 1));
        pvVar18 = (void *)((ulong)&local_168 | 1);
        if (sVar5 != 0) goto LAB_0050edb4;
      }
      else {
        uVar19 = sVar5 + 0x10 & 0xfffffffffffffff0;
        pvVar18 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar19);
        local_168 = uVar19 | 1;
        local_160 = sVar5;
        local_158 = pvVar18;
LAB_0050edb4:
        memcpy(pvVar18,pcVar16,sVar5);
      }
      *(undefined1 *)((long)pvVar18 + sVar5) = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = (void *)0x0;
      if ((plVar17[4] & 1U) == 0) {
        uStack_178 = plVar17[5];
        local_180 = plVar17[4];
        local_170 = (void *)plVar17[6];
      }
      else {
        uVar19 = plVar17[5];
        if (0xffffffffffffffef < uVar19) {
                    /* try { // try from 0050f090 to 0050f097 has its CatchHandler @ 0050f210 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        pvVar18 = (void *)plVar17[6];
        if (uVar19 < 0x17) {
          local_180 = (ulong)(byte)((int)uVar19 << 1);
          pvVar6 = (void *)((ulong)&local_180 | 1);
          if (uVar19 != 0) goto LAB_0050ee40;
        }
        else {
          uVar20 = uVar19 + 0x10 & 0xfffffffffffffff0;
          pvVar6 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar20);
          local_180 = uVar20 | 1;
          uStack_178 = uVar19;
          local_170 = pvVar6;
LAB_0050ee40:
          memcpy(pvVar6,pvVar18,uVar19);
        }
        *(undefined1 *)((long)pvVar6 + uVar19) = 0;
      }
                    /* try { // try from 0050ee54 to 0050ee63 has its CatchHandler @ 0050f244 */
      FUN_0050e590(param_1,&local_168,&local_180);
      if ((local_180 & 1) == 0) {
        if ((local_168 & 1) == 0) goto LAB_0050ee74;
LAB_0050ee94:
        FUN_002e2ea0(puVar3,local_158);
        plVar8 = (long *)plVar17[1];
        if ((long *)plVar17[1] != (long *)0x0) goto LAB_0050eea8;
LAB_0050eeb8:
        plVar8 = plVar17 + 2;
        plVar10 = (long *)*plVar8;
        if ((long *)*plVar10 != plVar17) {
          do {
            lVar11 = *plVar8;
            plVar8 = (long *)(lVar11 + 0x10);
            plVar10 = (long *)*plVar8;
          } while (*plVar10 != lVar11);
        }
      }
      else {
        FUN_002e2ea0(puVar3,local_170);
        if ((local_168 & 1) != 0) goto LAB_0050ee94;
LAB_0050ee74:
        plVar8 = (long *)plVar17[1];
        if ((long *)plVar17[1] == (long *)0x0) goto LAB_0050eeb8;
LAB_0050eea8:
        do {
          plVar10 = plVar8;
          plVar8 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      plVar17 = plVar10;
    } while (plVar10 != (long *)(lVar7 + 0x130));
  }
  local_150 = DAT_0388a588;
  local_100 = DAT_0388a848;
  uStack_148 = 0;
  uStack_f8 = 0;
  do {
    lVar7 = *plVar13;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar2) {
      *plVar13 = lVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar11 = param_1[1];
  plStack_140 = plVar9;
  plStack_f0 = plVar12;
  if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
                    /* try { // try from 0050ef44 to 0050ef7b has its CatchHandler @ 0050f224 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar11 + 8),param_1 + 1,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x2ec,lVar7,lVar7 + 1,"ADS+OnResponseReceivedLocked");
  }
  local_168 = 0;
  FUN_0050f3a4(&local_168);
  param_1[0x17] = 0;
  puVar3 = PTR_LAB_04374a78;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x15] = (long)puVar3;
  param_1[0x16] = (long)param_1;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x19] =
       (long)"external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc";
  *(undefined4 *)(param_1 + 0x1a) = 0x2ee;
                    /* try { // try from 0050efb8 to 0050f01f has its CatchHandler @ 0050f238 */
  iVar4 = FUN_003cba10(param_1[5],&local_150,2,param_1 + 0x14);
  if (iVar4 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x2f1,2,"assertion failed: %s","GRPC_CALL_OK == call_error");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_138 = param_1 + 0x20;
  local_130 = param_1 + 0x21;
  local_150 = DAT_0388a5c8;
  uStack_148 = 0;
  param_1[0x26] = (long)PTR_LAB_04374a80;
  param_1[0x27] = (long)param_1;
  param_1[0x28] = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2a] =
       (long)"external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc";
  *(undefined4 *)(param_1 + 0x2b) = 0x2ff;
  plStack_140 = param_1 + 0x1d;
  iVar4 = FUN_003cba10(param_1[5],&local_150,1,param_1 + 0x25);
  if (iVar4 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x302,2,"assertion failed: %s","GRPC_CALL_OK == call_error");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


