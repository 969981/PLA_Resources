/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305a7ec; name: FUN_0305a7ec
 */


void FUN_0305a7ec(undefined8 *param_1,uint param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  undefined4 *puVar14;
  long lVar15;
  
  param_1[1] = 0;
  param_1[2] = 0x8000000000000000;
  puVar9 = param_1 + 6;
  param_1[4] = puVar9;
  param_1[5] = 0x8000000800000000;
  puVar5 = PTR_PTR_0434a080;
  if (param_3 < 9) {
    iVar13 = 0;
    bVar6 = SBORROW4(0,param_3);
    iVar3 = -param_3;
    bVar7 = param_3 == 0;
    if (param_3 < 1) {
LAB_0305aa34:
      if (!bVar7 && iVar3 < 0 == bVar6) {
        lVar15 = (long)iVar13;
        *(int *)(param_1 + 5) = param_3;
        iVar3 = *(int *)((long)puVar9 + lVar15 * 0x20 + -0x14);
        *(undefined4 *)(puVar9 + lVar15 * 4 + -3) = 0;
        if ((-1 < iVar3) && (lVar12 = puVar9[lVar15 * 4 + -4], lVar12 != 0)) {
          (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar12,iVar3 << 2);
        }
        puVar9[lVar15 * 4 + -4] = 0;
        *(undefined4 *)((long)puVar9 + lVar15 * 0x20 + -0x14) = 0x80000000;
        if (puVar9 + lVar15 * 4 + -4 != puVar9 + (long)param_3 * 4) {
          iVar3 = *(int *)((long)puVar9 + lVar15 * 0x20 + -0x34);
          *(undefined4 *)(puVar9 + lVar15 * 4 + -7) = 0;
          if ((-1 < iVar3) && (lVar12 = puVar9[lVar15 * 4 + -8], lVar12 != 0)) {
            (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar12,iVar3 << 2);
          }
          puVar9[lVar15 * 4 + -8] = 0;
          *(undefined4 *)((long)puVar9 + lVar15 * 0x20 + -0x34) = 0x80000000;
          if (puVar9 + lVar15 * 4 + -8 != puVar9 + (long)param_3 * 4) {
            plVar8 = puVar9 + lVar15 * 4 + -0xc;
            lVar15 = (long)param_3 * 0x20 + lVar15 * -0x20 + 0x40;
            do {
              *(undefined4 *)(plVar8 + 1) = 0;
              if ((-1 < *(int *)((long)plVar8 + 0xc)) && (*plVar8 != 0)) {
                (**(code **)(*(long *)puVar5 + 0x18))
                          (puVar5,*plVar8,*(int *)((long)plVar8 + 0xc) << 2);
              }
              *plVar8 = 0;
              *(undefined4 *)((long)plVar8 + 0xc) = 0x80000000;
              plVar8 = plVar8 + -4;
              lVar15 = lVar15 + 0x20;
            } while (lVar15 != 0);
          }
        }
      }
      goto LAB_0305a884;
    }
  }
  else {
    puVar9 = (undefined8 *)FUN_0305b678(PTR_PTR_0434a080,param_3,puVar9,0,(long)param_1 + 0x2c);
    iVar13 = *(int *)(param_1 + 5);
    param_1[4] = puVar9;
    bVar6 = SBORROW4(iVar13,param_3);
    iVar3 = iVar13 - param_3;
    bVar7 = iVar13 == param_3;
    if (param_3 <= iVar13) goto LAB_0305aa34;
  }
  puVar1 = puVar9 + (long)iVar13 * 4;
  *(int *)(param_1 + 5) = param_3;
  *puVar1 = 0;
  puVar1[1] = 0x8000000000000000;
  *(undefined4 *)(puVar1 + 2) = 0;
  if (puVar1 + 4 != puVar9 + (long)param_3 * 4) {
    puVar1[4] = 0;
    puVar1[5] = 0x8000000000000000;
    *(undefined4 *)(puVar1 + 6) = 0;
    for (puVar1 = puVar1 + 8; puVar1 != puVar9 + (long)param_3 * 4; puVar1 = puVar1 + 4) {
      *puVar1 = 0;
      puVar1[1] = 0x8000000000000000;
      *(undefined4 *)(puVar1 + 2) = 0;
    }
  }
LAB_0305a884:
  uVar11 = *(uint *)((long)param_1 + 0x14);
  *(uint *)(param_1 + 0x26) = param_2;
  if ((int)(uVar11 & 0x3fffffff) < (int)param_2) {
    uVar10 = param_1[1];
    uVar2 = *(undefined4 *)(param_1 + 2);
    if (0x3fffffff < (int)param_2) {
      FUN_032bd0a8(param_2);
      uVar11 = *(uint *)((long)param_1 + 0x14);
    }
    uVar11 = (uVar11 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    uVar4 = param_2;
    if ((int)param_2 <= (int)uVar11) {
      uVar4 = uVar11;
    }
    uVar10 = FUN_032bd1d4(puVar5,uVar4,4,uVar10,uVar2,(uint *)((long)param_1 + 0x14));
    param_1[1] = uVar10;
  }
  if (*(uint *)(param_1 + 2) != param_2) {
    *(uint *)(param_1 + 2) = param_2;
  }
  lVar15 = tpidr_el0;
  lVar12 = *(long *)(lVar15 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar12;
  }
  plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x20,0);
  puVar14 = (undefined4 *)param_1[1];
  iVar3 = *(int *)(param_1 + 2);
  *(int *)(plVar8 + 2) = iVar3;
  *plVar8 = (long)puVar14;
  plVar8[1] = (long)(puVar14 + iVar3);
  if ((0 < iVar3) && (*puVar14 = 0xffffffff, 1 < (int)plVar8[2])) {
    lVar15 = 1;
    do {
      *(undefined4 *)(*plVar8 + lVar15 * 4) = 0xffffffff;
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)plVar8[2]);
  }
  *(undefined8 *)((long)plVar8 + 0x14) = 0xffffffff00000001;
  *param_1 = plVar8;
  *(undefined1 *)((long)param_1 + 0x134) = 1;
  return;
}


