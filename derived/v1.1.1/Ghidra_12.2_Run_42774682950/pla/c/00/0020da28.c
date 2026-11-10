/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020da28; name: FUN_0020da28
 */


undefined8 FUN_0020da28(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if (*(ulong *)(param_1 + 0x440) <= param_2) {
    param_2 = *(ulong *)(param_1 + 0x440);
  }
  *(ulong *)(param_1 + 0x30) = param_2;
  uVar1 = *(ulong *)(param_1 + 0x448);
  if (param_2 <= *(ulong *)(param_1 + 0x448)) {
    uVar1 = param_2;
  }
  *(ulong *)(param_1 + 0x448) = uVar1;
  *(undefined1 *)(param_1 + 0x450) = 1;
  FUN_0020da6c(param_1,param_1 + 0x40);
  return 0;
}


