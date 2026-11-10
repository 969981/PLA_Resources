/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006543e8; name: FUN_006543e8
 */


void FUN_006543e8(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(*(long *)(*(long *)(*param_2 + 8) + 0x48) + 400);
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x98,8);
  puVar1 = PTR_DAT_043758c0 + 0x10;
  plVar2[2] = 0;
  plVar2[3] = (long)plVar3;
  *plVar2 = (long)puVar1;
  plVar2[1] = 0;
  FUN_006547cc(plVar2 + 4,param_2);
  *param_1 = plVar2 + 4;
  param_1[1] = plVar2;
  return;
}


