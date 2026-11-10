/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053b400; name: FUN_0053b400
 */


void FUN_0053b400(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  char *local_40;
  undefined4 local_38;
  
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_04374bd0 + 0x10);
  param_1[1] = 0;
  plVar1 = (long *)(param_2 + 0x40);
  param_1[4] = 0;
  param_1[5] = param_2;
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    puVar4 = PTR_DAT_04374bb0;
  } while (cVar2 != '\0');
  if (PTR_DAT_04374bb0[0x10] != '\0') {
                    /* try { // try from 0053b45c to 0053b58f has its CatchHandler @ 0053b590 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x13f,0,"SUBCHANNEL: %p %12s 0x%lx -> 0x%lx [%s]",param_2,"WEAK_REF",lVar6,
                 lVar6 + 1,"state_watcher");
  }
  if (lVar6 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x2ee,2,"assertion failed: %s","old_refs != 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = param_1[5];
  plVar1 = (long *)(lVar6 + 0x40);
  do {
    lVar7 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x140,0,"SUBCHANNEL: %p %12s 0x%lx -> 0x%lx [%s]",lVar6,"WEAK_UNREF",lVar7,
                 lVar7 + -1,"connecting");
  }
  if (lVar7 == 1) {
    local_40 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc";
    local_38 = 0x300;
    puVar5 = (undefined8 *)FUN_002ebd50(0x58);
    puVar5[5] = 0;
    *(undefined2 *)(puVar5 + 6) = 0;
    puVar4 = PTR_LAB_043738c8;
    *puVar5 = &LAB_005383e0;
    puVar5[1] = lVar6;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    puVar5[7] = "external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc";
    *(undefined4 *)(puVar5 + 8) = 0x302;
    puVar5[3] = puVar4;
    puVar5[4] = puVar5;
    FUN_002f019c(&local_40,puVar5 + 2,0);
  }
  return;
}


