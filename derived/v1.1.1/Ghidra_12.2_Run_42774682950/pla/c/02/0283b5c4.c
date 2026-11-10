/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283b5c4; name: FUN_0283b5c4
 */


undefined8 FUN_0283b5c4(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  
  plVar8 = *(long **)(param_1 + 0x1a0);
  lVar7 = *(long *)(param_1 + 0x1a8);
  lVar10 = *param_2;
  plVar9 = (long *)param_2[3];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  plVar2 = plVar8;
  if ((lVar7 != 0) && (*plVar8 != lVar10)) {
    lVar6 = lVar7 * 0x30;
    plVar4 = plVar8 + lVar7 * 6;
    do {
      lVar6 = lVar6 + -0x30;
      plVar2 = plVar4;
      if (lVar6 == 0) break;
      plVar1 = plVar8 + 6;
      plVar8 = plVar8 + 6;
      plVar2 = plVar8;
    } while (*plVar1 != lVar10);
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (plVar2 != (long *)(*(long *)(param_1 + 0x1a0) + *(long *)(param_1 + 0x1a8) * 0x30)) {
    uVar5 = (ulong)*(uint *)(plVar2 + 5);
    if (((*(uint *)(plVar2 + 5) < *(uint *)(plVar2[4] + 0x278)) &&
        (lVar7 = *(long *)(plVar2[4] + 600), *(char *)(lVar7 + uVar5 * 0x48 + 8) != '\0')) &&
       (*(char *)(lVar7 + uVar5 * 0x48 + 0xb) != '\0')) {
      plVar8 = (long *)(lVar7 + uVar5 * 0x48 + 0x10);
      lVar10 = *plVar8;
      if (lVar10 == 0) {
        return 0;
      }
      if (*(char *)(lVar7 + uVar5 * 0x48 + 9) != '\0') {
        return 0;
      }
      fVar11 = *(float *)(lVar10 + 0x20);
      uVar3 = FUN_00227728();
      uVar5 = FUN_00227744(*plVar8);
      if (fVar11 < (float)uVar3) {
        return 0;
      }
      if ((uVar5 & 1) != 0) {
        return 0;
      }
    }
  }
  return 1;
}


