/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005aec70; name: FUN_005aec70
 */


void FUN_005aec70(long param_1,ulong param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  void *__ptr;
  long lVar6;
  ulong uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  plVar5 = (long *)FUN_003d9f90(param_2,&LAB_005af160);
  if (plVar5 == (long *)0x0) {
    uVar7 = param_2 & 0xfffffffffffffffc;
    iVar4 = FUN_005a7450((undefined8 *)(uVar7 + 0x20),&local_28);
    if (iVar4 == 0) {
      uStack_48 = *(undefined8 *)(uVar7 + 0x28);
      local_50 = *(undefined8 *)(uVar7 + 0x20);
      uStack_38 = *(undefined8 *)(uVar7 + 0x38);
      uStack_40 = *(undefined8 *)(uVar7 + 0x30);
      __ptr = (void *)FUN_002f2680(&local_50);
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                   ,0x1b4,2,"Ignoring bad timeout value \'%s\'",__ptr);
      free(__ptr);
      local_28 = 0x7fffffffffffffff;
    }
    if ((param_2 & 1) != 0) {
      plVar5 = (long *)FUN_002ebd50(8);
      *plVar5 = local_28;
      FUN_003da0b0(param_2,&LAB_005af160,plVar5);
    }
  }
  else {
    local_28 = *plVar5;
  }
  if (local_28 != 0x7fffffffffffffff) {
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar6 = tpidr_el0;
    lVar6 = FUN_002f00fc(*(undefined8 *)(lVar6 + 0x30));
    FUN_005b39c0(param_1 + 0x228,local_28 + lVar6);
  }
  if (1 < ((uint)param_2 & 3)) {
    uVar7 = param_2 & 0xfffffffffffffffc;
    uVar1 = *(undefined4 *)(uVar7 + 0x48);
    plVar5 = (long *)(uVar7 + 0x40);
    FUN_003d81b0(uVar7,uVar7,uVar7 + 0x20,*(undefined8 *)(uVar7 + 0x40),
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc",
                 0x1c4);
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      FUN_003da320((uint)param_2 & 3,uVar7,uVar1,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                   ,0x1c4);
    }
  }
  return;
}


