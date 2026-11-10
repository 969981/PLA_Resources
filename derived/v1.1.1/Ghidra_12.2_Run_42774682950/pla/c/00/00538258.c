/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00538258; name: FUN_00538258
 */


void FUN_00538258(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  char *local_30;
  undefined4 local_28;
  
  plVar1 = (long *)(param_1 + 0x40);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (PTR_DAT_04374bb0[0x10] != '\0') {
    FUN_002ebea0(param_2,param_3,0,"SUBCHANNEL: %p %12s 0x%lx -> 0x%lx [%s]",param_1,"WEAK_UNREF",
                 lVar6,lVar6 + -1,param_4);
  }
  if (lVar6 == 1) {
    local_30 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc";
    local_28 = 0x300;
    puVar5 = (undefined8 *)FUN_002ebd50(0x58);
    puVar5[5] = 0;
    puVar4 = PTR_LAB_043738c8;
    *(undefined2 *)(puVar5 + 6) = 0;
    puVar5[3] = puVar4;
    puVar5[4] = puVar5;
    *puVar5 = &LAB_005383e0;
    puVar5[1] = param_1;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    puVar5[7] = "external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc";
    *(undefined4 *)(puVar5 + 8) = 0x302;
    FUN_002f019c(&local_30,puVar5 + 2,0);
  }
  return;
}


