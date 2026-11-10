/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e41bc; name: FUN_032e41bc
 */


void FUN_032e41bc(ulong *param_1,ulong param_2)

{
  *param_1 = 0;
  if ((param_2 < 2) || ((*(byte *)(param_2 + 2) >> 1 & 1) == 0)) {
    param_2 = 0;
  }
  *param_1 = param_2;
  return;
}


