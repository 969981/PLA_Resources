/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03195a20; name: FUN_03195a20
 */


undefined8
FUN_03195a20(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

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
  long lVar11;
  short *psVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
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
    lVar11 = lVar7;
    if (iVar10 != -1) {
      lVar11 = *(long *)(param_1 + 0xc0);
      iVar6 = iVar10;
    }
  }
  else {
    lVar11 = *(long *)(param_1 + 0xe0);
    iVar6 = iVar6 - iVar5;
  }
  iVar6 = *(int *)(lVar11 + (long)iVar6 * 0x14);
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar6 * 0x10);
  if (*(int *)(param_1 + 0x40) <= iVar6) {
    puVar2 = (undefined8 *)
             (*(long *)(param_1 + 0xf0) + (long)(iVar6 - *(int *)(param_1 + 0x40)) * 0x10);
  }
  uStack_68 = puVar2[1];
  local_70 = *puVar2;
  iVar6 = *piVar1 + 1;
  psVar12 = (short *)(lVar9 + (long)param_2 * 0x10 + 8);
  if (iVar6 < *piVar1 + (int)*psVar12 + -1) {
    lVar9 = (long)iVar6;
    uVar14 = NEON_fmov(0x3f800000,4);
    bVar13 = false;
    lVar11 = (lVar9 + (long)iVar6 * 4) * 4;
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
        piVar8 = (int *)(*(long *)(param_1 + 0xe0) + (long)iVar5 * -0x14 + lVar11);
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
      uStack_78 = puVar2[1];
      uStack_80 = *puVar2;
      uStack_88 = puVar3[1];
      local_90 = *puVar3;
      local_98 = uVar14;
      iVar5 = FUN_001d3f30(param_3,param_4,&local_70,&uStack_80,&local_90,&local_98,auStack_b0);
      if ((iVar5 != 0) && ((float)local_98 < (float)uVar14)) {
        bVar13 = true;
        uVar14 = local_98;
      }
      lVar9 = lVar9 + 1;
      if ((int)*psVar12 + *piVar1 + -1 <= lVar9) break;
      lVar7 = *(long *)(param_1 + 0x28);
      lVar11 = lVar11 + 0x14;
      iVar6 = iVar6 + 1;
      iVar5 = *(int *)(param_1 + 0x30);
    }
    if (bVar13) {
      *param_5 = uVar14;
      return 1;
    }
  }
  return 0;
}


