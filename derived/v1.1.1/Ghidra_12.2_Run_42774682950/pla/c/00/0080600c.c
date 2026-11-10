/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080600c; name: FUN_0080600c
 */


undefined8 FUN_0080600c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  int local_38 [4];
  undefined4 local_28 [2];
  
  bVar1 = **(int **)(param_1 + 0x60) == 1;
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0') {
    if (bVar1) {
      FUN_007e5da4();
    }
    *(undefined **)(param_1 + 0x30) = PTR_FUN_04377808;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NetSearchNetworkJob::WaitForCancel";
    return 0;
  }
  if ((bVar1) ||
     (uVar2 = FUN_007e5f0c(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x180)), (uVar2 & 1) != 0)) {
    return 5;
  }
  FUN_007ee578(local_38,*(long *)(param_1 + 0x60) + 4);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  if (local_38[0] == 0) {
    local_38[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_007ee578(auStack_58,local_38);
    FUN_007e5c40(uVar3,auStack_58);
  }
  else {
    FUN_007ee578(auStack_48,*(long *)(param_1 + 0x60) + 4);
    FUN_007e5cac(uVar3,auStack_48);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}


