/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e2530; name: FUN_004e2530
 */


undefined8 FUN_004e2530(long *param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  if ((param_1 != (long *)0x0) &&
     ((iVar3 = 0, param_2 == 1 ||
      ((param_2 == 2 &&
       (iVar3 = (int)((*param_1 - (long)param_1) - 0x20U >> 3) * -0x33333333 + 1, iVar3 < 9)))))) {
    uVar1 = iVar3 - 9;
    plVar4 = param_1 + (long)iVar3 * 5 + 4;
    lVar5 = *plVar4;
    while( true ) {
      if ((lVar5 != 0) && (plVar4[1] != 0)) {
        *param_1 = (long)plVar4;
        return 1;
      }
      plVar4 = plVar4 + 5;
      bVar2 = 0xfffffffe < uVar1;
      uVar1 = uVar1 + 1;
      if (bVar2) break;
      lVar5 = *plVar4;
    }
  }
  return 0;
}


