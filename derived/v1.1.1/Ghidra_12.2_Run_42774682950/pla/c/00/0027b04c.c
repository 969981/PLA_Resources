/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027b04c; name: FUN_0027b04c
 */


/* WARNING: Removing unreachable block (ram,0x0027b0f8) */
/* WARNING: Removing unreachable block (ram,0x0027b184) */

undefined8 FUN_0027b04c(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  lVar5 = *param_1;
  if (*(char *)(*(long *)(lVar5 + 0xa0) + 0x752) != '\0') {
    return 0;
  }
  puVar3 = (undefined8 *)(**(code **)(*(long *)(lVar5 + 0x828) + 0x10))(lVar5 + 0x828,0x40,0x80);
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 **)(*param_1 + 0x418) = puVar3;
  fVar11 = *(float *)(*(long *)(*param_1 + 0xa0) + 0x800);
  lVar5 = *(long *)(*(long *)(*param_1 + 0x238) + 0x2b8);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 4);
    if (0 < (int)uVar1) {
      if (uVar1 == 1) {
        lVar6 = 0;
        fVar12 = fVar11;
      }
      else {
        lVar6 = 0;
        pfVar7 = (float *)(lVar5 + 0x1c);
        do {
          fVar12 = pfVar7[-4];
          if (pfVar7[-4] <= fVar11) {
            fVar12 = fVar11;
          }
          fVar11 = *pfVar7;
          if (*pfVar7 <= fVar12) {
            fVar11 = fVar12;
          }
          lVar6 = lVar6 + 2;
          pfVar7 = pfVar7 + 8;
        } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar6);
        fVar12 = fVar11;
        if ((uVar1 & 1) == 0) goto LAB_0027b140;
      }
      fVar11 = *(float *)(lVar5 + lVar6 * 0x10 + 0xc);
      if (fVar11 <= fVar12) {
        fVar11 = fVar12;
      }
    }
  }
LAB_0027b140:
  *(int *)(puVar3 + 6) = (int)fVar11;
  fVar11 = (float)*(int *)(*(long *)(*param_1 + 0xa0) + 0x8b8);
  lVar5 = *(long *)(*(long *)(*param_1 + 0x238) + 0x2c0);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 4);
    if (0 < (int)uVar1) {
      if (uVar1 == 1) {
        lVar6 = 0;
        fVar12 = fVar11;
      }
      else {
        lVar6 = 0;
        pfVar7 = (float *)(lVar5 + 0x1c);
        do {
          fVar12 = pfVar7[-4];
          if (pfVar7[-4] <= fVar11) {
            fVar12 = fVar11;
          }
          fVar11 = *pfVar7;
          if (*pfVar7 <= fVar12) {
            fVar11 = fVar12;
          }
          lVar6 = lVar6 + 2;
          pfVar7 = pfVar7 + 8;
        } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar6);
        fVar12 = fVar11;
        if ((uVar1 & 1) == 0) goto LAB_0027b1cc;
      }
      fVar11 = *(float *)(lVar5 + lVar6 * 0x10 + 0xc);
      if (fVar11 <= fVar12) {
        fVar11 = fVar12;
      }
    }
  }
LAB_0027b1cc:
  *(int *)((long)puVar3 + 0x34) = (int)fVar11;
  *(undefined4 *)(puVar3 + 7) = 0;
  lVar5 = *(long *)(*(long *)(*param_1 + 0x238) + 0x338);
  *(undefined4 *)puVar3 = *(undefined4 *)(lVar5 + 0x1c);
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(lVar5 + 0x20);
  puVar3[1] = 0;
  uVar4 = FUN_0026de04(*param_1,4,0x60);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  lVar5 = *param_1;
  lVar9 = *(long *)PTR_DAT_04372f28;
  lVar10 = *(long *)(*(long *)(lVar5 + 0x238) + 0x338);
  lVar6 = *(long *)(lVar5 + 0x418);
  iVar8 = (int)*(float *)(lVar10 + 0x14);
  iVar2 = FUN_0027d12c(lVar5,iVar8);
  iVar2 = *(int *)(lVar5 + 0x230) + iVar2;
  *(int *)(lVar6 + 0x28) = iVar2;
  iVar8 = (iVar8 + (iVar8 + -1) * (int)*(float *)(lVar10 + 0x10)) * 2;
  *(int *)(lVar6 + 0x20) = iVar8;
  iVar8 = iVar8 * iVar2;
  iVar2 = *(int *)(lVar9 + 0x18);
  *(undefined1 *)(lVar6 + 0x10) = 0;
  *(int *)(lVar6 + 0x24) = iVar8 * iVar2;
  if (iVar8 != 0) {
    uVar4 = FUN_0026de48(lVar5,*(undefined4 *)(lVar9 + 0x18),(long)iVar8 * 0x50);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(lVar6 + 0x10) = 1;
      return 1;
    }
    if (*(char *)(lVar6 + 0x10) != '\0') {
      return 1;
    }
  }
  FUN_00271760(*param_1,0x10000);
  FUN_00271770("[Stripe] Memory Allocate Error!! : %d\n",0x38);
  return 0;
}


