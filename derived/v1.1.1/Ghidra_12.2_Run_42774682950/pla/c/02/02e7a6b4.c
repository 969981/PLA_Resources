/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7a6b4; name: FUN_02e7a6b4
 */


void FUN_02e7a6b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  if ((*(char *)(param_2 + 0x28) == -0x50) &&
     ((*(char *)(param_2 + 0x2a) == '{' || (*(char *)(param_2 + 0x2a) == 'x')))) {
    FUN_02e7abac(param_1,*(undefined8 *)(param_2 + 0x18),param_3,*(undefined1 *)(param_2 + 0x29));
    return;
  }
  return;
}


