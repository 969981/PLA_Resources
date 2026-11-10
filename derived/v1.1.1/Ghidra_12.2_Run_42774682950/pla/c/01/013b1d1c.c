/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b1d1c; name: FUN_013b1d1c
 */


void FUN_013b1d1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_013b2b18();
  lVar2 = *plVar1;
  *(long *)PTR_DAT_0437b480 = lVar2;
  FUN_013b226c(param_1,*(undefined8 *)(lVar2 + 0x50),param_2,param_3,param_4);
  FUN_013b22f8(*param_1);
  return;
}


