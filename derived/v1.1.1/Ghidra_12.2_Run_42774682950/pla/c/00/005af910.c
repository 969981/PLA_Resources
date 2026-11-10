/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005af910; name: caseD_0
 */


ulong switchD_005b08e4::caseD_0(undefined8 *param_1,byte *param_2,byte *param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *unaff_x22;
  ulong uVar16;
  undefined8 *unaff_x23;
  long unaff_x24;
  long lVar17;
  long *plVar18;
  undefined1 *local_b8;
  long local_b0;
  undefined1 auStack_a8 [8];
  long local_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  char *local_88;
  long local_80;
  char *pcStack_78;
  long local_70;
  char *pcStack_68;
  long local_60;
  char *pcStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  char *pcStack_48;
  char *local_38;
  undefined8 *local_30;
  undefined8 *local_28 [5];
  
code_r0x005af910:
  *(undefined1 *)((long)param_1 + 0xd4) = 0;
  bVar2 = *param_2;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 0x16) = bVar2 & 0x7f;
  param_2 = param_2 + 1;
  goto switchD_005b08e4_caseD_e;
  do {
    pbVar11 = param_2;
    local_30 = unaff_x23;
    local_28[0] = unaff_x22;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((&DAT_03a34d9c)[*param_2]) {
    case 0:
      goto code_r0x005af910;
    case 1:
switchD_005b08e4_caseD_1:
      param_1[4] = &PTR_caseD_e_0418aa68;
      *(undefined1 *)((long)param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 0x16) = 0x7f;
      param_1[0x17] = 0;
      param_1[7] = param_1 + 0x16;
      uVar16 = FUN_005b0ad0(param_1,param_2 + 1);
      return uVar16;
    case 2:
switchD_005b08e4_caseD_2:
      *(undefined1 *)((long)param_1 + 0xd4) = 0;
      param_1[4] = &PTR_caseD_f_0418aa70;
      pbVar11 = param_2 + 1;
      bVar2 = *param_2;
      param_1[0x17] = 0;
      uVar6 = bVar2 & 0x3f;
      *(uint *)(param_1 + 0x16) = uVar6;
      if (pbVar11 == param_3) {
        uVar16 = 0;
        puVar12 = (undefined1 *)0x5b16d0;
LAB_005af9f4:
        param_1[3] = puVar12;
        return uVar16;
      }
      bVar2 = *pbVar11;
      *(uint *)(param_1 + 0x19) = bVar2 & 0x7f;
      *(byte *)((long)param_1 + 0xd3) = *pbVar11 >> 7;
      if ((bVar2 & 0x7f) == 0x7f) {
        param_1[7] = param_1 + 0x19;
        uVar16 = FUN_005b0ad0(param_1,param_2 + 2,param_3);
        return uVar16;
      }
      param_1[3] = 0x5b1130;
      param_1[4] = &PTR_caseD_10_0418aa78;
      if (uVar6 < 0x3e) {
        lVar7 = FUN_003db7f0();
        if (lVar7 != -0x35010ff23f0011ef) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",
                       0x13d,2,"assertion failed: %s",
                       "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                      );
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (*(long *)PTR_DAT_04373ff0 == 0) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",
                       0x13e,2,"assertion failed: %s",
                       "grpc_core::g_static_mdelem_manifested != nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar16 = *(ulong *)(*(long *)PTR_DAT_04373ff0 + (ulong)(uVar6 - 1) * 8);
      }
      else {
        uVar16 = FUN_005a7bd0(param_1 + 0x1c,uVar6);
      }
      plVar18 = (long *)(uVar16 & 0xfffffffffffffffc);
      if (plVar18 == (long *)0x0) {
        uVar16 = FUN_005b0990(param_1);
        if (uVar16 != 0) {
          if (param_1[2] == 0) {
            uVar8 = uVar16;
            if (4 < uVar16) {
              uVar8 = FUN_002f03c0(uVar16,
                                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                                   ,0x435);
            }
            param_1[2] = uVar8;
          }
          puVar12 = &LAB_005b1110;
          goto LAB_005af9f4;
        }
        bVar5 = false;
      }
      else {
        if (*plVar18 == 0) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/surface/validate_metadata.h",
                       0x24,2,"assertion failed: %s","slice.refcount != nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((ulong)plVar18[1] < 5) {
          bVar5 = false;
          lVar7 = param_1[0x17];
        }
        else {
          bVar5 = *(int *)(plVar18[2] + plVar18[1] + -4) == 0x6e69622d;
          lVar7 = param_1[0x17];
        }
        if (lVar7 != 0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x605,2,"assertion failed: %s","p->md_for_index.payload == 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (param_1[0x18] != -1) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x606,2,"assertion failed: %s","p->precomputed_md_index == -1");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        param_1[0x17] = uVar16;
        param_1[0x18] = (ulong)*(uint *)(param_1 + 0x16);
      }
      uVar16 = FUN_005b1740(param_1,param_2 + 2,param_3,bVar5,param_1 + 0xf);
      return uVar16;
    case 3:
switchD_005b08e4_caseD_3:
      param_1[4] = &PTR_caseD_11_0418aa80;
      *(undefined1 *)((long)param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 0x16) = 0x3f;
      param_1[0x17] = 0;
      param_1[7] = param_1 + 0x16;
      uVar16 = FUN_005b0ad0(param_1,param_2 + 1);
      return uVar16;
    case 4:
switchD_005b08e4_caseD_4:
      param_1[4] = &PTR_caseD_14_0418aa98;
      pbVar11 = param_2 + 1;
      *(undefined1 *)((long)param_1 + 0xd4) = 0;
      if (pbVar11 == param_3) {
        param_1[3] = 0x5b16d0;
        return 0;
      }
      bVar2 = *pbVar11;
      *(uint *)(param_1 + 0x19) = bVar2 & 0x7f;
      *(byte *)((long)param_1 + 0xd3) = *pbVar11 >> 7;
      if ((bVar2 & 0x7f) == 0x7f) {
        param_1[7] = param_1 + 0x19;
        uVar16 = FUN_005b0ad0(param_1,param_2 + 2);
        return uVar16;
      }
      param_1[3] = 0x5b2470;
      param_1[4] = &PTR_caseD_11_0418aaa0;
      uVar16 = FUN_005b1740(param_1,param_2 + 2,param_3,0,param_1 + 8);
      return uVar16;
    case 5:
switchD_005b08e4_caseD_5:
      *(undefined1 *)((long)param_1 + 0xd4) = 0;
      param_1[4] = &PTR_caseD_f_0418aab8;
      pbVar11 = param_2 + 1;
      bVar2 = *param_2;
      param_1[0x17] = 0;
      *(uint *)(param_1 + 0x16) = bVar2 & 0xf;
      if (pbVar11 == param_3) {
        uVar16 = 0;
        puVar12 = (undefined1 *)0x5b16d0;
LAB_005afd64:
        param_1[3] = puVar12;
        return uVar16;
      }
      bVar3 = *pbVar11;
      *(uint *)(param_1 + 0x19) = bVar3 & 0x7f;
      *(byte *)((long)param_1 + 0xd3) = *pbVar11 >> 7;
      if ((bVar3 & 0x7f) == 0x7f) {
        param_1[7] = param_1 + 0x19;
        uVar16 = FUN_005b0ad0(param_1,param_2 + 2,param_3);
        return uVar16;
      }
      param_1[3] = 0x5b1130;
      param_1[4] = &PTR_caseD_19_0418aac0;
      lVar7 = FUN_003db7f0();
      if (lVar7 != -0x35010ff23f0011ef) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x13d
                     ,2,"assertion failed: %s",
                     "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                    );
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(long *)PTR_DAT_04373ff0 == 0) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x13e
                     ,2,"assertion failed: %s","grpc_core::g_static_mdelem_manifested != nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar16 = *(ulong *)(*(long *)PTR_DAT_04373ff0 + (ulong)((bVar2 & 0xf) - 1) * 8);
      plVar18 = (long *)(uVar16 & 0xfffffffffffffffc);
      if (plVar18 == (long *)0x0) {
        uVar16 = FUN_005b0990(param_1);
        if (uVar16 != 0) {
          if (param_1[2] == 0) {
            uVar8 = uVar16;
            if (4 < uVar16) {
              uVar8 = FUN_002f03c0(uVar16,
                                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                                   ,0x435);
            }
            param_1[2] = uVar8;
          }
          puVar12 = &LAB_005b1110;
          goto LAB_005afd64;
        }
        bVar5 = false;
      }
      else {
        if (*plVar18 == 0) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/surface/validate_metadata.h",
                       0x24,2,"assertion failed: %s","slice.refcount != nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((ulong)plVar18[1] < 5) {
          bVar5 = false;
          lVar7 = param_1[0x17];
        }
        else {
          bVar5 = *(int *)(plVar18[2] + plVar18[1] + -4) == 0x6e69622d;
          lVar7 = param_1[0x17];
        }
        if (lVar7 != 0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x605,2,"assertion failed: %s","p->md_for_index.payload == 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (param_1[0x18] != -1) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x606,2,"assertion failed: %s","p->precomputed_md_index == -1");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        param_1[0x17] = uVar16;
        param_1[0x18] = (ulong)*(uint *)(param_1 + 0x16);
      }
      uVar16 = FUN_005b1740(param_1,param_2 + 2,param_3,bVar5,param_1 + 0xf);
      return uVar16;
    case 6:
switchD_005b08e4_caseD_6:
      param_1[4] = &PTR_caseD_11_0418aac8;
      *(undefined1 *)((long)param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 0x16) = 0xf;
      param_1[0x17] = 0;
      param_1[7] = param_1 + 0x16;
      uVar16 = FUN_005b0ad0(param_1,param_2 + 1);
      return uVar16;
    case 7:
switchD_005b08e4_caseD_7:
      param_1[4] = &PTR_caseD_14_0418aae0;
      pbVar11 = param_2 + 1;
      *(undefined1 *)((long)param_1 + 0xd4) = 0;
      if (pbVar11 == param_3) {
        param_1[3] = 0x5b16d0;
        return 0;
      }
      bVar2 = *pbVar11;
      *(uint *)(param_1 + 0x19) = bVar2 & 0x7f;
      *(byte *)((long)param_1 + 0xd3) = *pbVar11 >> 7;
      if ((bVar2 & 0x7f) == 0x7f) {
        param_1[7] = param_1 + 0x19;
        uVar16 = FUN_005b0ad0(param_1,param_2 + 2);
        return uVar16;
      }
      param_1[3] = 0x5b2470;
      param_1[4] = &PTR_caseD_11_0418aae8;
      uVar16 = FUN_005b1740(param_1,param_2 + 2,param_3,0,param_1 + 8);
      return uVar16;
    case 8:
switchD_005b08e4_caseD_8:
      *(undefined1 *)((long)param_1 + 0xd4) = 0;
      param_1[4] = &PTR_caseD_f_0418ab00;
      pbVar11 = param_2 + 1;
      bVar2 = *param_2;
      param_1[0x17] = 0;
      *(uint *)(param_1 + 0x16) = bVar2 & 0xf;
      if (pbVar11 == param_3) {
        uVar16 = 0;
        puVar12 = (undefined1 *)0x5b16d0;
LAB_005b00b4:
        param_1[3] = puVar12;
        return uVar16;
      }
      bVar3 = *pbVar11;
      *(uint *)(param_1 + 0x19) = bVar3 & 0x7f;
      *(byte *)((long)param_1 + 0xd3) = *pbVar11 >> 7;
      if ((bVar3 & 0x7f) == 0x7f) {
        param_1[7] = param_1 + 0x19;
        uVar16 = FUN_005b0ad0(param_1,param_2 + 2,param_3);
        return uVar16;
      }
      param_1[3] = 0x5b1130;
      param_1[4] = &PTR_caseD_22_0418ab08;
      lVar7 = FUN_003db7f0();
      if (lVar7 != -0x35010ff23f0011ef) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x13d
                     ,2,"assertion failed: %s",
                     "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                    );
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(long *)PTR_DAT_04373ff0 == 0) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x13e
                     ,2,"assertion failed: %s","grpc_core::g_static_mdelem_manifested != nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar16 = *(ulong *)(*(long *)PTR_DAT_04373ff0 + (ulong)((bVar2 & 0xf) - 1) * 8);
      plVar18 = (long *)(uVar16 & 0xfffffffffffffffc);
      if (plVar18 == (long *)0x0) {
        uVar16 = FUN_005b0990(param_1);
        if (uVar16 != 0) {
          if (param_1[2] == 0) {
            uVar8 = uVar16;
            if (4 < uVar16) {
              uVar8 = FUN_002f03c0(uVar16,
                                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                                   ,0x435);
            }
            param_1[2] = uVar8;
          }
          puVar12 = &LAB_005b1110;
          goto LAB_005b00b4;
        }
        bVar5 = false;
      }
      else {
        if (*plVar18 == 0) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/surface/validate_metadata.h",
                       0x24,2,"assertion failed: %s","slice.refcount != nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((ulong)plVar18[1] < 5) {
          bVar5 = false;
          lVar7 = param_1[0x17];
        }
        else {
          bVar5 = *(int *)(plVar18[2] + plVar18[1] + -4) == 0x6e69622d;
          lVar7 = param_1[0x17];
        }
        if (lVar7 != 0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x605,2,"assertion failed: %s","p->md_for_index.payload == 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (param_1[0x18] != -1) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x606,2,"assertion failed: %s","p->precomputed_md_index == -1");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        param_1[0x17] = uVar16;
        param_1[0x18] = (ulong)*(uint *)(param_1 + 0x16);
      }
      uVar16 = FUN_005b1740(param_1,param_2 + 2,param_3,bVar5,param_1 + 0xf);
      return uVar16;
    case 9:
