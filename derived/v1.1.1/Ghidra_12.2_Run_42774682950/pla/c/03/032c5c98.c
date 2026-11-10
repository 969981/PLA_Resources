/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c5c98; name: FUN_032c5c98
 */


void FUN_032c5c98(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 1) + -1;
  if (iVar1 <= param_2) {
    param_2 = iVar1;
  }
  if (0 < param_2) {
    puVar2 = (undefined1 *)*param_1;
    iVar1 = *(int *)(param_1 + 1) - param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (0 < iVar1) {
      *puVar2 = puVar2[param_2];
      if (1 < iVar1) {
        lVar3 = 1;
        do {
          puVar2 = puVar2 + 1;
          lVar3 = (lVar3 << 0x20) + 0x100000000 >> 0x20;
          *puVar2 = puVar2[param_2];
        } while (lVar3 < iVar1);
      }
    }
  }
  return;
}


