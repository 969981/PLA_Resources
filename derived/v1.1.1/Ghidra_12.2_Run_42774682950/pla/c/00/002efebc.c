/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002efebc; name: FUN_002efebc
 */


void FUN_002efebc(void)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar1 = (double)FUN_002eee30();
  auVar3 = FUN_002eec80(0);
  DAT_0438f780 = auVar3._8_8_;
  DAT_0438f778 = auVar3._0_8_;
  dVar2 = (double)FUN_002eee30();
  DAT_0438f770 = (dVar1 + dVar2) * 0.5;
  return;
}


