/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01046b84; name: FUN_01046b84
 */


void FUN_01046b84(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar2 = *(long **)(param_1 + 0x58);
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar2 != plVar5) {
    do {
      lVar1 = FUN_01046170(*plVar2 + 0x68);
      lVar6 = *(long *)(lVar1 + 8);
      plVar3 = *(long **)(lVar1 + 0x20);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      lVar1 = FUN_01046170(*param_2 + 0x68);
      lVar7 = *(long *)(lVar1 + 8);
      plVar4 = *(long **)(lVar1 + 0x20);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3);
      }
      if (lVar6 == lVar7) {
        return;
      }
      plVar2 = plVar2 + 1;
    } while (plVar5 != plVar2);
    plVar2 = *(long **)(param_1 + 0x60);
  }
  if (plVar2 == *(long **)(param_1 + 0x68)) {
    FUN_01047634((undefined8 *)(param_1 + 0x58),param_2);
    return;
  }
  FUN_0104741c(param_1 + 0x70,plVar2,param_2);
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 8;
  return;
}


