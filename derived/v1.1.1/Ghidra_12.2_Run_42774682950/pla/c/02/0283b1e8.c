/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283b1e8; name: FUN_0283b1e8
 */


void FUN_0283b1e8(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  plVar3 = *(long **)(param_1 + 0x1a0);
  lVar9 = *(long *)(param_1 + 0x1a8);
  lVar11 = *param_2;
  plVar8 = (long *)param_2[3];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar2 = plVar3;
  if ((lVar9 != 0) && (*plVar3 != lVar11)) {
    lVar7 = lVar9 * 0x30;
    plVar5 = plVar3 + lVar9 * 6;
    do {
      lVar7 = lVar7 + -0x30;
      plVar2 = plVar5;
      if (lVar7 == 0) break;
      plVar1 = plVar3 + 6;
      plVar3 = plVar3 + 6;
      plVar2 = plVar3;
    } while (*plVar1 != lVar11);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (plVar2 != (long *)(*(long *)(param_1 + 0x1a0) + *(long *)(param_1 + 0x1a8) * 0x30)) {
    plVar2 = plVar2 + 4;
    lVar9 = *plVar2;
    uVar4 = *(uint *)(plVar2 + 1);
    uVar10 = (ulong)uVar4;
    if (((uVar4 < *(uint *)(lVar9 + 0x278)) &&
        (lVar11 = *(long *)(lVar9 + 600), *(char *)(lVar11 + uVar10 * 0x48 + 8) != '\0')) &&
       (*(char *)(lVar11 + uVar10 * 0x48 + 0xb) == '\0')) {
      plVar3 = *(long **)(lVar11 + uVar10 * 0x48 + 0x10);
      if (plVar3 != (long *)0x0) {
        *(undefined1 *)(lVar11 + uVar10 * 0x48 + 0xb) = 1;
        (**(code **)(*plVar3 + 0x20))(plVar3,1);
        lVar11 = *(long *)(lVar9 + 600);
      }
      *(undefined1 *)(lVar11 + uVar10 * 0x48 + 0xc) = 1;
      if ((uVar4 < *(uint *)(lVar9 + 0x278)) &&
         (*(char *)(*(long *)(lVar9 + 600) + uVar10 * 0x48 + 8) != '\0')) {
        FUN_00227728(*(undefined8 *)(*(long *)(lVar9 + 600) + uVar10 * 0x48 + 0x10));
        *(undefined4 *)(*(long *)(*(long *)(lVar9 + 600) + uVar10 * 0x48 + 0x10) + 0x20) = 0;
        *(undefined1 *)(lVar9 + 0x671) = 1;
      }
    }
    lVar9 = *plVar2;
    uVar4 = *(uint *)(plVar2 + 1);
    uVar6 = *(uint *)(lVar9 + 0x278);
    if ((uVar4 < uVar6) && (*(char *)(*(long *)(lVar9 + 600) + (ulong)uVar4 * 0x48 + 8) != '\0')) {
      *(undefined1 *)(*(long *)(lVar9 + 600) + (ulong)uVar4 * 0x48 + 9) = 1;
      lVar9 = *plVar2;
      uVar4 = *(uint *)(plVar2 + 1);
      uVar6 = *(uint *)(lVar9 + 0x278);
    }
    if ((uVar4 < uVar6) && (*(char *)(*(long *)(lVar9 + 600) + (ulong)uVar4 * 0x48 + 8) != '\0')) {
      FUN_00227728(*(undefined8 *)(*(long *)(lVar9 + 600) + (ulong)uVar4 * 0x48 + 0x10));
      *(undefined4 *)(*(long *)(*(long *)(lVar9 + 600) + (ulong)uVar4 * 0x48 + 0x10) + 0x20) = 0;
      *(undefined1 *)(lVar9 + 0x671) = 1;
    }
  }
  return;
}


