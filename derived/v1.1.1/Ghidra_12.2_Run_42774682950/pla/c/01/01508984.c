/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01508984; name: FUN_01508984
 */


void FUN_01508984(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = FUN_00d2e81c(lVar2 + 0x180,"button_decide_x");
  if (lVar1 != 0) {
    FUN_02808d3c();
    return;
  }
  if (*(long *)(lVar2 + 0x440) == 0) {
    return;
  }
  FUN_02831440();
  return;
}


