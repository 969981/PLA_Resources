/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00537ecc; name: FUN_00537ecc
 */


void FUN_00537ecc(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  char *local_40;
  undefined4 local_38;
  
  puVar1 = (ulong *)(param_1 + 0x40);
  do {
    uVar6 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar6 - 0xffff;
      cVar2 = ExclusiveMonitorsStatus();
    }
    puVar4 = PTR_DAT_04374bb0;
  } while (cVar2 != '\0');
  if (PTR_DAT_04374bb0[0x10] != '\0') {
    FUN_002ebea0(param_2,param_3,0,"SUBCHANNEL: %p %12s 0x%lx -> 0x%lx [%s]",param_1,"STRONG_UNREF",
                 uVar6,uVar6 - 0xffff,param_4);
  }
  if ((uVar6 & 0xffffffffffff0000) == 0x10000) {
    FUN_00538020(param_1);
  }
  do {
    uVar6 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar6 - 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x2e8,0,"SUBCHANNEL: %p %12s 0x%lx -> 0x%lx [%s]",param_1,"WEAK_UNREF",uVar6,
                 uVar6 - 1,"strong-unref");
  }
  if (uVar6 == 1) {
    local_40 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc";
    local_38 = 0x300;
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
    FUN_002f019c(&local_40,puVar5 + 2,0);
  }
  return;
}


