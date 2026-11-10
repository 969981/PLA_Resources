/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ad030; name: FUN_005ad030
 */


/* WARNING: Removing unreachable block (ram,0x005adb14) */
/* WARNING: Type propagation algorithm not settling */

long FUN_005ad030(long param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined1 auVar18 [12];
  long local_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  char *local_118;
  undefined *local_110;
  char *local_108;
  undefined *puStack_100;
  ulong local_f8;
  undefined *puStack_f0;
  ulong local_e8;
  undefined *puStack_e0;
  ulong local_d8;
  undefined *puStack_d0;
  ulong *local_c8;
  long local_c0;
  ulong local_b8 [4];
  byte local_98 [16];
  ulong local_88;
  ulong local_80;
  undefined *puStack_78;
  ulong local_70;
  
  pbVar2 = (byte *)((long)param_2 + 9);
  if (*param_2 != 0) {
    pbVar2 = (byte *)param_2[2];
  }
  uVar3 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar3 = param_2[1];
  }
  if (uVar3 != 0) {
    uVar10 = *(uint *)(param_1 + 0x1210);
    pbVar1 = pbVar2 + uVar3;
    pbVar15 = pbVar2;
    if (0x17 < uVar10) {
      pbVar17 = pbVar2;
      pbVar16 = pbVar2;
      switch(uVar10) {
      case 0x18:
        goto switchD_005ad10c_caseD_18;
      case 0x19:
        goto switchD_005ad10c_caseD_19;
      case 0x1a:
        goto switchD_005ad10c_caseD_1a;
      case 0x1b:
        goto switchD_005ad10c_caseD_1b;
      case 0x1c:
        goto switchD_005ad10c_caseD_1c;
      case 0x1d:
        goto switchD_005ad10c_caseD_1d;
      case 0x1e:
        goto switchD_005ad10c_caseD_1e;
      case 0x1f:
        goto switchD_005ad10c_caseD_1f;
      case 0x20:
        goto switchD_005ad10c_caseD_20;
      case 0x21:
        goto switchD_005ad10c_caseD_21;
      default:
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                     ,0xf9,2,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    uVar11 = uVar3;
    do {
      if (uVar10 == 0x18) goto switchD_005ad10c_caseD_18;
      bVar5 = "PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n"[uVar10];
      if (*pbVar15 != bVar5) {
        local_110 = PTR_LAB_04374f80;
        puStack_100 = PTR_FUN_043737e0;
        local_f8 = (ulong)*pbVar15;
        puStack_d0 = PTR_FUN_043739e0;
        puStack_f0 = PTR_FUN_043739e8;
        puStack_e0 = PTR_FUN_043737e0;
        local_118 = (char *)(ulong)bVar5;
        local_108 = (char *)(ulong)bVar5;
        local_e8 = (ulong)*pbVar15;
        local_d8 = (ulong)uVar10;
        FUN_002e6390(&local_80,
                     "Connect string mismatch: expected \'%c\' (%d) got \'%c\' (%d) at byte %d",0x44
                     ,&local_118,5);
        uVar3 = (ulong)&local_80 | 1;
        if ((local_80 & 1) != 0) {
          uVar3 = local_70;
        }
                    /* try { // try from 005ad180 to 005ad1a3 has its CatchHandler @ 005ad1e4 */
        FUN_002f2ff0(&local_c8,uVar3);
        lVar8 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                             ,0x62,&local_c8,0,0);
        goto LAB_005ad1a4;
      }
      pbVar15 = pbVar15 + 1;
      uVar10 = uVar10 + 1;
      *(uint *)(param_1 + 0x1210) = uVar10;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return 0;
switchD_005ad10c_caseD_18:
  if (pbVar1 <= pbVar15) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc",
                 0x6e,2,"assertion failed: %s","cur < end");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(uint *)(param_1 + 0x121c) = (uint)*pbVar15 << 0x10;
  pbVar16 = pbVar15 + 1;
  if (pbVar15 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1210) = 0x19;
    return 0;
  }
switchD_005ad10c_caseD_19:
  if (pbVar1 <= pbVar16) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc",
                 0x76,2,"assertion failed: %s","cur < end");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(uint *)(param_1 + 0x121c) = *(uint *)(param_1 + 0x121c) | (uint)*pbVar16 << 8;
  pbVar17 = pbVar16 + 1;
  if (pbVar16 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1210) = 0x1a;
    return 0;
  }
