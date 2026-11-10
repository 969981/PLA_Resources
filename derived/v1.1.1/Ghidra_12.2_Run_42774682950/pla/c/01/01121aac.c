/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01121aac; name: FUN_01121aac
 */


void FUN_01121aac(undefined1 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_2 + 0x7cd8);
  iVar2 = *(int *)(param_3 + 8);
  if ((((((*piVar3 == iVar2) || (piVar3 = (int *)(param_2 + 0x7ce8), *piVar3 == iVar2)) ||
        (piVar3 = (int *)(param_2 + 0x7cf8), *piVar3 == iVar2)) ||
       ((piVar3 = (int *)(param_2 + 0x7d08), *piVar3 == iVar2 ||
        (piVar3 = (int *)(param_2 + 0x7d18), *piVar3 == iVar2)))) ||
      ((piVar3 = (int *)(param_2 + 0x7d28), *piVar3 == iVar2 ||
       ((piVar3 = (int *)(param_2 + 0x7d38), *piVar3 == iVar2 ||
        (piVar3 = (int *)(param_2 + 0x7d48), *piVar3 == iVar2)))))) ||
     ((piVar3 = (int *)(param_2 + 0x7d58), *piVar3 == iVar2 ||
      (piVar3 = (int *)(param_2 + 0x7d68), *piVar3 == iVar2)))) {
    uVar1 = *(undefined8 *)(piVar3 + 2);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)piVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}


