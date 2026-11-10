/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e1fc14; name: FUN_01e1fc14
 */


void FUN_01e1fc14(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0xf0) == 0) {
    *param_1 = 0;
    return;
  }
  FUN_01b050d0();
  return;
}


