/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ffe50; name: FUN_007ffe50
 */


undefined8 FUN_007ffe50(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_007e5f54(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x180));
  if ((uVar1 & 1) == 0) {
    *(undefined **)(param_1 + 0x30) = PTR_LAB_043776e0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NetNetworkStateJob::CompleteProcess";
    return 0;
  }
  return 5;
}


