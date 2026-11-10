/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c6e1c; name: FUN_014c6e1c
 */


undefined8 FUN_014c6e1c(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  
  lVar5 = *(long *)(param_1 + 0x2c8);
  if (lVar5 != 0) {
    plVar10 = *(long **)(lVar5 + 0x1a0);
    lVar8 = *(long *)(lVar5 + 0x1a8);
    if ((lVar8 == 0) || (*plVar10 == 0x3d329c02f3035d38)) {
      plVar9 = plVar10;
    }
    else {
      lVar7 = lVar8 * 0x30;
      plVar3 = plVar10;
      do {
        lVar7 = lVar7 + -0x30;
        if (lVar7 == 0) goto LAB_014c6f4c;
        plVar1 = plVar3 + 6;
        plVar9 = plVar3 + 6;
        plVar3 = plVar3 + 6;
      } while (*plVar1 != 0x3d329c02f3035d38);
    }
    if (plVar9 != plVar10 + lVar8 * 6) {
      lVar8 = plVar9[4];
      uVar2 = *(uint *)(plVar9 + 4 + 1);
      uVar6 = (ulong)uVar2;
      if (((uVar2 < *(uint *)(lVar8 + 0x278)) &&
          (lVar8 = *(long *)(lVar8 + 600), *(char *)(lVar8 + uVar6 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar8 + uVar6 * 0x48 + 0xb) != '\0')) {
        plVar10 = (long *)(lVar8 + uVar6 * 0x48 + 0x10);
        lVar5 = *plVar10;
        if (lVar5 == 0) {
          return 0;
        }
        if (*(char *)(lVar8 + uVar6 * 0x48 + 9) != '\0') {
          return 0;
        }
        fVar11 = *(float *)(lVar5 + 0x20);
        uVar4 = FUN_00227728();
        uVar6 = FUN_00227744(*plVar10);
        if (fVar11 < (float)uVar4) {
          return 0;
        }
        if ((uVar6 & 1) != 0) {
          return 0;
        }
        lVar5 = *(long *)(param_1 + 0x2c8);
      }
    }
LAB_014c6f4c:
    if (lVar5 != 0) {
      plVar10 = *(long **)(lVar5 + 0x1a0);
      lVar5 = *(long *)(lVar5 + 0x1a8);
      if ((lVar5 == 0) || (*plVar10 == 0xf47bd02f67c0ffd)) {
        plVar9 = plVar10;
      }
      else {
        lVar8 = lVar5 * 0x30;
        plVar3 = plVar10;
        do {
          lVar8 = lVar8 + -0x30;
          if (lVar8 == 0) {
            return 1;
          }
          plVar1 = plVar3 + 6;
          plVar9 = plVar3 + 6;
          plVar3 = plVar3 + 6;
        } while (*plVar1 != 0xf47bd02f67c0ffd);
      }
      if (plVar9 != plVar10 + lVar5 * 6) {
        uVar6 = (ulong)*(uint *)(plVar9 + 5);
        if (((*(uint *)(plVar9 + 5) < *(uint *)(plVar9[4] + 0x278)) &&
            (lVar5 = *(long *)(plVar9[4] + 600), *(char *)(lVar5 + uVar6 * 0x48 + 8) != '\0')) &&
           (*(char *)(lVar5 + uVar6 * 0x48 + 0xb) != '\0')) {
          plVar10 = (long *)(lVar5 + uVar6 * 0x48 + 0x10);
          lVar8 = *plVar10;
          if (lVar8 == 0) {
            return 0;
          }
          if (*(char *)(lVar5 + uVar6 * 0x48 + 9) != '\0') {
            return 0;
          }
          fVar11 = *(float *)(lVar8 + 0x20);
          uVar4 = FUN_00227728();
          uVar6 = FUN_00227744(*plVar10);
          if (fVar11 < (float)uVar4) {
            return 0;
          }
          if ((uVar6 & 1) != 0) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


