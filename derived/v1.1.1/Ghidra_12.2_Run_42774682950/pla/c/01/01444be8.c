/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01444be8; name: FUN_01444be8
 */


undefined8 FUN_01444be8(long param_1)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  
  lVar4 = *(long *)(param_1 + 0x2c8);
  if (lVar4 != 0) {
    plVar10 = *(long **)(lVar4 + 0x1a0);
    lVar7 = *(long *)(lVar4 + 0x1a8);
    if ((lVar7 == 0) || (*plVar10 == -0x66b328930d9203c0)) {
      plVar8 = plVar10;
    }
    else {
      lVar6 = lVar7 * 0x30;
      plVar9 = plVar10;
      do {
        lVar6 = lVar6 + -0x30;
        if (lVar6 == 0) goto LAB_01444d18;
        plVar1 = plVar9 + 6;
        plVar8 = plVar9 + 6;
        plVar9 = plVar9 + 6;
      } while (*plVar1 != -0x66b328930d9203c0);
    }
    if (plVar8 != plVar10 + lVar7 * 6) {
      lVar7 = plVar8[4];
      uVar2 = *(uint *)(plVar8 + 4 + 1);
      uVar5 = (ulong)uVar2;
      if (((uVar2 < *(uint *)(lVar7 + 0x278)) &&
          (lVar7 = *(long *)(lVar7 + 600), *(char *)(lVar7 + uVar5 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar7 + uVar5 * 0x48 + 0xb) != '\0')) {
        plVar10 = (long *)(lVar7 + uVar5 * 0x48 + 0x10);
        lVar4 = *plVar10;
        if (lVar4 == 0) {
          return 0;
        }
        if (*(char *)(lVar7 + uVar5 * 0x48 + 9) != '\0') {
          return 0;
        }
        fVar11 = *(float *)(lVar4 + 0x20);
        uVar3 = FUN_00227728();
        uVar5 = FUN_00227744(*plVar10);
        if (fVar11 < (float)uVar3) {
          return 0;
        }
        if ((uVar5 & 1) != 0) {
          return 0;
        }
        lVar4 = *(long *)(param_1 + 0x2c8);
      }
    }
LAB_01444d18:
    if (lVar4 != 0) {
      plVar10 = *(long **)(lVar4 + 0x1a0);
      lVar4 = *(long *)(lVar4 + 0x1a8);
      if ((lVar4 == 0) || (*plVar10 == 0x4a0f571a28d293b4)) {
        plVar8 = plVar10;
      }
      else {
        lVar7 = lVar4 * 0x30;
        plVar9 = plVar10;
        do {
          lVar7 = lVar7 + -0x30;
          if (lVar7 == 0) {
            return 1;
          }
          plVar1 = plVar9 + 6;
          plVar8 = plVar9 + 6;
          plVar9 = plVar9 + 6;
        } while (*plVar1 != 0x4a0f571a28d293b4);
      }
      if (plVar8 != plVar10 + lVar4 * 6) {
        uVar5 = (ulong)*(uint *)(plVar8 + 5);
        if (((*(uint *)(plVar8 + 5) < *(uint *)(plVar8[4] + 0x278)) &&
            (lVar4 = *(long *)(plVar8[4] + 600), *(char *)(lVar4 + uVar5 * 0x48 + 8) != '\0')) &&
           (*(char *)(lVar4 + uVar5 * 0x48 + 0xb) != '\0')) {
          plVar10 = (long *)(lVar4 + uVar5 * 0x48 + 0x10);
          lVar7 = *plVar10;
          if ((lVar7 != 0) && (*(char *)(lVar4 + uVar5 * 0x48 + 9) == '\0')) {
            fVar11 = *(float *)(lVar7 + 0x20);
            uVar3 = FUN_00227728();
            uVar5 = FUN_00227744(*plVar10);
            if (((float)uVar3 <= fVar11) && ((uVar5 & 1) == 0)) {
              return 1;
            }
          }
          return 0;
        }
      }
    }
  }
  return 1;
}


