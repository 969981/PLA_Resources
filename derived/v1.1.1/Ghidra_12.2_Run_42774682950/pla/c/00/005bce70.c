/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005bce70; name: FUN_005bce70
 */


void FUN_005bce70(undefined8 param_1,char param_2,long *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 *local_f0;
  long local_e8;
  undefined1 auStack_e0 [32];
  char *local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  byte local_90 [16];
  undefined8 local_80;
  byte *local_78;
  byte *local_70;
  undefined8 uStack_68;
  
  if ((param_2 != '\0') && (iVar7 = FUN_002ec180(0), iVar7 != 0)) {
    local_70 = (byte *)0x0;
    uStack_68 = 0;
    local_78 = (byte *)0x0;
    if (*param_3 != 0) {
                    /* try { // try from 005bced8 to 005bcedf has its CatchHandler @ 005bd5c0 */
      FUN_005be470(*param_3,&local_78);
    }
    puVar4 = PTR_LAB_04373088;
    puVar8 = (ulong *)param_3[1];
    if ((puVar8 != (ulong *)0x0) && (uVar10 = puVar8[1], uVar10 != 0)) {
      uVar9 = *puVar8;
      uVar11 = 0;
      do {
        puVar15 = *(undefined8 **)((uVar9 & 0xfffffffffffffff8) + uVar11 * 8);
                    /* try { // try from 005bcf24 to 005bcf33 has its CatchHandler @ 005bd624 */
        FUN_005c503c(&local_78,"cluster_stats {");
        uStack_b8 = puVar15[2];
        local_c0 = (char *)puVar15[1];
                    /* try { // try from 005bcf3c to 005bcf53 has its CatchHandler @ 005bd634 */
        FUN_005be370("  cluster_name",&local_c0,&local_78,0);
        uStack_b8 = puVar15[4];
        local_c0 = (char *)puVar15[3];
                    /* try { // try from 005bcf5c to 005bcf73 has its CatchHandler @ 005bd644 */
        FUN_005be370("  cluster_service_name",&local_c0,&local_78,0);
        puVar8 = (ulong *)puVar15[6];
        if ((puVar8 != (ulong *)0x0) && (uVar13 = puVar8[1], uVar13 != 0)) {
          puVar14 = (undefined8 *)(*puVar8 & 0xfffffffffffffff8);
          do {
            puVar16 = (undefined8 *)*puVar14;
                    /* try { // try from 005bcf90 to 005bcf9f has its CatchHandler @ 005bd6b4 */
            FUN_005c3e28(&local_78,"  upstream_locality_stats {");
            lVar12 = puVar16[5];
            if (lVar12 != 0) {
                    /* try { // try from 005bcfa8 to 005bcfcf has its CatchHandler @ 005bd77c */
              FUN_005bec2c(&local_78,"    locality {");
              FUN_005bfb90(3,lVar12,&local_78);
              FUN_005bf810(&local_78);
            }
            uStack_b8 = 0x1f;
            local_c0 = "    total_successful_requests: ";
                    /* try { // try from 005bcfe8 to 005bd00f has its CatchHandler @ 005bd74c */
            lVar12 = FUN_002ed6c0(*puVar16,auStack_e0);
            lVar12 = lVar12 - (long)auStack_e0;
            if (lVar12 < 0) {
              local_f0 = auStack_e0;
                    /* try { // try from 005bd460 to 005bd47f has its CatchHandler @ 005bd5a0 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("false && \"len <= kMaxSize\"",
                            "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                            "operator()");
            }
            local_f0 = auStack_e0;
            local_e8 = lVar12;
            FUN_002eced0(local_90,&local_c0,&local_f0);
                    /* try { // try from 005bd010 to 005bd01b has its CatchHandler @ 005bd694 */
            FUN_005bef00(&local_78,local_90);
            if ((local_90[0] & 1) != 0) {
              FUN_002e2ea0(puVar4,local_80);
            }
            uStack_b8 = 0x20;
            local_c0 = "    total_requests_in_progress: ";
                    /* try { // try from 005bd048 to 005bd06f has its CatchHandler @ 005bd73c */
            lVar12 = FUN_002ed6c0(puVar16[1],auStack_e0);
            lVar12 = lVar12 - (long)auStack_e0;
            if (lVar12 < 0) {
              local_f0 = auStack_e0;
                    /* try { // try from 005bd4c0 to 005bd4df has its CatchHandler @ 005bd570 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("false && \"len <= kMaxSize\"",
                            "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                            "operator()");
            }
            local_f0 = auStack_e0;
            local_e8 = lVar12;
            FUN_002eced0(local_90,&local_c0,&local_f0);
                    /* try { // try from 005bd070 to 005bd07b has its CatchHandler @ 005bd6c4 */
            FUN_005bef00(&local_78,local_90);
            if ((local_90[0] & 1) != 0) {
              FUN_002e2ea0(puVar4,local_80);
            }
            local_c0 = "    total_error_requests: ";
            uStack_b8 = 0x1a;
                    /* try { // try from 005bd0a0 to 005bd0c7 has its CatchHandler @ 005bd72c */
            lVar12 = FUN_002ed6c0(puVar16[2],auStack_e0);
            lVar12 = lVar12 - (long)auStack_e0;
            if (lVar12 < 0) {
              local_f0 = auStack_e0;
                    /* try { // try from 005bd440 to 005bd45f has its CatchHandler @ 005bd5b0 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("false && \"len <= kMaxSize\"",
                            "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                            "operator()");
            }
            local_f0 = auStack_e0;
            local_e8 = lVar12;
            FUN_002eced0(local_90,&local_c0,&local_f0);
                    /* try { // try from 005bd0c8 to 005bd0d3 has its CatchHandler @ 005bd6d4 */
            FUN_005bef00(&local_78,local_90);
            if ((local_90[0] & 1) != 0) {
              FUN_002e2ea0(puVar4,local_80);
            }
            local_c0 = "    total_issued_requests: ";
            uStack_b8 = 0x1b;
                    /* try { // try from 005bd0f8 to 005bd11f has its CatchHandler @ 005bd71c */
            lVar12 = FUN_002ed6c0(puVar16[3],auStack_e0);
            lVar12 = lVar12 - (long)auStack_e0;
            if (lVar12 < 0) {
              local_f0 = auStack_e0;
                    /* try { // try from 005bd480 to 005bd49f has its CatchHandler @ 005bd590 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("false && \"len <= kMaxSize\"",
                            "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                            "operator()");
            }
            local_f0 = auStack_e0;
            local_e8 = lVar12;
            FUN_002eced0(local_90,&local_c0,&local_f0);
                    /* try { // try from 005bd120 to 005bd12b has its CatchHandler @ 005bd6a4 */
            FUN_005bef00(&local_78,local_90);
            if ((local_90[0] & 1) != 0) {
              FUN_002e2ea0(puVar4,local_80);
            }
                    /* try { // try from 005bd140 to 005bd147 has its CatchHandler @ 005bd77c */
            FUN_005bf9d0(&local_78);
            uVar13 = uVar13 - 1;
            puVar14 = puVar14 + 1;
          } while (uVar13 != 0);
        }
        local_c0 = "  total_dropped_requests: ";
        uStack_b8 = 0x1a;
                    /* try { // try from 005bd164 to 005bd18b has its CatchHandler @ 005bd674 */
        lVar12 = FUN_002ed6c0(*puVar15,auStack_e0);
        lVar12 = lVar12 - (long)auStack_e0;
        if (lVar12 < 0) {
          local_f0 = auStack_e0;
                    /* try { // try from 005bd4e0 to 005bd4ff has its CatchHandler @ 005bd560 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
        local_f0 = auStack_e0;
        local_e8 = lVar12;
        FUN_002eced0(local_90,&local_c0,&local_f0);
                    /* try { // try from 005bd18c to 005bd197 has its CatchHandler @ 005bd614 */
        FUN_005bef00(&local_78,local_90);
        if ((local_90[0] & 1) != 0) {
          FUN_002e2ea0(puVar4,local_80);
        }
        puVar8 = (ulong *)puVar15[7];
        if ((puVar8 != (ulong *)0x0) && (uVar13 = puVar8[1], uVar13 != 0)) {
          puVar14 = (undefined8 *)(*puVar8 & 0xfffffffffffffff8);
          do {
            puVar16 = (undefined8 *)*puVar14;
                    /* try { // try from 005bd1c8 to 005bd1d7 has its CatchHandler @ 005bd76c */
            FUN_005c4894(&local_78,"  dropped_requests {");
            uStack_b8 = puVar16[2];
            local_c0 = (char *)puVar16[1];
                    /* try { // try from 005bd1e0 to 005bd1f7 has its CatchHandler @ 005bd6e4 */
            FUN_005be370("    category",&local_c0,&local_78,0);
            uStack_b8 = 0x13;
            local_c0 = "    dropped_count: ";
                    /* try { // try from 005bd210 to 005bd237 has its CatchHandler @ 005bd75c */
            lVar12 = FUN_002ed6c0(*puVar16,auStack_e0);
            lVar12 = lVar12 - (long)auStack_e0;
            if (lVar12 < 0) {
              local_f0 = auStack_e0;
                    /* try { // try from 005bd4a0 to 005bd4bf has its CatchHandler @ 005bd580 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("false && \"len <= kMaxSize\"",
                            "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                            "operator()");
            }
            local_f0 = auStack_e0;
            local_e8 = lVar12;
            FUN_002eced0(local_90,&local_c0,&local_f0);
                    /* try { // try from 005bd238 to 005bd243 has its CatchHandler @ 005bd6f4 */
            FUN_005bef00(&local_78,local_90);
            if ((local_90[0] & 1) != 0) {
              FUN_002e2ea0(puVar4,local_80);
            }
                    /* try { // try from 005bd258 to 005bd25f has its CatchHandler @ 005bd76c */
            FUN_005bf9d0(&local_78);
            uVar13 = uVar13 - 1;
            puVar14 = puVar14 + 1;
          } while (uVar13 != 0);
        }
        puVar15 = (undefined8 *)puVar15[5];
        if (puVar15 != (undefined8 *)0x0) {
                    /* try { // try from 005bd274 to 005bd283 has its CatchHandler @ 005bd684 */
          FUN_005c5310(&local_78,"  load_report_interval {");
          uStack_b8 = 0xd;
          local_c0 = "    seconds: ";
                    /* try { // try from 005bd29c to 005bd2c3 has its CatchHandler @ 005bd654 */
          lVar12 = FUN_002ed880(*puVar15,auStack_e0);
          lVar12 = lVar12 - (long)auStack_e0;
          if (lVar12 < 0) {
            local_f0 = auStack_e0;
                    /* try { // try from 005bd500 to 005bd51f has its CatchHandler @ 005bd550 */
                    /* WARNING: Subroutine does not return */
            __assert_fail("false && \"len <= kMaxSize\"",
                          "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()")
            ;
          }
          local_f0 = auStack_e0;
          local_e8 = lVar12;
          FUN_002eced0(local_90,&local_c0,&local_f0);
                    /* try { // try from 005bd2c4 to 005bd2cf has its CatchHandler @ 005bd5f4 */
          FUN_005bef00(&local_78,local_90);
          if ((local_90[0] & 1) != 0) {
            FUN_002e2ea0(puVar4,local_80);
          }
          uStack_b8 = 0xb;
          local_c0 = "    nanos: ";
                    /* try { // try from 005bd2fc to 005bd323 has its CatchHandler @ 005bd664 */
          lVar12 = FUN_002ed6a0(*(undefined4 *)(puVar15 + 1),auStack_e0);
          lVar12 = lVar12 - (long)auStack_e0;
          if (lVar12 < 0) {
            local_f0 = auStack_e0;
                    /* try { // try from 005bd520 to 005bd53f has its CatchHandler @ 005bd540 */
                    /* WARNING: Subroutine does not return */
            __assert_fail("false && \"len <= kMaxSize\"",
                          "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()")
            ;
          }
          local_f0 = auStack_e0;
          local_e8 = lVar12;
          FUN_002eced0(local_90,&local_c0,&local_f0);
                    /* try { // try from 005bd324 to 005bd32f has its CatchHandler @ 005bd604 */
          FUN_005bef00(&local_78,local_90);
          if ((local_90[0] & 1) != 0) {
            FUN_002e2ea0(puVar4,local_80);
          }
                    /* try { // try from 005bd344 to 005bd353 has its CatchHandler @ 005bd684 */
          FUN_005bf9d0(&local_78);
        }
        FUN_005bf0c0(&local_78);
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar10);
    }
                    /* try { // try from 005bd368 to 005bd37f has its CatchHandler @ 005bd5e4 */
    FUN_002e5790(&local_c0,local_78,local_70,&DAT_0396725e,1);
    uVar10 = (ulong)&local_c0 | 1;
    if (((ulong)local_c0 & 1) != 0) {
      uVar10 = local_b0;
    }
                    /* try { // try from 005bd394 to 005bd3b3 has its CatchHandler @ 005bd5d0 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc",
                 0x783,0,"[xds_client %p] constructed LRS request: %s",param_1,uVar10);
    if (((ulong)local_c0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_b0);
    }
    pbVar5 = local_78;
    puVar4 = PTR_LAB_04373088;
    if (local_78 != (byte *)0x0) {
      if (local_70 != local_78) {
        bVar1 = local_70[-0x18];
        pbVar6 = local_70 + -0x18;
        pbVar3 = local_70;
        while( true ) {
          pbVar2 = pbVar6;
          if ((bVar1 & 1) != 0) {
            FUN_002e2ea0(puVar4,*(undefined8 *)(pbVar3 + -8));
          }
          if (pbVar5 == pbVar2) break;
          bVar1 = pbVar2[-0x18];
          pbVar6 = pbVar2 + -0x18;
          pbVar3 = pbVar2;
        }
      }
      local_70 = pbVar5;
      FUN_002e2ea0(PTR_LAB_04373088,local_78);
    }
  }
  return;
}


