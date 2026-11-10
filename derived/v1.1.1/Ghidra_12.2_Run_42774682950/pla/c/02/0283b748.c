/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283b748; name: FUN_0283b748
 */


void FUN_0283b748(float param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  plVar9 = *(long **)(param_2 + 0x1a0);
  lVar7 = *(long *)(param_2 + 0x1a8);
  lVar10 = *param_3;
  plVar8 = (long *)param_3[3];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar2 = plVar9;
  if ((lVar7 != 0) && (*plVar9 != lVar10)) {
    lVar5 = lVar7 * 0x30;
    plVar4 = plVar9 + lVar7 * 6;
    do {
      lVar5 = lVar5 + -0x30;
      plVar2 = plVar4;
      if (lVar5 == 0) break;
      plVar1 = plVar9 + 6;
      plVar9 = plVar9 + 6;
      plVar2 = plVar9;
    } while (*plVar1 != lVar10);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (plVar2 != (long *)(*(long *)(param_2 + 0x1a0) + *(long *)(param_2 + 0x1a8) * 0x30)) {
    plVar2 = plVar2 + 4;
    uVar6 = (ulong)*(uint *)(plVar2 + 1);
    if (((*(uint *)(plVar2 + 1) < *(uint *)(*plVar2 + 0x278)) &&
        (lVar7 = *(long *)(*plVar2 + 600), *(char *)(lVar7 + uVar6 * 0x48 + 8) != '\0')) &&
       (*(char *)(lVar7 + uVar6 * 0x48 + 0xb) != '\0')) {
      *(undefined1 *)(lVar7 + uVar6 * 0x48 + 9) = 0;
      lVar7 = *plVar2;
      uVar6 = (ulong)*(uint *)(plVar2 + 1);
      if ((*(uint *)(plVar2 + 1) < *(uint *)(lVar7 + 0x278)) &&
         (*(char *)(*(long *)(lVar7 + 600) + uVar6 * 0x48 + 8) != '\0')) {
        if (0.0 <= param_1) {
          uVar3 = FUN_00227728(*(undefined8 *)(*(long *)(lVar7 + 600) + uVar6 * 0x48 + 0x10));
          if ((float)uVar3 < param_1) {
            uVar3 = FUN_00227728(*(undefined8 *)(*(long *)(lVar7 + 600) + uVar6 * 0x48 + 0x10));
            param_1 = (float)uVar3;
          }
        }
        else {
          param_1 = 0.0;
        }
        *(float *)(*(long *)(*(long *)(lVar7 + 600) + uVar6 * 0x48 + 0x10) + 0x20) = param_1;
        *(undefined1 *)(lVar7 + 0x671) = 1;
      }
    }
  }
  return;
}