switchD_005ad10c_caseD_1a:
  if (pbVar1 <= pbVar17) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc",
                 0x7e,2,"assertion failed: %s","cur < end");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(uint *)(param_1 + 0x121c) = *(uint *)(param_1 + 0x121c) | (uint)*pbVar17;
  pbVar15 = pbVar17 + 1;
  if (pbVar17 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1210) = 0x1b;
    return 0;
  }
switchD_005ad10c_caseD_1b:
  if (pbVar1 <= pbVar15) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc",
                 0x86,2,"assertion failed: %s","cur < end");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(byte *)(param_1 + 0x1214) = *pbVar15;
  pbVar17 = pbVar15 + 1;
  if (pbVar15 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1210) = 0x1c;
    return 0;
  }
switchD_005ad10c_caseD_1c:
  if (pbVar1 <= pbVar17) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc",
                 0x8e,2,"assertion failed: %s","cur < end");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(byte *)(param_1 + 0x1215) = *pbVar17;
  pbVar15 = pbVar17 + 1;
  if (pbVar17 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1210) = 0x1d;
    return 0;
  }
switchD_005ad10c_caseD_1d:
  if (pbVar1 <= pbVar15) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc",
                 0x96,2,"assertion failed: %s","cur < end");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(uint *)(param_1 + 0x1220) = (*pbVar15 & 0x7f) << 0x18;
  pbVar17 = pbVar15 + 1;
  if (pbVar15 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1210) = 0x1e;
    return 0;
  }
switchD_005ad10c_caseD_1e:
  if (pbVar1 <= pbVar17) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc",
                 0x9e,2,"assertion failed: %s","cur < end");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(uint *)(param_1 + 0x1220) = *(uint *)(param_1 + 0x1220) | (uint)*pbVar17 << 0x10;
  pbVar15 = pbVar17 + 1;
  if (pbVar17 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1210) = 0x1f;
    return 0;
  }
switchD_005ad10c_caseD_1f:
  if (pbVar1 <= pbVar15) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc",
                 0xa6,2,"assertion failed: %s","cur < end");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(uint *)(param_1 + 0x1220) = *(uint *)(param_1 + 0x1220) | (uint)*pbVar15 << 8;
  pbVar17 = pbVar15 + 1;
  if (pbVar15 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1210) = 0x20;
    return 0;
  }
