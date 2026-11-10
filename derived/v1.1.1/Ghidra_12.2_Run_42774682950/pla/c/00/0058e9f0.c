/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058e9f0; name: FUN_0058e9f0
 */


bool FUN_0058e9f0(long *param_1)

{
  if (*param_1 == 0) {
    return true;
  }
  if (param_1[2] == 8) {
    return param_1[4] == 0;
  }
  return false;
}


