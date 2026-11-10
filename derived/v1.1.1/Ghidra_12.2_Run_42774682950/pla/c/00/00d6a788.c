/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6a788; name: FUN_00d6a788
 */


undefined8 FUN_00d6a788(long param_1)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  
  lVar5 = *(long *)(param_1 + 0x2c8);
  if (lVar5 != 0) {
    plVar8 = *(long **)(lVar5 + 0x1a0);
    lVar5 = *(long *)(lVar5 + 0x1a8);
    if ((lVar5 == 0) || (*plVar8 == 0x4a0f571a28d293b4)) {
      plVar7 = plVar8;
    }
    else {
      lVar6 = lVar5 * 0x30;
      plVar2 = plVar8;
      do {
        lVar6 = lVar6 + -0x30;
        if (lVar6 == 0) {
          return 1;
        }
        plVar1 = plVar2 + 6;
        plVar7 = plVar2 + 6;
        plVar2 = plVar2 + 6;
      } while (*plVar1 != 0x4a0f571a28d293b4);
    }
    if (plVar7 != plVar8 + lVar5 * 6) {
      uVar4 = (ulong)*(uint *)(plVar7 + 5);
      if (((*(uint *)(plVar7 + 5) < *(uint *)(plVar7[4] + 0x278)) &&
          (lVar5 = *(long *)(plVar7[4] + 600), *(char *)(lVar5 + uVar4 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar5 + uVar4 * 0x48 + 0xb) != '\0')) {
        plVar8 = (long *)(lVar5 + uVar4 * 0x48 + 0x10);
        lVar6 = *plVar8;
        if (lVar6 == 0) {
          return 0;
        }
        if (*(char *)(lVar5 + uVar4 * 0x48 + 9) != '\0') {
          return 0;
        }
        fVar9 = *(float *)(lVar6 + 0x20);
        uVar3 = FUN_00227728();
        uVar4 = FUN_00227744(*plVar8);
        if (fVar9 < (float)uVar3) {
          return 0;
        }
        if ((uVar4 & 1) != 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}


