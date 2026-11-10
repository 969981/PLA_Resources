/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058e980; name: FUN_0058e980
 */


bool FUN_0058e980(long *param_1)

{
  if (*param_1 == 0) {
    return true;
  }
  return param_1[4] == param_1[2];
}


