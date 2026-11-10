/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6d92c; name: FUN_02e6d92c
 */


void FUN_02e6d92c(long param_1,int param_2,uint param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  long *plVar18;
  ulong *puVar19;
  
  uVar5 = 0;
  if (param_3 != 0) {
    uVar5 = (param_2 - 1U) / param_3;
  }
  param_3 = (uVar5 + 1) * param_3;
LAB_02e6d974:
  if (((param_3 != 0) && (param_3 <= *(uint *)(param_1 + 0x344))) && (0 < *(int *)(param_1 + 0x350))
     ) {
    uVar10 = 0;
    plVar11 = (long *)(param_1 + 0x48);
    do {
      if ((param_3 <= (uint)(1 << (ulong)(*(int *)(param_1 + 0x34c) + (int)uVar10 & 0x1f))) &&
         (plVar18 = (long *)*plVar11, plVar18 != (long *)0x0)) {
        uVar6 = uVar10 & 0xffffffff;
        if (*plVar18 == 0) {
          lVar7 = param_1 + uVar6 * 0x18;
          *(undefined8 *)(lVar7 + 0x40) = 0;
          *(undefined8 *)(lVar7 + 0x48) = 0;
        }
        else {
          *plVar11 = *plVar18;
        }
        lVar7 = param_1 + uVar6 * 0x18;
        *(int *)(lVar7 + 0x38) = *(int *)(lVar7 + 0x38) + -1;
        if ((int)uVar10 == 0) goto LAB_02e6db60;
        iVar13 = *(int *)(param_1 + 0x338);
        goto LAB_02e6d9f8;
      }
      uVar10 = uVar10 + 1;
      plVar11 = plVar11 + 3;
    } while ((long)*(int *)(param_1 + 0x350) != uVar10);
  }
  goto LAB_02e6db8c;
LAB_02e6d9f8:
  do {
    uVar6 = uVar6 - 1;
    uVar5 = *(int *)(param_1 + 0x34c) + (int)uVar6;
    uVar2 = *(int *)(param_1 + 0x344) - param_3;
    if ((1 << (ulong)(uVar5 & 0x1f) & uVar2) == 0) {
      if ((long)uVar6 < 1) break;
      goto LAB_02e6d9f8;
    }
    puVar8 = (undefined8 *)
             (*(long *)(param_1 + 0x338) +
             (ulong)((*(int *)(param_1 + 0x344) + ((int)plVar18 - iVar13)) -
                    (-1 << (ulong)(uVar5 & 0x1f) & uVar2)));
    if (puVar8 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)(param_1 + uVar6 * 0x18 + 0x48);
      puVar12 = (undefined8 *)*puVar15;
LAB_02e6daf0:
      *puVar8 = puVar12;
      *puVar15 = puVar8;
      puVar15 = puVar12;
    }
    else {
      *puVar8 = 0;
      puVar15 = (undefined8 *)(param_1 + uVar6 * 0x18 + 0x48);
      puVar12 = (undefined8 *)*puVar15;
      if ((puVar12 == (undefined8 *)0x0) || (puVar8 <= puVar12)) goto LAB_02e6daf0;
      puVar15 = (undefined8 *)*puVar12;
      if (puVar15 != (undefined8 *)0x0 && puVar15 < puVar8) {
        puVar16 = (undefined8 *)*puVar15;
        puVar12 = puVar15;
        puVar15 = puVar16;
        if (!(puVar16 == (undefined8 *)0x0 || puVar8 <= puVar16)) {
          puVar15 = (undefined8 *)*puVar16;
          puVar12 = puVar16;
          if (puVar15 != (undefined8 *)0x0 && puVar15 < puVar8) {
            puVar16 = (undefined8 *)*puVar15;
            puVar12 = puVar15;
            puVar15 = puVar16;
            if (!(puVar16 == (undefined8 *)0x0 || puVar8 <= puVar16)) {
              puVar15 = (undefined8 *)*puVar16;
              puVar12 = puVar16;
              if (puVar15 != (undefined8 *)0x0 && puVar15 < puVar8) {
                do {
                  puVar12 = puVar15;
                  puVar15 = (undefined8 *)*puVar12;
                } while ((puVar15 != (undefined8 *)0x0 && puVar15 <= puVar8) &&
                         (puVar15 == (undefined8 *)0x0 || puVar8 != puVar15));
              }
            }
          }
        }
      }
      *puVar8 = puVar15;
      *puVar12 = puVar8;
    }
    if (puVar15 == (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + uVar6 * 0x18 + 0x40) = puVar8;
    }
    lVar7 = param_1 + uVar6 * 0x18;
    *(int *)(lVar7 + 0x38) = *(int *)(lVar7 + 0x38) + 1;
  } while (0 < (long)uVar6);
