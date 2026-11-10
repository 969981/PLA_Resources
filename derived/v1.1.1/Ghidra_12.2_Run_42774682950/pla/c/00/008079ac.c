/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008079ac; name: FUN_008079ac
 */


undefined8 FUN_008079ac(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int local_30 [4];
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = FUN_007f63fc(uVar2);
  if (((((uVar1 & 1) == 0) && (uVar1 = FUN_007f6c84(uVar2), (uVar1 & 1) == 0)) ||
      (FUN_007ee578(local_30,*(long *)(param_1 + 0x58) + 0x1a8), local_30[0] != 0)) ||
     ((FUN_007fc610(local_30,*(undefined8 *)(param_1 + 0x58)), local_30[0] != 0 ||
      ((**(code **)(**(long **)(param_1 + 0x58) + 0xd0))
                 (local_30,*(long **)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x60)),
      local_30[0] != 0)))) {
    return 1;
  }
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04377890;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NetUpdatePlayerNumBackgroundJob::WaitUpdatePlayerNum";
  return 0;
}


