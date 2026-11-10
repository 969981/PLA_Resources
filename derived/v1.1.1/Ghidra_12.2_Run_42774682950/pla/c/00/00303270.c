/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00303270; name: FUN_00303270
 */


void FUN_00303270(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  puVar4 = PTR_DAT_043739c0;
  if (PTR_DAT_043739c0[0x10] == '\0') {
    uVar6 = FUN_002f93f0();
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x227,1,
                 "TCP:%p notify_on_write",param_1);
    uVar6 = FUN_002f93f0();
  }
  if ((uVar6 & 1) != 0) goto LAB_00303314;
  do {
    uVar6 = DAT_043998d8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x43998d8,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_043998d8 = DAT_043998d8 + 2;
    }
  } while (cVar2 != '\0');
  if (puVar4[0x10] == '\0') {
    if (uVar6 == 0) goto LAB_00303384;
LAB_003032c8:
    do {
    } while (DAT_043998e0 == 0);
    lVar7 = DAT_043998e0;
    if (puVar4[0x10] != '\0') goto LAB_00303464;
LAB_003032d8:
    FUN_002f9740(lVar7 + 0x50,*(undefined8 *)(param_1 + 8));
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x1ff,1,
                 "BACKUP_POLLER: cover cnt %d->%d",uVar6 & 0xffffffff,(int)uVar6 + 2);
    if (uVar6 != 0) goto LAB_003032c8;
LAB_00303384:
    lVar7 = *(long *)PTR_DAT_043738c0;
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar8 = tpidr_el0;
    lVar8 = *(long *)(lVar8 + 0x30);
    uVar5 = *(uint *)(lVar8 + 0x30);
    if (uVar5 == 0xffffffff) {
      uVar5 = nn::os::GetCurrentCoreNumber();
      *(uint *)(lVar8 + 0x30) = uVar5;
    }
    plVar1 = (long *)(lVar7 + (ulong)uVar5 * 0x1d50 + 0x98);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = FUN_002fdfb0();
    lVar7 = FUN_002ebd80(lVar7 + 0x50);
    if (puVar4[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x207,1,
                   "BACKUP_POLLER:%p create",lVar7);
    }
    FUN_002fdf10(lVar7 + 0x50,lVar7);
    DAT_043998e0 = lVar7;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *(undefined1 **)(lVar7 + 0x10) = &LAB_00303f00;
    *(long *)(lVar7 + 0x18) = lVar7;
    *(char **)(lVar7 + 0x30) = "external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc";
    *(undefined2 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(undefined4 *)(lVar7 + 0x48) = 0;
    *(undefined4 *)(lVar7 + 0x38) = 0x20c;
    FUN_00300160(lVar7 + 8,0,0,1);
    if (puVar4[0x10] == '\0') goto LAB_003032d8;
LAB_00303464:
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x216,1,
                 "BACKUP_POLLER:%p add %p",lVar7,param_1);
    FUN_002f9740(lVar7 + 0x50,*(undefined8 *)(param_1 + 8));
  }
  if (uVar6 != 0) {
    do {
      uVar6 = DAT_043998d8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x43998d8,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_043998d8 = DAT_043998d8 - 1;
      }
    } while (cVar2 != '\0');
    if (puVar4[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x1ed,1,
                   "BACKUP_POLLER:%p uncover cnt %d->%d",DAT_043998e0,uVar6 & 0xffffffff,
                   (int)uVar6 + -1);
    }
    if (uVar6 == 1) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x1f0,2,
                   "assertion failed: %s","old_count != 1");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_00303314:
  FUN_002f9710(*(undefined8 *)(param_1 + 8),param_1 + 0x1f8);
  return;
}


