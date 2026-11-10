/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cd128; name: FUN_032cd128
 */


long FUN_032cd128(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      plVar3 = (long *)*plVar3;
      lVar2 = lVar2 + 1;
    } while (plVar3 != (long *)0x0);
  }
  uVar1 = 0;
  if (param_1[1] != 0) {
    uVar1 = (ulong)(param_1[9] - param_1[8]) / (ulong)param_1[1];
  }
  lVar2 = uVar1 + lVar2;
  for (plVar3 = (long *)param_1[4]; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    lVar2 = plVar3[3] + lVar2;
  }
  return lVar2;
}


