/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed6660; name: FUN_02ed6660
 */


void FUN_02ed6660(long param_1,undefined4 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x68) == 0) {
    FUN_02ed6470(param_1,0,param_2,param_3,0);
    return;
  }
  FUN_02ed6470(param_1,*(undefined1 *)(*(long *)(param_1 + 0x68) + 0x24),param_2,param_3,0);
  return;
}


