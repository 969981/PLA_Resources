/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006050cc; name: FUN_006050cc
 */


void FUN_006050cc(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_04373140;
  (**(code **)(**(long **)PTR_DAT_04373140 + 0x80))(*(long **)PTR_DAT_04373140,param_1 + 0x20);
  plVar4 = *(long **)puVar3;
  lVar5 = *(long *)(param_1 + 0x50);
                    /* try { // try from 0060510c to 00605113 has its CatchHandler @ 0060517c */
  (**(code **)(*plVar4 + 0x88))(plVar4,param_1 + 0x20);
  if (lVar5 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/cpp/common/completion_queue_cc.cc",0x2c,2,
                 "CompletionQueue shutdown being shutdown before its server.");
  }
  plVar4 = (long *)(param_1 + 0x18);
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar4 = *(long **)puVar3;
                    /* WARNING: Could not recover jumptable at 0x00605168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x38))(plVar4,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}


