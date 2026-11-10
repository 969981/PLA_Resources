/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032be7c0; name: FUN_032be7c0
 */


void FUN_032be7c0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  undefined8 uVar14;
  
  uVar11 = *(uint *)(param_1 + 3);
  if (uVar11 == 0) goto LAB_032be900;
  if ((uVar11 == 1) && (*(int *)(param_1 + 1) == 0)) {
    if (*(char *)((long)param_1 + 0xc) == '\0') {
      return;
    }
    plVar9 = (long *)param_1[2];
    lVar10 = *plVar9;
joined_r0x032bea98:
    plVar3 = plVar9;
    if (lVar10 != 0) {
      *plVar9 = lVar10;
      plVar3 = plVar9 + 1;
    }
    if (uVar11 != 1) {
      if (plVar9[1] != 0) {
        *plVar3 = plVar9[1];
        plVar3 = plVar3 + 1;
      }
      if (uVar11 != 2) {
        iVar13 = uVar11 - 2;
        plVar9 = plVar9 + 2;
        plVar6 = plVar3;
        do {
          plVar3 = plVar6;
          if (*plVar9 != 0) {
            plVar3 = plVar6 + 1;
            *plVar6 = *plVar9;
          }
          plVar9 = plVar9 + 1;
          iVar13 = iVar13 + -1;
          plVar6 = plVar3;
        } while (iVar13 != 0);
      }
    }
    plVar9 = (long *)param_1[2];
LAB_032be8e8:
    *(undefined1 *)((long)param_1 + 0xc) = 0;
    uVar11 = (uint)((ulong)((long)plVar3 - (long)plVar9) >> 3);
    if (uVar11 != 0) goto LAB_032be81c;
  }
  else {
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      plVar3 = (long *)param_1[2];
      plVar9 = plVar3;
      if (0 < (int)uVar11) {
        lVar10 = *plVar3;
        goto joined_r0x032bea98;
      }
      goto LAB_032be8e8;
    }
LAB_032be81c:
    if (param_2 == (undefined8 *)0x0) {
      plVar3 = (long *)*param_1;
      lVar10 = *plVar3;
      puVar5 = (undefined8 *)param_1[2];
    }
    else {
      puVar5 = (undefined8 *)param_1[2];
      if ((int)uVar11 < 6) {
        iVar13 = *(int *)(param_2 + 0xb);
        if (*(int *)((long)param_2 + 0x5c) <= (int)(iVar13 + uVar11)) {
          iVar4 = iVar13;
          if (5 < iVar13) {
            iVar4 = 6;
          }
          iVar13 = iVar13 - iVar4;
          (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,param_2[1] + (long)iVar13 * 8);
          *(int *)(param_2 + 0xb) = iVar13;
        }
        if (0 < (int)uVar11) {
          *(undefined8 *)(param_2[1] + (long)iVar13 * 8) = *puVar5;
          iVar13 = *(int *)(param_2 + 0xb);
          if (uVar11 != 1) {
            uVar8 = 1;
            do {
              *(undefined8 *)(param_2[1] + (long)((int)uVar8 + iVar13) * 8) = puVar5[uVar8];
              iVar13 = *(int *)(param_2 + 0xb);
              uVar8 = uVar8 + 1;
            } while (uVar11 != uVar8);
          }
        }
        iVar4 = *(int *)((long)param_2 + 0x5c);
        iVar13 = iVar13 + uVar11;
        *(int *)(param_2 + 0xb) = iVar13;
        if (iVar4 < iVar13) {
          (**(code **)(*(long *)*param_2 + 0x28))
                    ((long *)*param_2,param_2[1] + (long)iVar4 * 8,iVar13 - iVar4);
          *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)((long)param_2 + 0x5c);
        }
        goto LAB_032be8f8;
      }
      plVar3 = (long *)*param_2;
      lVar10 = *plVar3;
    }
    (**(code **)(lVar10 + 0x28))(plVar3,puVar5,uVar11);
  }
LAB_032be8f8:
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
LAB_032be900:
  iVar13 = *(int *)(param_2 + 0xb) + -1;
  if (*(int *)(param_2 + 0xb) < 1) {
    (**(code **)(*(long *)*param_2 + 0x20))((long *)*param_2,param_2[1],6);
    *(undefined4 *)(param_2 + 0xb) = 5;
    puVar5 = (undefined8 *)(param_2[1] + 0x28);
  }
  else {
    *(int *)(param_2 + 0xb) = iVar13;
    puVar5 = (undefined8 *)(param_2[1] + (long)iVar13 * 8);
  }
  puVar5 = (undefined8 *)*puVar5;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)(param_1 + 3);
  puVar2 = PTR_PTR_0434a080;
  iVar13 = *(int *)(param_1 + 3);
  puVar12 = (uint *)((long)param_1 + 0x1c);
  uVar7 = *puVar12;
  uVar11 = iVar13 + 1;
  if (iVar13 < (int)(uVar7 & 0x3fffffff)) {
    lVar10 = param_1[2];
  }
  else {
    uVar14 = param_1[2];
    if (0x3ffffffe < iVar13) {
      FUN_032bd0a8(uVar11);
      uVar7 = *puVar12;
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar1 = uVar11;
    if ((int)uVar11 <= (int)uVar7) {
      uVar1 = uVar7;
    }
    lVar10 = FUN_032bd1d4(puVar2,uVar1,8,uVar14,iVar13,puVar12);
    iVar13 = *(int *)(param_1 + 3);
    param_1[2] = lVar10;
  }
  *(undefined8 **)(lVar10 + (long)iVar13 * 8) = puVar5;
  *(uint *)(param_1 + 3) = uVar11;
  return;
}