switchD_005b08e4_caseD_9:
      param_1[4] = &PTR_caseD_11_0418ab10;
      *(undefined1 *)((long)param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 0x16) = 0xf;
      param_1[0x17] = 0;
      param_1[7] = param_1 + 0x16;
      uVar16 = FUN_005b0ad0(param_1,param_2 + 1);
      return uVar16;
    case 10:
switchD_005b08e4_caseD_a:
      param_1[4] = &PTR_caseD_14_0418ab28;
      pbVar11 = param_2 + 1;
      *(undefined1 *)((long)param_1 + 0xd4) = 0;
      if (pbVar11 == param_3) {
        param_1[3] = 0x5b16d0;
        return 0;
      }
      bVar2 = *pbVar11;
      *(uint *)(param_1 + 0x19) = bVar2 & 0x7f;
      *(byte *)((long)param_1 + 0xd3) = *pbVar11 >> 7;
      if ((bVar2 & 0x7f) == 0x7f) {
        param_1[7] = param_1 + 0x19;
        uVar16 = FUN_005b0ad0(param_1,param_2 + 2);
        return uVar16;
      }
      param_1[3] = 0x5b2470;
      param_1[4] = &PTR_caseD_11_0418ab30;
      uVar16 = FUN_005b1740(param_1,param_2 + 2,param_3,0,param_1 + 8);
      return uVar16;
    case 0xb:
