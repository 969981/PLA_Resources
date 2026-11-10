/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bfa04; name: FUN_027bfa04
 */


void FUN_027bfa04(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  if (((*(long *)(param_1 + 0x70) != 0) && (uVar3 = FUN_02a43a8c(), (uVar3 & 1) == 0)) &&
     (plVar10 = *(long **)(param_1 + 0x80), plVar10 != (long *)0x0)) {
    uVar3 = 0;
    do {
      lVar6 = param_1 + uVar3 * 0x90;
      if (*(long *)(lVar6 + 0x1a0) != 0) {
        lVar4 = (**(code **)(*plVar10 + 0x58))(plVar10);
        plVar2 = *(long **)(lVar4 + 0x20);
        lVar4 = *(long *)(lVar4 + 0x28);
        lVar5 = *(long *)(lVar6 + 0x1a0);
        if ((lVar4 == 0) || (*plVar2 == lVar5)) {
          plVar8 = plVar2;
        }
        else {
          lVar7 = lVar4 * 8;
          plVar9 = plVar2;
          do {
            lVar7 = lVar7 + -8;
            if (lVar7 == 0) goto LAB_027bfaa4;
            plVar8 = plVar9 + 1;
            plVar1 = plVar9 + 1;
            plVar9 = plVar8;
          } while (*plVar1 != lVar5);
        }
        if (plVar2 + lVar4 == plVar8) {
LAB_027bfaa4:
          if (*(char *)(param_1 + uVar3 * 0x90 + 0x1a8) != '\0') {
            FUN_027bfefc(param_1,lVar5,uVar3 & 0xffffffff);
          }
          FUN_027bff60(uVar3 & 0xffffffff);
          *(undefined4 *)(lVar6 + 0x1a7) = 0;
          *(long *)(lVar6 + 0x1a0) = 0;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 8);
  }
  return;
}


