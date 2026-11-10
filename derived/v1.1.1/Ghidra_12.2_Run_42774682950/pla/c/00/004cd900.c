/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cd900; name: FUN_004cd900
 */


void FUN_004cd900(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_004f5d20(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x120));
  if (lVar1 != 0) {
    do {
      FUN_004cbbd0(*(undefined8 *)(lVar1 + 8));
      FUN_004f5be0(lVar1);
      lVar1 = FUN_004f5d20(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x120));
    } while (lVar1 != 0);
  }
  return;
}


