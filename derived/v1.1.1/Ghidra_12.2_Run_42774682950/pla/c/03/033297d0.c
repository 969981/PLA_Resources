/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033297d0; name: FUN_033297d0
 */


void FUN_033297d0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (DAT_0444b3c0 != 0) {
    plVar3 = (long *)(DAT_0444b3c0 + 0x20);
    lVar2 = *plVar3;
    lVar1 = DAT_0444b3c0;
    while (lVar4 = lVar2, lVar4 != 0) {
      if (lVar4 == param_1) {
        lVar4 = *(long *)(param_1 + 0x20);
        *plVar3 = lVar4;
        if (lVar4 == 0) break;
      }
      plVar3 = (long *)(lVar4 + 0x20);
      lVar1 = lVar4;
      lVar2 = *plVar3;
    }
    if (lVar1 != param_1) {
      *plVar3 = param_1;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  return;
}


