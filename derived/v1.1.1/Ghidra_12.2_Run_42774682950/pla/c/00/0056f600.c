/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056f600; name: FUN_0056f600
 */


void FUN_0056f600(long *param_1,undefined8 param_2,long param_3,ulong *param_4)

{
  void *__src;
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  byte *__s;
  ulong uVar13;
  ulong *puVar14;
  byte *pbVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  byte local_1b0 [16];
  ulong local_1a0;
  byte *local_198;
  byte *local_190;
  undefined8 uStack_188;
  ulong *local_168;
  undefined *puStack_160;
  undefined8 local_158;
  undefined1 auStack_148 [80];
  long *local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  byte local_d8 [16];
  ulong local_c8;
  byte local_c0;
  undefined7 uStack_bf;
  int local_b8;
  undefined4 uStack_b4;
  byte *local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *puStack_98;
  long local_90;
  undefined *puStack_88;
  long local_80;
  undefined *puStack_78;
  byte *local_70;
  undefined *puStack_68;
  
  __s = (byte *)FUN_002eeb60("GRPC_XDS_BOOTSTRAP");
  if (__s == (byte *)0x0) {
                    /* try { // try from 0056f668 to 0056f693 has its CatchHandler @ 0056ff50 */
    FUN_002f2c60(&local_c0,"Environment variable GRPC_XDS_BOOTSTRAP not defined");
    uVar13 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                          ,0x50,&local_c0,0,0);
    *param_4 = uVar13;
    *param_1 = 0;
    return;
  }
  if (*(char *)(param_3 + 0x10) != '\0') {
                    /* try { // try from 0056f894 to 0056f8b7 has its CatchHandler @ 0056fe08 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                 ,0x54,1,
                 "[xds_client %p] Got bootstrap file location from GRPC_XDS_BOOTSTRAP environment variable: %s"
                 ,param_2,__s);
  }
                    /* try { // try from 0056f648 to 0056f657 has its CatchHandler @ 0056ff3c */
  uVar13 = FUN_003fa130(__s,1,&local_f8);
  *param_4 = uVar13;
  if (uVar13 != 0) {
    *param_1 = 0;
    goto LAB_0056f86c;
  }
  uVar13 = uStack_f0 & 0xff;
  if (local_f8 != (long *)0x0) {
    uVar13 = uStack_f0;
  }
  if ((long)uVar13 < 0) {
                    /* try { // try from 0056fca4 to 0056fcc3 has its CatchHandler @ 0056fd5c */
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  __src = local_e8;
  if (local_f8 == (long *)0x0) {
    __src = (void *)((long)&uStack_f0 + 1);
  }
  if (*(char *)(param_3 + 0x10) != '\0') {
    local_b8 = 0;
    uStack_b4 = 0;
    local_b0 = (byte *)0x0;
    local_c0 = 0;
    uStack_bf = 0;
    if (__src != (void *)0x0) {
      if (uVar13 < 0x17) {
        local_c0 = (byte)((int)uVar13 << 1);
        pbVar15 = (byte *)((ulong)&local_c0 | 1);
        if (uVar13 != 0) goto LAB_0056f918;
      }
      else {
        uVar21 = uVar13 + 0x10 & 0xfffffffffffffff0;
        pbVar15 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar21);
        local_c0 = (byte)uVar21 | 1;
        uStack_bf = (undefined7)(uVar21 >> 8);
        uStack_b4 = (undefined4)(uVar13 >> 0x20);
        local_b8 = (int)uVar13;
        local_b0 = pbVar15;
LAB_0056f918:
        memcpy(pbVar15,__src,uVar13);
      }
      pbVar15[uVar13] = 0;
    }
    pbVar15 = (byte *)((ulong)&local_c0 | 1);
    if ((local_c0 & 1) != 0) {
      pbVar15 = local_b0;
    }
                    /* try { // try from 0056f948 to 0056f967 has its CatchHandler @ 0056fde8 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                 ,0x5e,0,"[xds_client %p] Bootstrap file contents: %s",param_2,pbVar15);
    if ((local_c0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_b0);
    }
  }
                    /* try { // try from 0056f6d0 to 0056f6e3 has its CatchHandler @ 0056ff0c */
  FUN_0050a1b0(auStack_148,__src,uVar13,param_4);
  if ((local_f8 != (long *)0x0) && (plVar16 = (long *)*local_f8, plVar16 != (long *)0x0)) {
    plVar18 = plVar16 + 1;
    lVar17 = *plVar16;
    do {
      lVar19 = *plVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *plVar18 = lVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar17 != 0) && (*(char *)(lVar17 + 0x10) != '\0')) {
                    /* try { // try from 0056f71c to 0056f753 has its CatchHandler @ 0056ff00 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar17 + 8),plVar16,lVar19);
    }
    if (lVar19 < 1) {
                    /* try { // try from 0056fce4 to 0056fd0b has its CatchHandler @ 0056ff00 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar19 == 1) {
      (*(code *)local_f8[3])(local_f8[4]);
    }
  }
  if (*param_4 == 0) {
    puVar14 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x98);
    if (puVar14 != (ulong *)0x0) {
                    /* try { // try from 0056f828 to 0056f833 has its CatchHandler @ 0056fef8 */
      FUN_003ee80c(&local_c0,auStack_148);
                    /* try { // try from 0056f834 to 0056f843 has its CatchHandler @ 0056fee8 */
      FUN_0056ff5c(puVar14,&local_c0,param_4);
      FUN_003ee5f8(&local_c0);
    }
    uVar10 = uStack_b4;
    iVar8 = local_b8;
    puVar7 = PTR_LAB_04374a18;
    if ((*param_4 == 0) && (*(char *)(param_3 + 0x10) != '\0')) {
      local_190 = (byte *)0x0;
      uStack_188 = 0;
      local_198 = (byte *)0x0;
      uVar13 = puVar14[0x12];
      local_b8 = (int)PTR_LAB_04374a18;
      iVar9 = local_b8;
      uStack_b4 = (undefined4)((ulong)PTR_LAB_04374a18 >> 0x20);
      uVar11 = uStack_b4;
      local_b8 = iVar8;
      uStack_b4 = uVar10;
      if (uVar13 != 0) {
                    /* try { // try from 0056f9a0 to 0056f9af has its CatchHandler @ 0056fd80 */
        FUN_003ef188(local_d8,uVar13 + 0x78,0);
        local_80 = uVar13 + 0x60;
        local_90 = uVar13 + 0x48;
        local_a0 = uVar13 + 0x30;
        local_b0 = (byte *)(uVar13 + 0x18);
        local_c0 = (byte)uVar13;
        uStack_bf = (undefined7)(uVar13 >> 8);
        puStack_a8 = puVar7;
        puStack_98 = puVar7;
        puStack_88 = puVar7;
        puStack_78 = puVar7;
        puStack_68 = puVar7;
                    /* try { // try from 0056f9d8 to 0056f9f3 has its CatchHandler @ 0056fd70 */
        local_b8 = iVar9;
        uStack_b4 = uVar11;
        local_70 = local_d8;
        FUN_002e6390(&local_168,
                     "node={\n  id=\"%s\",\n  cluster=\"%s\",\n  locality={\n    region=\"%s\",\n    zone=\"%s\",\n    subzone=\"%s\"\n  },\n  metadata=%s,\n},\n"
                     ,0x77,&local_c0,6);
                    /* try { // try from 0056f9f4 to 0056f9ff has its CatchHandler @ 0056fd60 */
        FUN_00572b68(&local_198,&local_168);
        if (((byte)local_168 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_158);
        }
        if ((local_d8[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_c8);
        }
      }
      if (*puVar14 < 2) {
                    /* try { // try from 0056fd0c to 0056fd2b has its CatchHandler @ 0056fdd8 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x13e
                      ,"operator[]");
      }
      puVar20 = puVar14 + 1;
      local_168 = puVar20;
      if ((*puVar14 & 1) != 0) {
        local_168 = (ulong *)*puVar20;
      }
      puStack_160 = puVar7;
                    /* try { // try from 0056fa50 to 0056fa6b has its CatchHandler @ 0056fdd8 */
      FUN_002e6390(&local_c0,"servers=[\n  {\n    uri=\"%s\",\n    creds=[\n",0x28,&local_168,1);
                    /* try { // try from 0056fa6c to 0056fa77 has its CatchHandler @ 0056fdc4 */
      FUN_00572b68(&local_198,&local_c0);
      if ((local_c0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_b0);
      }
      puVar6 = PTR_LAB_04373088;
      if (*puVar14 < 2) {
                    /* try { // try from 0056fd2c to 0056fd4b has its CatchHandler @ 0056fd4c */
                    /* WARNING: Subroutine does not return */
        __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x13e
                      ,"operator[]");
      }
      if ((*puVar14 & 1) != 0) {
        puVar20 = (ulong *)puVar14[1];
      }
      uVar13 = puVar20[3];
      if ((uVar13 & 1) == 0) {
        puVar20 = puVar20 + 4;
      }
      else {
        puVar20 = (ulong *)puVar20[4];
      }
      if (uVar13 >> 1 != 0) {
        lVar17 = (uVar13 >> 1) * 0x68;
        do {
                    /* try { // try from 0056fafc to 0056fb07 has its CatchHandler @ 0056fe0c */
          FUN_003ef188(local_d8,puVar20 + 3,0);
          local_c0 = (byte)puVar20;
          uStack_bf = (undefined7)((ulong)puVar20 >> 8);
          puStack_a8 = puVar7;
                    /* try { // try from 0056fb10 to 0056fb27 has its CatchHandler @ 0056fe1c */
          local_b8 = iVar9;
          uStack_b4 = uVar11;
          local_b0 = local_d8;
          FUN_002e6390(&local_168,"      {type=\"%s\", config=%s},\n",0x1e,&local_c0,2);
                    /* try { // try from 0056fb28 to 0056fb33 has its CatchHandler @ 0056fe2c */
          FUN_00572b68(&local_198,&local_168);
          if (((ulong)local_168 & 1) != 0) {
            FUN_002e2ea0(puVar6,local_158);
          }
          if ((local_d8[0] & 1) != 0) {
            FUN_002e2ea0(puVar6,local_c8);
          }
          puVar20 = puVar20 + 0xd;
          lVar17 = lVar17 + -0x68;
        } while (lVar17 != 0);
      }
      local_c0 = 0x16;
      local_b0 = (byte *)0x0;
      uStack_bf = s_______038ac44c._0_7_;
      local_b8 = CONCAT31(0x5d0a7d,s_______038ac44c[7]);
      uStack_b4 = 0;
                    /* try { // try from 0056fba0 to 0056fbab has its CatchHandler @ 0056fdb4 */
      FUN_00572b68(&local_198,&local_c0);
      if ((local_c0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_b0);
      }
                    /* try { // try from 0056fbc8 to 0056fbdb has its CatchHandler @ 0056fda4 */
      FUN_002e5790(local_1b0,local_198,local_190,&DAT_03996322,0);
      pbVar15 = local_198;
      puVar7 = PTR_LAB_04373088;
      if (local_198 != (byte *)0x0) {
        if (local_190 != local_198) {
          bVar1 = local_190[-0x18];
          pbVar12 = local_190 + -0x18;
          pbVar5 = local_190;
          while( true ) {
            pbVar4 = pbVar12;
            if ((bVar1 & 1) != 0) {
              FUN_002e2ea0(puVar7,*(undefined8 *)(pbVar5 + -8));
            }
            if (pbVar15 == pbVar4) break;
            bVar1 = pbVar4[-0x18];
            pbVar12 = pbVar4 + -0x18;
            pbVar5 = pbVar4;
          }
        }
        local_190 = pbVar15;
        FUN_002e2ea0(PTR_LAB_04373088,local_198);
      }
      uVar13 = (ulong)local_1b0 | 1;
      if ((local_1b0[0] & 1) != 0) {
        uVar13 = local_1a0;
      }
                    /* try { // try from 0056fc64 to 0056fc83 has its CatchHandler @ 0056fd90 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                   ,0x6e,1,"[xds_client %p] Bootstrap config for creating xds client:\n%s",param_2,
                   uVar13);
      if ((local_1b0[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_1a0);
      }
    }
    *param_1 = (long)puVar14;
  }
  else {
    local_c0 = 0xa9;
    uStack_bf = 0x39114;
    local_b8 = 0x1f;
    uStack_b4 = 0;
    local_198 = __s;
    local_190 = (byte *)strlen((char *)__s);
    if ((long)local_190 < 0) {
                    /* try { // try from 0056fcc4 to 0056fce3 has its CatchHandler @ 0056ff04 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
                    /* try { // try from 0056f780 to 0056f793 has its CatchHandler @ 0056ff04 */
    FUN_002eced0(local_d8,&local_c0,&local_198);
    uVar13 = (ulong)local_d8 | 1;
    if ((local_d8[0] & 1) != 0) {
      uVar13 = local_c8;
    }
                    /* try { // try from 0056f7a8 to 0056f7cb has its CatchHandler @ 0056ff10 */
    FUN_002f2ff0(&local_168,uVar13);
    uVar13 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                          ,0x66,&local_168,param_4,1);
    if ((local_d8[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_c8);
    }
    if (4 < *param_4) {
                    /* try { // try from 0056f7f4 to 0056f803 has its CatchHandler @ 0056fefc */
      FUN_002f0430(*param_4,
                   "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                   ,0x67);
    }
    *param_4 = uVar13;
    *param_1 = 0;
  }
  FUN_003ee5f8(auStack_148);
LAB_0056f86c:
                    /* try { // try from 0056f86c to 0056f873 has its CatchHandler @ 0056ff38 */
  free(__s);
  return;
}


