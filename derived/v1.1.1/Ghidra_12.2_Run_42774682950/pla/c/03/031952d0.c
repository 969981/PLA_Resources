/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031952d0; name: FUN_031952d0
 */


undefined8 FUN_031952d0(long param_1,int param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  undefined8 unaff_x19;
  short *psVar11;
  bool bVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (param_2 < *(int *)(param_1 + 0x20)) {
    lVar9 = *(long *)(param_1 + 0x18);
    iVar6 = param_2;
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar6 = *(int *)(*(long *)(param_1 + 0x90) + (long)param_2 * 4);
    }
    if (iVar6 != -1) {
      lVar9 = *(long *)(param_1 + 0xb0);
      param_2 = iVar6;
    }
  }
  else {
    lVar9 = *(long *)(param_1 + 0xd0);
    param_2 = param_2 - *(int *)(param_1 + 0x20);
  }
  piVar1 = (int *)(lVar9 + (long)param_2 * 0x10);
  iVar6 = *piVar1;
  iVar5 = *(int *)(param_1 + 0x30);
  lVar7 = *(long *)(param_1 + 0x28);
  if (iVar6 < iVar5) {
    iVar10 = iVar6;
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar10 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar6 * 4);
    }
    lVar13 = lVar7;
    if (iVar10 != -1) {
      lVar13 = *(long *)(param_1 + 0xc0);
      iVar6 = iVar10;
    }
  }
  else {
    lVar13 = *(long *)(param_1 + 0xe0);
    iVar6 = iVar6 - iVar5;
  }
  iVar6 = *(int *)(lVar13 + (long)iVar6 * 0x14);
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar6 * 0x10);
  if (*(int *)(param_1 + 0x40) <= iVar6) {
    puVar2 = (undefined8 *)
             (*(long *)(param_1 + 0xf0) + (long)(iVar6 - *(int *)(param_1 + 0x40)) * 0x10);
  }
  uStack_78 = puVar2[1];
  local_80 = *puVar2;
  iVar6 = *piVar1 + 1;
  psVar11 = (short *)(lVar9 + (long)param_2 * 0x10 + 8);
  if (iVar6 < *piVar1 + (int)*psVar11 + -1) {
    fVar16 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
    lVar9 = (long)iVar6;
    lVar13 = (lVar9 + (long)iVar6 * 4) * 4;
    fVar15 = ABS(fVar16 + -0.5);
    fVar16 = ABS(fVar16 + -0.5);
    bVar12 = false;
    while( true ) {
      if (lVar9 < iVar5) {
        iVar5 = iVar6;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar5 = *(int *)(*(long *)(param_1 + 0x70) + lVar9 * 4);
        }
        if (iVar5 == -1) {
          piVar8 = (int *)(lVar7 + lVar9 * 0x14);
        }
        else {
          piVar8 = (int *)(*(long *)(param_1 + 0xc0) + (long)iVar5 * 0x14);
        }
      }
      else {
        piVar8 = (int *)(*(long *)(param_1 + 0xe0) + (long)iVar5 * -0x14 + lVar13);
      }
      iVar5 = *piVar8;
      iVar10 = piVar8[1];
      iVar4 = *(int *)(param_1 + 0x40);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar5 * 0x10);
      if (iVar4 <= iVar5) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0xf0) + (long)(iVar5 - iVar4) * 0x10);
      }
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar10 * 0x10);
      if (iVar4 <= iVar10) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0xf0) + (long)(iVar10 - iVar4) * 0x10);
      }
      uStack_88 = puVar2[1];
      uStack_90 = *puVar2;
      uStack_98 = puVar3[1];
      local_a0 = *puVar3;
      local_a8 = CONCAT44(fVar16 + 0.5,fVar15 + 0.5);
      iVar5 = FUN_001d42c0(param_3,&local_80,&uStack_90,&local_a0,0,&local_a8,auStack_c0);
      if (iVar5 == 0) {
      }
      else {
        fVar14 = ABS((float)local_a8 + -0.5);
        if (fVar14 < fVar15) {
          bVar12 = true;
          unaff_x19 = local_a8;
          fVar15 = fVar14;
          fVar16 = ABS((float)((ulong)local_a8 >> 0x20) + -0.5);
        }
      }
      lVar9 = lVar9 + 1;
      if ((int)*psVar11 + *piVar1 + -1 <= lVar9) break;
      lVar7 = *(long *)(param_1 + 0x28);
      lVar13 = lVar13 + 0x14;
      iVar6 = iVar6 + 1;
      iVar5 = *(int *)(param_1 + 0x30);
    }
    if (bVar12) {
      *param_4 = unaff_x19;
      return 1;
    }
  }
  return 0;
}


