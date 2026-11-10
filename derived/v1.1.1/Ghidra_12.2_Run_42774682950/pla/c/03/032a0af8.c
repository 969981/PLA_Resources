/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a0af8; name: FUN_032a0af8
 */


void FUN_032a0af8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x165) = 1;
  if (0 < *(int *)(param_1 + 0x150)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      uVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x148) + lVar2) + 0x28))();
      if ((uVar1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x165) = 0;
        break;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (lVar3 < *(int *)(param_1 + 0x150));
  }
  *(undefined1 *)(param_1 + 0x166) = 1;
  return;
}


