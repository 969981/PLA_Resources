/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002128ac; name: FUN_002128ac
 */


void FUN_002128ac(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  nnosDestroyThread();
  if (*(long *)(param_1 + 0x1d0) != 0) {
    FUN_0020456c();
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  FUN_002044d4(param_1);
  return;
}


