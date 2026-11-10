/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333bfa4; name: FUN_0333bfa4
 */


long FUN_0333bfa4(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x18) + (param_3 & 0xffff) * 0x18 + 0x10);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    (**(code **)(*param_2 + 0x18))(param_2,plVar2,1,8);
    lVar1 = *plVar2;
  }
  return lVar1;
}


