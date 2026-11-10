/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00654460; name: FUN_00654460
 */


void FUN_00654460(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x98,8);
  puVar1 = PTR_DAT_043758c0 + 0x10;
  plVar2[2] = 0;
  plVar2[3] = (long)param_3;
  *plVar2 = (long)puVar1;
  plVar2[1] = 0;
  FUN_00654a40(plVar2 + 4,param_2,param_3);
  *param_1 = plVar2 + 4;
  param_1[1] = plVar2;
  return;
}


