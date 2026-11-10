/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6c820; name: FUN_02e6c820
 */


void FUN_02e6c820(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 4);
  piVar2 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    piVar4 = piVar3;
    if (piVar3 != param_2) {
      do {
        piVar2 = piVar4;
        piVar4 = *(int **)piVar2;
      } while (piVar4 != (int *)0x0 && piVar4 != param_2);
    }
    if (piVar4 != (int *)0x0) {
      piVar1 = param_1 + 4;
      if (piVar4 != piVar3) {
        piVar1 = piVar2;
      }
      *(undefined8 *)piVar1 = *(undefined8 *)piVar4;
      if (*(int **)(param_1 + 2) == piVar4) {
        *(int **)(param_1 + 2) = piVar2;
      }
      *param_1 = *param_1 + -1;
    }
  }
  return;
}


