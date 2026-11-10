/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5e3b0; name: FUN_01c5e3b0
 */


undefined4 FUN_01c5e3b0(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_01c61df0(*(int *)(param_1 + 0x2a0) + -1);
  puVar2 = *(undefined4 **)(param_1 + 600);
  while( true ) {
    if (puVar2 == *(undefined4 **)(param_1 + 0x260)) {
      return 0;
    }
    if (iVar1 < (int)puVar2[1]) break;
    puVar2 = puVar2 + 2;
  }
  return *puVar2;
}


