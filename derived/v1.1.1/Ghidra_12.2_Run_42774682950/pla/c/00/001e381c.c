/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e381c; name: FUN_001e381c
 */


void FUN_001e381c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    while (lVar1 != 0) {
      FUN_001e3790(param_1,*(undefined8 *)(param_1 + 8),param_2);
      lVar1 = *(long *)(param_1 + 0x18);
    }
  }
  return;
}