switchD_005ad10c_caseD_20:
  if (pbVar1 <= pbVar17) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc",
                 0xae,2,"assertion failed: %s","cur < end");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar11 = (ulong)*(uint *)(param_1 + 0x1220) | (ulong)*pbVar17;
  uVar10 = (uint)uVar11;
  *(uint *)(param_1 + 0x1220) = uVar10;
  *(undefined4 *)(param_1 + 0x1210) = 0x21;
  bVar5 = *(byte *)(param_1 + 0x1214);
  if ((*(char *)(param_1 + 0x1217) != '\0') && (bVar5 != 4)) {
    local_118 = "Expected SETTINGS frame as the first frame, got frame type ";
    local_110 = (undefined *)0x3b;
    lVar8 = FUN_002ed6a0(bVar5,local_b8);
    lVar8 = lVar8 - (long)local_b8;
    local_c8 = local_b8;
    if (lVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    local_c0 = lVar8;
    FUN_002eced0(local_98,&local_118,&local_c8);
    uVar11 = (ulong)local_98 | 1;
    if ((local_98[0] & 1) != 0) {
      uVar11 = local_88;
    }
                    /* try { // try from 005ad380 to 005ad3a3 has its CatchHandler @ 005adcfc */
    FUN_002f2ff0(&local_80,uVar11);
    lVar8 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                         ,0x103,&local_80,0,0);
    if ((local_98[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_88);
    }
    goto joined_r0x005ad480;
  }
  *(undefined1 *)(param_1 + 0x1217) = 0;
  uVar6 = *(uint *)(param_1 + 0x1218);
  if (uVar6 != 0) {
    if (bVar5 == 9) {
      if (uVar6 == uVar10) {
        lVar8 = FUN_005adef0(param_1,1);
      }
      else {
        local_110 = PTR_FUN_043739e0;
        puStack_100 = PTR_FUN_043739e0;
        local_118 = (char *)(ulong)uVar6;
        local_108 = (char *)uVar11;
        FUN_002e6390(&local_80,
                     "Expected CONTINUATION frame for grpc_chttp2_stream %08x, got grpc_chttp2_stream %08x"
                     ,0x54,&local_118,2);
        uVar11 = (ulong)&local_80 | 1;
        if ((local_80 & 1) != 0) {
          uVar11 = local_70;
        }
                    /* try { // try from 005ad5b4 to 005ad5d7 has its CatchHandler @ 005adcd8 */
        FUN_002f2ff0(&local_c8,uVar11);
        lVar8 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                             ,0x113,&local_c8,0,0);
        if ((local_80 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_70);
        }
      }
    }
    else {
      puStack_78 = PTR_FUN_043739e8;
      local_80 = (ulong)bVar5;
      FUN_002e6390(&local_c8,"Expected CONTINUATION frame, got frame type %02x",0x30,&local_80,1);
      uVar11 = (ulong)&local_c8 | 1;
      if (((ulong)local_c8 & 1) != 0) {
        uVar11 = local_b8[0];
      }
                    /* try { // try from 005ad528 to 005ad54b has its CatchHandler @ 005adce8 */
      FUN_002f2ff0(&local_118,uVar11);
      lVar8 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                           ,0x10b,&local_118,0,0);
      if (((ulong)local_c8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_b8[0]);
      }
    }
    goto joined_r0x005ad480;
  }
  switch((ulong)bVar5) {
  case 0:
    lVar9 = FUN_005a4a80(param_1 + 0xa8);
    local_110 = (undefined *)((ulong)local_110 & 0xffffffff00000000);
    local_118 = (char *)0x0;
    if (lVar9 == 0) {
      lVar14 = param_1 + 0x1130;
      lVar8 = (**(code **)(*(long *)(param_1 + 0x1130) + 0x38))
                        (lVar14,*(undefined4 *)(param_1 + 0x121c));
      pcVar13 = *(code **)(*(long *)(param_1 + 0x1130) + 0x20);
    }
    else {
      lVar14 = lVar9 + 0x9b8;
      lVar8 = (**(code **)(*(long *)(lVar9 + 0x9b8) + 0x28))
                        (lVar14,*(undefined4 *)(param_1 + 0x121c));
      pcVar13 = *(code **)(*(long *)(lVar9 + 0x9b8) + 0x18);
    }
    auVar18 = (*pcVar13)(lVar14);
    local_118 = auVar18._0_8_;
    local_110 = (undefined *)CONCAT44(local_110._4_4_,auVar18._8_4_);
    FUN_00597fd0(&local_118,param_1,lVar9);
    if (lVar8 != 0) {
LAB_005ad9d4:
      uVar11 = FUN_002f12e0(lVar8,2,&local_c8);
      if ((uVar11 & 1) != 0) {
        if (lVar9 != 0) {
          FUN_0059b4b0(param_1,lVar9,1,0,lVar8);
        }
        FUN_005aba00(param_1,*(undefined4 *)(param_1 + 0x1220),1,lVar9 + 0x1e8);
        goto LAB_005adabc;
      }
      goto joined_r0x005ad480;
    }
    if (lVar9 == 0) {
LAB_005adabc:
      lVar8 = 0;
      *(undefined1 **)(param_1 + 0x1238) = &LAB_005af230;
      goto joined_r0x005ad480;
    }
    *(ulong *)(lVar9 + 0x9a8) = *(long *)(lVar9 + 0x9a8) + (ulong)*(uint *)(param_1 + 0x121c);
    *(long *)(lVar9 + 0x1d0) = *(long *)(lVar9 + 0x1d0) + 9;
    if (*(char *)(lVar9 + 0x201) != '\0') goto LAB_005adabc;
    lVar8 = FUN_005a3970(lVar9 + 0x980,*(undefined1 *)(param_1 + 0x1215),
                         *(undefined4 *)(lVar9 + 200),lVar9);
    if (lVar8 != 0) goto LAB_005ad9d4;
    *(long *)(param_1 + 0x1230) = lVar9;
    *(undefined **)(param_1 + 0x1238) = PTR_LAB_04374fb0;
    *(long *)(param_1 + 0x1228) = lVar9 + 0x980;
    *(undefined8 *)(param_1 + 0xf08) = 0x8000000000000000;
    goto LAB_005ad3c4;
  case 1:
    lVar8 = FUN_005adef0(param_1,0);
    goto joined_r0x005ad480;
  default:
    if (PTR_DAT_04374f08[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                   ,299,2,"Unknown frame type %02x");
    }
LAB_005ad858:
    *(undefined1 **)(param_1 + 0x1238) = &LAB_005af230;
    iVar4 = *(int *)(param_1 + 0x121c);
    break;
  case 3:
    lVar8 = FUN_005abad0(param_1 + 0x10d8,*(undefined4 *)(param_1 + 0x121c),
                         *(undefined1 *)(param_1 + 0x1215));
    if (lVar8 != 0) {
      return lVar8;
    }
    lVar8 = FUN_005a4a80(param_1 + 0xa8,*(undefined4 *)(param_1 + 0x1220));
    *(long *)(param_1 + 0x1230) = lVar8;
    puVar7 = PTR_LAB_04374f98;
    if (lVar8 == 0) goto LAB_005ad858;
    *(long *)(lVar8 + 0x1d0) = *(long *)(lVar8 + 0x1d0) + 9;
    *(undefined **)(param_1 + 0x1238) = puVar7;
    *(long *)(param_1 + 0x1228) = param_1 + 0x10d8;
    iVar4 = *(int *)(param_1 + 0x121c);
    break;
  case 4:
    if (uVar10 != 0) {
      FUN_002f2c60(&local_118,"Settings frame received for grpc_chttp2_stream");
      uVar12 = 0x2eb;
      goto LAB_005ad8c8;
    }
    lVar8 = FUN_005a96d0(param_1 + 0x10d8,*(undefined4 *)(param_1 + 0x121c),
                         *(undefined1 *)(param_1 + 0x1215),param_1 + 0xe3c);
    if (lVar8 != 0) {
      return lVar8;
    }
    if ((*(byte *)(param_1 + 0x1215) & 1) != 0) {
      *(undefined8 *)(param_1 + 0xe98) = *(undefined8 *)(param_1 + 0xe7c);
      *(undefined8 *)(param_1 + 0xe90) = *(undefined8 *)(param_1 + 0xe74);
      *(undefined8 *)(param_1 + 0xea4) = *(undefined8 *)(param_1 + 0xe88);
      *(undefined8 *)(param_1 + 0xe9c) = *(undefined8 *)(param_1 + 0xe80);
      FUN_005a7c80(param_1 + 0x10b0,*(undefined4 *)(param_1 + 0xe90));
      *(undefined1 *)(param_1 + 0xe35) = 0;
    }
    *(undefined **)(param_1 + 0x1238) = PTR_LAB_04374fa8;
    *(long *)(param_1 + 0x1228) = param_1 + 0x10d8;
    iVar4 = *(int *)(param_1 + 0x121c);
    break;
  case 6:
    lVar8 = FUN_005a4530(param_1 + 0x10d8,*(undefined4 *)(param_1 + 0x121c),
                         *(undefined1 *)(param_1 + 0x1215));
    if (lVar8 != 0) {
      return lVar8;
    }
    *(undefined **)(param_1 + 0x1238) = PTR_LAB_04374fa0;
    *(long *)(param_1 + 0x1228) = param_1 + 0x10d8;
    iVar4 = *(int *)(param_1 + 0x121c);
    break;
  case 7:
    lVar8 = FUN_005a9cd0(param_1 + 0x1110,*(undefined4 *)(param_1 + 0x121c),
                         *(undefined1 *)(param_1 + 0x1215));
    if (lVar8 != 0) {
      return lVar8;
    }
    *(undefined **)(param_1 + 0x1238) = PTR_LAB_04374f88;
    *(long *)(param_1 + 0x1228) = param_1 + 0x1110;
    iVar4 = *(int *)(param_1 + 0x121c);
    break;
  case 8:
    lVar8 = FUN_005abec0(param_1 + 0x10d8,*(undefined4 *)(param_1 + 0x121c),
                         *(undefined1 *)(param_1 + 0x1215));
    if (lVar8 != 0) {
      return lVar8;
    }
    if (*(int *)(param_1 + 0x1220) != 0) {
      lVar8 = FUN_005a4a80(param_1 + 0xa8);
      *(long *)(param_1 + 0x1230) = lVar8;
      if (lVar8 == 0) goto LAB_005ad858;
      *(long *)(lVar8 + 0x1d0) = *(long *)(lVar8 + 0x1d0) + 9;
    }
    *(undefined **)(param_1 + 0x1238) = PTR_LAB_04374f90;
    *(long *)(param_1 + 0x1228) = param_1 + 0x10d8;
    iVar4 = *(int *)(param_1 + 0x121c);
    break;
  case 9:
    FUN_002f2c60(&local_118,"Unexpected CONTINUATION frame");
    uVar12 = 0x11e;
LAB_005ad8c8:
    lVar8 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                         ,uVar12,&local_118,0,0);
