/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00261934; name: FUN_00261934
 */


void FUN_00261934(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  ushort *puVar2;
  long lVar3;
  long *plVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  
  if (*(int *)(param_2 + 0xc0) == 0) {
    return;
  }
  fVar15 = *(float *)PTR_FloatPi_04372db0;
  uVar9 = 0;
  puVar2 = *(ushort **)(param_2 + 0xa0);
  lVar3 = *(long *)(param_2 + 0xa8);
  uVar5 = *puVar2;
  puVar11 = puVar2;
  while (uVar5 == 0) {
LAB_00261a1c:
    uVar5 = puVar2[uVar9 * 0x50 + 8];
    uVar7 = (ulong)uVar5;
    if (uVar5 != 0) {
      lVar12 = 0;
      uVar13 = 0;
      plVar1 = (long *)(lVar3 + uVar9 * 0x30 + 0x10);
      lVar10 = *plVar1;
      lVar8 = *(long *)(lVar10 + 8);
      lVar3 = lVar10;
      while( true ) {
        if (lVar8 != 0) {
          fVar14 = (float)FUN_0025ae80(param_1,lVar8 + 0x10);
          *(float *)(lVar10 + lVar12) = fVar14 * 0.5;
          fVar14 = acosf(-2.0 / (fVar14 * 0.5) + 1.0);
          if (0.0 < fVar14) {
            iVar6 = (int)(fVar15 / fVar14) + 1;
          }
          else {
            iVar6 = 1;
          }
          *(int *)(lVar3 + 4) = iVar6;
          uVar7 = (ulong)puVar2[uVar9 * 0x50 + 8];
        }
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x10;
        if (uVar7 <= uVar13) break;
        lVar10 = *plVar1;
        lVar3 = lVar10 + lVar12;
        lVar8 = *(long *)(lVar3 + 8);
      }
    }
    uVar9 = uVar9 + 1;
    if (*(uint *)(param_2 + 0xc0) <= uVar9) {
      return;
    }
    puVar2 = *(ushort **)(param_2 + 0xa0);
    lVar3 = *(long *)(param_2 + 0xa8);
    puVar11 = puVar2 + uVar9 * 0x50;
    uVar5 = *puVar11;
  }
  lVar12 = 0;
  plVar1 = (long *)(lVar3 + uVar9 * 0x30 + 0x18);
  plVar4 = *(long **)*plVar1;
  do {
    if (plVar4 == (long *)0x0) {
      if ((ulong)uVar5 <= lVar12 + 1U) goto LAB_00261a1c;
    }
    else {
      (**(code **)(*plVar4 + 0x28))(param_1,plVar4,param_3);
      uVar5 = *puVar11;
      if ((ulong)uVar5 <= lVar12 + 1U) goto LAB_00261a1c;
    }
    lVar12 = lVar12 + 1;
    plVar4 = *(long **)(*plVar1 + lVar12 * 8);
  } while( true );
}


