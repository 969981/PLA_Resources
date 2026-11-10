/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ed9ec; name: FUN_013ed9ec
 */


undefined8 FUN_013ed9ec(long param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(*(long *)(param_1 + 0xa0) + 8) == '\0') {
    uVar1 = FUN_013e1d24(param_2,param_3);
    return uVar1;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 1;
  }
  return 1;
}


