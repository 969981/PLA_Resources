/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002053bc; name: FUN_002053bc
 */


void FUN_002053bc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = nnosGetSystemTick();
  lVar3 = nnosGetSystemTickFrequency();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2 / lVar3;
  }
  if (param_1 != (long *)0x0) {
    *param_1 = lVar1;
  }
  return;
}


