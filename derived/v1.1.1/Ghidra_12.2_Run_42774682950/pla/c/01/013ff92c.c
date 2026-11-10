/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ff92c; name: FUN_013ff92c
 */


void FUN_013ff92c(long param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,uint param_8)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  
  puVar15 = (undefined8 *)PTR_DAT_043729f0;
  if (*(char *)param_2[1] != '\0') {
    lVar11 = *(long *)(param_1 + 0x2c8);
    plVar13 = *(long **)(lVar11 + 0x148);
    lVar2 = *(long *)(lVar11 + 0x150);
    lVar14 = *param_2;
    plVar12 = (long *)param_2[3];
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    plVar4 = plVar13;
    if ((lVar2 != 0) && (*plVar13 != lVar14)) {
      lVar10 = lVar2 * 0x30;
      plVar9 = plVar13 + lVar2 * 6;
      do {
        lVar10 = lVar10 + -0x30;
        plVar4 = plVar9;
        if (lVar10 == 0) break;
        plVar1 = plVar13 + 6;
        plVar13 = plVar13 + 6;
        plVar4 = plVar13;
      } while (*plVar1 != lVar14);
    }
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    puVar15 = (undefined8 *)PTR_DAT_043729f0;
    if (plVar4 == (long *)(*(long *)(lVar11 + 0x148) + *(long *)(lVar11 + 0x150) * 0x30)) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)plVar4[4];
    }
    if (((*PTR_DAT_043729e8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar5 != 0)) {
      *puVar15 = 0;
      __cxa_guard_release(PTR_DAT_043729e8);
    }
    if (plVar13 != (long *)0x0) {
      for (plVar12 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13); plVar12 != (long *)0x0;
          plVar12 = (long *)*plVar12) {
        if (plVar12 == puVar15) {
          *(byte *)(plVar13 + 0xb) = *(byte *)(plVar13 + 0xb) & 0xfe | 99 < param_8;
          break;
        }
      }
    }
  }
  if ((99 < param_8) && (*(long *)(param_1 + 0x2c8) != 0)) {
    uVar7 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),param_5);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_013ffab0;
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),param_5);
    }
    FUN_0283b748((float)((ulong)param_8 / 100),*(undefined8 *)(param_1 + 0x2c8),param_5);
  }
LAB_013ffab0:
  iVar5 = (int)((ulong)param_8 / 10);
  uVar3 = iVar5 + (int)(((ulong)param_8 / 10) / 10) * -10;
  if (*(char *)param_3[1] != '\0') {
    lVar11 = *(long *)(param_1 + 0x2c8);
    lVar14 = *param_3;
    plVar13 = *(long **)(lVar11 + 0x148);
    lVar2 = *(long *)(lVar11 + 0x150);
    plVar12 = (long *)param_3[3];
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    plVar4 = plVar13;
    if ((lVar2 != 0) && (*plVar13 != lVar14)) {
      lVar10 = lVar2 * 0x30;
      plVar9 = plVar13 + lVar2 * 6;
      do {
        lVar10 = lVar10 + -0x30;
        plVar4 = plVar9;
        if (lVar10 == 0) break;
        plVar1 = plVar13 + 6;
        plVar13 = plVar13 + 6;
        plVar4 = plVar13;
      } while (*plVar1 != lVar14);
    }
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    if (plVar4 == (long *)(*(long *)(lVar11 + 0x148) + *(long *)(lVar11 + 0x150) * 0x30)) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)plVar4[4];
    }
    if (((*PTR_DAT_043729e8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar6 != 0)) {
      *puVar15 = 0;
      __cxa_guard_release(PTR_DAT_043729e8);
    }
    if (plVar13 != (long *)0x0) {
      for (puVar8 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13);
          puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
        if (puVar8 == puVar15) {
          *(byte *)(plVar13 + 0xb) = *(byte *)(plVar13 + 0xb) & 0xfe | (99 < param_8 || uVar3 != 0);
          break;
        }
      }
    }
  }
  if (((99 < param_8) || (uVar3 != 0)) && (*(long *)(param_1 + 0x2c8) != 0)) {
    uVar7 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),param_6);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_013ffbe8;
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),param_6);
    }
    FUN_0283b748((float)uVar3,*(undefined8 *)(param_1 + 0x2c8),param_6);
  }
LAB_013ffbe8:
  if (*(char *)param_4[1] != '\0') {
    lVar11 = *(long *)(param_1 + 0x2c8);
    plVar13 = *(long **)(lVar11 + 0x148);
    lVar2 = *(long *)(lVar11 + 0x150);
    lVar14 = *param_4;
    plVar12 = (long *)param_4[3];
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    plVar4 = plVar13;
    if ((lVar2 != 0) && (*plVar13 != lVar14)) {
      lVar10 = lVar2 * 0x30;
      plVar9 = plVar13 + lVar2 * 6;
      do {
        lVar10 = lVar10 + -0x30;
        plVar4 = plVar9;
        if (lVar10 == 0) break;
        plVar1 = plVar13 + 6;
        plVar13 = plVar13 + 6;
        plVar4 = plVar13;
      } while (*plVar1 != lVar14);
    }
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    if (plVar4 == (long *)(*(long *)(lVar11 + 0x148) + *(long *)(lVar11 + 0x150) * 0x30)) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)plVar4[4];
    }
    if (((*PTR_DAT_043729e8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar6 != 0)) {
      *puVar15 = 0;
      __cxa_guard_release(PTR_DAT_043729e8);
    }
    if (plVar13 != (long *)0x0) {
      for (puVar8 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13);
          puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
        if (puVar8 == puVar15) {
          *(byte *)(plVar13 + 0xb) = *(byte *)(plVar13 + 0xb) | 1;
          break;
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x2c8) == 0) {
    return;
  }
  uVar7 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),param_7);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(param_1 + 0x2c8) == 0) {
      return;
    }
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),param_7);
  }
  FUN_0283b748((float)(param_8 + iVar5 * -10),*(undefined8 *)(param_1 + 0x2c8),param_7);
  return;
}


