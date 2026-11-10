/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032da7c8; name: FUN_032da7c8
 */


void FUN_032da7c8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  *(uint *)(param_1 + 0x20) = -(uint)(*(int *)(param_1 + 0x40) < 1);
  iVar3 = *(int *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < iVar3) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar5);
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
                (*(long **)(param_1 + 0x30),*puVar1,puVar1[1]);
      iVar3 = *(int *)(param_1 + 0x50);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar4 < iVar3);
  }
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar4 = 0;
    do {
      (**(code **)(*plVar2 + 0x18))
                (plVar2,*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar4 * 8),
                 *(undefined8 *)(param_1 + 0x18));
      lVar4 = lVar4 + 1;
      plVar2 = *(long **)(param_1 + 0x30);
    } while (lVar4 < *(int *)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    (**(code **)(*plVar2 + 0x18))
              (plVar2,*(long *)(param_1 + 0x38),((ulong)*(uint *)(param_1 + 0x44) & 0x3fffffff) << 3
              );
    plVar2 = *(long **)(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(long *)(param_1 + 0x48) != 0)) {
    (**(code **)(*plVar2 + 0x18))
              (plVar2,*(long *)(param_1 + 0x48),((ulong)*(uint *)(param_1 + 0x54) & 0x3fffffff) << 4
              );
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}