switchD_005b08e4_caseD_b:
      if (*(char *)((long)param_1 + 0xd4) == '\0') {
        FUN_002f2c60(&local_50,"More than two max table size changes in a single frame");
        uVar16 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                              ,0x413,&local_50,0,0);
        if (uVar16 == 0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x433,2,"assertion failed: %s","err != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
          abort();
        }
LAB_005b0440:
        if (param_1[2] == 0) {
          uVar8 = uVar16;
          if (4 < uVar16) {
            uVar8 = FUN_002f03c0(uVar16,
                                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                                 ,0x435);
          }
          param_1[2] = uVar8;
        }
        puVar12 = &LAB_005b1110;
LAB_005b0478:
        param_1[3] = puVar12;
        return uVar16;
      }
      *(char *)((long)param_1 + 0xd4) = *(char *)((long)param_1 + 0xd4) + -1;
      param_2 = pbVar11 + 1;
      bVar2 = *pbVar11;
      param_1[0x17] = 0;
      *(uint *)(param_1 + 0x16) = bVar2 & 0x1f;
      local_30 = unaff_x22;
      if (PTR_DAT_04374fc0[0x10] == '\0') {
        uVar16 = FUN_005a7e70(param_1 + 0x1c,bVar2 & 0x1f);
        unaff_x22 = local_30;
      }
      else {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                     ,0x404,1,"MAX TABLE SIZE: %d");
        uVar16 = FUN_005a7e70(param_1 + 0x1c,*(undefined4 *)(param_1 + 0x16));
        unaff_x22 = local_30;
      }
      if (uVar16 != 0) goto LAB_005b0440;
      if (param_2 == param_3) {
        uVar16 = 0;
        puVar12 = &LAB_005af3a0;
        goto LAB_005b0478;
      }
      pbVar11 = param_2;
      local_30 = unaff_x22;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((&DAT_03a34d9c)[*param_2]) {
      case 0:
        goto code_r0x005af910;
      case 1:
        goto switchD_005b08e4_caseD_1;
      case 2:
        goto switchD_005b08e4_caseD_2;
      case 3:
        goto switchD_005b08e4_caseD_3;
      case 4:
        goto switchD_005b08e4_caseD_4;
      case 5:
        goto switchD_005b08e4_caseD_5;
      case 6:
        goto switchD_005b08e4_caseD_6;
      case 7:
        goto switchD_005b08e4_caseD_7;
      case 8:
        goto switchD_005b08e4_caseD_8;
      case 9:
        goto switchD_005b08e4_caseD_9;
      case 10:
        goto switchD_005b08e4_caseD_a;
      case 0xb:
        goto switchD_005b08e4_caseD_b;
      case 0xc:
        goto switchD_005b08e4_caseD_c;
      case 0xd:
        goto switchD_005b08e4_caseD_d;
      case 0xe:
        break;
      default:
        goto switchD_005b08e4_caseD_f;
      case 0x10:
      case 0x13:
        goto switchD_005b08e4_caseD_10;
      case 0x11:
      case 0x15:
      case 0x1a:
      case 0x1e:
      case 0x23:
      case 0x27:
        goto switchD_005b08e4_caseD_11;
      case 0x14:
      case 0x1d:
      case 0x26:
        goto switchD_005b08e4_caseD_14;
      case 0x16:
      case 0x1f:
      case 0x28:
        goto switchD_005b08e4_caseD_16;
      case 0x17:
        goto switchD_005b08e4_caseD_17;
      case 0x19:
      case 0x1c:
        goto switchD_005b08e4_caseD_19;
      case 0x20:
        goto switchD_005b08e4_caseD_20;
      case 0x22:
      case 0x25:
        goto switchD_005b08e4_caseD_22;
      case 0x29:
        goto switchD_005b08e4_caseD_29;
      case 0x2a:
switchD_005b08e4_caseD_2a:
        local_30 = unaff_x22;
        if (PTR_DAT_04374fc0[0x10] == '\0') {
          uVar16 = FUN_005a7e70(param_1 + 0x1c,*(undefined4 *)(param_1 + 0x16));
          unaff_x22 = local_30;
        }
        else {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x404,1,"MAX TABLE SIZE: %d",*(undefined4 *)(param_1 + 0x16));
          uVar16 = FUN_005a7e70(param_1 + 0x1c,*(undefined4 *)(param_1 + 0x16));
          unaff_x22 = local_30;
        }
        if (uVar16 != 0) {
          if (param_1[2] == 0) {
            uVar8 = uVar16;
            if (4 < uVar16) {
              uVar8 = FUN_002f03c0(uVar16,
                                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                                   ,0x435);
            }
            param_1[2] = uVar8;
          }
          puVar12 = &LAB_005b1110;
LAB_005b34f0:
          param_1[3] = puVar12;
          return uVar16;
        }
        if (param_2 == param_3) {
          uVar16 = 0;
          puVar12 = &LAB_005af3a0;
          goto LAB_005b34f0;
        }
        pbVar11 = param_2;
        local_30 = unaff_x22;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((&DAT_03a34d9c)[*param_2]) {
        case 0:
          goto code_r0x005af910;
        case 1:
          goto switchD_005b08e4_caseD_1;
        case 2:
          goto switchD_005b08e4_caseD_2;
        case 3:
          goto switchD_005b08e4_caseD_3;
        case 4:
          goto switchD_005b08e4_caseD_4;
        case 5:
          goto switchD_005b08e4_caseD_5;
        case 6:
          goto switchD_005b08e4_caseD_6;
        case 7:
          goto switchD_005b08e4_caseD_7;
        case 8:
          goto switchD_005b08e4_caseD_8;
        case 9:
          goto switchD_005b08e4_caseD_9;
        case 10:
          goto switchD_005b08e4_caseD_a;
        case 0xb:
          goto switchD_005b08e4_caseD_b;
        case 0xc:
          goto switchD_005b08e4_caseD_c;
        case 0xd:
          goto switchD_005b08e4_caseD_d;
        case 0xe:
          break;
        default:
          goto switchD_005b08e4_caseD_f;
        case 0x10:
        case 0x13:
          goto switchD_005b08e4_caseD_10;
        case 0x11:
        case 0x15:
        case 0x1a:
        case 0x1e:
        case 0x23:
        case 0x27:
          goto switchD_005b08e4_caseD_11;
        case 0x14:
        case 0x1d:
        case 0x26:
          goto switchD_005b08e4_caseD_14;
        case 0x16:
        case 0x1f:
        case 0x28:
          goto switchD_005b08e4_caseD_16;
        case 0x17:
          goto switchD_005b08e4_caseD_17;
        case 0x19:
        case 0x1c:
          goto switchD_005b08e4_caseD_19;
        case 0x20:
          goto switchD_005b08e4_caseD_20;
        case 0x22:
        case 0x25:
          goto switchD_005b08e4_caseD_22;
        case 0x29:
          goto switchD_005b08e4_caseD_29;
        case 0x2a:
          goto switchD_005b08e4_caseD_2a;
        case 0x2b:
          goto switchD_005b08e4_caseD_2b;
        case 0x2c:
          goto switchD_005b08e4_caseD_2c;
        }
      case 0x2b:
        goto switchD_005b08e4_caseD_2b;
      case 0x2c:
        goto switchD_005b08e4_caseD_2c;
      }
    case 0xc:
