/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f06058; name: FUN_02f06058
 */


void FUN_02f06058(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0 || lVar1 == param_2) {
    lVar3 = 0;
    lVar2 = lVar1;
  }
  else {
    lVar2 = lVar1;
    do {
      lVar3 = lVar2;
      lVar2 = *(long *)(lVar3 + 8);
    } while (lVar2 != 0 && lVar2 != param_2);
  }
  if (lVar2 != 0) {
    if (lVar2 != lVar1) {
      param_1 = (long *)(lVar3 + 8);
    }
    *param_1 = *(long *)(lVar2 + 8);
  }
  return;
}


