/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0094b04c; name: FUN_0094b04c
 */


void FUN_0094b04c(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = FUN_02bced0c();
  do {
    FUN_02bcdf5c(lVar3);
    FUN_02bcdf4c(lVar3);
    FUN_02bce0a4(lVar3);
    FUN_02bcdf3c(lVar3);
    plVar4 = (long *)FUN_02bcbe10();
    uVar2 = FUN_02bce0b0(lVar3);
    (**(code **)(*plVar4 + 0x10))(plVar4,uVar2);
    lVar5 = FUN_02bcdf74(lVar3);
    bVar1 = lVar5 != lVar3;
    *(int *)*param_2 = *(int *)*param_2 + 1;
    lVar3 = lVar5;
  } while (bVar1);
  return;
}


