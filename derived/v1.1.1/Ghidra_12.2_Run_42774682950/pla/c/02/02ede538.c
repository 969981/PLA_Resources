/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ede538; name: FUN_02ede538
 */


int * FUN_02ede538(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  piVar3 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar2 = piVar3;
  if (uVar1 == 0) {
LAB_02ede55c:
    if (piVar2 != piVar3 + (ulong)uVar1 * 10) {
      return piVar2 + 4;
    }
  }
  else {
    lVar4 = (ulong)uVar1 * 0x28;
    do {
      if ((*piVar2 == (int)param_2) && (*(long *)(piVar2 + 2) == param_3)) goto LAB_02ede55c;
      lVar4 = lVar4 + -0x28;
      piVar2 = piVar2 + 10;
    } while (lVar4 != 0);
  }
  piVar3 = (int *)FUN_02ede308();
  piVar2 = piVar3;
  if (piVar3 != (int *)0x0) {
    piVar2 = piVar3 + 4;
    *(undefined8 *)piVar3 = param_2;
    *(long *)(piVar3 + 2) = param_3;
  }
  return piVar2;
}


