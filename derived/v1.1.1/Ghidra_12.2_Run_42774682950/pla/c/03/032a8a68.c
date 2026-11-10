/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a8a68; name: FUN_032a8a68
 */


void FUN_032a8a68(void)

{
  DAT_044402f0 = 0;
  if ((-1 < (int)DAT_044402f4) && (DAT_044402e8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,DAT_044402e8,((ulong)DAT_044402f4 & 0x3fffffff) << 5);
  }
  DAT_044402e8 = 0;
  DAT_044402f4 = 0x80000000;
  FUN_032c21f8(&DAT_044402f8);
  return;
}


