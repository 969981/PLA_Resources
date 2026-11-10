/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02efe350; name: FUN_02efe350
 */


int * FUN_02efe350(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  piVar3 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar2 = piVar3;
  if (uVar1 == 0) {
LAB_02efe3b4:
    if (piVar2 != piVar3 + (ulong)uVar1 * 4) goto LAB_02efe3d0;
  }
  else {
    lVar4 = (ulong)uVar1 << 4;
    do {
      if ((*piVar2 == (int)param_2) && (piVar2[1] == (int)((ulong)param_2 >> 0x20)))
      goto LAB_02efe3b4;
      lVar4 = lVar4 + -0x10;
      piVar2 = piVar2 + 4;
    } while (lVar4 != 0);
  }
  piVar2 = (int *)FUN_02f01810();
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  *(undefined8 *)piVar2 = param_2;
LAB_02efe3d0:
  *(undefined8 *)(piVar2 + 2) = *param_3;
  return piVar2 + 2;
}


