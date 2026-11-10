/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032e014; name: FUN_0032e014
 */


undefined8 FUN_0032e014(long param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    piVar3 = *(int **)(param_1 + 0x10);
    uVar2 = (ulong)*(ushort *)(param_1 + 10);
    while (piVar1 = piVar3, uVar2 != 0) {
      uVar7 = uVar2 >> 1;
      piVar3 = piVar1 + uVar7 * 8 + 8;
      uVar2 = uVar2 + ~uVar7;
      if (param_2 <= piVar1[uVar7 * 8]) {
        piVar3 = piVar1;
        uVar2 = uVar7;
      }
    }
    if ((piVar1 != *(int **)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 10) * 8) &&
       (*piVar1 == param_2)) {
      uVar4 = FUN_0032e0bc(piVar1 + 2);
      return uVar4;
    }
  }
  else {
    plVar6 = (long *)(*(long *)(param_1 + 0x10) + 8);
    plVar8 = (long *)*plVar6;
    if (plVar8 != (long *)0x0) {
      plVar5 = plVar6;
      do {
        if (param_2 <= (int)plVar8[4]) {
          plVar5 = plVar8;
        }
        plVar8 = (long *)plVar8[(int)plVar8[4] < param_2];
      } while (plVar8 != (long *)0x0);
      if ((plVar5 != plVar6) && ((int)plVar5[4] <= param_2)) {
        uVar4 = FUN_0032e0bc(plVar5 + 5);
        return uVar4;
      }
    }
  }
  return 0;
}


