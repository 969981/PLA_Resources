/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea8ecc; name: FUN_02ea8ecc
 */


undefined4 FUN_02ea8ecc(int *param_1,int param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  if (*param_1 == 1) {
    uVar1 = (ulong)*(ushort *)(*(long *)(param_1 + 2) + 6);
    if (uVar1 != 0) {
      puVar2 = (undefined4 *)(*(long *)(param_1 + 2) + 4);
      do {
        if (puVar2[-1] == param_2) {
          return *puVar2;
        }
        puVar2 = puVar2 + 3;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return 0;
}


