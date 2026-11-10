/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03193128; name: thunk_FUN_03193130
 */


void thunk_FUN_03193130(long param_1,int *param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  sVar4 = (short)param_2[2];
  puVar5 = (undefined8 *)*param_3;
  iVar7 = *param_2;
  lVar8 = (long)iVar7;
  uVar9 = (long)(int)sVar4 & 0xfffffffffffffffe;
  if (0 < (int)uVar9) {
    lVar10 = 0;
    lVar11 = lVar8 * 0x14;
    puVar6 = puVar5;
    lVar13 = lVar8;
    do {
      if (lVar13 < *(int *)(param_1 + 0x30)) {
        if (*(int *)(param_1 + 0x78) == 0) {
          iVar12 = (int)lVar13;
        }
        else {
          iVar12 = *(int *)(*(long *)(param_1 + 0x70) + lVar13 * 4);
        }
        if (iVar12 == -1) {
          piVar14 = (int *)(*(long *)(param_1 + 0x28) + (lVar10 + lVar8) * 0x14);
        }
        else {
          piVar14 = (int *)(*(long *)(param_1 + 0xc0) + (long)iVar12 * 0x14);
        }
      }
      else {
        piVar14 = (int *)(*(long *)(param_1 + 0xe0) + (long)*(int *)(param_1 + 0x30) * -0x14 +
                         lVar11);
      }
      iVar12 = *piVar14;
      iVar2 = piVar14[1];
      lVar10 = lVar10 + 2;
      lVar11 = lVar11 + 0x28;
      iVar3 = *(int *)(param_1 + 0x40);
      lVar13 = lVar13 + 2;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar12 * 0x10);
      if (iVar3 <= iVar12) {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0xf0) + (long)(iVar12 - iVar3) * 0x10);
      }
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar2 * 0x10);
      if (iVar3 <= iVar2) {
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0xf0) + (long)(iVar2 - iVar3) * 0x10);
      }
      uVar15 = *puVar1;
      uVar17 = puVar5[1];
      uVar16 = *puVar5;
      puVar5 = puVar6 + 4;
      puVar6[1] = puVar1[1];
      *puVar6 = uVar15;
      puVar6[3] = uVar17;
      puVar6[2] = uVar16;
      puVar6 = puVar5;
    } while (lVar10 < (long)uVar9);
  }
  if (((int)sVar4 & 1U) != 0) {
    iVar7 = iVar7 + sVar4 + -1;
    if (iVar7 < *(int *)(param_1 + 0x30)) {
      lVar8 = *(long *)(param_1 + 0x28);
      iVar12 = iVar7;
      if (*(int *)(param_1 + 0x78) != 0) {
        iVar12 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar7 * 4);
      }
      if (iVar12 != -1) {
        lVar8 = *(long *)(param_1 + 0xc0);
        iVar7 = iVar12;
      }
    }
    else {
      lVar8 = *(long *)(param_1 + 0xe0);
      iVar7 = iVar7 - *(int *)(param_1 + 0x30);
    }
    iVar7 = *(int *)(lVar8 + (long)iVar7 * 0x14);
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar7 * 0x10);
    if (*(int *)(param_1 + 0x40) <= iVar7) {
      puVar6 = (undefined8 *)
               (*(long *)(param_1 + 0xf0) + (long)(iVar7 - *(int *)(param_1 + 0x40)) * 0x10);
    }
    uVar15 = *puVar6;
    puVar5[1] = puVar6[1];
    *puVar5 = uVar15;
  }
  puVar5 = (undefined8 *)*param_3;
  lVar8 = param_3[1];
  uVar15 = *puVar5;
  puVar5[(long)(int)lVar8 * 2 + -1] = puVar5[1];
  puVar5[(long)(int)lVar8 * 2 + -2] = uVar15;
  return;
}


