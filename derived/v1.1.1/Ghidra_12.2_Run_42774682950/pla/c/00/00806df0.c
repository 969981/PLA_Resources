/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00806df0; name: FUN_00806df0
 */


undefined8 FUN_00806df0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong uStack_38;
  ulong local_28;
  
  uVar2 = FUN_007fac60(*(undefined8 *)(param_1 + 0xb0));
  if ((uVar2 & 1) == 0) {
    puVar4 = &uStack_38;
    lVar5 = 4000;
  }
  else {
    local_28 = 0;
    FUN_007ecf14(&local_28);
    if (local_28 <= *(ulong *)(param_1 + 0xa0)) {
      return 5;
    }
    puVar4 = &local_28;
    lVar5 = 2000;
  }
  plVar3 = (long *)FUN_007ecfa4();
  lVar6 = *plVar3;
  *puVar4 = 0;
  FUN_007ecf14(puVar4);
  puVar1 = PTR_LAB_04377848;
  *(ulong *)(param_1 + 0x98) = *puVar4 + lVar6 * lVar5;
  *(char **)(param_1 + 0x40) = "NetDestroyNetworkJob::SendDestroyNetworkMessage";
  *(undefined **)(param_1 + 0x30) = puVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


