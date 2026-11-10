/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d0f6c; name: FUN_005d0f6c
 */


void FUN_005d0f6c(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = PTR_LAB_04373088;
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != param_2) {
    plVar3 = plVar5 + -3;
    lVar2 = *plVar3;
    while( true ) {
      if (lVar2 != 0) {
        FUN_005d0f6c(plVar3);
        FUN_002e2ea0(puVar1,plVar5[-3]);
      }
      plVar4 = plVar3 + -7;
      FUN_003e9f80(plVar5 + -6,plVar5[-5]);
      if ((*(byte *)(plVar5 + -9) & 1) != 0) {
        FUN_002e2ea0(puVar1,plVar5[-7]);
      }
      if (param_2 == plVar4) break;
      plVar3 = plVar3 + -10;
      lVar2 = *plVar3;
      plVar5 = plVar4;
    }
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


