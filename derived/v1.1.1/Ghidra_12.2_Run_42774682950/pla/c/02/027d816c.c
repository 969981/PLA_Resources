/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d816c; name: FUN_027d816c
 */


void FUN_027d816c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -0x7b;
  if (param_1 != (short)param_1) {
    iVar2 = -0x7a;
  }
  iVar1 = 0x84;
  if (param_1 != (char)param_1) {
    iVar1 = iVar2;
  }
  if (param_1 + 0x40U < 0xc0) {
    iVar1 = param_1;
  }
  FUN_02761670(iVar1);
  return;
}


