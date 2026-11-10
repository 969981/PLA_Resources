/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00235c58; name: FUN_00235c58
 */


long FUN_00235c58(long param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  
  lVar4 = (**(code **)PTR_DAT_04372ba8)(0x70,0x10,*(undefined8 *)PTR_DAT_04372bb8);
  if (lVar4 != 0) {
    FUN_00231864(lVar4,param_2);
  }
  plVar6 = *(long **)(param_1 + 0x30);
  lVar16 = *plVar6;
  iVar3 = (int)plVar6[1];
  plVar7 = (long *)(lVar16 + (long)iVar3 * 0x30);
  *(int *)(plVar6 + 1) = iVar3 + 1;
  *plVar7 = lVar4;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar6 = plVar7 + 4;
  lVar9 = *plVar6;
  plVar15 = (long *)(param_1 + 0x38);
  *plVar6 = *plVar15;
  *(long **)(lVar9 + 8) = plVar15;
  *(long **)(*plVar15 + 8) = plVar6;
  *plVar15 = lVar9;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  piVar5 = (int *)FUN_002511c0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*plVar7 + 0x10));
  lVar9 = *(long *)(param_1 + 0x18) + (ulong)(uint)piVar5[1];
  piVar8 = *(int **)(param_1 + 0x28);
  if ((piVar8 == (int *)0x0) || (*piVar8 < 1)) {
LAB_00235dc8:
    piVar14 = (int *)0x0;
  }
  else {
    lVar10 = *(long *)(piVar8 + 2);
    uVar11 = 0;
    lVar12 = lVar10;
    do {
      uVar13 = 0;
      while (cVar2 = *(char *)(lVar9 + uVar13), cVar2 == *(char *)(lVar12 + uVar13)) {
        if ((cVar2 == '\0') || (uVar13 = uVar13 + 1, 0x17 < uVar13)) {
          if ((lVar10 + (uVar11 & 0xffffffff) * 0x28 == 0) ||
             (((uVar1 = *(uint *)(lVar10 + (uVar11 & 0xffffffff) * 0x28 + 0x1c), uVar1 == 0 ||
               (piVar14 = (int *)(*(long *)(piVar8 + 4) + (ulong)uVar1), piVar14 == (int *)0x0)) ||
              (*piVar14 != 0x31747063)))) goto LAB_00235dc8;
          piVar14 = piVar14 + 0x15;
          goto LAB_00235dcc;
        }
      }
      uVar11 = uVar11 + 1;
      piVar14 = (int *)0x0;
      lVar12 = lVar12 + 0x28;
    } while (uVar11 != (long)*piVar8);
  }
LAB_00235dcc:
  if (piVar14 != (int *)0x0) {
    piVar5 = piVar14;
  }
  plVar7[1] = (long)piVar5;
  *(long *)(lVar16 + (long)iVar3 * 0x30 + 0x18) = lVar9;
  return lVar4;
}


