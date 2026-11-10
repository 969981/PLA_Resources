/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0167448c; name: FUN_0167448c
 */


void FUN_0167448c(long param_1)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_48;
  
  puVar10 = *(uint **)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x250);
  uVar5 = *puVar10;
  piVar1 = (int *)((long)puVar10 + (ulong)uVar5);
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar11 != 0)) {
    uVar12 = (ulong)*(uint *)((long)piVar1 + uVar11);
    puVar2 = (uint *)((long)((long)piVar1 + uVar11) + uVar12);
    if (puVar2 != (uint *)0x0) {
      uVar6 = *puVar2;
      FUN_01618394(param_1 + 0x80,(long)((float)uVar6 / *(float *)(param_1 + 0xe0)));
      if (uVar6 != 0) {
        lVar3 = uVar5 + uVar12 + uVar11;
        lVar9 = 0;
        do {
          uVar11 = (ulong)*(uint *)((long)puVar10 + lVar9 + lVar3 + 4);
          lVar4 = lVar9 + uVar11;
          lVar7 = lVar9 + (uVar11 - (long)*(int *)((long)puVar10 + lVar9 + uVar11 + lVar3 + 4)) +
                          lVar3;
          if ((*(ushort *)((long)puVar10 + lVar7 + 4) < 5) ||
             (uVar12 = (ulong)*(ushort *)((long)puVar10 + lVar7 + 8), uVar12 == 0)) {
            local_48 = 0;
          }
          else {
            local_48 = *(undefined8 *)((long)puVar10 + lVar9 + uVar11 + uVar12 + lVar3 + 4);
          }
          plVar8 = (long *)FUN_01617a30(param_1 + 0x80,&local_48);
          lVar9 = lVar9 + 4;
          *plVar8 = (long)puVar10 + lVar4 + lVar3 + 4;
        } while ((ulong)uVar6 * 4 != lVar9);
      }
    }
  }
  return;
}


