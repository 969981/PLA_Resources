/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e22594; name: FUN_02e22594
 */


long FUN_02e22594(long *param_1,long param_2)

{
  long lVar1;
  
  if (((DAT_044094f8 == 0 && param_1 != (long *)0x0) && param_2 != 0) &&
     (lVar1 = (**(code **)(*param_1 + 0x10))(param_1,0x28), lVar1 != 0)) {
    FUN_02e227fc(lVar1,param_1,param_2);
  }
  return DAT_044094f8;
}


