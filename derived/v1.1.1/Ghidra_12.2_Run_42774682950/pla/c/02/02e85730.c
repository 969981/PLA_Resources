/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e85730; name: FUN_02e85730
 */


void FUN_02e85730(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x50);
  if (plVar6 != (long *)0x0) {
    plVar5 = (long *)0x0;
    do {
      lVar3 = plVar6[2];
      plVar2 = (long *)FUN_02e8766c(*(undefined8 *)(lVar3 + 8));
      if (*(long *)(lVar3 + 8) == param_2) {
        if (*(int *)(lVar3 + 0x34) != 0) {
          *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + -1;
          goto LAB_02e8577c;
        }
        FUN_02e84578(param_1,lVar3);
        plVar4 = (long *)*plVar6;
        plVar1 = (long *)(param_1 + 0x50);
        if (*(long **)(param_1 + 0x50) != plVar6) {
          plVar1 = plVar5;
        }
        *plVar1 = (long)plVar4;
        if (*(long **)(param_1 + 0x58) == plVar6) {
          *(long **)(param_1 + 0x58) = plVar5;
        }
        *plVar6 = *(long *)(param_1 + 0x60);
        *(long **)(param_1 + 0x60) = plVar6;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
      }
      else {
LAB_02e8577c:
        plVar4 = (long *)*plVar6;
        plVar5 = plVar6;
      }
      plVar6 = plVar4;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    } while (plVar6 != (long *)0x0);
  }
  plVar6 = *(long **)(param_1 + 0x28);
  while (plVar6 != (long *)0x0) {
    lVar3 = *(long *)(plVar6[2] + 8);
    plVar5 = (long *)FUN_02e8766c(lVar3);
    if ((lVar3 == param_2) && (*(short *)(param_2 + 0x34) == 0x503)) {
      FUN_02e8dfec(param_2);
      plVar6 = (long *)*plVar6;
    }
    else {
      plVar6 = (long *)*plVar6;
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  return;
}


