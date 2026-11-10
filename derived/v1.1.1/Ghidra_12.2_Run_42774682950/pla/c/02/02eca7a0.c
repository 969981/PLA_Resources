/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eca7a0; name: FUN_02eca7a0
 */


void FUN_02eca7a0(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (iVar1 != 0) {
    DAT_0440a7f8 = 0;
    for (lVar2 = DAT_0440a7e0; lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      while (lVar2 == param_1) {
        lVar2 = *(long *)(lVar2 + 8);
        if (lVar2 == 0) {
          return;
        }
      }
      FUN_02eca440(&DAT_0440a7e8,lVar2 + 0x20);
    }
  }
  return;
}


