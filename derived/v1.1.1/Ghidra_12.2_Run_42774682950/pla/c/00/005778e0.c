/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005778e0; name: FUN_005778e0
 */


long FUN_005778e0(void)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  char *__s;
  size_t __n;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  void *pvVar20;
  undefined *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ulong local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  long local_148;
  long local_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  char *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 *local_f8;
  char *local_f0;
  size_t local_e8;
  void *pvStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [12];
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  local_148 = 0;
                    /* try { // try from 00577900 to 0057792f has its CatchHandler @ 00578410 */
  FUN_002f2c60(&local_f0,"Failed to create Google credentials");
  uVar11 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                        ,0x118,&local_f0,0,0);
  puVar7 = PTR___tls_init_043737c8;
  puVar6 = PTR_DAT_043737c0;
  local_15c = 0;
  local_168 = 1;
  local_160 = 0xffffffff;
  local_158 = 0;
  uStack_180 = 0;
  local_188 = 0;
  local_190 = PTR_DAT_043737c0 + 0x10;
  uStack_170 = 0;
  local_178 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 00577974 to 00577977 has its CatchHandler @ 0057834c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar5 = tpidr_el0;
  local_150 = *(undefined8 *)(lVar5 + 0x30);
  if ((*PTR_DAT_043737d0 & 1) != 0) {
                    /* try { // try from 00578160 to 00578163 has its CatchHandler @ 0057834c */
    FUN_002efbd4();
  }
  if (puVar7 != (undefined *)0x0) {
                    /* try { // try from 005779a8 to 005779ab has its CatchHandler @ 0057834c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar5 + 0x30) = &local_190;
  if (PTR_DAT_04373fe8[0x10] != '\0') {
                    /* try { // try from 00578168 to 00578183 has its CatchHandler @ 00578348 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                 ,0x11c,1,"grpc_google_default_credentials_create(void)");
  }
                    /* try { // try from 005779d4 to 005779e7 has its CatchHandler @ 00578348 */
  FUN_002ef9f0(&DAT_0439ed8c,&LAB_005784a0);
                    /* try { // try from 005779e8 to 005779f3 has its CatchHandler @ 00578424 */
  __s = (char *)FUN_002eeb60("GOOGLE_APPLICATION_CREDENTIALS");
  if (__s == (char *)0x0) {
LAB_00577ab8:
    if (DAT_0439ed98 == (code *)0x0) {
      FUN_0057fa70(&local_f0);
    }
    else {
                    /* try { // try from 00577ac4 to 00577ad7 has its CatchHandler @ 00578344 */
      (*DAT_0439ed98)(&local_f0);
    }
                    /* try { // try from 00577ad8 to 00577ae3 has its CatchHandler @ 00578324 */
    lVar12 = FUN_005784b0(&local_f0,&local_148);
    if (((ulong)local_f0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,pvStack_e0);
    }
    if (lVar12 == 0) goto LAB_00577dfc;
                    /* try { // try from 00577b04 to 00577bd7 has its CatchHandler @ 00578424 */
    uVar11 = FUN_002f13f0(uVar11,lVar12);
    FUN_002ef750(&DAT_0439eda8);
    if (DAT_0439ed90 == 0) {
      uVar10 = (*(code *)PTR_FUN_04189a80)();
      DAT_0439ed88 = uVar10 & 1;
      DAT_0439ed90 = DAT_0439ed88;
      if ((uVar10 & 1) == 0) {
        local_88[0] = 0;
        uStack_78 = 0;
        local_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        FUN_002fdfb0();
        uVar13 = FUN_002ebd80();
        FUN_002fdf10(uVar13,&DAT_0439eda0);
        local_a0 = FUN_003d6b40(uVar13);
        uStack_d0 = 0;
        pvStack_e0 = (void *)0x0;
        local_e8 = 0;
        local_90 = 0;
        local_a8 = 0;
        uStack_c0 = 0;
        local_c8 = 0;
        uStack_b0 = 0;
        local_b8 = 0;
        local_d8 = &DAT_0389ffa9;
        local_f0 = "metadata.google.internal.";
        FUN_00578e10(&local_f8);
        uVar13 = FUN_00306400("google_default_credentials");
        if (puVar7 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
                    /* try { // try from 00577bec to 00577c67 has its CatchHandler @ 00578424 */
        lVar12 = FUN_002f00fc(*(undefined8 *)(lVar5 + 0x30));
        puVar14 = (undefined8 *)FUN_002ebd50(0x58);
        puVar14[5] = 0;
        puVar8 = PTR_LAB_043738c8;
        *puVar14 = &LAB_00578d10;
        puVar14[1] = local_a0;
        puVar14[3] = puVar8;
        puVar14[4] = puVar14;
        *(undefined2 *)(puVar14 + 6) = 0;
        puVar14[9] = 0;
        *(undefined4 *)(puVar14 + 10) = 0;
        puVar14[7] = 
        "external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
        ;
        *(undefined4 *)(puVar14 + 8) = 0xba;
        FUN_00578e40(&local_f8,local_a0,uVar13,&local_f0,lVar12 + 1000,puVar14 + 2,local_88);
        FUN_00306bf0(uVar13);
        if (puVar7 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
                    /* try { // try from 00577c7c to 00577c8b has its CatchHandler @ 00578424 */
        FUN_002eff00(*(undefined8 *)(lVar5 + 0x30));
        FUN_002ef750(DAT_0439eda0);
        while ((int)local_90 == 0) {
          local_140 = 0;
                    /* try { // try from 00577cb8 to 00577ce3 has its CatchHandler @ 0057840c */
          uVar13 = FUN_003d6b50(local_a0);
          lVar12 = FUN_002fdf70(uVar13,&local_140,0x7fffffffffffffff);
          if (lVar12 != 0) {
            uVar15 = FUN_002f1e00("pollset_work",lVar12,
                                  "external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                                  ,0xc6);
            if ((uVar15 & 1) == 0) {
              local_90 = DAT_0388a7a8;
              break;
            }
          }
        }
                    /* try { // try from 00577cf8 to 00577d4f has its CatchHandler @ 00578424 */
        FUN_002ef790(DAT_0439eda0);
        FUN_00578e30(&local_f8);
        local_130 = FUN_003d6b50(local_a0);
        local_120 = 0;
        local_138 = &LAB_00578df0;
        local_108 = 0;
        local_100 = 0;
        local_118 = 
        "external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
        ;
        local_110 = 0xcf;
        uStack_128 = 0;
        uVar13 = FUN_003d6b50(local_a0);
        FUN_002fdf30(uVar13,&local_140);
        DAT_0439eda0 = 0;
        if (puVar7 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
                    /* try { // try from 00577d64 to 00577d8f has its CatchHandler @ 00578424 */
        FUN_002eff00(*(undefined8 *)(lVar5 + 0x30));
        pvVar20 = (void *)FUN_003d6b50(local_a0);
        free(pvVar20);
        FUN_00579a70(local_88);
        DAT_0439ed90 = local_90._4_4_;
      }
    }
    FUN_002ef790(&DAT_0439eda8);
    if (DAT_0439ed90 == 0) goto LAB_00577dfc;
                    /* try { // try from 00577d98 to 00577d9f has its CatchHandler @ 00578304 */
    local_f0 = (char *)FUN_0057e320(0);
                    /* try { // try from 00577da4 to 00577daf has its CatchHandler @ 005782f4 */
    FUN_00578bb8(&local_148,&local_f0);
    FUN_003f4f54(&local_f0);
    if (local_148 == 0) {
                    /* try { // try from 00577dc0 to 00577df7 has its CatchHandler @ 00578308 */
      FUN_002f2c60(&local_f0,"Failed to get credentials from network");
      uVar13 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                            ,0x144,&local_f0,0,0);
      uVar11 = FUN_002f13f0(uVar11,uVar13);
      goto LAB_00577dfc;
    }
  }
  else {
    local_e8 = 0;
    pvStack_e0 = (void *)0x0;
    local_f0 = (char *)0x0;
    __n = strlen(__s);
    if (0xffffffffffffffef < __n) {
                    /* try { // try from 00578280 to 00578287 has its CatchHandler @ 005782d8 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      local_f0 = (char *)CONCAT71(local_f0._1_7_,(char)((int)__n << 1));
      pvVar20 = (void *)((ulong)&local_f0 | 1);
      if (__n != 0) goto LAB_00577a60;
    }
    else {
      uVar15 = __n + 0x10 & 0xfffffffffffffff0;
      pvVar20 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar15);
      local_f0 = (char *)(uVar15 | 1);
      local_e8 = __n;
      pvStack_e0 = pvVar20;
LAB_00577a60:
      memcpy(pvVar20,__s,__n);
    }
    *(undefined1 *)((long)pvVar20 + __n) = 0;
                    /* try { // try from 00577a74 to 00577a7f has its CatchHandler @ 0057830c */
    lVar12 = FUN_005784b0(&local_f0,&local_148);
    if (((ulong)local_f0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,pvStack_e0);
    }
                    /* try { // try from 00577a9c to 00577ab3 has its CatchHandler @ 00578424 */
    free(__s);
    if (lVar12 != 0) {
      uVar11 = FUN_002f13f0(uVar11,lVar12);
      goto LAB_00577ab8;
    }
LAB_00577dfc:
    if (local_148 == 0) {
                    /* try { // try from 00577e90 to 00577eb7 has its CatchHandler @ 00578424 */
      uVar13 = FUN_002f1480(uVar11);
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                   ,0x15d,2,"Could not create google default credentials: %s",uVar13);
      lVar12 = 0;
      goto joined_r0x00578200;
    }
  }
                    /* try { // try from 00577e04 to 00577e17 has its CatchHandler @ 00578320 */
  puVar14 = (undefined8 *)FUN_005b4810(0,0,0,0);
  if (puVar14 == (undefined8 *)0x0) {
                    /* try { // try from 00578208 to 0057822f has its CatchHandler @ 00578320 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                 ,0x14d,2,"assertion failed: %s","ssl_creds != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 00577e20 to 00577e23 has its CatchHandler @ 0057831c */
  uVar13 = FUN_0058b1c0();
                    /* try { // try from 00577e28 to 00577e37 has its CatchHandler @ 00578404 */
  puVar16 = (undefined8 *)FUN_0058bb90();
  FUN_0058bc80(uVar13);
  if (puVar16 == (undefined8 *)0x0) {
    local_a0._0_8_ = (undefined8 *)0x0;
  }
  else {
    plVar1 = puVar16 + 2;
    do {
      lVar12 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar18 = puVar16[1];
    if ((lVar18 != 0) && (*(char *)(lVar18 + 0x10) != '\0')) {
                    /* try { // try from 00577e6c to 00577e87 has its CatchHandler @ 005782e0 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar18 + 8),puVar16 + 1,lVar12,lVar12 + 1)
      ;
    }
    local_a0._0_8_ = puVar16;
  }
  plVar1 = puVar14 + 1;
  plVar2 = puVar14 + 2;
  do {
    lVar12 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar12 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar18 = *plVar1;
  if ((lVar18 != 0) && (*(char *)(lVar18 + 0x10) != '\0')) {
                    /* try { // try from 00577efc to 00577f1b has its CatchHandler @ 005782e4 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar18 + 8),plVar1,lVar12,lVar12 + 1);
  }
  local_f8 = puVar14;
  plVar17 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  uVar13 = local_a0._0_8_;
  puVar9 = local_f8;
  if (plVar17 != (long *)0x0) {
    local_a0._0_8_ = (undefined8 *)0x0;
    local_f8 = (undefined8 *)0x0;
    plVar17[2] = 1;
    plVar17[3] = (long)"GoogleDefault";
    puVar8 = PTR_DAT_04374df0;
    plVar17[4] = uVar13;
    plVar17[5] = (long)puVar9;
    *plVar17 = (long)(puVar8 + 0x10);
    plVar17[1] = 0;
    local_f0 = (char *)0x0;
    local_140 = 0;
    FUN_004fb2f8(&local_140);
    FUN_004fb2f8(&local_f0);
  }
  FUN_004fb2f8(&local_f8);
  FUN_004fb2f8(local_a0);
  lVar12 = *plVar1;
  do {
    lVar18 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar18 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
                    /* try { // try from 00577fb8 to 0057805b has its CatchHandler @ 00578350 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                 "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar12 + 8),plVar1,lVar18);
  }
  if (lVar18 < 1) {
                    /* try { // try from 00578230 to 0057827f has its CatchHandler @ 00578350 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                 "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar18 == 1) {
    (**(code **)*puVar14)(puVar14);
    FUN_002e2ea0(PTR_LAB_04373088,puVar14);
  }
  if (puVar16 != (undefined8 *)0x0) {
    lVar12 = puVar16[1];
    plVar1 = puVar16 + 2;
    do {
      lVar18 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar12 + 8),puVar16 + 1,lVar18);
    }
    if (lVar18 < 1) {
                    /* try { // try from 00578288 to 005782af has its CatchHandler @ 00578350 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar18 == 1) {
      (**(code **)*puVar16)(puVar16);
      FUN_002e2ea0(PTR_LAB_04373088,puVar16);
    }
  }
  lVar12 = FUN_004fb140(plVar17,local_148,0);
  if (lVar12 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                 ,0x15b,2,"assertion failed: %s","result != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[1];
    plVar1 = plVar17 + 2;
    do {
      lVar19 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((lVar18 != 0) && (*(char *)(lVar18 + 0x10) != '\0')) {
                    /* try { // try from 00578094 to 005780b3 has its CatchHandler @ 005782dc */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar18 + 8),plVar17 + 1,lVar19);
    }
    if (lVar19 < 1) {
                    /* try { // try from 005782b0 to 005782d7 has its CatchHandler @ 005782dc */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar19 == 1) {
      (**(code **)*plVar17)(plVar17);
      FUN_002e2ea0(PTR_LAB_04373088,plVar17);
      goto joined_r0x00578200;
    }
  }
joined_r0x00578200:
  if (4 < uVar11) {
                    /* try { // try from 005780cc to 005780df has its CatchHandler @ 00578424 */
    FUN_002f0430(uVar11,
                 "external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                 ,0x160);
  }
  local_190 = puVar6 + 0x10;
  local_168 = local_168 | 1;
                    /* try { // try from 005780f4 to 00578107 has its CatchHandler @ 00578408 */
  FUN_002eff00(&local_190);
  uVar13 = local_150;
  if (puVar7 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar5 + 0x30) = uVar13;
  if ((((byte)local_168 >> 2 & 1) == 0) && ((*PTR_DAT_043737d0 & 1) != 0)) {
                    /* try { // try from 00578188 to 0057818b has its CatchHandler @ 00578408 */
    FUN_002efca0();
  }
  FUN_003f4f54(&local_148);
  return lVar12;
}


