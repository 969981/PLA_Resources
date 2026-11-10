/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283b914; name: FUN_0283b914
 */


float FUN_0283b914(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  
  plVar5 = *(long **)(param_1 + 0x1a0);
  lVar8 = *(long *)(param_1 + 0x1a8);
  lVar10 = *param_2;
  plVar9 = (long *)param_2[3];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  plVar2 = plVar5;
  if ((lVar8 != 0) && (*plVar5 != lVar10)) {
    lVar7 = lVar8 * 0x30;
    plVar4 = plVar5 + lVar8 * 6;
    do {
      lVar7 = lVar7 + -0x30;
      plVar2 = plVar4;
      if (lVar7 == 0) break;
      plVar1 = plVar5 + 6;
      plVar5 = plVar5 + 6;
      plVar2 = plVar5;
    } while (*plVar1 != lVar10);
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  plVar5 = (long *)(*(long *)(param_1 + 0x1a0) + *(long *)(param_1 + 0x1a8) * 0x30);
  if (plVar2 == plVar5) {
    plVar9 = (long *)0x0;
  }
  else {
    plVar9 = plVar2 + 4;
  }
  fVar11 = 0.0;
  if (plVar2 != plVar5) {
    uVar6 = (ulong)*(uint *)(plVar9 + 1);
    if (((*(uint *)(plVar9 + 1) < *(uint *)(*plVar9 + 0x278)) &&
        (lVar8 = *(long *)(*plVar9 + 600), *(char *)(lVar8 + uVar6 * 0x48 + 8) != '\0')) &&
       (*(char *)(lVar8 + uVar6 * 0x48 + 0xb) != '\0')) {
      uVar3 = FUN_00227728(0,*(undefined8 *)(lVar8 + uVar6 * 0x48 + 0x10));
      fVar11 = (float)uVar3;
    }
  }
  return fVar11;
}


