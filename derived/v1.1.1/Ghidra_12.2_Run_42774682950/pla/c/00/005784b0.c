/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005784b0; name: FUN_005784b0
 */


long FUN_005784b0(byte *param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  char cVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 local_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  undefined8 local_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  long *local_170;
  int local_160;
  undefined4 uStack_15c;
  ulong uStack_158;
  undefined8 local_150;
  undefined1 *local_148;
  long *local_140;
  long local_138;
  long local_130;
  long local_128;
  long lStack_120;
  undefined8 local_118;
  int local_110 [2];
  ulong local_108;
  undefined8 uStack_100;
  undefined1 *local_f8;
  long *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  long local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  long local_a8;
  long local_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  long *local_50;
  
  local_98 = 0;
                    /* try { // try from 005784d0 to 005784d7 has its CatchHandler @ 00578b88 */
  FUN_002f2710(&local_b8);
  local_110[0] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  lStack_d0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_f8 = (undefined1 *)0x0;
  bVar3 = (*param_1 & 1) != 0;
  uVar2 = (ulong)(*param_1 >> 1);
  if (bVar3) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  local_f0 = &local_e8;
  if (uVar2 == 0) {
                    /* try { // try from 005785cc to 005785f7 has its CatchHandler @ 00578b84 */
    FUN_002f2c60(&local_160,"creds_path unset");
    local_c0 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                            ,0xe4,&local_160,0,0);
    goto LAB_005786b8;
  }
  pbVar7 = *(byte **)(param_1 + 0x10);
  if (!bVar3) {
    pbVar7 = param_1 + 1;
  }
                    /* try { // try from 0057851c to 00578527 has its CatchHandler @ 00578b9c */
  local_c0 = FUN_003fa130(pbVar7,0,&local_b8);
  if (local_c0 != 0) goto LAB_005786b8;
  uVar2 = uStack_b0 & 0xff;
  if (local_b8 != (long *)0x0) {
    uVar2 = uStack_b0;
  }
  if ((long)uVar2 < 0) {
                    /* try { // try from 00578b10 to 00578b2f has its CatchHandler @ 00578b80 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  if (local_b8 == (long *)0x0) {
    local_a8 = (long)&uStack_b0 + 1;
  }
                    /* try { // try from 00578558 to 00578563 has its CatchHandler @ 00578b80 */
  FUN_0050a1b0(&local_160,local_a8,uVar2,&local_c0);
  lVar8 = local_d8;
  local_110[0] = local_160;
  local_160 = 0;
  if (local_110[0] - 3U < 2) {
    if ((local_108 & 1) != 0) {
      *local_f8 = 0;
      uStack_100 = 0;
      if ((local_108 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_f8);
      }
    }
    local_108 = uStack_158;
    uStack_158 = 0;
    uStack_100 = local_150;
    local_f8 = local_148;
    local_150 = 0;
    local_148 = (undefined1 *)0x0;
LAB_005786a8:
    FUN_003ee5f8(&local_160);
  }
  else if (local_110[0] == 5) {
    FUN_003e9f80(&local_f0,local_e8);
    local_f0 = local_140;
    local_e8 = local_138;
    local_e0 = local_130;
    if (local_130 == 0) {
      local_f0 = &local_e8;
      FUN_003ee5f8(&local_160);
    }
    else {
      *(long **)(local_138 + 0x10) = &local_e8;
      local_140 = &local_138;
      local_138 = 0;
      local_130 = 0;
      FUN_003ee5f8(&local_160);
    }
  }
  else {
    if (local_110[0] != 6) goto LAB_005786a8;
    lVar11 = lStack_d0;
    if (local_d8 != 0) {
      for (; lVar11 != lVar8; lVar11 = lVar11 + -0x50) {
        FUN_003ee5f8(lVar11 + -0x50);
      }
      lStack_d0 = lVar8;
      FUN_002e2ea0(PTR_LAB_04373088,local_d8);
    }
    lStack_d0 = lStack_120;
    local_d8 = local_128;
    local_c8 = local_118;
    local_118 = 0;
    local_128 = 0;
    lStack_120 = 0;
    FUN_003ee5f8(&local_160);
  }
  if (local_c0 == 0) {
    if (local_110[0] == 5) {
                    /* try { // try from 005788a8 to 005788b3 has its CatchHandler @ 00578b74 */
      FUN_0057b7a0(&local_160,local_110);
      local_70 = CONCAT44(uStack_15c,local_160);
      uStack_68 = uStack_158;
      puStack_58 = local_148;
      uStack_60 = local_150;
      local_50 = local_140;
                    /* try { // try from 005788c4 to 005788cb has its CatchHandler @ 00578b9c */
      iVar4 = FUN_0057b770(&local_70);
      if (iVar4 == 0) {
                    /* try { // try from 005789f4 to 005789ff has its CatchHandler @ 00578b5c */
        FUN_0057d220(&local_160,local_110);
        local_90 = CONCAT44(uStack_15c,local_160);
        uStack_88 = uStack_158;
        puStack_78 = local_148;
        uStack_80 = local_150;
                    /* try { // try from 00578a08 to 00578a0f has its CatchHandler @ 00578b9c */
        iVar4 = FUN_0057d1f0(&local_90);
        if (iVar4 != 0) {
          uStack_1a8 = uStack_88;
          local_1b0 = local_90;
          puStack_198 = puStack_78;
          uStack_1a0 = uStack_80;
                    /* try { // try from 00578a1c to 00578a27 has its CatchHandler @ 00578b58 */
          FUN_0057e690(&local_160,&local_1b0);
                    /* try { // try from 00578a28 to 00578a33 has its CatchHandler @ 00578b54 */
          FUN_00578bb8(&local_98,&local_160);
          FUN_003f4f54(&local_160);
          if (local_98 == 0) {
                    /* try { // try from 00578a44 to 00578a6f has its CatchHandler @ 00578b50 */
            FUN_002f2c60(&local_160,
                         "grpc_refresh_token_credentials_create_from_auth_refresh_token failed");
            local_c0 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                                    ,0x108,&local_160,0,0);
          }
        }
      }
      else {
        uStack_188 = uStack_68;
        local_190 = local_70;
        puStack_178 = puStack_58;
        uStack_180 = uStack_60;
        local_170 = local_50;
                    /* try { // try from 005788e0 to 005788ff has its CatchHandler @ 00578b78 */
        auVar14 = FUN_0057b760();
        FUN_00580170(&local_160,&local_190,auVar14._0_8_,auVar14._8_8_);
                    /* try { // try from 00578900 to 0057890b has its CatchHandler @ 00578b64 */
        FUN_00578bb8(&local_98,&local_160);
        FUN_003f4f54(&local_160);
        if (local_98 == 0) {
                    /* try { // try from 0057891c to 00578947 has its CatchHandler @ 00578b60 */
          FUN_002f2c60(&local_160,
                       "grpc_service_account_jwt_access_credentials_create_from_auth_json_key failed"
                      );
          local_c0 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                                  ,0xfb,&local_160,0,0);
        }
      }
    }
    else {
                    /* try { // try from 0057894c to 005789ef has its CatchHandler @ 00578b7c */
      FUN_002f2c60(&local_160,"Failed to parse JSON");
      uVar5 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                           ,0xed,&local_160,0,0);
      if ((local_b8 != (long *)0x0) && (plVar6 = (long *)*local_b8, plVar6 != (long *)0x0)) {
        plVar9 = plVar6 + 1;
        do {
          lVar8 = *plVar9;
          cVar10 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar8 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        lVar11 = *plVar6;
        if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar11 + 8),plVar6,lVar8,lVar8 + 1);
        }
        if (lVar8 < 1) {
                    /* try { // try from 00578b30 to 00578b4f has its CatchHandler @ 00578b7c */
                    /* WARNING: Subroutine does not return */
          __assert_fail("prior > 0",
                        "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x7c,
                        "RefNonZero");
        }
      }
      local_c0 = FUN_002f1340(uVar5,6,&local_b8);
    }
  }
