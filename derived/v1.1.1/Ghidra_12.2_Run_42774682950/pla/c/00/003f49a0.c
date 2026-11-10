/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f49a0; name: FUN_003f49a0
 */


void FUN_003f49a0(long *param_1)

{
  code *pcVar1;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    pcVar1 = *(code **)(*param_1 + 0x38);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1);
    }
    *(undefined1 *)((long)param_1 + 10) = 1;
  }
  return;
}


