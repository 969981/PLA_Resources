/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea815c; name: FUN_02ea815c
 */


int * FUN_02ea815c(int *param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  
  piVar2 = DAT_0440a418;
  if (DAT_0440a420 != 0) {
    lVar3 = (ulong)DAT_0440a420 * 0x28;
    do {
      if (((*piVar2 == *param_1) && (piVar2[4] == param_1[4])) &&
         (*(long *)(piVar2 + 2) == *(long *)(param_1 + 2))) goto LAB_02ea81d0;
      lVar3 = lVar3 + -0x28;
      piVar2 = piVar2 + 10;
    } while (lVar3 != 0);
    piVar2 = DAT_0440a418 + (ulong)DAT_0440a420 * 10;
  }
LAB_02ea81d0:
  piVar1 = (int *)0x0;
  if (piVar2 != DAT_0440a418 + (ulong)DAT_0440a420 * 10) {
    piVar1 = piVar2 + 6;
  }
  return piVar1;
}


