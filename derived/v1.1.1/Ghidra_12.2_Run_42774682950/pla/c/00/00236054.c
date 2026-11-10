/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00236054; name: FUN_00236054
 */


void FUN_00236054(long param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  if (*(int *)(param_1 + 0x48) == 0) {
LAB_002360a8:
    plVar12 = (long *)0x0;
  }
  else {
    plVar13 = (long *)(param_1 + 0x40);
    do {
      lVar11 = *plVar13;
      if (lVar11 == param_1 + 0x38) goto LAB_002360a8;
      plVar12 = (long *)(lVar11 + -0x20);
      plVar13 = (long *)(lVar11 + 8);
      iVar3 = strcmp(param_2,*(char **)(*plVar12 + 0x10));
    } while (iVar3 != 0);
  }
  piVar4 = (int *)FUN_002511c0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*plVar12 + 0x10));
  lVar11 = *(long *)(param_1 + 0x18) + (ulong)(uint)piVar4[1];
  piVar5 = *(int **)(param_1 + 0x28);
  if ((piVar5 == (int *)0x0) || (*piVar5 < 1)) {
LAB_0023616c:
    piVar10 = (int *)0x0;
  }
  else {
    lVar6 = *(long *)(piVar5 + 2);
    uVar7 = 0;
    lVar8 = lVar6;
    do {
      uVar9 = 0;
      while (cVar2 = *(char *)(lVar11 + uVar9), cVar2 == *(char *)(lVar8 + uVar9)) {
        if ((cVar2 == '\0') || (uVar9 = uVar9 + 1, 0x17 < uVar9)) {
          if ((lVar6 + (uVar7 & 0xffffffff) * 0x28 == 0) ||
             ((uVar1 = *(uint *)(lVar6 + (uVar7 & 0xffffffff) * 0x28 + 0x1c), uVar1 == 0 ||
              (piVar5 = (int *)(*(long *)(piVar5 + 4) + (ulong)uVar1), piVar5 == (int *)0x0))))
          goto LAB_0023616c;
          piVar10 = (int *)0x0;
          if (*piVar5 == 0x31747063) {
            piVar10 = piVar5 + 0x15;
          }
          goto LAB_00236170;
        }
      }
      uVar7 = uVar7 + 1;
      piVar10 = (int *)0x0;
      lVar8 = lVar8 + 0x28;
    } while (uVar7 != (long)*piVar5);
  }
LAB_00236170:
  if (piVar10 != (int *)0x0) {
    piVar4 = piVar10;
  }
  plVar12[1] = (long)piVar4;
  plVar12[3] = lVar11;
  return;
}


