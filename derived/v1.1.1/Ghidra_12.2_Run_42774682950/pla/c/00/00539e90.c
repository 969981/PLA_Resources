/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00539e90; name: FUN_00539e90
 */


void FUN_00539e90(long *param_1,long param_2,long *param_3,int param_4)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04374bc8 + 0x10;
  param_1[4] = 0;
  param_1[5] = param_2;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  lVar6 = *param_3;
  *param_3 = 0;
  param_1[10] = 0;
  param_1[9] = (long)(param_1 + 10);
  param_1[0xb] = 0;
  param_1[6] = lVar6;
  param_1[7] = 0;
  iVar3 = param_4;
  if (param_4 == 2) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 8) = iVar3;
  lVar6 = param_1[5];
  plVar2 = (long *)(lVar6 + 0x40);
  do {
    lVar7 = *plVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar7 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (PTR_DAT_04374bb0[0x10] != '\0') {
                    /* try { // try from 00539f1c to 00539f9f has its CatchHandler @ 00539fa0 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x1b2,0,"SUBCHANNEL: %p %12s 0x%lx -> 0x%lx [%s]",lVar6,"WEAK_REF",lVar7,lVar7 + 1,
                 "health_watcher");
  }
  if (lVar7 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x2ee,2,"assertion failed: %s","old_refs != 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_4 == 2) {
    FUN_00539608(param_1);
  }
  return;
}


