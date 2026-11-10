/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082ab80; name: FUN_0082ab80
 */


undefined8 FUN_0082ab80(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  while( true ) {
    if (lVar1 == param_1 + 0xd0) {
      return 0;
    }
    if (*(long *)(lVar1 + 0x10) == param_2) break;
    lVar1 = *(long *)(lVar1 + 8);
  }
  return 1;
}


