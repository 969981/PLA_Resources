/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191f6c0; name: FUN_0191f6c0
 */


void FUN_0191f6c0(long param_1)

{
  long *plVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined8 local_38;
  
  puVar4 = *(uint **)(*(long *)(param_1 + 0x130) + 0x250);
  piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 == 0)) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)((long)piVar3 + uVar5);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  }
  plVar1 = (long *)(param_1 + 0x348);
  if (*(long *)(param_1 + 0x3a0) != 0) {
    FUN_01924324(plVar1,*(undefined8 *)(param_1 + 0x378));
    uVar5 = *(ulong *)(param_1 + 0x350);
    *(undefined8 *)(param_1 + 0x378) = 0;
    if (uVar5 != 0) {
      uVar6 = uVar5 & 3;
      if (uVar5 - 1 < 3) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        do {
          lVar7 = lVar8 * 8;
          lVar8 = lVar8 + 4;
          *(undefined8 *)(*plVar1 + lVar7) = 0;
          *(undefined8 *)(*plVar1 + lVar7 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar7 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar7 + 0x18) = 0;
        } while (uVar5 - uVar6 != lVar8);
      }
      if (uVar6 != 0) {
        lVar8 = lVar8 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar8) = 0;
          uVar6 = uVar6 - 1;
          lVar8 = lVar8 + 8;
        } while (uVar6 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x3a0) = 0;
  }
  fVar10 = (float)NEON_ucvtf(*puVar4);
  FUN_01924468(plVar1,(long)(fVar10 / *(float *)(param_1 + 0x3a8)));
  uVar2 = *puVar4;
  if (uVar2 != 0) {
    lVar8 = 0;
    iVar9 = 0;
    do {
      uVar5 = (ulong)*(uint *)((long)puVar4 + lVar8 + 4);
      lVar7 = lVar8 + (uVar5 - (long)*(int *)((long)puVar4 + lVar8 + uVar5 + 4));
      if ((*(ushort *)((long)puVar4 + lVar7 + 4) < 5) ||
         (uVar6 = (ulong)*(ushort *)((long)puVar4 + lVar7 + 8), uVar6 == 0)) {
        local_38 = 0;
      }
      else {
        local_38 = *(undefined8 *)((long)puVar4 + lVar8 + uVar5 + uVar6 + 4);
      }
      piVar3 = (int *)FUN_019204b0(plVar1,&local_38);
      lVar8 = lVar8 + 4;
      *piVar3 = iVar9;
      iVar9 = iVar9 + 1;
    } while ((ulong)uVar2 * 4 != lVar8);
  }
  return;
}