switchD_005b08e4_caseD_c:
      if (*(char *)((long)param_1 + 0xd4) != '\0') {
        *(char *)((long)param_1 + 0xd4) = *(char *)((long)param_1 + 0xd4) + -1;
        param_1[4] = &PTR_caseD_2a_0418ab48;
        *(undefined4 *)(param_1 + 0x16) = 0x1f;
        param_1[0x17] = 0;
        param_1[7] = param_1 + 0x16;
        uVar16 = FUN_005b0ad0(param_1,param_2 + 1);
        return uVar16;
      }
      FUN_002f2c60(local_28 + -3,"More than two max table size changes in a single frame");
      uVar16 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                            ,0x425,local_28 + -3,0,0);
      if (uVar16 == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                     ,0x433,2,"assertion failed: %s","err != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (param_1[2] == 0) {
        uVar8 = uVar16;
        if (4 < uVar16) {
          uVar8 = FUN_002f03c0(uVar16,
                               "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                               ,0x435);
        }
        param_1[2] = uVar8;
      }
      param_1[3] = &LAB_005b1110;
      return uVar16;
    case 0xd:
switchD_005b08e4_caseD_d:
      if (param_2 == param_3) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                     ,0x443,2,"assertion failed: %s","cur != end");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_88 = "Illegal hpack op code ";
      local_80 = 0x16;
      local_b0 = FUN_002ed6a0(*param_2,auStack_a8);
      local_b0 = local_b0 - (long)auStack_a8;
      local_b8 = auStack_a8;
      if (local_b0 < 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      FUN_002eced0(&pcStack_58,&local_88,&local_b8);
      pcVar1 = (char *)((ulong)&pcStack_58 | 1);
      if (((ulong)pcStack_58 & 1) != 0) {
        pcVar1 = pcStack_48;
      }
                    /* try { // try from 005b0674 to 005b0697 has its CatchHandler @ 005b0774 */
      FUN_002f2ff0(local_28 + -3,pcVar1);
      uVar16 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                            ,0x445,local_28 + -3,0,0);
      if (((byte)pcStack_58 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,pcStack_48);
      }
      if (uVar16 == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                     ,0x433,2,"assertion failed: %s","err != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (param_1[2] == 0) {
        uVar8 = uVar16;
        if (4 < uVar16) {
          uVar8 = FUN_002f03c0(uVar16,
                               "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                               ,0x435);
        }
        param_1[2] = uVar8;
      }
      param_1[3] = &LAB_005b1110;
      return uVar16;
    case 0xe:
switchD_005b08e4_caseD_e:
      uVar6 = *(uint *)(param_1 + 0x16);
      local_30 = unaff_x23;
      local_28[0] = unaff_x22;
      if (uVar6 < 0x3e) {
        lVar7 = FUN_003db7f0();
        if (lVar7 != -0x35010ff23f0011ef) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",
                       0x13d,2,"assertion failed: %s",
                       "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                      );
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (*(long *)PTR_DAT_04373ff0 == 0) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",
                       0x13e,2,"assertion failed: %s",
                       "grpc_core::g_static_mdelem_manifested != nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar16 = *(ulong *)(*(long *)PTR_DAT_04373ff0 + (ulong)(uVar6 - 1) * 8);
      }
      else {
        uVar16 = FUN_005a7c10(param_1 + 0x1c,uVar6);
      }
      if (uVar16 < 4) {
        uVar16 = FUN_005b0990(param_1);
        return uVar16;
      }
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar17 = tpidr_el0;
      lVar17 = *(long *)(lVar17 + 0x30);
      uVar6 = *(uint *)(lVar17 + 0x30);
      if (uVar6 == 0xffffffff) {
        uVar6 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar17 + 0x30) = uVar6;
      }
      plVar18 = (long *)(lVar7 + (ulong)uVar6 * 0x1d50 + 0x1c8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (PTR_DAT_04374fc0[0x10] == '\0') {
        uVar16 = (*(code *)*param_1)(param_1[1],uVar16);
        unaff_x23 = local_30;
        unaff_x22 = local_28[0];
      }
      else {
        FUN_005b09f0(uVar16);
        uVar16 = (*(code *)*param_1)(param_1[1],uVar16);
        unaff_x23 = local_30;
        unaff_x22 = local_28[0];
      }
      if (uVar16 != 0) {
        return uVar16;
      }
      if (param_2 == param_3) {
        param_1[3] = &LAB_005af3a0;
        return 0;
      }
      break;
    default:
switchD_005b08e4_caseD_f:
      uVar6 = *(uint *)(param_1 + 0x16);
      if (uVar6 < 0x3e) {
        lVar7 = FUN_003db7f0();
        if (lVar7 != -0x35010ff23f0011ef) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",
                       0x13d,2,"assertion failed: %s",
                       "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                      );
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (*(long *)PTR_DAT_04373ff0 == 0) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",
                       0x13e,2,"assertion failed: %s",
                       "grpc_core::g_static_mdelem_manifested != nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar16 = *(ulong *)(*(long *)PTR_DAT_04373ff0 + (ulong)(uVar6 - 1) * 8);
      }
      else {
        uVar16 = FUN_005a7bd0(param_1 + 0x1c,uVar6);
      }
      plVar18 = (long *)(uVar16 & 0xfffffffffffffffc);
      if (plVar18 == (long *)0x0) {
        uVar16 = FUN_005b0990(param_1);
        if (uVar16 != 0) {
          if (param_1[2] == 0) {
            uVar8 = uVar16;
            if (4 < uVar16) {
              uVar8 = FUN_002f03c0(uVar16,
                                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                                   ,0x435);
            }
            param_1[2] = uVar8;
          }
          param_1[3] = &LAB_005b1110;
          return uVar16;
        }
        bVar5 = false;
      }
      else {
        if (*plVar18 == 0) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/surface/validate_metadata.h",
                       0x24,2,"assertion failed: %s","slice.refcount != nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((ulong)plVar18[1] < 5) {
          bVar5 = false;
          lVar7 = param_1[0x17];
        }
        else {
          bVar5 = *(int *)(plVar18[2] + plVar18[1] + -4) == 0x6e69622d;
          lVar7 = param_1[0x17];
        }
        if (lVar7 != 0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x605,2,"assertion failed: %s","p->md_for_index.payload == 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (param_1[0x18] != -1) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x606,2,"assertion failed: %s","p->precomputed_md_index == -1");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        param_1[0x17] = uVar16;
        param_1[0x18] = (ulong)*(uint *)(param_1 + 0x16);
      }
      uVar16 = FUN_005b1740(param_1,param_2,param_3,bVar5,param_1 + 0xf);
      return uVar16;
    case 0x10:
    case 0x13:
switchD_005b08e4_caseD_10:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar17 = tpidr_el0;
      lVar17 = *(long *)(lVar17 + 0x30);
      uVar6 = *(uint *)(lVar17 + 0x30);
      if (uVar6 == 0xffffffff) {
        uVar6 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar17 + 0x30) = uVar6;
      }
      plVar18 = (long *)(lVar7 + (ulong)uVar6 * 0x1d50 + 0x1d0);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar16 = FUN_005b23b0(param_1);
      if ((uVar16 & 1) == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                     ,0x33b,2,"assertion failed: %s",
                     "((grpc_mdelem_data_storage)((md).payload & (uintptr_t)1))");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      plVar18 = *(long **)(uVar16 & 0xfffffffffffffffc);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        plVar10 = plVar18 + 1;
        do {
          lVar7 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar17 = *plVar18;
        if ((lVar17 != 0) && (*(char *)(lVar17 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar17 + 8),plVar18,lVar7,lVar7 + 1);
        }
        if (lVar7 < 1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("prior > 0",
                        "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x7c,
                        "RefNonZero");
        }
      }
      pcStack_78 = (char *)0x0;
      local_70 = 0;
      local_80 = 0;
      if (*(char *)(param_1 + 0xf) == '\0') {
        FUN_003dae88(&local_60,param_1 + 0x10);
        pcStack_78 = pcStack_58;
        local_80 = local_60;
        pcStack_68 = pcStack_48;
        plVar18 = (long *)param_1[0x10];
        if ((plVar18 != (long *)0x0) && (plVar10 = (long *)*plVar18, plVar10 != (long *)0x0)) {
          plVar15 = plVar10 + 1;
          lVar7 = *plVar10;
          do {
            lVar17 = *plVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar10,lVar17);
          }
          if (lVar17 < 1) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar17 == 1) {
            (*(code *)plVar18[3])(plVar18[4]);
          }
        }
        *(undefined1 *)(param_1 + 0xf) = 1;
        FUN_002f2710(&local_60);
        param_1[0x11] = pcStack_58;
        param_1[0x10] = local_60;
        param_1[0x13] = pcStack_48;
        param_1[0x12] = CONCAT44(uStack_4c,local_50);
      }
      else {
        FUN_003daa7c(&local_60,param_1[0x14],*(undefined4 *)(param_1 + 0x15));
        pcStack_78 = pcStack_58;
        local_80 = local_60;
        pcStack_68 = pcStack_48;
      }
      *(undefined4 *)(param_1 + 0x15) = 0;
      uVar9 = FUN_003d99c0((undefined8 *)(uVar16 & 0xfffffffffffffffc),&local_80);
      if (PTR_DAT_04374fc0[0x10] != '\0') {
        FUN_005b09f0(uVar9);
      }
      if (((uint)uVar9 & 1 | 2) != 3) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                     ,0x290,2,"assertion failed: %s",
                     "((grpc_mdelem_data_storage)((md).payload & (uintptr_t)3)) == GRPC_MDELEM_STORAGE_INTERNED || ((grpc_mdelem_data_storage)((md).payload & (uintptr_t)3)) == GRPC_MDELEM_STORAGE_STATIC"
                    );
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar16 = FUN_005a8220(param_1 + 0x1c,uVar9);
      if (uVar16 == 0) {
        uVar16 = (*(code *)*param_1)(param_1[1],uVar9);
        if (uVar16 == 0) {
          if (param_2 == param_3) {
            param_1[3] = &LAB_005af3a0;
            return 0;
          }
          uVar16 = (*(code *)(&switchdataD_0418a9f8)[(byte)(&DAT_03a34d9c)[*param_2]])
                             (param_1,param_2,param_3);
          return uVar16;
        }
        lVar7 = param_1[2];
      }
      else {
        lVar7 = param_1[2];
      }
      if (lVar7 == 0) {
        uVar8 = uVar16;
        if (4 < uVar16) {
          uVar8 = FUN_002f03c0(uVar16,
                               "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                               ,0x435);
        }
        param_1[2] = uVar8;
      }
      param_1[3] = &LAB_005b1110;
      return uVar16;
    case 0x11:
    case 0x15:
    case 0x1a:
    case 0x1e:
    case 0x23:
    case 0x27:
switchD_005b08e4_caseD_11:
      if (param_2 == param_3) {
        param_1[3] = 0x5b16d0;
        return 0;
      }
      bVar2 = *param_2;
      *(uint *)(param_1 + 0x19) = bVar2 & 0x7f;
      *(byte *)((long)param_1 + 0xd3) = *param_2 >> 7;
      if ((bVar2 & 0x7f) == 0x7f) {
        param_1[7] = param_1 + 0x19;
        uVar16 = FUN_005b0ad0(param_1,param_2 + 1);
        return uVar16;
      }
      puVar14 = (undefined8 *)param_1[4];
      param_1[4] = puVar14 + 1;
      UNRECOVERED_JUMPTABLE = (code *)*puVar14;
      param_1[3] = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x005b1734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar16 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2 + 1);
      return uVar16;
    case 0x14:
    case 0x1d:
    case 0x26:
