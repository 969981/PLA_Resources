/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032e238; name: FUN_0032e238
 */


void FUN_0032e238(long param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    piVar3 = *(int **)(param_1 + 0x10);
    uVar2 = (ulong)*(ushort *)(param_1 + 10);
    while (piVar1 = piVar3, uVar2 != 0) {
      uVar6 = uVar2 >> 1;
      piVar3 = piVar1 + uVar6 * 8 + 8;
      uVar2 = uVar2 + ~uVar6;
      if (param_2 <= piVar1[uVar6 * 8]) {
        piVar3 = piVar1;
        uVar2 = uVar6;
      }
    }
    if ((piVar1 != *(int **)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 10) * 8) &&
       (*piVar1 == param_2)) {
      FUN_0032e380(piVar1 + 2);
      return;
    }
  }
  else {
    plVar5 = (long *)(*(long *)(param_1 + 0x10) + 8);
    plVar7 = (long *)*plVar5;
    if (plVar7 != (long *)0x0) {
      plVar4 = plVar5;
      do {
        if (param_2 <= (int)plVar7[4]) {
          plVar4 = plVar7;
        }
        plVar7 = (long *)plVar7[(int)plVar7[4] < param_2];
      } while (plVar7 != (long *)0x0);
      if ((plVar4 != plVar5) && ((int)plVar4[4] <= param_2)) {
        FUN_0032e380(plVar4 + 5);
        return;
      }
    }
  }
  return;
}


