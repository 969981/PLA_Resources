/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191f34c; name: FUN_0191f34c
 */


void FUN_0191f34c(long param_1)

{
  long *plVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  long local_38;
  
  puVar5 = *(uint **)(*(long *)(param_1 + 0xd0) + 0x250);
  piVar3 = (int *)((long)puVar5 + (ulong)*puVar5);
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar6 == 0)) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = (uint *)((long)piVar3 + uVar6);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
  }
  plVar1 = (long *)(param_1 + 0x278);
  if (*(long *)(param_1 + 0x2d0) != 0) {
    FUN_01924324(plVar1,*(undefined8 *)(param_1 + 0x2a8));
    uVar6 = *(ulong *)(param_1 + 0x280);
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    if (uVar6 != 0) {
      uVar7 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        do {
          lVar8 = lVar9 * 8;
          lVar9 = lVar9 + 4;
          *(undefined8 *)(*plVar1 + lVar8) = 0;
          *(undefined8 *)(*plVar1 + lVar8 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar8 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar8 + 0x18) = 0;
        } while (uVar6 - uVar7 != lVar9);
      }
      if (uVar7 != 0) {
        lVar9 = lVar9 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar9) = 0;
          uVar7 = uVar7 - 1;
          lVar9 = lVar9 + 8;
        } while (uVar7 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x2d0) = 0;
  }
  fVar11 = (float)NEON_ucvtf(*puVar5);
  FUN_01924468(plVar1,(long)(fVar11 / *(float *)(param_1 + 0x2d8)));
  uVar2 = *puVar5;
  if (uVar2 != 0) {
    lVar9 = 0;
    iVar10 = 0;
    do {
      uVar6 = (ulong)*(uint *)((long)puVar5 + lVar9 + 4);
      lVar8 = lVar9 + (uVar6 - (long)*(int *)((long)puVar5 + lVar9 + uVar6 + 4));
      if ((*(ushort *)((long)puVar5 + lVar8 + 4) < 5) ||
         (uVar7 = (ulong)*(ushort *)((long)puVar5 + lVar8 + 8), uVar7 == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((long)puVar5 + lVar9 + uVar6 + uVar7 + 4);
      }
      local_38 = (long)iVar4;
      piVar3 = (int *)FUN_019207c8(plVar1,&local_38);
      lVar9 = lVar9 + 4;
      *piVar3 = iVar10;
      iVar10 = iVar10 + 1;
    } while ((ulong)uVar2 * 4 != lVar9);
  }
  return;
}


