/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e84450; name: FUN_02e84450
 */


void FUN_02e84450(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = *(long **)(param_1 + 0x50);
  while (plVar6 != (long *)0x0) {
    lVar7 = plVar6[2];
    lVar5 = *(long *)(lVar7 + 8);
    plVar2 = (long *)FUN_02e8766c(lVar5);
    if (lVar5 == param_2) {
      *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
    }
    plVar6 = (long *)*plVar6;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 != (long *)0x0) {
    plVar2 = (long *)0x0;
    do {
      lVar5 = plVar6[2];
      lVar7 = *(long *)(lVar5 + 8);
      plVar3 = (long *)FUN_02e8766c(lVar7);
      if (lVar7 == param_2) {
        FUN_02e8425c(param_1,*(undefined4 *)(param_2 + 0x30),lVar5,0);
        plVar4 = (long *)*plVar6;
        plVar1 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar6) {
          plVar1 = plVar2;
        }
        *plVar1 = (long)plVar4;
        if (*(long **)(param_1 + 0x30) == plVar6) {
          *(long **)(param_1 + 0x30) = plVar2;
        }
        *plVar6 = *(long *)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar6;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      }
      else {
        plVar4 = (long *)*plVar6;
        plVar2 = plVar6;
      }
      plVar6 = plVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    } while (plVar6 != (long *)0x0);
  }
  return;
}


