/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002eeed0; name: FUN_002eeed0
 */


void FUN_002eeed0(double param_1,double param_2)

{
  FUN_002ef280((long)(param_1 / 1000000.0),
               (ulong)(uint)(int)((param_1 - (double)((long)(param_1 / 1000000.0) * 1000000)) *
                                 1000.0) | 0x200000000,(long)(param_2 / 1000000.0),
               (ulong)(uint)(int)((param_2 - (double)((long)(param_2 / 1000000.0) * 1000000)) *
                                 1000.0) | 0x200000000);
  return;
}


