/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010884f4; name: FUN_010884f4
 */


undefined4 FUN_010884f4(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8) >> 2;
  if (uVar2 <= param_2) {
    if (uVar2 < 2 || *(char *)(param_1 + 0xa0) == '\0') {
      return 0;
    }
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = param_2 / uVar2;
    }
    param_2 = param_2 - uVar1 * uVar2;
  }
  return *(undefined4 *)(*(long *)(param_1 + 0xa8) + param_2 * 4);
}


