/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb0424; name: FUN_02eb0424
 */


void FUN_02eb0424(long *param_1,long *param_2)

{
  long *plVar1;
  
  (**(code **)(*param_1 + 0x28))();
  param_1[1] = param_2[1];
  plVar1 = (long *)param_2[2];
  param_1[2] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    if (plVar1[0xe] == 0) {
      plVar1[0xe] = (long)param_1;
      param_1[0xb] = 0;
    }
    else {
      param_1[0xb] = plVar1[0xe];
      plVar1[0xe] = (long)param_1;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  param_2[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x02eb0470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2);
  return;
}


