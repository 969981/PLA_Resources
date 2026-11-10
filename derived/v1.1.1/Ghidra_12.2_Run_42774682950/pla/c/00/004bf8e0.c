/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bf8e0; name: FUN_004bf8e0
 */


bool FUN_004bf8e0(void)

{
  long lVar1;
  
  lVar1 = FUN_004e31d0();
  if (lVar1 == 0) {
    return true;
  }
  return (DAT_0439ea18._4_4_ & *(uint *)(lVar1 + 4)) != 0;
}


