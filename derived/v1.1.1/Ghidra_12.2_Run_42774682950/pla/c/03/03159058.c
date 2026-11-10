/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03159058; name: FUN_03159058
 */


ulong FUN_03159058(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  undefined8 uVar12;
  
  uVar7 = FUN_03174f94(param_1 + 0xe);
  if ((uint)uVar7 != 0xffffffff) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + (uVar7 >> 0x16 & 0x3ff) * 0xf0) + 0x20);
    uVar1 = (uint)uVar7 & 0x3fffff;
    uVar11 = uVar1 - *(int *)(lVar8 + 0x30);
    if ((int)uVar1 < *(int *)(lVar8 + 0x30)) {
      if (*(int *)(lVar8 + 0x78) == 0) {
        uVar11 = uVar1;
LAB_031590c8:
        lVar9 = *(long *)(lVar8 + 0xc0);
        goto LAB_031590d4;
      }
      uVar11 = *(uint *)(*(long *)(lVar8 + 0x70) + (ulong)uVar1 * 4);
      if (uVar11 != 0xffffffff) goto LAB_031590c8;
      piVar10 = (int *)(*(long *)(lVar8 + 0x28) + (ulong)uVar1 * 0x14);
    }
    else {
      lVar9 = *(long *)(lVar8 + 0xe0);
LAB_031590d4:
      piVar10 = (int *)(lVar9 + (long)(int)uVar11 * 0x14);
    }
    iVar4 = *piVar10;
    iVar5 = *(int *)(lVar8 + 0x40);
    plVar3 = (long *)(lVar8 + 0x38);
    if (iVar5 <= iVar4) {
      plVar3 = (long *)(lVar8 + 0xf0);
    }
    iVar2 = 0;
    if (iVar5 <= iVar4) {
      iVar2 = iVar5;
    }
    puVar6 = (undefined8 *)(*plVar3 + (long)(iVar4 - iVar2) * 0x10);
    uVar12 = *puVar6;
    if (((float)((ulong)uVar12 >> 0x20) == (float)((ulong)param_1[2] >> 0x20) &&
        (float)uVar12 == (float)param_1[2]) && (float)puVar6[1] == (float)param_1[3]) {
      iVar4 = piVar10[1];
      plVar3 = (long *)(lVar8 + 0x38);
      if (iVar5 <= iVar4) {
        plVar3 = (long *)(lVar8 + 0xf0);
      }
      iVar2 = 0;
      if (iVar5 <= iVar4) {
        iVar2 = iVar5;
      }
      puVar6 = (undefined8 *)(*plVar3 + (long)(iVar4 - iVar2) * 0x10);
      uVar12 = *puVar6;
      if (((float)((ulong)uVar12 >> 0x20) == (float)((ulong)*param_1 >> 0x20) &&
          (float)uVar12 == (float)*param_1) && (float)puVar6[1] == (float)param_1[1])
      goto LAB_03159160;
    }
    *param_3 = 0xffffffff;
  }
  uVar7 = 0xffffffff;
LAB_03159160:
  return uVar7 & 0xffffffff;
}