switchD_005b08e4_caseD_14:
      uVar16 = FUN_005b1740();
      return uVar16;
    case 0x16:
    case 0x1f:
    case 0x28:
switchD_005b08e4_caseD_16:
      if (*(char *)(param_1 + 8) == '\0') {
        if (param_1[9] == 0) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/surface/validate_metadata.h",
                       0x24,2,"assertion failed: %s","slice.refcount != nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (4 < (ulong)param_1[10]) goto LAB_005b24c4;
      }
      else if (4 < *(uint *)(param_1 + 0xe)) {
LAB_005b24c4:
        uVar16 = FUN_005b1740();
        return uVar16;
      }
      uVar16 = FUN_005b1740();
      return uVar16;
    case 0x17:
switchD_005b08e4_caseD_17:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar17 = tpidr_el0;
      lVar17 = *(long *)(lVar17 + 0x30);
      uVar6 = *(uint *)(lVar17 + 0x30);
      if (uVar6 == 0xffffffff) {
        uVar6 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar17 + 0x30) = uVar6;
      }
      plVar18 = (long *)(lVar7 + (ulong)uVar6 * 0x1d50 + 0x1d8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      pcStack_78 = (char *)0x0;
      local_70 = 0;
      local_80 = 0;
      if (*(char *)(param_1 + 8) == '\0') {
        FUN_003dae88(&local_60,param_1 + 9);
        pcStack_78 = pcStack_58;
        local_80 = local_60;
        pcStack_68 = pcStack_48;
        plVar18 = (long *)param_1[9];
        if ((plVar18 != (long *)0x0) && (plVar10 = (long *)*plVar18, plVar10 != (long *)0x0)) {
          plVar15 = plVar10 + 1;
          lVar7 = *plVar10;
          do {
            lVar17 = *plVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar10,lVar17);
          }
          if (lVar17 < 1) goto LAB_005b288c;
          if (lVar17 == 1) {
            (*(code *)plVar18[3])(plVar18[4]);
          }
        }
        *(undefined1 *)(param_1 + 8) = 1;
        FUN_002f2710(&local_60);
        param_1[10] = pcStack_58;
        param_1[9] = local_60;
        param_1[0xc] = pcStack_48;
        param_1[0xb] = CONCAT44(uStack_4c,local_50);
      }
      else {
        FUN_003daa7c(&local_60,param_1[0xd],*(undefined4 *)(param_1 + 0xe));
        pcStack_78 = pcStack_58;
        local_80 = local_60;
        pcStack_68 = pcStack_48;
      }
      *(undefined4 *)(param_1 + 0xe) = 0;
      local_a0 = 0;
      pcStack_98 = (char *)0x0;
      uStack_90 = 0;
      if (*(char *)(param_1 + 0xf) == '\0') {
        FUN_003dae88(&local_60,param_1 + 0x10);
        pcStack_98 = pcStack_58;
        local_a0 = local_60;
        local_88 = pcStack_48;
        plVar18 = (long *)param_1[0x10];
        if ((plVar18 != (long *)0x0) && (plVar10 = (long *)*plVar18, plVar10 != (long *)0x0)) {
          plVar15 = plVar10 + 1;
          lVar7 = *plVar10;
          do {
            lVar17 = *plVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar10,lVar17);
          }
          if (lVar17 < 1) {
LAB_005b288c:
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar17 == 1) {
            (*(code *)plVar18[3])(plVar18[4]);
          }
        }
        *(undefined1 *)(param_1 + 0xf) = 1;
        FUN_002f2710(&local_60);
        param_1[0x11] = pcStack_58;
        param_1[0x10] = local_60;
        param_1[0x13] = pcStack_48;
        param_1[0x12] = CONCAT44(uStack_4c,local_50);
      }
      else {
        FUN_003daa7c(&local_60,param_1[0x14],*(undefined4 *)(param_1 + 0x15));
        pcStack_98 = pcStack_58;
        local_a0 = local_60;
        local_88 = pcStack_48;
      }
      *(undefined4 *)(param_1 + 0x15) = 0;
      uVar9 = FUN_003d99c0(&local_80,&local_a0);
      if (PTR_DAT_04374fc0[0x10] != '\0') {
        FUN_005b09f0(uVar9);
      }
      if (((uint)uVar9 & 1 | 2) != 3) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                     ,0x290,2,"assertion failed: %s",
                     "((grpc_mdelem_data_storage)((md).payload & (uintptr_t)3)) == GRPC_MDELEM_STORAGE_INTERNED || ((grpc_mdelem_data_storage)((md).payload & (uintptr_t)3)) == GRPC_MDELEM_STORAGE_STATIC"
                    );
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar16 = FUN_005a8220(param_1 + 0x1c,uVar9);
      if (uVar16 == 0) {
        uVar16 = (*(code *)*param_1)(param_1[1],uVar9);
        if (uVar16 == 0) {
          if (param_2 == param_3) {
            param_1[3] = &LAB_005af3a0;
            return 0;
          }
          uVar16 = (*(code *)(&switchdataD_0418a9f8)[(byte)(&DAT_03a34d9c)[*param_2]])
                             (param_1,param_2,param_3);
          return uVar16;
        }
        lVar7 = param_1[2];
      }
      else {
        lVar7 = param_1[2];
      }
      if (lVar7 == 0) {
        uVar8 = uVar16;
        if (4 < uVar16) {
          uVar8 = FUN_002f03c0(uVar16,
                               "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                               ,0x435);
        }
        param_1[2] = uVar8;
      }
      param_1[3] = &LAB_005b1110;
      return uVar16;
    case 0x19:
    case 0x1c:
switchD_005b08e4_caseD_19:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar17 = tpidr_el0;
      lVar17 = *(long *)(lVar17 + 0x30);
      uVar6 = *(uint *)(lVar17 + 0x30);
      if (uVar6 == 0xffffffff) {
        uVar6 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar17 + 0x30) = uVar6;
      }
      plVar18 = (long *)(lVar7 + (ulong)uVar6 * 0x1d50 + 0x1e0);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar16 = FUN_005b23b0(param_1);
      if ((uVar16 & 1) == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                     ,0x33b,2,"assertion failed: %s",
                     "((grpc_mdelem_data_storage)((md).payload & (uintptr_t)1))");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      plVar18 = *(long **)(uVar16 & 0xfffffffffffffffc);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        plVar10 = plVar18 + 1;
        do {
          lVar7 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar17 = *plVar18;
        if ((lVar17 != 0) && (*(char *)(lVar17 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar17 + 8),plVar18,lVar7,lVar7 + 1);
        }
        if (lVar7 < 1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("prior > 0",
                        "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x7c,
                        "RefNonZero");
        }
      }
      local_70 = 0;
      pcStack_68 = (char *)((ulong)pcStack_68 & 0xffffffffffffff00);
      if (*(char *)(param_1 + 0xf) == '\0') {
        lVar7 = param_1[0x10];
        if ((lVar7 != 0) && (*(uint *)(lVar7 + 8) < 2)) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x29b,2,"assertion failed: %s",
                       "!grpc_slice_is_interned(str->data.referenced)");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pcStack_68 = (char *)param_1[0x11];
        local_70 = param_1[0x10];
        pcStack_58 = (char *)param_1[0x13];
        local_60 = param_1[0x12];
        *(undefined1 *)(param_1 + 0xf) = 1;
        param_1[0x10] = 0;
        *(undefined1 *)(param_1 + 0x11) = 0;
      }
      else {
        FUN_002f2e08(&local_50,param_1[0x14],*(undefined4 *)(param_1 + 0x15));
        local_70 = CONCAT44(uStack_4c,local_50);
        pcStack_68 = pcStack_48;
        pcStack_58 = local_38;
        local_60 = unaff_x24;
      }
      *(undefined4 *)(param_1 + 0x15) = 0;
      uVar8 = FUN_002e2e80(PTR_FUN_04373078,0x80);
      if (uVar8 != 0) {
        FUN_003d86a4(uVar8,(undefined8 *)(uVar16 & 0xfffffffffffffffc),&local_70);
      }
      uVar8 = uVar8 | 2;
      if (PTR_DAT_04374fc0[0x10] == '\0') {
        uVar16 = (*(code *)*param_1)(param_1[1],uVar8);
      }
      else {
        FUN_005b09f0(uVar8);
        uVar16 = (*(code *)*param_1)(param_1[1],uVar8);
      }
      if (uVar16 == 0) {
        if (param_2 == param_3) {
          param_1[3] = &LAB_005af3a0;
          uVar16 = 0;
        }
        else {
          uVar16 = (*(code *)(&switchdataD_0418a9f8)[(byte)(&DAT_03a34d9c)[*param_2]])
                             (param_1,param_2,param_3);
        }
      }
      else {
        if (param_1[2] == 0) {
          uVar8 = uVar16;
          if (4 < uVar16) {
            uVar8 = FUN_002f03c0(uVar16,
                                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                                 ,0x435);
          }
          param_1[2] = uVar8;
        }
        param_1[3] = &LAB_005b1110;
      }
      return uVar16;
    case 0x20:
