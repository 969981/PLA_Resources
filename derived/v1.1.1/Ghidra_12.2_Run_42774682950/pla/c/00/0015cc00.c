/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015cc00; name: FUN_0015cc00
 */


void FUN_0015cc00(long param_1,undefined8 *param_2)

{
  if (*(byte *)(*(long *)(param_1 + 0x18) + 0x55) < 2) {
    if ((*(byte *)(*(long *)*param_2 + 9) & 3) != 0) {
      FUN_0015cac0();
      return;
    }
  }
  return;
}


