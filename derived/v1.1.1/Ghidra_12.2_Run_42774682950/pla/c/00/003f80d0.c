/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f80d0; name: FUN_003f80d0
 */


void FUN_003f80d0(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  char *local_100;
  undefined8 uStack_f8;
  long local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  char *local_98;
  undefined8 uStack_90;
  byte local_68 [16];
  ulong local_58;
  
  lVar8 = *(long *)(param_1 + 0x18);
  puVar12 = *(undefined8 **)(lVar8 + 0x10);
  if (param_2 != 0) {
    local_98 = "Invalid host ";
    uStack_90 = 0xd;
    uStack_c8 = puVar12[4] & 0xff;
    if (puVar12[3] != 0) {
      uStack_c8 = puVar12[4];
    }
    if ((long)uStack_c8 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    local_d0 = puVar12[5];
    if (puVar12[3] == 0) {
      local_d0 = (long)puVar12 + 0x21;
    }
    local_100 = " set in :authority metadata.";
    uStack_f8 = 0x1c;
    FUN_002ecfd0(local_68,&local_98,&local_d0,&local_100);
    uVar5 = (ulong)local_68 | 1;
    if ((local_68[0] & 1) != 0) {
      uVar5 = local_58;
    }
                    /* try { // try from 003f8170 to 003f81af has its CatchHandler @ 003f875c */
    FUN_002f2ff0(&local_98,uVar5);
    uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
                         ,0x158,&local_98,0,0);
    uVar4 = FUN_002f0d20(uVar4,3,0x10);
    FUN_003d5fa0(param_1,uVar4,puVar12[1]);
    if ((local_68[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_58);
    }
    goto LAB_003f85e0;
  }
  plVar13 = *(long **)(lVar8 + 8);
  plVar6 = (long *)**(undefined8 **)(*(long *)(param_1 + 8) + 0x90);
  pcVar9 = *(char **)(*plVar13 + 0x28);
  if (plVar6 == (long *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *plVar6 != 0;
  }
  if ((pcVar9 == (char *)0x0) && (!bVar2)) {
    FUN_003d7c00(lVar8,param_1);
    goto LAB_003f85e0;
  }
  if (pcVar9 == (char *)0x0 || !bVar2) {
    if (bVar2) {
      pcVar9 = (char *)*plVar6;
      plVar6 = (long *)(pcVar9 + 0x10);
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    else {
      plVar6 = (long *)(pcVar9 + 0x10);
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar11 = *(long *)(pcVar9 + 8);
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar11 + 8),pcVar9 + 8,lVar7,lVar7 + 1);
    }
    puVar10 = (undefined8 *)puVar12[2];
    if (puVar10 != (undefined8 *)0x0) {
      lVar7 = puVar10[1];
      plVar6 = puVar10 + 2;
      do {
        lVar11 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      local_98 = pcVar9;
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 003f8384 to 003f83a3 has its CatchHandler @ 003f8744 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),puVar10 + 1,lVar11);
      }
      if (lVar11 < 1) {
                    /* try { // try from 003f86d4 to 003f86fb has its CatchHandler @ 003f8744 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar11 == 1) {
        (**(code **)*puVar10)(puVar10);
        FUN_002e2ea0(PTR_LAB_04373088,puVar10);
      }
    }
    puVar12[2] = pcVar9;
    local_98 = (char *)0x0;
    FUN_003f4f54(&local_98);
LAB_003f83c4:
    FUN_003f52a0(&local_100,plVar13[1],"security_level");
    lVar7 = FUN_003f5320(&local_100);
    if (lVar7 == 0) {
      FUN_002f2c60(&local_98,
                   "Established channel does not have an auth property representing a security level."
                  );
      uVar4 = 0x11c;
    }
    else {
      uVar3 = (**(code **)(*(long *)puVar12[2] + 0x20))();
      uVar4 = FUN_003f8ae0(*(undefined8 *)(lVar7 + 8));
      uVar5 = FUN_003f8b30(uVar4,uVar3);
      if ((uVar5 & 1) != 0) {
        FUN_003f7380(*(undefined8 *)(*plVar13 + 0x18),puVar12 + 3,puVar12 + 7,plVar13[1],
                     puVar12 + 0x1e);
        if (puVar12[0xb] == 0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
                       ,0x136,2,"assertion failed: %s","calld->pollent != nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        plVar6 = (long *)*puVar12;
        if (PTR_DAT_04373fd8[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                       "%s %p:%p REF %s",plVar6[0xb],plVar6,plVar6[4],"get_request_metadata");
        }
        plVar13 = plVar6 + 1;
        do {
          lVar7 = *plVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar2) {
            *plVar13 = lVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lVar11 = *plVar6;
        if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                       "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar11 + 8),plVar6,
                       "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,
                       lVar7,lVar7 + 1,"get_request_metadata");
        }
        if (lVar7 < 1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("prior > 0",
                        "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x89,
                        "RefNonZero");
        }
        puVar12[0x25] = 0;
        puVar12[0x23] = FUN_003f87e0;
        puVar12[0x24] = param_1;
        *(undefined2 *)(puVar12 + 0x26) = 0;
        puVar12[0x29] = 0;
        *(undefined4 *)(puVar12 + 0x2a) = 0;
        puVar12[0x27] =
             "external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc";
        *(undefined4 *)(puVar12 + 0x28) = 0x139;
        local_98 = (char *)0x0;
        uStack_c8 = puVar12[0x1f];
        local_d0 = puVar12[0x1e];
        uStack_b8 = puVar12[0x21];
        uStack_c0 = puVar12[0x20];
        uVar5 = (**(code **)(*(long *)puVar12[2] + 0x10))
                          ((long *)puVar12[2],puVar12[0xb],&local_d0,puVar12 + 0xc,puVar12 + 0x22,
                           &local_98);
        if ((uVar5 & 1) == 0) {
          puVar12[0x35] = &LAB_003f8a00;
          puVar12[0x36] = lVar8;
          puVar12[0x37] = 0;
          *(undefined2 *)(puVar12 + 0x38) = 0;
          puVar12[0x3b] = 0;
          *(undefined4 *)(puVar12 + 0x3c) = 0;
          puVar12[0x39] =
               "external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
          ;
          *(undefined4 *)(puVar12 + 0x3a) = 0x145;
          FUN_003d727c(puVar12[1],puVar12 + 0x34);
        }
        else {
          FUN_003f87e0(param_1,local_98);
          if ((char *)0x4 < local_98) {
            FUN_002f0430(local_98,
                         "external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
                         ,0x140);
          }
        }
        goto LAB_003f85e0;
      }
      FUN_002f2c60(&local_98,
                   "Established channel does not have a sufficient security level to transfer call credential."
                  );
      uVar4 = 299;
    }
  }
  else {
    pcVar9 = (char *)FUN_004facd0(pcVar9,*plVar6,0);
    puVar10 = (undefined8 *)puVar12[2];
    if (puVar10 != (undefined8 *)0x0) {
      lVar7 = puVar10[1];
      plVar6 = puVar10 + 2;
      do {
        lVar11 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      local_98 = pcVar9;
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 003f8274 to 003f8293 has its CatchHandler @ 003f8748 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),puVar10 + 1,lVar11);
      }
      if (lVar11 < 1) {
                    /* try { // try from 003f86ac to 003f86d3 has its CatchHandler @ 003f8748 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar11 == 1) {
        (**(code **)*puVar10)(puVar10);
        FUN_002e2ea0(PTR_LAB_04373088,puVar10);
      }
    }
    puVar12[2] = pcVar9;
    local_98 = (char *)0x0;
    FUN_003f4f54(&local_98);
    if (puVar12[2] != 0) goto LAB_003f83c4;
    FUN_002f2c60(&local_98,"Incompatible credentials set on channel and call.");
    uVar4 = 0x107;
  }
  uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
                       ,uVar4,&local_98,0,0);
  uVar4 = FUN_002f0d20(uVar4,3,0x10);
  FUN_003d5fa0(param_1,uVar4,puVar12[1]);
LAB_003f85e0:
  FUN_003c9ce0(*puVar12,"check_call_host");
  return;
}


