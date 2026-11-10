/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8217c; name: FUN_02e8217c
 */


void FUN_02e8217c(long param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar1 = *(long **)(param_1 + 0x50);
  if (plVar1 != (long *)0x0) {
    if (param_3 == 0) {
      do {
        lVar3 = plVar1[2];
        if (*(int *)(*(long *)(lVar3 + 8) + 0x10) == param_2) {
          *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
        }
        plVar1 = (long *)*plVar1;
      } while (plVar1 != (long *)0x0);
    }
    else {
      do {
        lVar3 = plVar1[2];
        if ((*(int *)(*(long *)(lVar3 + 8) + 0x10) == param_2) &&
           (*(int *)(lVar3 + 0x30) == param_3)) {
          *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
        }
        plVar1 = (long *)*plVar1;
      } while (plVar1 != (long *)0x0);
    }
  }
  plVar5 = (long *)(param_1 + 0x28);
  plVar1 = (long *)*plVar5;
  if (plVar1 != (long *)0x0) {
    if (param_3 == 0) {
      plVar4 = (long *)0x0;
      do {
        while( true ) {
          lVar3 = *(long *)(plVar1[2] + 8);
          if (*(int *)(lVar3 + 0x10) != param_2) break;
          FUN_02e8425c(param_1,*(undefined4 *)(lVar3 + 0x30),plVar1[2],0);
          plVar2 = (long *)*plVar1;
          plVar6 = plVar5;
          if (*(long **)(param_1 + 0x28) != plVar1) {
            plVar6 = plVar4;
          }
          *plVar6 = (long)plVar2;
          if (*(long **)(param_1 + 0x30) == plVar1) {
            *(long **)(param_1 + 0x30) = plVar4;
          }
          *plVar1 = *(long *)(param_1 + 0x38);
          *(long **)(param_1 + 0x38) = plVar1;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
          plVar1 = plVar2;
          if (plVar2 == (long *)0x0) {
            return;
          }
        }
        plVar6 = (long *)*plVar1;
        plVar4 = plVar1;
        plVar1 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      plVar4 = (long *)0x0;
      do {
        while( true ) {
          plVar6 = plVar1;
          lVar3 = plVar6[2];
          if ((*(int *)(*(long *)(lVar3 + 8) + 0x10) != param_2) ||
             (*(int *)(lVar3 + 0x30) != param_3)) break;
          FUN_02e8425c(param_1,*(undefined4 *)(*(long *)(lVar3 + 8) + 0x30),lVar3,0);
          plVar1 = (long *)*plVar6;
          plVar2 = plVar5;
          if (*(long **)(param_1 + 0x28) != plVar6) {
            plVar2 = plVar4;
          }
          *plVar2 = (long)plVar1;
          if (*(long **)(param_1 + 0x30) == plVar6) {
            *(long **)(param_1 + 0x30) = plVar4;
          }
          *plVar6 = *(long *)(param_1 + 0x38);
          *(long **)(param_1 + 0x38) = plVar6;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
          if (plVar1 == (long *)0x0) {
            return;
          }
        }
        plVar1 = (long *)*plVar6;
        plVar4 = plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  return;
}


