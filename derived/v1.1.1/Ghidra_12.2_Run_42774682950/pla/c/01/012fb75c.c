/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012fb75c; name: FUN_012fb75c
 */


void FUN_012fb75c(int *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  if (*(long *)(param_1 + 2) != 0) {
    uVar1 = *param_2;
    if (*param_1 == 0) {
      FUN_012f0290(uVar1);
      FUN_012f0944(uVar1);
    }
    else {
      if (*param_1 != 1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      FUN_012f0290(uVar1);
    }
    FUN_0283b1e8(*(undefined8 *)(param_1 + 2));
  }
  return;
}


