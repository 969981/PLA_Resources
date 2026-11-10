/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058e7a0; name: FUN_0058e7a0
 */


void FUN_0058e7a0(long *param_1)

{
  code *pcVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x10), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
  }
  free(param_1);
  return;
}


