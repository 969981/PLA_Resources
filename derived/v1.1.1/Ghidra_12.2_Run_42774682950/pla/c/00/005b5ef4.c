/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b5ef4; name: FUN_005b5ef4
 */


undefined8 FUN_005b5ef4(undefined8 param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  char *pcVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *local_f8;
  undefined8 *local_f0;
  long local_e8;
  long *local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  long *local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  
  plVar8 = (long *)FUN_004fcc40();
  if (plVar8 == (long *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/secure/secure_channel_create.cc"
                 ,0x42,2,"Can\'t create subchannel: channel credentials missing for secure channel."
                );
    return 0;
  }
  lVar9 = FUN_003f6bc0(param_1);
  if (lVar9 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/secure/secure_channel_create.cc"
                 ,0x49,2,
                 "Can\'t create subchannel: security connector already present in channel args.");
    return 0;
  }
  FUN_002e4780(param_1,"grpc.server_uri");
  lVar9 = FUN_002e4de0();
  if (lVar9 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/secure/secure_channel_create.cc"
                 ,0x52,2,"assertion failed: %s","server_uri_str != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar10 = FUN_003eb610(lVar9,1);
  if (lVar10 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/secure/secure_channel_create.cc"
                 ,0x55,2,"assertion failed: %s","server_uri != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar11 = FUN_005b66e0(param_1);
  if (lVar11 != 0) {
                    /* try { // try from 005b5fb0 to 005b5fb7 has its CatchHandler @ 005b6524 */
    uVar12 = FUN_00538bb4(param_1);
                    /* try { // try from 005b5fbc to 005b5fc3 has its CatchHandler @ 005b65d0 */
    lVar13 = FUN_003eb610(uVar12,0);
    if (lVar13 == 0) {
                    /* try { // try from 005b6440 to 005b646f has its CatchHandler @ 005b65d0 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/secure/secure_channel_create.cc"
                   ,0x5f,2,"assertion failed: %s","target_uri != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pcVar16 = *(char **)(lVar13 + 0x10);
    if (*pcVar16 == '\0') {
      plVar17 = (long *)0x0;
    }
    else {
      if (*pcVar16 == '/') {
        pcVar16 = pcVar16 + 1;
      }
                    /* try { // try from 005b5fe0 to 005b5fe7 has its CatchHandler @ 005b6504 */
      FUN_002f2c60(&local_a0,pcVar16);
      if (local_a0 == (long *)0x0) {
                    /* try { // try from 005b6034 to 005b605f has its CatchHandler @ 005b6508 */
        uVar14 = FUN_003da780((long)&uStack_98 + 1,(undefined1)uStack_98,
                              *(undefined4 *)PTR_DAT_043740a8);
      }
      else if ((int)local_a0[1] == 1) {
        uVar14 = (ulong)*(uint *)(local_a0 + 0xd);
      }
      else if ((int)local_a0[1] == 0) {
        uVar14 = (ulong)*(uint *)(PTR_DAT_043740a0 + (ulong)*(uint *)(local_a0 + 5) * 4);
      }
      else {
        uVar14 = FUN_003da780(lStack_90,CONCAT44(uStack_94,uStack_98),
                              *(undefined4 *)PTR_DAT_043740a8);
      }
      uVar20 = 0;
      do {
        uVar18 = *(ulong *)(lVar11 + 0x20);
        uVar1 = (uVar14 & 0xffffffff) + uVar20;
        uVar4 = 0;
        if (uVar18 != 0) {
          uVar4 = uVar1 / uVar18;
        }
        lVar21 = uVar1 - uVar4 * uVar18;
        if (*(char *)(*(long *)(lVar11 + 0x30) + lVar21 * 0x30 + 0x28) == '\0') break;
        plVar17 = (long *)(*(long *)(lVar11 + 0x30) + lVar21 * 0x30);
        lStack_78 = CONCAT44(uStack_94,uStack_98);
        lStack_d8 = plVar17[1];
        local_e0 = (long *)*plVar17;
        lStack_c8 = plVar17[3];
        lStack_d0 = plVar17[2];
        local_80 = local_a0;
        lStack_68 = lStack_88;
        local_70 = lStack_90;
                    /* try { // try from 005b60a4 to 005b60af has its CatchHandler @ 005b669c */
        iVar7 = FUN_002f3a50(&local_e0,&local_80);
        if (iVar7 != 0) {
          plVar17 = (long *)FUN_002ec2d0(*(undefined8 *)
                                          (*(long *)(lVar11 + 0x30) + lVar21 * 0x30 + 0x20));
          plVar5 = local_a0;
          goto joined_r0x005b615c;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 <= *(ulong *)(lVar11 + 0x28));
      plVar17 = (long *)0x0;
      plVar5 = local_a0;
joined_r0x005b615c:
      local_a0 = plVar5;
      if ((plVar5 != (long *)0x0) && (plVar15 = (long *)*plVar5, plVar15 != (long *)0x0)) {
        plVar19 = plVar15 + 1;
        lVar11 = *plVar15;
        do {
          lVar21 = *plVar19;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *plVar19 = lVar21 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
                    /* try { // try from 005b6100 to 005b6153 has its CatchHandler @ 005b6508 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar11 + 8),plVar15,lVar21);
        }
        if (lVar21 < 1) {
                    /* try { // try from 005b64c0 to 005b64e7 has its CatchHandler @ 005b6508 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar21 == 1) {
          (*(code *)plVar5[3])(plVar5[4]);
        }
      }
    }
                    /* try { // try from 005b6160 to 005b6167 has its CatchHandler @ 005b65d0 */
    FUN_003ec320(lVar13);
    if (plVar17 != (long *)0x0) goto LAB_005b617c;
  }
                    /* try { // try from 005b616c to 005b6177 has its CatchHandler @ 005b650c */
  FUN_0050cac8(&local_e0,lVar9);
  plVar17 = local_e0;
LAB_005b617c:
                    /* try { // try from 005b617c to 005b618b has its CatchHandler @ 005b65cc */
  lVar9 = FUN_002e4780(param_1,"grpc.default_authority");
  if (lVar9 == 0) {
                    /* try { // try from 005b6198 to 005b61ab has its CatchHandler @ 005b64f0 */
    FUN_002e5130(&local_80,"grpc.default_authority",plVar17);
    lStack_d8 = lStack_78;
    local_e0 = local_80;
    lStack_c8 = lStack_68;
    lStack_d0 = local_70;
  }
                    /* try { // try from 005b61bc to 005b61d3 has its CatchHandler @ 005b6690 */
  lVar9 = FUN_002e4250(param_1,&local_e0,lVar9 == 0);
  FUN_003ec320(lVar10);
  local_e8 = 0;
  local_f8 = (undefined8 *)0x0;
                    /* try { // try from 005b61e4 to 005b61ff has its CatchHandler @ 005b6540 */
  (**(code **)(*plVar8 + 0x10))(&local_f0,plVar8,&local_f8,plVar17,lVar9,&local_e8);
  puVar6 = local_f8;
  if (local_f8 != (undefined8 *)0x0) {
    lVar10 = local_f8[1];
    plVar8 = local_f8 + 2;
    do {
      lVar11 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
                    /* try { // try from 005b6234 to 005b6253 has its CatchHandler @ 005b64ec */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar10 + 8),local_f8 + 1,lVar11);
    }
    if (lVar11 < 1) {
                    /* try { // try from 005b6470 to 005b6497 has its CatchHandler @ 005b64ec */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar11 == 1) {
      (**(code **)*puVar6)(puVar6);
      FUN_002e2ea0(PTR_LAB_04373088,puVar6);
    }
  }
  if (local_f0 == (undefined8 *)0x0) {
                    /* try { // try from 005b6308 to 005b632f has its CatchHandler @ 005b6530 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/secure/secure_channel_create.cc"
                 ,0x84,2,"Failed to create secure subchannel for secure name \'%s\'",plVar17);
    FUN_002e4a10(lVar9);
    uVar12 = 0;
    puVar6 = local_f0;
  }
  else {
                    /* try { // try from 005b626c to 005b6273 has its CatchHandler @ 005b6514 */
    FUN_003f6ba0(&local_80);
    lVar10 = lVar9;
    if (local_e8 != 0) {
      lVar10 = local_e8;
    }
                    /* try { // try from 005b6280 to 005b628b has its CatchHandler @ 005b65d4 */
    uVar12 = FUN_002e4250(lVar10,&local_80,1);
    local_a0 = (long *)0x398f68b;
    uStack_98 = 0x90;
    if (local_f0 != (undefined8 *)0x0) {
                    /* try { // try from 005b62ac to 005b62bb has its CatchHandler @ 005b64f4 */
      FUN_003f3a08(local_f0,&local_a0,"lb_channel_create");
    }
    local_f0 = (undefined8 *)0x0;
    if (local_e8 != 0) {
                    /* try { // try from 005b62c8 to 005b62d3 has its CatchHandler @ 005b65d4 */
      FUN_002e4a10();
    }
    FUN_002e4a10(lVar9);
    puVar6 = local_f0;
  }
  local_f0 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    lVar9 = puVar6[1];
    plVar8 = puVar6 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
                    /* try { // try from 005b6368 to 005b6387 has its CatchHandler @ 005b64e8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar9 + 8),puVar6 + 1,lVar10);
    }
    if (lVar10 < 1) {
                    /* try { // try from 005b6498 to 005b64bf has its CatchHandler @ 005b64e8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar10 == 1) {
      (**(code **)*puVar6)(puVar6);
      FUN_002e2ea0(PTR_LAB_04373088,puVar6);
    }
  }
  if (plVar17 != (long *)0x0) {
                    /* try { // try from 005b639c to 005b63a3 has its CatchHandler @ 005b6510 */
    free(plVar17);
  }
  return uVar12;
}


