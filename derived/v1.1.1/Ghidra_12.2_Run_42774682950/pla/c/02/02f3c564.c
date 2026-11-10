/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3c564; name: FUN_02f3c564
 */


int FUN_02f3c564(long *param_1)

{
  int local_20 [2];
  int local_18 [2];
  
  (**(code **)(*param_1 + 200))(param_1,local_18,local_20);
  return local_20[0] - local_18[0];
}


