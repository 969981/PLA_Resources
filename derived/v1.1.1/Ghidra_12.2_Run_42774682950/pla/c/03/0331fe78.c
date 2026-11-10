/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331fe78; name: FUN_0331fe78
 */


void FUN_0331fe78(undefined4 *param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  
  plVar1 = DAT_0444b0d0;
  *param_1 = param_2;
  cVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
  *(bool *)(param_1 + 1) = cVar2 != '\0';
                    /* WARNING: Could not recover jumptable at 0x0331fed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2,0);
  return;
}


