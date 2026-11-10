/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14fc4; name: FUN_02a14fc4
 */


void FUN_02a14fc4(long param_1,char param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  
  piVar1 = *(int **)(*(long *)(param_1 + 0x10) + 0x1e8);
  piVar2 = piVar1 + 1;
  if ((char)*piVar2 == param_2) {
    return;
  }
  if ((char)*piVar2 == '\x05') {
    lVar3 = 0;
  }
  else {
    piVar2 = (int *)((long)piVar1 + 5);
    if (*(char *)piVar2 == param_2) {
      return;
    }
    if (*(char *)piVar2 == '\x05') {
      lVar3 = 1;
    }
    else {
      piVar2 = (int *)((long)piVar1 + 6);
      if (*(char *)piVar2 == param_2) {
        return;
      }
      if (*(char *)piVar2 == '\x05') {
        lVar3 = 2;
      }
      else {
        piVar2 = (int *)((long)piVar1 + 7);
        if (*(char *)piVar2 == param_2) {
          return;
        }
        if (*(char *)piVar2 == '\x05') {
          lVar3 = 3;
        }
        else {
          piVar2 = piVar1 + 2;
          if ((char)*piVar2 == param_2) {
            return;
          }
          if ((char)*piVar2 != '\x05') {
            return;
          }
          lVar3 = 4;
        }
      }
    }
  }
  *(char *)piVar2 = param_2;
  piVar1[lVar3 + 3] = param_3;
  *piVar1 = *piVar1 + 1;
  return;
}


