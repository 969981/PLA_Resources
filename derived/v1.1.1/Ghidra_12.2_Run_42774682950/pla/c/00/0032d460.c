/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032d460; name: FUN_0032d460
 */


void FUN_0032d460(int *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  if (*param_1 != -1) {
    return;
  }
  *param_1 = 1;
  iVar3 = param_1[1];
  if (iVar3 < 1) {
    lVar1 = (long)iVar3;
  }
  else {
    lVar4 = 0;
    lVar1 = *(long *)(param_1 + 6);
    while( true ) {
      if (lVar1 != 0) {
        FUN_0032d460();
        iVar3 = param_1[1];
      }
      lVar4 = lVar4 + 1;
      lVar1 = (long)iVar3;
      if (lVar1 <= lVar4) break;
      lVar1 = *(long *)((long)(param_1 + 6) + lVar4 * 8);
    }
  }
  iVar3 = param_1[2];
  if (iVar3 < 1) {
LAB_0032d520:
    (**(code **)(param_1 + 4))();
    *param_1 = 0;
    return;
  }
  lVar4 = 0;
  lVar2 = **(long **)(param_1 + lVar1 * 2 + 6);
  do {
    if (lVar2 == 0) {
      if ((long)iVar3 <= lVar4 + 1) goto LAB_0032d520;
    }
    else {
      FUN_0032d460();
      iVar3 = param_1[2];
      if ((long)iVar3 <= lVar4 + 1) goto LAB_0032d520;
    }
    lVar4 = lVar4 + 1;
    lVar2 = **(long **)(param_1 + lVar1 * 2 + 6 + lVar4 * 2);
  } while( true );
}


