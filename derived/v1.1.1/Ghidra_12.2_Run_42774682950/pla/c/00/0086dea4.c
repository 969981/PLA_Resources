/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086dea4; name: FUN_0086dea4
 */


void FUN_0086dea4(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_0086debc(param_1,param_1 + 8);
    return;
  }
  FUN_0086debc(param_1,*(undefined8 *)(param_1 + 0x20));
  return;
}


