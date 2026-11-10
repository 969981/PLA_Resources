/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00444fe0; name: FUN_00444fe0
 */


bool FUN_00444fe0(long *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if ((*param_1 == 0) || (pcVar2 = *(code **)(*param_1 + 0x48), pcVar2 == (code *)0x0)) {
    return false;
  }
  iVar1 = (*pcVar2)();
  return 0 < iVar1;
}