switchD_005b08e4_caseD_20:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar17 = tpidr_el0;
      lVar17 = *(long *)(lVar17 + 0x30);
      uVar6 = *(uint *)(lVar17 + 0x30);
      if (uVar6 == 0xffffffff) {
        uVar6 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar17 + 0x30) = uVar6;
      }
      plVar18 = (long *)(lVar7 + (ulong)uVar6 * 0x1d50 + 0x1e8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      pcStack_78 = (char *)0x0;
      local_70 = 0;
      local_80 = 0;
      if (*(char *)(param_1 + 8) == '\0') {
        FUN_003dae88(&local_60,param_1 + 9);
        pcStack_78 = pcStack_58;
        local_80 = local_60;
        pcStack_68 = pcStack_48;
        plVar18 = (long *)param_1[9];
        if ((plVar18 != (long *)0x0) && (plVar10 = (long *)*plVar18, plVar10 != (long *)0x0)) {
          plVar15 = plVar10 + 1;
          lVar7 = *plVar10;
          do {
            lVar17 = *plVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar10,lVar17);
          }
          if (lVar17 < 1) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar17 == 1) {
            (*(code *)plVar18[3])(plVar18[4]);
          }
        }
        *(undefined1 *)(param_1 + 8) = 1;
        FUN_002f2710(&local_60);
        param_1[10] = pcStack_58;
        param_1[9] = local_60;
        param_1[0xc] = pcStack_48;
        param_1[0xb] = CONCAT44(uStack_4c,local_50);
      }
      else {
        FUN_003daa7c(&local_60,param_1[0xd],*(undefined4 *)(param_1 + 0xe));
        pcStack_78 = pcStack_58;
        local_80 = local_60;
        pcStack_68 = pcStack_48;
      }
      *(undefined4 *)(param_1 + 0xe) = 0;
      local_a0 = 0;
      pcStack_98 = (char *)((ulong)pcStack_98 & 0xffffffffffffff00);
      if (*(char *)(param_1 + 0xf) == '\0') {
        lVar7 = param_1[0x10];
        if ((lVar7 != 0) && (*(uint *)(lVar7 + 8) < 2)) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x29b,2,"assertion failed: %s",
                       "!grpc_slice_is_interned(str->data.referenced)");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pcStack_98 = (char *)param_1[0x11];
        local_a0 = param_1[0x10];
        local_88 = (char *)param_1[0x13];
        uStack_90 = param_1[0x12];
        *(undefined1 *)(param_1 + 0xf) = 1;
        param_1[0x10] = 0;
        *(undefined1 *)(param_1 + 0x11) = 0;
      }
      else {
        FUN_002f2e08(&local_60,param_1[0x14],*(undefined4 *)(param_1 + 0x15));
        uStack_90 = CONCAT44(uStack_4c,local_50);
        pcStack_98 = pcStack_58;
        local_a0 = local_60;
        local_88 = pcStack_48;
      }
      *(undefined4 *)(param_1 + 0x15) = 0;
      uVar16 = FUN_002e2e80(PTR_FUN_04373078,0x80);
      if (uVar16 != 0) {
        FUN_003d86a4(uVar16,&local_80,&local_a0);
      }
      uVar16 = uVar16 | 2;
      if (PTR_DAT_04374fc0[0x10] == '\0') {
        uVar16 = (*(code *)*param_1)(param_1[1],uVar16);
      }
      else {
        FUN_005b09f0(uVar16);
        uVar16 = (*(code *)*param_1)(param_1[1],uVar16);
      }
      if (uVar16 == 0) {
        if (param_2 == param_3) {
          param_1[3] = &LAB_005af3a0;
          uVar16 = 0;
        }
        else {
          uVar16 = (*(code *)(&switchdataD_0418a9f8)[(byte)(&DAT_03a34d9c)[*param_2]])
                             (param_1,param_2,param_3);
        }
      }
      else {
        if (param_1[2] == 0) {
          uVar8 = uVar16;
          if (4 < uVar16) {
            uVar8 = FUN_002f03c0(uVar16,
                                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                                 ,0x435);
          }
          param_1[2] = uVar8;
        }
        param_1[3] = &LAB_005b1110;
      }
      return uVar16;
    case 0x22:
    case 0x25:
