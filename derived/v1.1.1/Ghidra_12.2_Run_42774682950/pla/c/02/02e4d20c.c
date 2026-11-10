/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4d20c; name: FUN_02e4d20c
 */


void FUN_02e4d20c(long param_1,long param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  do {
    *(undefined1 *)(param_1 + 0x4c) = 0;
    if (*(long *)(param_1 + 0x20) == 0) {
      return;
    }
    piVar2 = (int *)FUN_02e4d874(param_2 + 0x38,uVar1);
    if (piVar2 != (int *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      *piVar2 = (int)*(char *)(param_1 + 0x48);
      piVar2[4] = 0;
      piVar2[5] = 0;
      *(undefined8 *)(piVar2 + 6) = uVar3;
    }
    param_1 = *(long *)(param_1 + 0x20);
  } while (param_1 != 0);
  return;
}


