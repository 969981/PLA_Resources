/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319d380; name: FUN_0319d380
 */


void FUN_0319d380(long *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  uint uVar17;
  int *piVar18;
  uint *puVar19;
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined3 uStack_73;
  uint local_70;
  uint local_68 [2];
  
  plVar16 = (long *)param_1[2];
  iVar5 = (int)plVar16[1];
  if (iVar5 <= (int)plVar16[2] * 2) {
    FUN_03199d54(plVar16,iVar5 << 1);
    iVar5 = (int)plVar16[1];
  }
  uVar17 = (uint)param_2;
  uVar9 = (uVar17 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar17 * -0x61c8864f & 0xff00ff) << 8;
  uVar9 = iVar5 - 1U & (uVar9 >> 0x10 | uVar9 << 0x10);
  lVar7 = *plVar16;
  puVar13 = (uint *)(lVar7 + (long)(int)uVar9 * 4);
  if (*puVar13 == 0xffffffff) {
    iVar5 = 1;
  }
  else if (*puVar13 == uVar17) {
    iVar5 = 0;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & iVar5 - 1U;
      uVar15 = *(uint *)(lVar7 + (long)(int)uVar9 * 4);
      if (uVar15 == 0xffffffff) {
        iVar5 = 1;
        goto LAB_0319d7a8;
      }
    } while (uVar15 != uVar17);
    iVar5 = 0;
LAB_0319d7a8:
    puVar13 = (uint *)(lVar7 + (long)(int)uVar9 * 4);
  }
  *(int *)(plVar16 + 2) = (int)plVar16[2] + iVar5;
  *puVar13 = uVar17;
  puVar3 = PTR_PTR_0434a080;
  lVar7 = *(long *)(*(long *)(*param_1 + 0x38) + (param_2 >> 0x16 & 0x3ff) * 0xf0);
  uVar9 = uVar17 & 0x3fffff;
  uVar10 = (ulong)uVar9;
  lVar8 = *(long *)(lVar7 + 0x20);
  if ((int)uVar9 < *(int *)(lVar8 + 0x20)) {
    if ((*(int *)(lVar8 + 0x98) == 0) ||
       (uVar9 = *(uint *)(*(long *)(lVar8 + 0x90) + uVar10 * 4), uVar9 != 0xffffffff)) {
      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + (long)(int)uVar9 * 0x10);
    }
    else {
      piVar18 = (int *)(*(long *)(lVar8 + 0x18) + uVar10 * 0x10);
    }
  }
  else {
    piVar18 = (int *)(*(long *)(lVar8 + 0xd0) + (long)(int)(uVar9 - *(int *)(lVar8 + 0x20)) * 0x10);
  }
  if ((short)piVar18[2] < 1) {
    return;
  }
  plVar16 = param_1 + 3;
  iVar5 = 0;
  uVar9 = uVar17 & 0xffc00000;
  puVar13 = (uint *)((long)param_1 + 0x24);
  do {
    uVar15 = *piVar18 + iVar5;
    uVar2 = uVar15 | uVar9;
    if ((int)uVar15 < *(int *)(lVar8 + 0x30)) {
      uVar14 = uVar15;
      if (*(int *)(lVar8 + 0x78) != 0) {
        uVar14 = *(uint *)(*(long *)(lVar8 + 0x70) + (long)(int)uVar15 * 4);
      }
      if (uVar14 == 0xffffffff) {
        puVar19 = (uint *)(*(long *)(lVar8 + 0x28) + (long)(int)uVar15 * 0x14);
      }
      else {
        puVar19 = (uint *)(*(long *)(lVar8 + 0xc0) + (long)(int)uVar14 * 0x14);
      }
      uVar14 = uVar15;
      if (*(int *)(lVar8 + 0x78) != 0) {
        uVar14 = *(uint *)(*(long *)(lVar8 + 0x70) + (long)(int)uVar15 * 4);
      }
      if (uVar14 == 0xffffffff) {
        puVar11 = (uint *)(*(long *)(lVar8 + 0x28) + (long)(int)uVar15 * 0x14);
      }
      else {
        puVar11 = (uint *)(*(long *)(lVar8 + 0xc0) + (long)(int)uVar14 * 0x14);
      }
    }
    else {
      puVar11 = (uint *)(*(long *)(lVar8 + 0xe0) +
                        (long)(int)(uVar15 - *(int *)(lVar8 + 0x30)) * 0x14);
      puVar19 = puVar11;
    }
    uVar15 = puVar11[3];
    local_68[0] = uVar2;
    if (((byte)puVar11[4] >> 6 & 1) == 0) {
      if ((uVar15 != 0xffffffff) &&
         (uVar15 = uVar15 & 0x3fffff | *(int *)(lVar8 + 0x17c) << 0x16, uVar15 != 0xffffffff))
      goto LAB_0319d4fc;
LAB_0319d560:
      uVar15 = *puVar19;
      uVar14 = puVar19[1];
      iVar4 = FUN_0319d8f8(plVar16,local_68);
      if ((int)param_1[4] == iVar4) {
        uVar12 = iVar4 + 1;
        uVar6 = *puVar13;
        if (iVar4 < (int)(uVar6 & 0x3fffffff)) {
          lVar8 = *plVar16;
        }
        else {
          lVar8 = *plVar16;
          if (0x3ffffffe < iVar4) {
            FUN_032bd0a8(uVar12);
            uVar6 = *puVar13;
          }
          uVar6 = (uVar6 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar6) {
            uVar6 = 0x3fffffff;
          }
          uVar1 = uVar12;
          if ((int)uVar12 <= (int)uVar6) {
            uVar1 = uVar6;
          }
          lVar8 = FUN_032bd1d4(puVar3,uVar1,0x28,lVar8,iVar4,puVar13);
          iVar4 = (int)param_1[4];
          param_1[3] = lVar8;
        }
        puVar19 = (uint *)(lVar8 + (long)iVar4 * 0x28);
        puVar19[2] = uVar15 | uVar9;
        puVar19[3] = uVar14 | uVar9;
        *puVar19 = uVar2;
        puVar19[4] = uVar17;
        puVar19[9] = local_70;
        *(ulong *)(puVar19 + 7) = CONCAT35(uStack_73,uStack_78);
        *(ulong *)(puVar19 + 5) = CONCAT35(uStack_7b,local_80);
        *(uint *)(param_1 + 4) = uVar12;
      }
      else {
        lVar8 = *plVar16 + (long)iVar4 * 0x28;
        *(uint *)(lVar8 + 8) = uVar15 | uVar9;
        *(uint *)(lVar8 + 0xc) = uVar14 | uVar9;
        *(uint *)(lVar8 + 0x10) = uVar17;
        *(ulong *)(lVar8 + 0x19) = CONCAT53(uStack_78,uStack_7b);
        *(ulong *)(lVar8 + 0x14) = CONCAT35(uStack_7b,local_80);
      }
    }
    else {
      if (uVar15 == 0xffffffff) goto LAB_0319d560;
LAB_0319d4fc:
      iVar4 = (**(code **)(*(long *)param_1[1] + 8))((long *)param_1[1],param_2 & 0xffffffff,uVar2);
      if (iVar4 == 0) goto LAB_0319d560;
      iVar4 = (int)((long *)param_1[2])[1];
      uVar14 = iVar4 - 1;
      if (0 < (int)uVar14) {
        uVar12 = (uVar15 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar15 * -0x61c8864f & 0xff00ff) << 8;
        uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
        while( true ) {
          uVar12 = uVar14 & uVar12;
          uVar6 = *(uint *)(*(long *)param_1[2] + (long)(int)uVar12 * 4);
          if (uVar6 == 0xffffffff) break;
          if (uVar6 == uVar15) {
            if ((int)uVar12 < iVar4) goto LAB_0319d72c;
            break;
          }
          uVar12 = uVar12 + 1;
        }
      }
      iVar4 = (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],uVar15);
      if (iVar4 == 0) {
        uVar15 = *puVar19;
        uVar14 = puVar19[1];
        iVar4 = FUN_0319d8f8(plVar16,local_68);
        if ((int)param_1[4] == iVar4) {
          uVar12 = iVar4 + 1;
          uVar6 = *puVar13;
          if (iVar4 < (int)(uVar6 & 0x3fffffff)) {
            lVar8 = *plVar16;
          }
          else {
            lVar8 = *plVar16;
            if (0x3ffffffe < iVar4) {
              FUN_032bd0a8(uVar12);
              uVar6 = *puVar13;
            }
            uVar6 = (uVar6 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar6) {
              uVar6 = 0x3fffffff;
            }
            uVar1 = uVar12;
            if ((int)uVar12 <= (int)uVar6) {
              uVar1 = uVar6;
            }
            lVar8 = FUN_032bd1d4(puVar3,uVar1,0x28,lVar8,iVar4,puVar13);
            iVar4 = (int)param_1[4];
            param_1[3] = lVar8;
          }
          puVar19 = (uint *)(lVar8 + (long)iVar4 * 0x28);
          puVar19[2] = uVar15 | uVar9;
          puVar19[3] = uVar14 | uVar9;
          *puVar19 = uVar2;
          puVar19[4] = uVar17;
          puVar19[9] = local_70;
          *(ulong *)(puVar19 + 7) = CONCAT35(uStack_73,uStack_78);
          *(ulong *)(puVar19 + 5) = CONCAT35(uStack_7b,local_80);
          *(uint *)(param_1 + 4) = uVar12;
        }
        else {
          lVar8 = *plVar16 + (long)iVar4 * 0x28;
          *(uint *)(lVar8 + 8) = uVar15 | uVar9;
          *(uint *)(lVar8 + 0xc) = uVar14 | uVar9;
          *(uint *)(lVar8 + 0x10) = uVar17;
          *(ulong *)(lVar8 + 0x19) = CONCAT53(uStack_78,uStack_7b);
          *(ulong *)(lVar8 + 0x14) = CONCAT35(uStack_7b,local_80);
        }
      }
      else {
        FUN_0319d380(param_1,uVar15);
      }
    }
LAB_0319d72c:
    iVar5 = iVar5 + 1;
    if ((short)piVar18[2] <= iVar5) {
      return;
    }
    lVar8 = *(long *)(lVar7 + 0x20);
  } while( true );
}


