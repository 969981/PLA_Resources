/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00901cc0; name: FUN_00901cc0
 */


void FUN_00901cc0(long param_1,long *param_2,undefined4 param_3)

{
  if (*param_2 == 0) {
    FUN_00151490(param_1);
  }
  else {
    FUN_00150260(*param_2,(int)param_2[1]);
    if (*param_2 != param_1) {
      FUN_0014fe00(*param_2,param_1,1);
    }
  }
  FUN_00151930(param_1,param_3);
  return;
}


