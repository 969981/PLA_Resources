/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f187dc; name: FUN_02f187dc
 */


bool FUN_02f187dc(long *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((long *)*param_1 != (long *)0x0) {
    iVar2 = (**(code **)(*(long *)*param_1 + 0x88))();
    bVar1 = iVar2 == 10;
  }
  return bVar1;
}