LAB_005786b8:
  cVar10 = '\x02';
  if (local_98 != 0) {
    cVar10 = '\x01';
  }
  cVar1 = local_98 == 0;
  if (local_c0 == 0) {
    cVar1 = cVar10;
  }
  if (cVar1 != '\x01') {
                    /* try { // try from 00578a98 to 00578b0f has its CatchHandler @ 00578b9c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                 ,0x10e,2,"assertion failed: %s",
                 "(result == nullptr) + (error == GRPC_ERROR_NONE) == 1");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((local_b8 != (long *)0x0) && (plVar6 = (long *)*local_b8, plVar6 != (long *)0x0)) {
    plVar9 = plVar6 + 1;
    lVar8 = *plVar6;
    do {
      lVar11 = *plVar9;
      cVar10 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar11 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 00578718 to 005787fb has its CatchHandler @ 00578b9c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),plVar6,lVar11);
    }
    if (lVar11 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar11 == 1) {
      (*(code *)local_b8[3])(local_b8[4]);
    }
  }
  if (local_98 != 0) {
    plVar6 = (long *)(local_98 + 0x10);
    do {
      lVar8 = *plVar6;
      cVar10 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    lVar11 = *(long *)(local_98 + 8);
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar11 + 8),local_98 + 8,lVar8,lVar8 + 1);
    }
  }
  lVar8 = local_98;
  puVar12 = (undefined8 *)*param_2;
  if (puVar12 != (undefined8 *)0x0) {
    lVar11 = puVar12[1];
    plVar6 = puVar12 + 2;
    do {
      lVar13 = *plVar6;
      cVar10 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar11 + 8),puVar12 + 1,lVar13);
    }
    if (lVar13 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar13 == 1) {
      (**(code **)*puVar12)(puVar12);
      FUN_002e2ea0(PTR_LAB_04373088,puVar12);
    }
  }
  lVar11 = local_c0;
  *param_2 = lVar8;
  FUN_003ee5f8(local_110);
  FUN_003f4f54(&local_98);
  return lVar11;
}


