/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00307f80; name: FUN_00307f80
 */


undefined8 FUN_00307f80(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  long lStack_68;
  undefined8 *local_60;
  
  plVar8 = *(long **)(param_1 + 0xa8);
  if (plVar8[0x14] == 0) {
    *(long *)(param_1 + 0x90) = param_2;
    *(long *)(param_1 + 0x98) = param_3;
    *(undefined8 *)(param_1 + 0xa0) = param_4;
    FUN_002ef750(plVar8 + 0x15);
    plVar1 = (long *)(*plVar8 + 0x28);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + param_3 * param_2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar6 = FUN_003079a0(plVar8,param_3 * param_2,param_1);
    FUN_002ef790(plVar8 + 0x15);
    puVar5 = PTR_FUN_043739d8;
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x98) != 0) {
        uVar6 = 0;
        do {
          lVar9 = *(long *)(param_1 + 0x90);
          uVar7 = *(undefined8 *)(param_1 + 0xa0);
          uVar2 = *(undefined8 *)(param_1 + 0xa8);
          local_70 = (undefined8 *)FUN_002ebd50(lVar9 + 0x48);
          local_70[5] = 0;
          *(undefined4 *)(local_70 + 1) = 3;
          *local_70 = local_70 + 5;
          local_60 = local_70 + 9;
          local_70[2] = local_70;
          local_70[3] = puVar5;
          local_70[4] = local_70;
          local_70[8] = lVar9;
          local_70[6] = 1;
          local_70[7] = uVar2;
          lStack_68 = lVar9;
          FUN_00305230(uVar7,&local_70);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ulong *)(param_1 + 0x98));
      }
      return 1;
    }
  }
  else {
    local_78 = 0x3ec;
    local_80 = "external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc";
    FUN_002f2c60(&local_70,"Resource user shutdown");
    uVar7 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x3ed,
                         &local_70,0,0);
    FUN_002f019c(&local_80,param_1,uVar7);
  }
  return 0;
}


