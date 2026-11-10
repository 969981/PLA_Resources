/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057d360; name: FUN_0057d360
 */


undefined8 FUN_0057d360(int *param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  char *__s;
  size_t sVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char *__nptr;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  char *__s_00;
  char *local_1c0;
  size_t local_1b8;
  undefined *local_190;
  undefined8 uStack_188;
  byte local_160 [16];
  undefined8 local_150;
  undefined1 auStack_148 [32];
  undefined *local_128;
  undefined8 local_120;
  char *pcStack_118;
  byte local_108;
  undefined7 uStack_107;
  byte local_100;
  undefined2 uStack_ff;
  undefined1 uStack_fd;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined2 uStack_fa;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined1 auStack_d0 [24];
  ulong local_b8;
  int local_b0 [2];
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_b0[0] = 0;
  local_88 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_98 = 0;
  local_70 = 0;
  uStack_68 = 0;
  puStack_90 = &local_88;
  if (param_1 == (int *)0x0) {
                    /* try { // try from 0057d418 to 0057d483 has its CatchHandler @ 0057da90 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                 ,0x90,2,"Received NULL response.");
    __s = (char *)0x0;
    uVar10 = *param_2;
  }
  else {
    if (*(long *)(param_1 + 6) == 0) {
      __s = (char *)0x0;
      iVar3 = *param_1;
      if (iVar3 != 200) goto LAB_0057d458;
LAB_0057d3e0:
      local_b8 = 0;
      if (__s == (char *)0x0) {
        sVar7 = 0;
      }
      else {
        sVar7 = strlen(__s);
        if ((long)sVar7 < 0) {
                    /* try { // try from 0057d3f8 to 0057d417 has its CatchHandler @ 0057da88 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
      }
                    /* try { // try from 0057d48c to 0057d49b has its CatchHandler @ 0057da88 */
      FUN_0050a1b0(&local_108,__s,sVar7,&local_b8);
                    /* try { // try from 0057d49c to 0057d4ab has its CatchHandler @ 0057da54 */
      FUN_003e65f4(local_b0,&local_108);
      FUN_0057e870(auStack_d0);
      FUN_003e9f80(auStack_e8,local_e0);
      if ((local_100 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_f0);
      }
      if (local_b8 == 0) {
        if (local_b0[0] == 5) {
          local_f8 = 0;
          uStack_fa = 0;
          local_108 = 0x18;
          uStack_ff = 0x6b6f;
          uStack_fd = 0x65;
          uStack_fc = 0x6e;
          uStack_107 = s_access_token_03919c1b._0_7_;
          local_100 = s_access_token_03919c1b[7];
          uStack_fb = 0;
                    /* try { // try from 0057d634 to 0057d63f has its CatchHandler @ 0057da40 */
          puVar9 = (undefined8 *)FUN_00500624(&puStack_90,&local_108);
          if ((local_108 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_f8);
          }
          if ((&local_88 == puVar9) || (*(int *)(puVar9 + 7) != 4)) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                         ,0xb8,2,"Missing or invalid access_token in JSON.");
          }
          else {
            if ((*(byte *)(puVar9 + 8) & 1) == 0) {
              pcVar12 = (char *)((long)puVar9 + 0x41);
            }
            else {
              pcVar12 = (char *)puVar9[10];
            }
            local_f8 = 0;
            uStack_fc = 0;
            uStack_fb = 0;
            uStack_fa = 0;
            local_108 = 0x14;
            uStack_ff = 0x6570;
            uStack_107 = s_token_type_038dc839._0_7_;
            local_100 = s_token_type_038dc839[7];
            uStack_fd = 0;
                    /* try { // try from 0057d6f4 to 0057d6ff has its CatchHandler @ 0057da30 */
            puVar9 = (undefined8 *)FUN_00500624(&puStack_90,&local_108);
            if ((local_108 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_f8);
            }
            if ((&local_88 == puVar9) || (*(int *)(puVar9 + 7) != 4)) {
                    /* try { // try from 0057d744 to 0057d75f has its CatchHandler @ 0057da8c */
              FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                           ,0xc0,2,"Missing or invalid token_type in JSON.");
            }
            else {
              if ((*(byte *)(puVar9 + 8) & 1) == 0) {
                __s_00 = (char *)((long)puVar9 + 0x41);
              }
              else {
                __s_00 = (char *)puVar9[10];
              }
              uStack_fc = 0;
              uStack_fb = 0;
              uStack_fa = 0;
              local_f8 = 0;
              local_108 = 0x14;
              uStack_ff = 0x6e69;
              uStack_107 = s_expires_in_03906483._0_7_;
              local_100 = s_expires_in_03906483[7];
              uStack_fd = 0;
                    /* try { // try from 0057d790 to 0057d79b has its CatchHandler @ 0057da20 */
              puVar9 = (undefined8 *)FUN_00500624(&puStack_90,&local_108);
              if ((local_108 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_f8);
              }
              if ((&local_88 != puVar9) && (*(int *)(puVar9 + 7) == 3)) {
                if ((*(byte *)(puVar9 + 8) & 1) == 0) {
                  __nptr = (char *)((long)puVar9 + 0x41);
                }
                else {
                  __nptr = (char *)puVar9[10];
                }
                lVar11 = strtol(__nptr,(char **)0x0,10);
                *param_3 = lVar11 * 1000;
                uVar10 = *param_2;
                if ((3 < uVar10) && (uVar2 = (uint)uVar10 & 3, 1 < uVar2)) {
                  uVar10 = uVar10 & 0xfffffffffffffffc;
                  uVar4 = *(undefined4 *)(uVar10 + 0x48);
                  FUN_003d81b0(uVar10,uVar10,uVar10 + 0x20,*(undefined8 *)(uVar10 + 0x40),
                               "external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                               ,0xce);
                  plVar1 = (long *)(uVar10 + 0x40);
                  do {
                    lVar11 = *plVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar6) {
                      *plVar1 = lVar11 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar11 < 1) {
                    /* try { // try from 0057d9dc to 0057da03 has its CatchHandler @ 0057da8c */
                    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",
                                 0x104,2,"assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  if (lVar11 == 1) {
                    /* try { // try from 0057d994 to 0057d9af has its CatchHandler @ 0057da8c */
                    FUN_003da320(uVar2,uVar10,uVar4,
                                 "external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                                 ,0xce);
                  }
                }
                local_128 = PTR_DAT_04373888;
                local_120 = 0xd;
                pcStack_118 = "authorization";
                local_108 = (byte)__s_00;
                uStack_107 = (undefined7)((ulong)__s_00 >> 8);
                if (__s_00 == (char *)0x0) {
                  sVar7 = 0;
                }
                else {
                  sVar7 = strlen(__s_00);
                  if ((long)sVar7 < 0) {
                    /* try { // try from 0057d8b0 to 0057d8cf has its CatchHandler @ 0057da04 */
                    /* WARNING: Subroutine does not return */
                    __assert_fail("false && \"len <= kMaxSize\"",
                                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                                  "operator()");
                  }
                }
                local_100 = (byte)sVar7;
                uStack_ff = (undefined2)(sVar7 >> 8);
                uStack_fd = (undefined1)(sVar7 >> 0x18);
                uStack_fc = (undefined1)(sVar7 >> 0x20);
                uStack_fb = (undefined1)(sVar7 >> 0x28);
                uStack_fa = (undefined2)(sVar7 >> 0x30);
                local_190 = &DAT_038bdc00;
                uStack_188 = 1;
                local_1c0 = pcVar12;
                if (pcVar12 == (char *)0x0) {
                  local_1b8 = 0;
                }
                else {
                  local_1b8 = strlen(pcVar12);
                  if ((long)local_1b8 < 0) {
                    /* try { // try from 0057d8fc to 0057d937 has its CatchHandler @ 0057da08 */
                    /* WARNING: Subroutine does not return */
                    __assert_fail("false && \"len <= kMaxSize\"",
                                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                                  "operator()");
                  }
                }
                FUN_002ecfd0(local_160,&local_108,&local_190,&local_1c0);
                    /* try { // try from 0057d938 to 0057d94f has its CatchHandler @ 0057da0c */
                FUN_002f3230(auStack_148,local_160);
                uVar10 = FUN_003d9360(&local_128,auStack_148);
                *param_2 = uVar10;
                if ((local_160[0] & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,local_150);
                }
                uVar8 = 0;
                goto LAB_0057d590;
              }
                    /* try { // try from 0057d7e0 to 0057d85b has its CatchHandler @ 0057da8c */
              FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                           ,200,2,"Missing or invalid expires_in in JSON.");
            }
          }
        }
        else {
                    /* try { // try from 0057d684 to 0057d6bf has its CatchHandler @ 0057da8c */
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                       ,0xb1,2,"Response should be a JSON object");
        }
      }
      else {
                    /* try { // try from 0057d4e0 to 0057d523 has its CatchHandler @ 0057da8c */
        uVar8 = FUN_002f1480();
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                     ,0xaa,2,"Could not parse JSON from %s: %s",__s,uVar8);
        if (4 < local_b8) {
          FUN_002f0430(local_b8,
                       "external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                       ,0xac);
        }
      }
    }
    else {
                    /* try { // try from 0057d3bc to 0057d3bf has its CatchHandler @ 0057da90 */
      __s = (char *)FUN_002ebd50(*(long *)(param_1 + 6) + 1);
      __s[*(long *)(param_1 + 6)] = '\0';
      memcpy(__s,*(void **)(param_1 + 8),*(size_t *)(param_1 + 6));
      iVar3 = *param_1;
      if (iVar3 == 200) goto LAB_0057d3e0;
LAB_0057d458:
      pcVar12 = "";
      if (__s != (char *)0x0) {
        pcVar12 = __s;
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                   ,0x9d,2,"Call to http server ended with error %d [%s].",iVar3,pcVar12);
    }
    uVar10 = *param_2;
  }
  if (3 < uVar10) {
    uVar2 = (uint)uVar10 & 3;
    if (1 < uVar2) {
      uVar10 = uVar10 & 0xfffffffffffffffc;
      uVar4 = *(undefined4 *)(uVar10 + 0x48);
                    /* try { // try from 0057d54c to 0057d597 has its CatchHandler @ 0057da90 */
      FUN_003d81b0(uVar10,uVar10,uVar10 + 0x20,*(undefined8 *)(uVar10 + 0x40),
                   "external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                   ,0xd8);
      plVar1 = (long *)(uVar10 + 0x40);
      do {
        lVar11 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 < 1) {
                    /* try { // try from 0057d9b4 to 0057d9db has its CatchHandler @ 0057da90 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar11 == 1) {
                    /* try { // try from 0057d974 to 0057d98f has its CatchHandler @ 0057da90 */
        FUN_003da320(uVar2,uVar10,uVar4,
                     "external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                     ,0xd8);
      }
    }
    *param_2 = 0;
  }
  uVar8 = 1;
LAB_0057d590:
  free(__s);
  FUN_0057e870(&uStack_78);
  FUN_003e9f80(&puStack_90,local_88);
  if ((local_a8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_98);
  }
  return uVar8;
}


