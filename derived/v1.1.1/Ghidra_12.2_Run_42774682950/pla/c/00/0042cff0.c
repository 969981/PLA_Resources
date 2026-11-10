/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042cff0; name: FUN_0042cff0
 */


long FUN_0042cff0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_004396d0(*(undefined8 *)(param_1 + 8));
  if ((lVar1 == 0) || (lVar2 = FUN_0042ce50(lVar1,param_1), lVar2 != 0)) {
    return lVar1;
  }
  FUN_0042cd80(lVar1);
  return 0;
}


