/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e481e0; name: FUN_01e481e0
 */


uint FUN_01e481e0(uint param_1,uint param_2)

{
  return 1 << (ulong)(param_1 & 0x1f) | param_2;
}


