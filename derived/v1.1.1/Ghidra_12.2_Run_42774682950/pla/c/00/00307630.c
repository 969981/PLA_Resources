/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00307630; name: FUN_00307630
 */


void FUN_00307630(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  plVar1 = param_1 + 0x14;
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    uVar7 = *(undefined8 *)(*param_1 + 0x10);
    puVar5 = (undefined8 *)FUN_002ebd50(0x58);
    puVar5[5] = 0;
    puVar4 = PTR_LAB_043738c8;
    *(undefined2 *)(puVar5 + 6) = 0;
    *puVar5 = &LAB_003076d0;
    puVar5[1] = param_1;
    puVar5[7] = "external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc";
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    *(undefined4 *)(puVar5 + 8) = 0x34f;
    puVar5[3] = puVar4;
    puVar5[4] = puVar5;
    FUN_002f4f9c(uVar7,puVar5 + 2,0);
    return;
  }
  return;
}


