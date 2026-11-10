/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8233c; name: FUN_02e8233c
 */


void FUN_02e8233c(long param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar4 = (long *)(param_1 + 0x50);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    if (param_3 == 0) {
      plVar3 = (long *)0x0;
      do {
        lVar1 = plVar5[2];
        if (*(int *)(*(long *)(lVar1 + 8) + 0x10) == param_2) {
          if (*(int *)(lVar1 + 0x34) != 0) {
            *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
            goto LAB_02e82424;
          }
          FUN_02e84578(param_1);
          plVar6 = (long *)*plVar5;
          plVar2 = plVar4;
          if (*(long **)(param_1 + 0x50) != plVar5) {
            plVar2 = plVar3;
          }
          *plVar2 = (long)plVar6;
          if (*(long **)(param_1 + 0x58) == plVar5) {
            *(long **)(param_1 + 0x58) = plVar3;
          }
          *plVar5 = *(long *)(param_1 + 0x60);
          *(long **)(param_1 + 0x60) = plVar5;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          plVar5 = plVar3;
        }
        else {
LAB_02e82424:
          plVar6 = (long *)*plVar5;
        }
        plVar3 = plVar5;
        plVar5 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      plVar3 = (long *)0x0;
      do {
        while ((lVar1 = plVar5[2], *(int *)(*(long *)(lVar1 + 8) + 0x10) == param_2 &&
               (*(int *)(lVar1 + 0x30) == param_3))) {
          if (*(int *)(lVar1 + 0x34) != 0) {
            *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
            break;
          }
          FUN_02e84578(param_1);
          plVar2 = (long *)*plVar5;
          plVar6 = plVar4;
          if (*(long **)(param_1 + 0x50) != plVar5) {
            plVar6 = plVar3;
          }
          *plVar6 = (long)plVar2;
          if (*(long **)(param_1 + 0x58) == plVar5) {
            *(long **)(param_1 + 0x58) = plVar3;
          }
          *plVar5 = *(long *)(param_1 + 0x60);
          *(long **)(param_1 + 0x60) = plVar5;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          plVar5 = plVar2;
          if (plVar2 == (long *)0x0) {
            return;
          }
        }
        plVar6 = (long *)*plVar5;
        plVar3 = plVar5;
        plVar5 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return;
}


