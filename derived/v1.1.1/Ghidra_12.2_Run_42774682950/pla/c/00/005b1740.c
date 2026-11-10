/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b1740; name: FUN_005b1740
 */


ulong FUN_005b1740(long param_1,long param_2,long param_3,char param_4,undefined1 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  byte local_78 [16];
  ulong local_68;
  undefined1 auStack_60 [32];
  
  cVar2 = *(char *)(param_1 + 0xd3);
  if (cVar2 == '\0' && param_4 == '\0') {
    if ((*(uint *)(param_1 + 200) <= (uint)((int)param_3 - (int)param_2)) &&
       (*(long *)(param_1 + 0x30) != 0)) {
      lVar10 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar12 = tpidr_el0;
      lVar12 = *(long *)(lVar12 + 0x30);
      uVar4 = *(uint *)(lVar12 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar12 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar10 + (ulong)uVar4 * 0x1d50 + 0x200);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *param_5 = 0;
      plVar6 = *(long **)(param_1 + 0x30);
      *(long **)(param_5 + 8) = plVar6;
      *(long *)(param_5 + 0x18) = param_2;
      *(ulong *)(param_5 + 0x10) = (ulong)*(uint *)(param_1 + 200);
      if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
        plVar1 = plVar6 + 1;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar12 = *plVar6;
        if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar12 + 8),plVar6,lVar10,lVar10 + 1);
        }
        if (lVar10 < 1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("prior > 0",
                        "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x7c,
                        "RefNonZero");
        }
      }
      puVar9 = *(undefined8 **)(param_1 + 0x20);
      *(undefined8 **)(param_1 + 0x20) = puVar9 + 1;
      UNRECOVERED_JUMPTABLE_00 = (code *)*puVar9;
      *(code **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE_00;
                    /* WARNING: Could not recover jumptable at 0x005b18c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2 + (ulong)*(uint *)(param_1 + 200),param_3)
      ;
      return uVar7;
    }
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *param_5 = 1;
    *(undefined4 *)(param_5 + 0x30) = 0;
    *(undefined1 **)(param_1 + 0x38) = param_5;
    *(undefined2 *)(param_1 + 0xd0) = 0;
    *(char *)(param_1 + 0xd2) = param_4;
LAB_005b18e8:
    lVar10 = *(long *)PTR_DAT_043738c0;
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar12 = tpidr_el0;
    lVar12 = *(long *)(lVar12 + 0x30);
    uVar4 = *(uint *)(lVar12 + 0x30);
    if (uVar4 == 0xffffffff) {
      uVar4 = nn::os::GetCurrentCoreNumber();
      *(uint *)(lVar12 + 0x30) = uVar4;
    }
    lVar10 = lVar10 + (ulong)uVar4 * 0x1d50;
    plVar6 = (long *)(lVar10 + 0x200);
    if (cVar2 != '\0') {
      plVar6 = (long *)(lVar10 + 0x208);
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *param_5 = 1;
    *(undefined4 *)(param_5 + 0x30) = 0;
    *(undefined1 **)(param_1 + 0x38) = param_5;
    *(undefined2 *)(param_1 + 0xd0) = 0;
    *(char *)(param_1 + 0xd2) = param_4;
    if (param_4 != '\x01') {
      if (param_4 != '\0') {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_005b18e8;
    }
  }
  uVar7 = (ulong)(uint)(*(int *)(param_1 + 200) - *(int *)(param_1 + 0xcc));
  uVar11 = param_3 - param_2;
  if (uVar11 < uVar7) {
    uVar7 = FUN_005b1d20(param_1,param_2,param_3);
    if (uVar7 == 0) {
      if (~*(uint *)(param_1 + 0xcc) < uVar11) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                     ,0x5be,2,"assertion failed: %s","given <= UINT32_MAX - p->strgot");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar7 = 0;
      *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) + (int)uVar11;
      puVar8 = (undefined1 *)0x5b19a0;
      goto LAB_005b1a50;
    }
LAB_005b1a18:
    uVar11 = *(ulong *)(param_1 + 0x10);
  }
  else {
    lVar10 = param_2 + uVar7;
    uVar7 = FUN_005b1d20(param_1,param_2,lVar10);
    if (uVar7 != 0) goto LAB_005b1a18;
    cVar2 = *(char *)(param_1 + 0xd2);
    if (cVar2 == '\x05') {
      if ((*(uint *)(param_1 + 0xd8) & 0xff) == 0) {
        uVar5 = 2;
LAB_005b1c7c:
        FUN_005b22d0(*(undefined8 *)(param_1 + 0x38),auStack_60 + 0x3c,uVar5);
LAB_005b1c84:
        puVar9 = *(undefined8 **)(param_1 + 0x20);
        *(undefined8 **)(param_1 + 0x20) = puVar9 + 1;
        UNRECOVERED_JUMPTABLE_00 = (code *)*puVar9;
        *(code **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE_00;
                    /* WARNING: Could not recover jumptable at 0x005b1cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*UNRECOVERED_JUMPTABLE_00)(param_1,lVar10,param_3);
        return uVar7;
      }
      FUN_002e6390(local_78,"trailing bits in base64 encoding: 0x%02x",0x28,auStack_60 + 0x20,1);
      uVar7 = (ulong)local_78 | 1;
      if ((local_78[0] & 1) != 0) {
        uVar7 = local_68;
      }
                    /* try { // try from 005b1bec to 005b1c0f has its CatchHandler @ 005b1ce0 */
      FUN_002f2ff0(auStack_60,uVar7);
      uVar7 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                           ,0x57d,auStack_60,0,0);
      if ((local_78[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_68);
      }
joined_r0x005b1c2c:
      if (uVar7 == 0) {
LAB_005b1c30:
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                     ,0x433,2,"assertion failed: %s","err != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar11 = *(ulong *)(param_1 + 0x10);
    }
    else {
      if (cVar2 == '\x04') {
        if ((*(uint *)(param_1 + 0xd8) & 0xffff) == 0) {
          uVar5 = 1;
          goto LAB_005b1c7c;
        }
        FUN_002e6390(local_78,"trailing bits in base64 encoding: 0x%04x",0x28,auStack_60 + 0x20,1);
        uVar7 = (ulong)local_78 | 1;
        if ((local_78[0] & 1) != 0) {
          uVar7 = local_68;
        }
                    /* try { // try from 005b1b18 to 005b1b3b has its CatchHandler @ 005b1cf0 */
        FUN_002f2ff0(auStack_60,uVar7);
        uVar7 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                             ,0x571,auStack_60,0,0);
        if ((local_78[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_68);
        }
        goto joined_r0x005b1c2c;
      }
      if (cVar2 != '\x03') goto LAB_005b1c84;
      FUN_002f2c60(auStack_60,"illegal base64 encoding");
      uVar7 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                           ,0x56a,auStack_60,0,0);
      if (uVar7 == 0) goto LAB_005b1c30;
      uVar11 = *(ulong *)(param_1 + 0x10);
    }
    if (uVar11 == 0) {
      uVar11 = uVar7;
      if (4 < uVar7) {
        uVar11 = FUN_002f03c0(uVar7,
                              "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                              ,0x435);
      }
      *(ulong *)(param_1 + 0x10) = uVar11;
    }
    *(undefined1 **)(param_1 + 0x18) = &LAB_005b1110;
  }
  if (uVar11 == 0) {
    uVar11 = uVar7;
    if (4 < uVar7) {
      uVar11 = FUN_002f03c0(uVar7,
                            "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                            ,0x435);
    }
    *(ulong *)(param_1 + 0x10) = uVar11;
  }
  puVar8 = &LAB_005b1110;
LAB_005b1a50:
  *(undefined1 **)(param_1 + 0x18) = puVar8;
  return uVar7;
}


