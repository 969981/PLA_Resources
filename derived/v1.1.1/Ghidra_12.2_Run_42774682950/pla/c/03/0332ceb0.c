/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332ceb0; name: FUN_0332ceb0
 */


void FUN_0332ceb0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 == 0) {
    lVar1 = FUN_032cf5b0(0x60);
    FUN_0332cc90();
    lVar2 = *param_1;
    if ((lVar2 != lVar1) && (*param_1 = lVar1, lVar2 != 0)) {
      FUN_032d647c();
      return;
    }
  }
  return;
}


