/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283b430; name: FUN_0283b430
 */


void FUN_0283b430(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  plVar4 = *(long **)(param_1 + 0x1a0);
  lVar9 = *(long *)(param_1 + 0x1a8);
  lVar12 = *param_2;
  plVar10 = (long *)param_2[3];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar3 = plVar4;
  if ((lVar9 != 0) && (*plVar4 != lVar12)) {
    lVar7 = lVar9 * 0x30;
    plVar6 = plVar4 + lVar9 * 6;
    do {
      lVar7 = lVar7 + -0x30;
      plVar3 = plVar6;
      if (lVar7 == 0) break;
      plVar1 = plVar4 + 6;
      plVar4 = plVar4 + 6;
      plVar3 = plVar4;
    } while (*plVar1 != lVar12);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (plVar3 != (long *)(*(long *)(param_1 + 0x1a0) + *(long *)(param_1 + 0x1a8) * 0x30)) {
    lVar9 = plVar3[4];
    uVar2 = *(uint *)(plVar3 + 4 + 1);
    uVar11 = (ulong)uVar2;
    uVar5 = *(uint *)(lVar9 + 0x278);
    if (((uVar2 < uVar5) &&
        (lVar12 = *(long *)(lVar9 + 600), *(char *)(lVar12 + uVar11 * 0x48 + 8) != '\0')) &&
       (pcVar8 = (char *)(lVar12 + uVar11 * 0x48 + 0xb), *pcVar8 != '\0')) {
      plVar4 = *(long **)(lVar12 + uVar11 * 0x48 + 0x10);
      if (plVar4 != (long *)0x0) {
        *pcVar8 = '\0';
        (**(code **)(*plVar4 + 0x20))(plVar4,0);
        uVar5 = *(uint *)(lVar9 + 0x278);
      }
      if ((uVar2 < uVar5) && (*(char *)(*(long *)(lVar9 + 600) + uVar11 * 0x48 + 8) != '\0')) {
        FUN_00227728(*(undefined8 *)(*(long *)(lVar9 + 600) + uVar11 * 0x48 + 0x10));
        *(undefined4 *)(*(long *)(*(long *)(lVar9 + 600) + uVar11 * 0x48 + 0x10) + 0x20) = 0;
        *(undefined1 *)(lVar9 + 0x671) = 1;
      }
    }
  }
  return;
}


