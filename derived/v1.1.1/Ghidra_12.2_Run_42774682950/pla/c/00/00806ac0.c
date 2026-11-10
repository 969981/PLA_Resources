/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00806ac0; name: FUN_00806ac0
 */


undefined8 FUN_00806ac0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  int local_38 [4];
  long local_28;
  
  FUN_00800350(local_38,*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x180));
  if (local_38[0] != 0) {
    return 5;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN_007f63fc(uVar5);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_007f6c84(uVar5), (uVar1 & 1) == 0)) {
    pcVar3 = "NetDestroyNetworkJob::StartNetworkProcess";
    puVar4 = PTR_FUN_04377850;
  }
  else if (*(char *)(param_1 + 0xa8) == '\0') {
    plVar2 = (long *)FUN_007ecfa4();
    lVar6 = *plVar2;
    local_28 = 0;
    FUN_007ecf14(&local_28);
    pcVar3 = "NetDestroyNetworkJob::SendDestroyNetworkMessage";
    *(long *)(param_1 + 0x98) = local_28 + lVar6 * 4000;
    puVar4 = PTR_LAB_04377848;
  }
  else {
    FUN_007f6af0(*(undefined8 *)(param_1 + 0xb0));
    plVar2 = (long *)FUN_007ecfa4();
    lVar6 = *plVar2;
    local_28 = 0;
    FUN_007ecf14(&local_28);
    pcVar3 = "NetDestroyNetworkJob::WaitUntilAllClientsReceiveUpdateNetworkConnectionStatusMessage";
    *(long *)(param_1 + 0xa0) = local_28 + lVar6 * 4000;
    puVar4 = PTR_FUN_04377840;
  }
  *(undefined **)(param_1 + 0x30) = puVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar3;
  return 0;
}


