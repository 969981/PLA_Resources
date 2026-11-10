/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f916c; name: FUN_032f916c
 */


void FUN_032f916c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (((iVar1 != 0) && ((**(code **)(**(long **)(param_1 + 8) + 8))(), iVar1 != 1)) &&
     ((**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 8))(), iVar1 != 2)) {
    iVar3 = 2;
    do {
      (**(code **)(*(long *)(*(long *)(param_1 + 8) + (long)iVar3 * 0x38) + 8))();
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x18),*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 8),((ulong)*(uint *)(param_1 + 0x14) & 0x3fffffff) * 0x38)
    ;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}