joined_r0x005ad480:
    if (lVar8 != 0) {
      return lVar8;
    }
LAB_005ad3c4:
    iVar4 = *(int *)(param_1 + 0x121c);
  }
  if (iVar4 == 0) {
    FUN_002f2710(&local_118);
    lVar8 = FUN_005add20(param_1,&local_118,1);
    if (lVar8 != 0) {
      return lVar8;
    }
    *(undefined8 *)(param_1 + 0x1230) = 0;
    pbVar15 = pbVar17 + 1;
    if (pbVar17 + 1 == pbVar1) {
      *(undefined4 *)(param_1 + 0x1210) = 0x18;
      return 0;
    }
  }
  else {
    uVar11 = (**(code **)(*(long *)(param_1 + 0x1130) + 0x10))(param_1 + 0x1130);
    if ((uVar11 & 1) != 0) {
      if (*(uint *)(param_1 + 0xea0) < *(uint *)(param_1 + 0x121c)) {
        local_110 = PTR_FUN_043739e0;
        puStack_100 = PTR_FUN_043739e0;
        local_118 = (char *)(ulong)*(uint *)(param_1 + 0x121c);
        local_108 = (char *)(ulong)*(uint *)(param_1 + 0xea0);
        FUN_002e6390(&local_80,"Frame size %d is larger than max frame size %d",0x2e,&local_118,2);
        uVar3 = (ulong)&local_80 | 1;
        if ((local_80 & 1) != 0) {
          uVar3 = local_70;
        }
                    /* try { // try from 005ad960 to 005ad983 has its CatchHandler @ 005adcc8 */
        FUN_002f2ff0(&local_c8,uVar3);
        lVar8 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                             ,0xc9,&local_c8,0,0);
LAB_005ad1a4:
        if ((local_80 & 1) == 0) {
          return lVar8;
        }
        FUN_002e2ea0(PTR_LAB_04373088,local_70);
        return lVar8;
      }
    }
    pbVar15 = pbVar17 + 1;
    if (pbVar17 + 1 == pbVar1) {
      return 0;
    }
