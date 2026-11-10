/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f25ff4; name: FUN_02f25ff4
 */


void FUN_02f25ff4(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    do {
      *(byte *)(lVar1 + 0x168) = *(byte *)(lVar1 + 0x168) & 0xfd | (param_2 & 1) << 1;
      lVar1 = *(long *)(lVar1 + 0x48);
    } while (lVar1 != 0);
  }
  return;
}


