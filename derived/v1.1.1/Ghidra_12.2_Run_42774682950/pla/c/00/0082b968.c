/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082b968; name: FUN_0082b968
 */


undefined8 FUN_0082b968(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  puVar3 = PTR_DAT_04377550;
  uVar1 = (**(code **)(**(long **)(*(long *)PTR_DAT_04377550 + 0x18) + 0x48))
                    (*(long **)(*(long *)PTR_DAT_04377550 + 0x18),param_1 + 0x98);
  if ((uVar1 & 1) == 0) {
    return 5;
  }
  if (*(int *)(param_1 + 0x60) == 3) {
    FUN_007ee578(local_40,param_1 + 100);
    pcVar2 = "JoinSessionJob::CompleteFailure";
    puVar3 = PTR_FUN_04377cf8;
  }
  else {
    FUN_0082b398(*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x98));
    FUN_007e5bd8((int *)(param_1 + 0x60));
    if (*(char *)(param_1 + 0x90) == '\0') {
      uVar1 = (**(code **)(**(long **)(*(long *)puVar3 + 0x18) + 0xe0))();
      if ((uVar1 & 1) != 0) {
        pcVar2 = "JoinSessionJob::MeshStartup";
        puVar3 = PTR_FUN_04377d10;
        goto LAB_0082ba64;
      }
      local_40[0] = 0xc406;
    }
    else {
      local_40[0] = 0x647a;
    }
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
    pcVar2 = "JoinSessionJob::DisconnectNetwork";
    puVar3 = PTR_FUN_04377d18;
  }
  FUN_007ee660(param_1 + 0xa0,local_40);
LAB_0082ba64:
  *(undefined **)(param_1 + 0x30) = puVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return 0;
}


