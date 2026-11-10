/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a1670; name: FUN_003a1670
 */


float FUN_003a1670(double param_1)

{
  if (3.4028234663852886e+38 < param_1) {
    if (3.4028235677973366e+38 < param_1) {
      return INFINITY;
    }
    return 3.4028235e+38;
  }
  if (param_1 < -3.4028234663852886e+38) {
    if (param_1 < -3.4028235677973366e+38) {
      return -INFINITY;
    }
    return -3.4028235e+38;
  }
  return (float)param_1;
}


