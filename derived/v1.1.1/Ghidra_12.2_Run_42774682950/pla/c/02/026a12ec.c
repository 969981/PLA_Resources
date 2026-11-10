/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026a12ec; name: FUN_026a12ec
 */


void FUN_026a12ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + -0x48;
  FUN_02618ba8(lVar1);
  if ((((*(char *)(param_1 + 0xc26) == '\0') && (*(char *)(param_1 + 0xc21) == '\0')) ||
      (*(char *)(param_1 + 0xc27) != '\0')) || ((*(ulong *)(param_1 + 0xc30) & 3) != 0)) {
    FUN_026a1098(lVar1);
    return;
  }
  FUN_026a0590(lVar1,*(undefined1 *)(param_1 + 0xc21));
  return;
}


