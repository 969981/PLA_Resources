/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8df10; name: FUN_02c8df10
 */


void FUN_02c8df10(void)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = -0x9f90;
  ppuVar1 = &PTR_PTR_04294e88;
  do {
    FUN_00936104(ppuVar1);
    lVar2 = lVar2 + 0x30;
    ppuVar1 = ppuVar1 + -6;
  } while (lVar2 != 0);
  return;
}


