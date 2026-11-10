/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191e810; name: FUN_0191e810
 */


undefined8 FUN_0191e810(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 < -0xcecdd05136d3835) {
    if (lVar1 == -0x35d0eb189afd5b23) {
      return 2;
    }
    if (lVar1 == -0x50dc24df8c13b66c) {
      return 1;
    }
  }
  else {
    if (lVar1 == -0xcecdd05136d3835) {
      return 3;
    }
    if (lVar1 == -0x5468495f4bd1170) {
      return 0;
    }
  }
  return 4;
}


