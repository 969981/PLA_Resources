/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016148a0; name: FUN_016148a0
 */


void FUN_016148a0(long param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  undefined8 local_38;
  
  puVar5 = *(uint **)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x250);
  piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = (uint *)((long)piVar1 + uVar7);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
  }
  fVar10 = (float)NEON_ucvtf(*puVar5);
  FUN_01615e98(param_1 + 0x100,(long)(fVar10 / *(float *)(param_1 + 0x160)));
  if (*puVar5 != 0) {
    lVar9 = 0;
    uVar7 = 1;
    do {
      uVar6 = (ulong)puVar5[uVar7];
      lVar2 = lVar9 + (uVar6 - (long)*(int *)((long)puVar5 + uVar7 * 4 + uVar6));
      if ((*(ushort *)((long)puVar5 + lVar2 + 4) < 5) ||
         (uVar8 = (ulong)*(ushort *)((long)puVar5 + lVar2 + 8), uVar8 == 0)) {
        local_38 = 0;
      }
      else {
        local_38 = *(undefined8 *)((long)puVar5 + lVar9 + uVar6 + uVar8 + 4);
      }
      plVar4 = (long *)FUN_016149bc(param_1 + 0x100,&local_38);
      *plVar4 = (long)puVar5 + lVar9 + uVar6 + 4;
      bVar3 = uVar7 < *puVar5;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 4;
    } while (bVar3);
  }
  return;
}


