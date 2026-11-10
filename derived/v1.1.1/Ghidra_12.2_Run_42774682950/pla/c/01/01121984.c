/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01121984; name: FUN_01121984
 */


void FUN_01121984(long param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  piVar1 = (int *)(param_1 + 0x7cd8);
  iVar2 = *(int *)(param_2 + 8);
  piVar6 = piVar1;
  if ((((((*piVar1 == iVar2) ||
         (piVar3 = (int *)(param_1 + 0x7ce8), piVar6 = piVar3, *piVar3 == iVar2)) ||
        (piVar4 = (int *)(param_1 + 0x7cf8), piVar6 = piVar4, *piVar4 == iVar2)) ||
       ((piVar5 = (int *)(param_1 + 0x7d08), piVar6 = piVar5, *piVar5 == iVar2 ||
        (piVar7 = (int *)(param_1 + 0x7d18), piVar6 = piVar7, *piVar7 == iVar2)))) ||
      ((piVar8 = (int *)(param_1 + 0x7d28), piVar6 = piVar8, *piVar8 == iVar2 ||
       ((piVar9 = (int *)(param_1 + 0x7d38), piVar6 = piVar9, *piVar9 == iVar2 ||
        (piVar10 = (int *)(param_1 + 0x7d48), piVar6 = piVar10, *piVar10 == iVar2)))))) ||
     ((piVar11 = (int *)(param_1 + 0x7d58), piVar6 = piVar11, *piVar11 == iVar2 ||
      (piVar6 = (int *)(param_1 + 0x7d68), *piVar6 == iVar2)))) {
    *(undefined8 *)(piVar6 + 2) = param_3;
    return;
  }
  *(undefined8 *)piVar1 = *(undefined8 *)piVar3;
  *(undefined8 *)(param_1 + 0x7ce0) = *(undefined8 *)(param_1 + 0x7cf0);
  *(undefined8 *)piVar3 = *(undefined8 *)piVar4;
  *(undefined8 *)(param_1 + 0x7cf0) = *(undefined8 *)(param_1 + 32000);
  *(undefined8 *)piVar4 = *(undefined8 *)piVar5;
  *(undefined8 *)(param_1 + 32000) = *(undefined8 *)(param_1 + 0x7d10);
  *(undefined8 *)piVar5 = *(undefined8 *)piVar7;
  *(undefined8 *)(param_1 + 0x7d10) = *(undefined8 *)(param_1 + 0x7d20);
  *(undefined8 *)piVar7 = *(undefined8 *)piVar8;
  *(undefined8 *)(param_1 + 0x7d20) = *(undefined8 *)(param_1 + 0x7d30);
  *(undefined8 *)piVar8 = *(undefined8 *)piVar9;
  *(undefined8 *)(param_1 + 0x7d30) = *(undefined8 *)(param_1 + 0x7d40);
  *(undefined8 *)piVar9 = *(undefined8 *)piVar10;
  *(undefined8 *)(param_1 + 0x7d40) = *(undefined8 *)(param_1 + 0x7d50);
  *(undefined8 *)piVar10 = *(undefined8 *)piVar11;
  *(undefined8 *)(param_1 + 0x7d50) = *(undefined8 *)(param_1 + 0x7d60);
  *(undefined8 *)piVar11 = *(undefined8 *)piVar6;
  *(undefined8 *)(param_1 + 0x7d60) = *(undefined8 *)(param_1 + 0x7d70);
  *(int *)(param_1 + 0x7d68) = iVar2;
  *(undefined8 *)(param_1 + 0x7d70) = param_3;
  return;
}


