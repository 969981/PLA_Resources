/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276d964; name: FUN_0276d964
 */


void FUN_0276d964(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 local_40 [2];
  undefined8 local_38;
  
  plVar1 = (long *)FUN_013b2b18();
  lVar2 = *plVar1;
  *(long *)PTR_DAT_0437b480 = lVar2;
  local_40[0] = 1;
  local_38 = 0x2000;
  FUN_02780d38(param_1,*(undefined8 *)(lVar2 + 0x50),param_2,local_40,param_3);
  FUN_013b22f8(*param_1);
  return;
}


