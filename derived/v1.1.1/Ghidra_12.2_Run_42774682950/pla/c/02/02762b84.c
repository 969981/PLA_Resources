/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02762b84; name: FUN_02762b84
 */


void FUN_02762b84(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_02762c44(*param_1,param_1[2]);
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    return;
  }
  for (lVar1 = *(long *)(lVar2 + 0x10); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
    param_1[1] = lVar1;
    lVar2 = lVar1;
  }
  FUN_02762c44(*param_1,lVar2);
  return;
}


