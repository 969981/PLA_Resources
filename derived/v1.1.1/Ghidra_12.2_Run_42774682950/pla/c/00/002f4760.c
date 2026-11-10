/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f4760; name: FUN_002f4760
 */


void FUN_002f4760(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  
  puVar4 = PTR_DAT_043738b8;
  if (PTR_DAT_043738b8[0x10] != '\0') {
    FUN_002ebea0(param_2,param_3,0,"C:%p %s %ld --> %ld %s",param_1,"UNREF",
                 *(undefined8 *)(param_1 + 200),*(long *)(param_1 + 200) + -1,param_4);
  }
  iVar5 = FUN_002ef660(param_1 + 200);
  if (iVar5 != 0) {
    plVar1 = (long *)(param_1 + 0x60);
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar4[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0x4a,1,
                   "C:%p really_destroy old_state=%ld",param_1,lVar6);
    }
    if (lVar6 == 1) {
      if (puVar4[0x10] != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0x42,1,
                     "C:%p really_destroy",param_1);
      }
      if (*plVar1 != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0x43,2,
                     "assertion failed: %s","gpr_atm_no_barrier_load(&lock->state) == 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (param_1 + 0x50 != *(long *)(param_1 + 8)) {
                    /* try { // try from 002f48b8 to 002f4907 has its CatchHandler @ 002f4908 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/mpscq.h",0x2b,2,
                     "assertion failed: %s","head_.Load(MemoryOrder::RELAXED) == &stub_");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(long *)(param_1 + 0x48) != *(long *)(param_1 + 8)) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/mpscq.h",0x2c,2,
                     "assertion failed: %s","tail_ == &stub_");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_002e2ea0(PTR_LAB_04373088,param_1);
      return;
    }
  }
  return;
}


