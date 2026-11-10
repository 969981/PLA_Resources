/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eacd1c; name: FUN_02eacd1c
 */


int * FUN_02eacd1c(int param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  
  if ((DAT_0440a430 == 0) || (*DAT_0440a428 == param_1)) {
    piVar4 = DAT_0440a428;
  }
  else {
    lVar3 = (ulong)DAT_0440a430 * 0x20;
    piVar2 = DAT_0440a428;
    do {
      lVar3 = lVar3 + -0x20;
      if (lVar3 == 0) {
        piVar4 = DAT_0440a428 + (ulong)DAT_0440a430 * 8;
        break;
      }
      piVar4 = piVar2 + 8;
      piVar1 = piVar2 + 8;
      piVar2 = piVar4;
    } while (*piVar1 != param_1);
  }
  piVar2 = (int *)0x0;
  if (piVar4 != DAT_0440a428 + (ulong)DAT_0440a430 * 8) {
    piVar2 = piVar4 + 2;
  }
  return piVar2;
}


