/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053a130; name: FUN_0053a130
 */


void FUN_0053a130(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  void *__ptr;
  long *plVar6;
  long lVar7;
  long lVar8;
  char *local_30;
  undefined4 local_28;
  
  lVar7 = param_1[5];
  *param_1 = (long)(PTR_DAT_04374bc8 + 0x10);
  plVar6 = (long *)(lVar7 + 0x40);
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (PTR_DAT_04374bb0[0x10] != '\0') {
                    /* try { // try from 0053a178 to 0053a217 has its CatchHandler @ 0053a2c8 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x1b8,0,"SUBCHANNEL: %p %12s 0x%lx -> 0x%lx [%s]",lVar7,"WEAK_UNREF",lVar8,
                 lVar8 + -1,"health_watcher");
  }
  if (lVar8 == 1) {
    local_30 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc";
    local_28 = 0x300;
    puVar5 = (undefined8 *)FUN_002ebd50(0x58);
    puVar5[5] = 0;
    *(undefined2 *)(puVar5 + 6) = 0;
    puVar4 = PTR_LAB_043738c8;
    *puVar5 = &LAB_005383e0;
    puVar5[1] = lVar7;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    puVar5[7] = "external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc";
    *(undefined4 *)(puVar5 + 8) = 0x302;
    puVar5[3] = puVar4;
    puVar5[4] = puVar5;
    FUN_002f019c(&local_30,puVar5 + 2,0);
  }
  FUN_00539bf4(param_1 + 9,param_1[10]);
  puVar5 = (undefined8 *)param_1[7];
  param_1[9] = (long)(param_1 + 10);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0;
  if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 0053a244 to 0053a247 has its CatchHandler @ 0053a2c4 */
    (**(code **)*puVar5)();
  }
  __ptr = (void *)param_1[6];
  param_1[6] = 0;
  if (__ptr != (void *)0x0) {
                    /* try { // try from 0053a254 to 0053a257 has its CatchHandler @ 0053a2c0 */
    free(__ptr);
  }
  *param_1 = (long)(PTR_DAT_04374050 + 0x10);
  plVar6 = (long *)param_1[4];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


