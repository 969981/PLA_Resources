/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea49e4; name: FUN_02ea49e4
 */


void FUN_02ea49e4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = DAT_0440a370;
  if ((DAT_0440a378 != 0) && (*DAT_0440a370 != param_1)) {
    lVar4 = (ulong)DAT_0440a378 * 8;
    plVar3 = DAT_0440a370;
    do {
      lVar4 = lVar4 + -8;
      if (lVar4 == 0) {
        return;
      }
      plVar2 = plVar3 + 1;
      plVar1 = plVar3 + 1;
      plVar3 = plVar2;
    } while (*plVar1 != param_1);
  }
  if (DAT_0440a370 + DAT_0440a378 != plVar2) {
    if (1 < DAT_0440a378) {
      *plVar2 = (DAT_0440a370 + DAT_0440a378)[-1];
    }
    DAT_0440a378 = DAT_0440a378 - 1;
  }
  return;
}


