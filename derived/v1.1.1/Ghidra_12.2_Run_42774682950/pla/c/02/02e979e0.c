/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e979e0; name: FUN_02e979e0
 */


void FUN_02e979e0(long *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 != 0) {
    uVar3 = (int)*(long *)(param_2 + 2) + *param_2;
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = uVar3 / uVar4;
    }
    piVar2 = (int *)(*param_1 + (ulong)(uVar3 - uVar5 * uVar4) * 8);
    piVar7 = *(int **)piVar2;
    if (piVar7 != (int *)0x0) {
      piVar6 = (int *)0x0;
      do {
        if ((*piVar7 == *param_2) && (*(long *)(piVar7 + 2) == *(long *)(param_2 + 2))) {
          if (piVar6 != (int *)0x0) {
            piVar2 = piVar6 + 4;
          }
          *(undefined8 *)piVar2 = *(undefined8 *)(piVar7 + 4);
          *(int *)(param_1 + 2) = (int)param_1[2] + -1;
          return;
        }
        piVar1 = piVar7 + 4;
        piVar6 = piVar7;
        piVar7 = *(int **)piVar1;
      } while (*(int **)piVar1 != (int *)0x0);
    }
  }
  return;
}


