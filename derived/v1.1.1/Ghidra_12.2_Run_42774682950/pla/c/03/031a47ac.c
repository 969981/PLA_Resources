/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a47ac; name: FUN_031a47ac
 */


void FUN_031a47ac(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 2) = 1;
  lVar1 = *param_1;
  lVar2 = *param_2;
  if (lVar1 != lVar2) {
    lVar3 = 0;
    if (lVar2 != 0) {
      FUN_032d645c(lVar2);
      lVar1 = *param_1;
      lVar3 = *param_2;
    }
    *param_1 = lVar3;
    if (lVar1 != 0) {
      FUN_032d647c();
      return;
    }
  }
  return;
}


