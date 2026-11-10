/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d7ba0; name: FUN_003d7ba0
 */


void FUN_003d7ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    plVar3 = (long *)(param_1 + 0x90);
    do {
      lVar2 = lVar2 + -1;
      uVar1 = param_3;
      if (lVar2 != 0) {
        uVar1 = 0;
      }
      (**(code **)(*plVar3 + 0x28))(plVar3,param_2,uVar1);
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  return;
}


