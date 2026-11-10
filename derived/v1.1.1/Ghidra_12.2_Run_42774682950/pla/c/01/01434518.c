/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01434518; name: FUN_01434518
 */


void FUN_01434518(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x4fb) != '\0') {
    lVar2 = *(long *)(param_1 + 0x10);
    if ((**(char **)(param_1 + 0x150) != '\0') && (lVar1 = *(long *)(lVar2 + 0x148), lVar1 != 0)) {
      FUN_0283b430(lVar1,param_1 + 0x148);
    }
    if ((**(char **)(param_1 + 0x170) != '\0') && (lVar2 = *(long *)(lVar2 + 0x148), lVar2 != 0)) {
      FUN_0283b1e8(lVar2,param_1 + 0x168);
    }
    *(undefined1 *)(param_1 + 0x4fb) = 0;
  }
  return;
}


