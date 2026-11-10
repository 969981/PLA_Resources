/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00173db0; name: FUN_00173db0
 */


uint FUN_00173db0(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00173af0();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = (*(int **)(param_1 + 0x10))[2];
  uVar2 = 0;
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return 1;
    }
    uVar2 = (uint)(**(int **)(param_1 + 0x10) != 0);
  }
  return uVar2;
}