switchD_005ad10c_caseD_21:
    if (pbVar1 <= pbVar15) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                   ,0xd0,2,"assertion failed: %s","cur < end");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar10 = *(uint *)(param_1 + 0x121c);
    uVar6 = (int)pbVar1 - (int)pbVar15;
    if (uVar10 == uVar6) {
      lStack_138 = param_2[1];
      local_140 = *param_2;
      lStack_128 = param_2[3];
      lStack_130 = param_2[2];
      FUN_002f3390(&local_118,&local_140,(long)pbVar15 - (long)pbVar2,uVar3);
      lVar8 = FUN_005add20(param_1,&local_118,1);
      if (lVar8 == 0) {
        *(undefined4 *)(param_1 + 0x1210) = 0x18;
        *(undefined8 *)(param_1 + 0x1230) = 0;
        return 0;
      }
      return lVar8;
    }
    if (uVar6 <= uVar10) {
      lStack_178 = param_2[1];
      local_180 = *param_2;
      lStack_168 = param_2[3];
      lStack_170 = param_2[2];
      FUN_002f3390(&local_118,&local_180,(long)pbVar15 - (long)pbVar2,uVar3);
      lVar8 = FUN_005add20(param_1,&local_118,0);
      if (lVar8 == 0) {
        *(uint *)(param_1 + 0x121c) = *(int *)(param_1 + 0x121c) - uVar6;
        return 0;
      }
      return lVar8;
    }
    lStack_158 = param_2[1];
    local_160 = *param_2;
    lStack_148 = param_2[3];
    lStack_150 = param_2[2];
    FUN_002f3390(&local_118,&local_160,(long)pbVar15 - (long)pbVar2,
                 ((long)pbVar15 - (long)pbVar2) + (ulong)uVar10);
    lVar8 = FUN_005add20(param_1,&local_118,1);
    if (lVar8 != 0) {
      return lVar8;
    }
    *(undefined8 *)(param_1 + 0x1230) = 0;
    pbVar15 = pbVar15 + *(uint *)(param_1 + 0x121c);
  }
  goto switchD_005ad10c_caseD_18;
}


