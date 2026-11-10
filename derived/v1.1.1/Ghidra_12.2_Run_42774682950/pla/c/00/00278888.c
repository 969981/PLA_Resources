/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00278888; name: FUN_00278888
 */


void FUN_00278888(long param_1,long param_2,undefined8 param_3)

{
  uint *puVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  piVar4 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 8));
  iVar5 = 0;
  if (*(uint *)(param_2 + 8) != 0xffffffff && piVar4 != (int *)0x0) {
    do {
      puVar1 = (uint *)(piVar4 + 3);
      if (*piVar4 == 0x54455345) {
        iVar5 = iVar5 + 1;
      }
      piVar2 = (int *)((long)piVar4 + (ulong)*puVar1);
      piVar4 = (int *)0x0;
      if (*puVar1 != 0xffffffff) {
        piVar4 = piVar2;
      }
    } while (piVar4 != (int *)0x0);
  }
  *(int *)(param_1 + 0x4c) = iVar5;
  pvVar3 = (void *)(**(code **)(**(long **)(param_1 + 0x458) + 0x10))
                             (*(long **)(param_1 + 0x458),(long)iVar5 * 0x38,0x80);
  *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x460) + (long)iVar5 * 0x38;
  *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
  *(void **)(param_1 + 0x58) = pvVar3;
  memset(pvVar3,0,(long)*(int *)(param_1 + 0x4c) * 0x38);
  lVar6 = (long)*(int *)(param_1 + 0x4c) * 8;
  pvVar3 = (void *)(**(code **)(**(long **)(param_1 + 0x458) + 0x10))
                             (*(long **)(param_1 + 0x458),lVar6,0x80);
  *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
  *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x460) + lVar6;
  *(void **)(param_1 + 0x60) = pvVar3;
  memset(pvVar3,0,(long)*(int *)(param_1 + 0x4c) << 3);
  if (*(uint *)(param_2 + 8) != 0xffffffff) {
    piVar4 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 8));
    while (piVar4 != (int *)0x0) {
      if (*piVar4 == 0x54455345) {
        if (piVar4 == (int *)0x0) {
          return;
        }
        uVar7 = 0;
        do {
          *(int **)(*(long *)(param_1 + 0x58) + uVar7 * 0x38 + 8) = piVar4;
          FUN_00278f60(param_1,*(long *)(param_1 + 0x58) + uVar7 * 0x38,param_3);
          puVar1 = (uint *)(piVar4 + 3);
          piVar2 = (int *)((long)piVar4 + (ulong)*puVar1);
          uVar7 = (ulong)((int)uVar7 + 1);
          piVar4 = (int *)0x0;
          if (*puVar1 != 0xffffffff) {
            piVar4 = piVar2;
          }
        } while (piVar4 != (int *)0x0);
        return;
      }
      puVar1 = (uint *)(piVar4 + 3);
      piVar2 = (int *)((long)piVar4 + (ulong)*puVar1);
      piVar4 = (int *)0x0;
      if (*puVar1 != 0xffffffff) {
        piVar4 = piVar2;
      }
    }
  }
  return;
}


