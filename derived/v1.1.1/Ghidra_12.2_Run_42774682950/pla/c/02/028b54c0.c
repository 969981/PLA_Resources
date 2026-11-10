/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b54c0; name: FUN_028b54c0
 */


void FUN_028b54c0(long param_1)

{
  int *piVar1;
  float fVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar4 = *(uint **)(*(long *)(param_1 + 0x10) + 0x250);
    piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
    fVar2 = *(float *)(param_1 + 0x44);
    if (*(char *)(param_1 + 0x51) != '\0') {
      fVar2 = (float)(int)*(float *)(param_1 + 0x44);
    }
    if (((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar5 != 0)) &&
       (puVar4 = (uint *)((long)piVar1 + uVar5), piVar1 = (int *)((long)puVar4 + (ulong)*puVar4),
       piVar1 != (int *)0x0)) {
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar5 == 0)) {
        lVar3 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar1 + uVar5);
        lVar3 = (long)puVar4 + (ulong)*puVar4;
      }
      FUN_028b55c4(fVar2,param_1 + 0x60,lVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar5 == 0)) {
        lVar3 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar1 + uVar5);
        lVar3 = (long)puVar4 + (ulong)*puVar4;
      }
      FUN_028b572c(fVar2,param_1 + 0x70,lVar3);
      return;
    }
  }
  return;
}