switchD_005b08e4_caseD_22:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar17 = tpidr_el0;
      lVar17 = *(long *)(lVar17 + 0x30);
      uVar6 = *(uint *)(lVar17 + 0x30);
      if (uVar6 == 0xffffffff) {
        uVar6 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar17 + 0x30) = uVar6;
      }
      plVar18 = (long *)(lVar7 + (ulong)uVar6 * 0x1d50 + 0x1f0);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar16 = FUN_005b23b0(param_1);
      if ((uVar16 & 1) == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                     ,0x33b,2,"assertion failed: %s",
                     "((grpc_mdelem_data_storage)((md).payload & (uintptr_t)1))");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      plVar18 = *(long **)(uVar16 & 0xfffffffffffffffc);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        plVar10 = plVar18 + 1;
        do {
          lVar7 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar17 = *plVar18;
        if ((lVar17 != 0) && (*(char *)(lVar17 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar17 + 8),plVar18,lVar7,lVar7 + 1);
        }
        if (lVar7 < 1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("prior > 0",
                        "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x7c,
                        "RefNonZero");
        }
      }
      local_70 = 0;
      pcStack_68 = (char *)((ulong)pcStack_68 & 0xffffffffffffff00);
      if (*(char *)(param_1 + 0xf) == '\0') {
        lVar7 = param_1[0x10];
        if ((lVar7 != 0) && (*(uint *)(lVar7 + 8) < 2)) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x29b,2,"assertion failed: %s",
                       "!grpc_slice_is_interned(str->data.referenced)");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pcStack_68 = (char *)param_1[0x11];
        local_70 = param_1[0x10];
        pcStack_58 = (char *)param_1[0x13];
        local_60 = param_1[0x12];
        *(undefined1 *)(param_1 + 0xf) = 1;
        param_1[0x10] = 0;
        *(undefined1 *)(param_1 + 0x11) = 0;
      }
      else {
        FUN_002f2e08(&local_50,param_1[0x14],*(undefined4 *)(param_1 + 0x15));
        local_70 = CONCAT44(uStack_4c,local_50);
        pcStack_68 = pcStack_48;
        pcStack_58 = local_38;
        local_60 = unaff_x24;
      }
      *(undefined4 *)(param_1 + 0x15) = 0;
      uVar8 = FUN_002e2e80(PTR_FUN_04373078,0x80);
      if (uVar8 != 0) {
        FUN_003d86a4(uVar8,(undefined8 *)(uVar16 & 0xfffffffffffffffc),&local_70);
      }
      uVar8 = uVar8 | 2;
      if (PTR_DAT_04374fc0[0x10] == '\0') {
        uVar16 = (*(code *)*param_1)(param_1[1],uVar8);
      }
      else {
        FUN_005b09f0(uVar8);
        uVar16 = (*(code *)*param_1)(param_1[1],uVar8);
      }
      if (uVar16 == 0) {
        if (param_2 == param_3) {
          param_1[3] = &LAB_005af3a0;
          uVar16 = 0;
        }
        else {
          uVar16 = (*(code *)(&switchdataD_0418a9f8)[(byte)(&DAT_03a34d9c)[*param_2]])
                             (param_1,param_2,param_3);
        }
      }
      else {
        if (param_1[2] == 0) {
          uVar8 = uVar16;
          if (4 < uVar16) {
            uVar8 = FUN_002f03c0(uVar16,
                                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                                 ,0x435);
          }
          param_1[2] = uVar8;
        }
        param_1[3] = &LAB_005b1110;
      }
      return uVar16;
    case 0x29:
