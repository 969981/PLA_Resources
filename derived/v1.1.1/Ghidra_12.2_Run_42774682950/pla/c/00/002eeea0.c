/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002eeea0; name: FUN_002eeea0
 */


void FUN_002eeea0(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_002eec80(1);
  *param_1 = auVar1;
  *(undefined4 *)(*param_1 + 0xc) = 2;
  return;
}


