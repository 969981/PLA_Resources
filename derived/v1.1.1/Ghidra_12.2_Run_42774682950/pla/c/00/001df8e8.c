/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df8e8; name: FUN_001df8e8
 */


void FUN_001df8e8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_1[4];
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 3;
    nnosLockMutex(*plVar3);
    lVar1 = plVar2[4];
    *(undefined4 *)(plVar2 + 4) = 1;
    nnosUnlockMutex(*plVar3);
    if ((int)lVar1 == 0) {
      FUN_00212db4();
    }
    else {
      if (*plVar2 != 0) {
        FUN_00212db8(plVar2);
      }
      FUN_001dfeac(plVar3);
      FUN_002044d4(param_1[4]);
    }
  }
  param_1[4] = 0;
  FUN_002044d4(*param_1);
  *param_1 = 0;
  return;
}