switchD_005b08e4_caseD_29:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar17 = tpidr_el0;
      lVar17 = *(long *)(lVar17 + 0x30);
      uVar6 = *(uint *)(lVar17 + 0x30);
      if (uVar6 == 0xffffffff) {
        uVar6 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar17 + 0x30) = uVar6;
      }
      plVar18 = (long *)(lVar7 + (ulong)uVar6 * 0x1d50 + 0x1f8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      pcStack_78 = (char *)0x0;
      local_70 = 0;
      local_80 = 0;
      if (*(char *)(param_1 + 8) == '\0') {
        FUN_003dae88(&local_60,param_1 + 9);
        pcStack_78 = pcStack_58;
        local_80 = local_60;
        pcStack_68 = pcStack_48;
        plVar18 = (long *)param_1[9];
        if ((plVar18 != (long *)0x0) && (plVar10 = (long *)*plVar18, plVar10 != (long *)0x0)) {
          plVar15 = plVar10 + 1;
          lVar7 = *plVar10;
          do {
            lVar17 = *plVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar10,lVar17);
          }
          if (lVar17 < 1) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar17 == 1) {
            (*(code *)plVar18[3])(plVar18[4]);
          }
        }
        *(undefined1 *)(param_1 + 8) = 1;
        FUN_002f2710(&local_60);
        param_1[10] = pcStack_58;
        param_1[9] = local_60;
        param_1[0xc] = pcStack_48;
        param_1[0xb] = CONCAT44(uStack_4c,local_50);
      }
      else {
        FUN_003daa7c(&local_60,param_1[0xd],*(undefined4 *)(param_1 + 0xe));
        pcStack_78 = pcStack_58;
        local_80 = local_60;
        pcStack_68 = pcStack_48;
      }
      *(undefined4 *)(param_1 + 0xe) = 0;
      local_a0 = 0;
      pcStack_98 = (char *)((ulong)pcStack_98 & 0xffffffffffffff00);
      if (*(char *)(param_1 + 0xf) == '\0') {
        lVar7 = param_1[0x10];
        if ((lVar7 != 0) && (*(uint *)(lVar7 + 8) < 2)) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x29b,2,"assertion failed: %s",
                       "!grpc_slice_is_interned(str->data.referenced)");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pcStack_98 = (char *)param_1[0x11];
        local_a0 = param_1[0x10];
        local_88 = (char *)param_1[0x13];
        uStack_90 = param_1[0x12];
        *(undefined1 *)(param_1 + 0xf) = 1;
        param_1[0x10] = 0;
        *(undefined1 *)(param_1 + 0x11) = 0;
      }
      else {
        FUN_002f2e08(&local_60,param_1[0x14],*(undefined4 *)(param_1 + 0x15));
        uStack_90 = CONCAT44(uStack_4c,local_50);
        pcStack_98 = pcStack_58;
        local_a0 = local_60;
        local_88 = pcStack_48;
      }
      *(undefined4 *)(param_1 + 0x15) = 0;
      uVar16 = FUN_002e2e80(PTR_FUN_04373078,0x80);
      if (uVar16 != 0) {
        FUN_003d86a4(uVar16,&local_80,&local_a0);
      }
      uVar16 = uVar16 | 2;
      if (PTR_DAT_04374fc0[0x10] == '\0') {
        uVar16 = (*(code *)*param_1)(param_1[1],uVar16);
      }
      else {
        FUN_005b09f0(uVar16);
        uVar16 = (*(code *)*param_1)(param_1[1],uVar16);
      }
      if (uVar16 == 0) {
        if (param_2 == param_3) {
          param_1[3] = &LAB_005af3a0;
          uVar16 = 0;
        }
        else {
          uVar16 = (*(code *)(&switchdataD_0418a9f8)[(byte)(&DAT_03a34d9c)[*param_2]])
                             (param_1,param_2,param_3);
        }
      }
      else {
        if (param_1[2] == 0) {
          uVar8 = uVar16;
          if (4 < uVar16) {
            uVar8 = FUN_002f03c0(uVar16,
                                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                                 ,0x435);
          }
          param_1[2] = uVar8;
        }
        param_1[3] = &LAB_005b1110;
      }
      return uVar16;
    case 0x2a:
      goto switchD_005b08e4_caseD_2a;
    case 0x2b:
switchD_005b08e4_caseD_2b:
      puVar14 = (undefined8 *)param_1[2];
      if ((param_2[0x10] >> 3 & 1) == 0) {
        if ((param_2[0x10] >> 5 & 1) == 0) goto LAB_005b3a1c;
        puVar13 = (undefined8 *)(*(long *)(param_2 + 8) + 0x70);
      }
      else {
        puVar13 = (undefined8 *)(*(long *)(param_2 + 8) + 0x38);
      }
      FUN_005b3fa0(param_1,*puVar13);
LAB_005b3a1c:
      FUN_002f2c60(local_28 + -3,"lame client channel");
      uVar9 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/lame_client.cc",0x5d,
                           local_28 + -3,0,0);
      uVar16 = FUN_003d5fa0(param_2,uVar9,*puVar14);
      return uVar16;
    case 0x2c:
switchD_005b08e4_caseD_2c:
      lVar7 = param_1[1];
      FUN_002ef750(lVar7 + 0x10);
      puVar14 = *(undefined8 **)(param_2 + 8);
      if (puVar14 != (undefined8 *)0x0) {
        param_2[8] = 0;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        param_2[0xe] = 0;
        param_2[0xf] = 0;
                    /* try { // try from 005b3aa8 to 005b3aaf has its CatchHandler @ 005b3bd8 */
        local_28[0] = puVar14;
        FUN_003d39b8(lVar7 + 0x30,*(undefined4 *)(param_2 + 0x10),local_28);
        puVar14 = local_28[0];
        local_28[0] = (undefined8 *)0x0;
        if (puVar14 != (undefined8 *)0x0) {
                    /* try { // try from 005b3ac4 to 005b3ac7 has its CatchHandler @ 005b3bcc */
          (**(code **)*puVar14)();
        }
      }
      if (*(long *)(param_2 + 0x18) != 0) {
                    /* try { // try from 005b3ad4 to 005b3ad7 has its CatchHandler @ 005b3bd0 */
        FUN_003d3bc0(lVar7 + 0x30);
      }
                    /* try { // try from 005b3ad8 to 005b3adf has its CatchHandler @ 005b3c0c */
      FUN_002ef790(lVar7 + 0x10);
      lVar7 = *(long *)(param_2 + 0x58);
      if (lVar7 != 0) {
        local_30 = (undefined8 *)CONCAT44(local_30._4_4_,0x72);
        local_38 = "external/com_google_grpc_base/src/core/lib/surface/lame_client.cc";
        FUN_002f2c60(&pcStack_58,"lame client channel");
        uVar9 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/lame_client.cc",
                             0x73,&pcStack_58,0,0);
        FUN_002f019c(&local_38,lVar7,uVar9);
      }
      lVar7 = *(long *)(param_2 + 0x60);
      if (lVar7 != 0) {
        local_30 = (undefined8 *)CONCAT44(local_30._4_4_,0x76);
        local_38 = "external/com_google_grpc_base/src/core/lib/surface/lame_client.cc";
        FUN_002f2c60(&pcStack_58,"lame client channel");
        uVar9 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/lame_client.cc",
                             0x77,&pcStack_58,0,0);
        FUN_002f019c(&local_38,lVar7,uVar9);
      }
      uVar16 = *(ulong *)(param_2 + 0x20);
      if (4 < uVar16) {
        uVar16 = FUN_002f0430(uVar16,
                              "external/com_google_grpc_base/src/core/lib/surface/lame_client.cc",
                              0x79);
      }
      if (*(long *)param_2 != 0) {
        pcStack_58 = "external/com_google_grpc_base/src/core/lib/surface/lame_client.cc";
        local_50 = 0x7b;
        uVar16 = FUN_002f019c(&pcStack_58,*(long *)param_2,0);
      }
      return uVar16;
    }
  } while( true );
}


