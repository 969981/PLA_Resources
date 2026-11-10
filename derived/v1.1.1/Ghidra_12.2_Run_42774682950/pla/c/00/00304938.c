/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00304938; name: FUN_00304938
 */


void FUN_00304938(long *param_1)

{
  undefined *puVar1;
  void *__ptr;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  __ptr = (void *)*param_1;
  if ((__ptr != (void *)0x0) && (0 < (int)param_1[2])) {
    lVar3 = 0;
    lVar4 = 1;
    while( true ) {
                    /* try { // try from 00304968 to 00304977 has its CatchHandler @ 00304a18 */
      FUN_00304a1c((long)__ptr + lVar3);
      FUN_00305020((long)__ptr + lVar3);
      if ((int)param_1[2] <= lVar4) break;
      __ptr = (void *)*param_1;
      lVar3 = lVar3 + 0x140;
      lVar4 = lVar4 + 1;
    }
    __ptr = (void *)*param_1;
  }
                    /* try { // try from 00304998 to 003049a3 has its CatchHandler @ 003049fc */
  free(__ptr);
  free((void *)param_1[1]);
  puVar1 = PTR_LAB_04373088;
  plVar2 = (long *)param_1[0xb];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_002e2ea0(puVar1);
  }
  lVar3 = param_1[9];
  param_1[9] = 0;
  if (lVar3 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
                    /* try { // try from 003049e4 to 003049e7 has its CatchHandler @ 003049f8 */
  FUN_002ef710(param_1 + 3);
  return;
}