LAB_02e6db60:
  puVar19 = (ulong *)(*DAT_0442d138)(7,0x28);
  if (puVar19 != (ulong *)0x0) {
    *puVar19 = 0;
    puVar19[1] = (ulong)plVar18;
    puVar19[2] = 0;
    *(uint *)((long)puVar19 + 0x1c) = param_3;
    *(undefined4 *)(puVar19 + 4) = 0xffffffff;
    *(undefined2 *)((long)puVar19 + 0x24) = 0;
    *(int *)(puVar19 + 3) = param_2;
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_3;
    *param_4 = (long)puVar19;
    goto LAB_02e6dcc4;
  }
  FUN_02e6e524(param_1 + 0x38,(int)plVar18 - *(int *)(param_1 + 0x338),param_3);
LAB_02e6db8c:
  *param_4 = 0;
  lVar7 = *(long *)(param_1 + 0x18);
  *param_4 = lVar7;
  if (lVar7 == 0) {
    FUN_02e71a04(*(undefined8 *)(param_1 + 0x360));
    return;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - *(int *)(lVar7 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      *(long *)(param_1 + 0x18) = lVar7;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  *(undefined8 *)(*param_4 + 0x10) = 0;
  puVar19 = (ulong *)*param_4;
  uVar5 = *(uint *)((long)puVar19 + 0x1c);
  if (uVar5 == param_3) {
    if (puVar19 != (ulong *)0x0) {
LAB_02e6dcc4:
      *(short *)((long)puVar19 + 0x24) = *(short *)((long)puVar19 + 0x24) + 1;
      return;
    }
  }
  else {
    uVar2 = (uint)puVar19[4];
    if (uVar2 != 0xffffffff) {
      uVar5 = *(uint *)(param_1 + 0x30);
      iVar9 = uVar5 - 1;
      lVar7 = *(long *)(param_1 + 0x28);
      iVar13 = 0;
      iVar14 = iVar9;
LAB_02e6dc0c:
      while( true ) {
        iVar3 = iVar14 - iVar13;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        uVar1 = iVar13 + (iVar3 >> 1);
        puVar17 = *(ulong **)(lVar7 + (ulong)uVar1 * 8);
        if (uVar2 < (uint)puVar17[4]) goto LAB_02e6dc58;
        if (uVar2 <= (uint)puVar17[4]) break;
LAB_02e6dc30:
        iVar13 = uVar1 + 1;
        if (iVar14 < iVar13) goto LAB_02e6dc64;
      }
      if (*puVar17 < *puVar19) goto LAB_02e6dc58;
      if (*puVar19 < *puVar17) goto LAB_02e6dc30;
      if (puVar19[1] < puVar17[1]) goto LAB_02e6dc58;
      if (puVar17[1] < puVar19[1]) goto LAB_02e6dc30;
      puVar12 = (undefined8 *)(lVar7 + (ulong)uVar5 * 8 + -8);
      puVar8 = (undefined8 *)(lVar7 + (ulong)uVar1 * 8);
      if (puVar8 < puVar12) {
        uVar10 = ((ulong)uVar5 * 8 + (ulong)uVar1 * -8) - 9;
        uVar5 = ((uint)(uVar10 >> 3) & 0x1fffffff) + 1;
        if ((uVar5 & 7) != 0) {
          lVar7 = -((ulong)uVar5 & 7);
          puVar15 = puVar8;
          do {
            puVar8 = puVar15 + 1;
            *puVar15 = *puVar8;
            bVar4 = lVar7 != -1;
            lVar7 = lVar7 + 1;
            puVar15 = puVar8;
          } while (bVar4);
        }
        if (0x37 < uVar10) {
          do {
            *puVar8 = puVar8[1];
            puVar8[1] = puVar8[2];
            puVar8[2] = puVar8[3];
            puVar8[3] = puVar8[4];
            puVar8[4] = puVar8[5];
            puVar8[5] = puVar8[6];
            puVar8[6] = puVar8[7];
            puVar15 = puVar8 + 8;
            puVar8[7] = *puVar15;
            puVar8 = puVar15;
          } while (puVar15 < puVar12);
        }
        iVar9 = *(int *)(param_1 + 0x30) + -1;
      }
      *(int *)(param_1 + 0x30) = iVar9;
LAB_02e6dc64:
      *(undefined4 *)(puVar19 + 4) = 0xffffffff;
      puVar19 = (ulong *)*param_4;
      uVar5 = *(uint *)((long)puVar19 + 0x1c);
    }
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - uVar5;
    FUN_02e6e524(param_1 + 0x38,(int)puVar19[1] - *(int *)(param_1 + 0x338),
                 *(undefined4 *)((long)puVar19 + 0x1c));
    if (puVar19 != (ulong *)0x0) {
      (*DAT_0442d150)(7,puVar19);
    }
    lVar7 = *(long *)(param_1 + 0x360);
    if ((*(char *)(lVar7 + 0x218) != '\0') &&
       (*(undefined1 *)(lVar7 + 0x218) = 0, *(int *)(lVar7 + 0x214) != 0)) {
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar7 + 0x208));
    }
    *param_4 = 0;
  }
  goto LAB_02e6d974;
LAB_02e6dc58:
  iVar14 = uVar1 - 1;
  if (iVar14 < iVar13) goto LAB_02e6dc64;
  goto LAB_02e6dc0c;
}


