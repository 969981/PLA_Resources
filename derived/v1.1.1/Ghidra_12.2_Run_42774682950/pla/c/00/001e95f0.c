/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e95f0; name: FUN_001e95f0
 */


void FUN_001e95f0(long param_1,byte param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0xe0);
    if ((lVar1 != 0) || (lVar1 = *(long *)(param_1 + 0xd8), lVar1 != 0)) {
      *(byte *)(lVar1 + 0x1e0) = param_2 & 1;
    }
  }
  return;
}


