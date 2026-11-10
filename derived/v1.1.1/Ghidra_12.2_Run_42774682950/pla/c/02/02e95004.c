/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e95004; name: FUN_02e95004
 */


void FUN_02e95004(undefined8 param_1,long *param_2)

{
  int iVar1;
  
  if ((int)param_2[4] != 0) {
    iVar1 = (int)param_2[4] + -1;
    *(int *)(param_2 + 4) = iVar1;
    if (iVar1 == 0) {
      FUN_02e94d58(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x02e95050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
  }
  return;
}


