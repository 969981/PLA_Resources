/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fc8ec; name: FUN_007fc8ec
 */


void FUN_007fc8ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)PTR_DAT_04377550;
  if (lVar1 == 0) {
    return;
  }
  FUN_0082afc8(lVar1);
  FUN_0082abd8(lVar1,param_2,0xffffffff);
  return;
}


