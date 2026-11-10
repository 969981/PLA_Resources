/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079b228; name: FUN_0079b228
 */


void FUN_0079b228(undefined8 *param_1,long *param_2,int *param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  iVar2 = *param_3;
  uVar1 = param_2[1];
  uVar12 = uVar1 - 1 & param_2[2] + (long)iVar2;
  lVar9 = param_2[4];
  piVar6 = *(int **)(lVar9 + uVar12 * 8);
  if (piVar6 != (int *)0x0) {
    if (piVar6 == *(int **)(lVar9 + (uVar12 ^ 1) * 8)) {
      uVar12 = uVar12 & 0xfffffffffffffffe;
      plVar7 = (long *)(*(long *)(lVar9 + uVar12 * 8) + 8);
      plVar10 = (long *)*plVar7;
      if (plVar10 != (long *)0x0) {
        plVar11 = plVar7;
        do {
          if (iVar2 <= *(int *)plVar10[4]) {
            plVar11 = plVar10;
          }
          plVar10 = (long *)plVar10[*(int *)plVar10[4] < iVar2];
        } while (plVar10 != (long *)0x0);
        if ((plVar11 != plVar7) && (piVar6 = (int *)plVar11[4], *piVar6 <= iVar2)) {
LAB_0079b2d4:
          if (piVar6 != (int *)0x0) {
            *param_1 = piVar6;
            param_1[1] = param_2;
            param_1[2] = uVar12;
            *(undefined1 *)(param_1 + 3) = 0;
            return;
          }
        }
      }
    }
    else {
      do {
        if (*piVar6 == iVar2) goto LAB_0079b2d4;
        piVar6 = *(int **)(piVar6 + 4);
      } while (piVar6 != (int *)0x0);
    }
  }
  uVar5 = *param_2 + 1;
  uVar4 = uVar1 * 3 >> 2 & 0xfffffffffffffff;
  if (uVar5 < uVar4) {
    if ((uVar1 < 9) || ((uVar1 * 3 & 0x3fffffffffffffff) >> 4 < uVar5)) goto LAB_0079b318;
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
    } while ((uVar5 * 5 >> 2) + 1 << (uVar8 & 0x3f) < uVar4);
    uVar5 = uVar1 >> (uVar8 & 0x3f);
    if (uVar5 < 9) {
      uVar5 = 8;
    }
    if (uVar5 == uVar1) goto LAB_0079b318;
  }
  else {
    if (0x800000000000000 < uVar1) goto LAB_0079b318;
    uVar5 = uVar1 << 1;
  }
  FUN_0079b708(param_2,uVar5);
  iVar2 = *param_3;
  uVar12 = param_2[1] - 1U & param_2[2] + (long)iVar2;
  lVar9 = param_2[4];
  piVar6 = *(int **)(lVar9 + uVar12 * 8);
  if (piVar6 != (int *)0x0) {
    if (piVar6 == *(int **)(lVar9 + (uVar12 ^ 1) * 8)) {
      uVar12 = uVar12 & 0xfffffffffffffffe;
      for (lVar9 = *(long *)(*(long *)(lVar9 + uVar12 * 8) + 8); lVar9 != 0;
          lVar9 = *(long *)(lVar9 + (ulong)(**(int **)(lVar9 + 0x20) < iVar2) * 8)) {
      }
    }
    else {
      do {
        if (*piVar6 == iVar2) break;
        piVar6 = *(int **)(piVar6 + 4);
      } while (piVar6 != (int *)0x0);
    }
  }
LAB_0079b318:
  lVar9 = param_2[5];
  if (lVar9 == 0) {
    puVar3 = (undefined8 *)FUN_002ee6d0(0x18);
  }
  else {
    if (*(long *)(lVar9 + 0x70) != 0) {
      FUN_0032cf88(lVar9,0,0x18);
    }
    puVar3 = (undefined8 *)FUN_0032cea0(lVar9,0x18);
  }
  uVar13 = *(undefined8 *)param_3;
  puVar3[1] = *(undefined8 *)(param_3 + 2);
  *puVar3 = uVar13;
  FUN_0079b470(&local_48,param_2,uVar12,puVar3);
  *param_2 = *param_2 + 1;
  param_1[2] = local_38;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[1] = uStack_40;
  *param_1 = local_48;
  return;
}


