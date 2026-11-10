/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cca94; name: FUN_031cca94
 */


void FUN_031cca94(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  ulong local_b0;
  ulong local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined *local_78;
  int *piStack_70;
  undefined4 *local_68;
  
  if (*(int *)(param_2 + 0x28) != 0) {
    plVar11 = *(long **)(param_2 + 0x20);
    lVar12 = (long)*(int *)(param_2 + 0x28) << 3;
    do {
      if ((*plVar11 != 0) && (*(int *)(*plVar11 + 0xc0) != 0)) {
        lVar12 = tpidr_el0;
        lVar8 = *(long *)(lVar12 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar12 + 0x38d490) = lVar8;
        }
        plVar11 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        puVar6 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x28,0);
        *puVar6 = &PTR_LAB_0430aa60;
        puVar6[1] = 0xffffffff;
        puVar6[2] = 1;
        puVar6[3] = 0;
        puVar6[4] = 0x8000000000000000;
        iVar3 = *(int *)(param_2 + 0x28);
        if (iVar3 < 1) {
          lVar12 = 0;
        }
        else {
          lVar12 = FUN_031cfb3c(PTR_PTR_0434a080,iVar3,0,0,(long)puVar6 + 0x24);
          puVar6[3] = lVar12;
          iVar3 = *(int *)(param_2 + 0x28);
        }
        if (iVar3 == 0) goto LAB_031ccd4c;
        plVar19 = *(long **)(param_2 + 0x20);
        plVar11 = plVar19 + iVar3;
        goto LAB_031ccbb8;
      }
      plVar11 = plVar11 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  *param_1 = 0;
  return;
LAB_031ccbb8:
  lVar16 = (long)*(int *)(puVar6 + 4);
  lVar17 = *plVar19;
  *(int *)(puVar6 + 4) = (int)(lVar16 + 1);
  lVar8 = (lVar16 + 1) * 0x20;
  puVar2 = (undefined8 *)(lVar12 + lVar16 * 0x20);
  uVar13 = (lVar8 + lVar16 * -0x20) - 0x20;
  uVar1 = ((uint)(uVar13 >> 5) & 0x7ffffff) + 1;
  puVar9 = puVar2;
  if ((uVar1 & 3) != 0) {
    lVar14 = -((ulong)uVar1 & 3);
    do {
      *puVar9 = 0;
      puVar9[1] = 0x8000000000000000;
      bVar5 = lVar14 != -1;
      lVar14 = lVar14 + 1;
      puVar9[2] = &DAT_03aad864;
      *(undefined4 *)(puVar9 + 3) = 0;
      puVar9 = puVar9 + 4;
    } while (bVar5);
  }
  if (0x5f < uVar13) {
    do {
      *puVar9 = 0;
      puVar9[1] = 0x8000000000000000;
      puVar9[2] = &DAT_03aad864;
      *(undefined4 *)(puVar9 + 3) = 0;
      puVar9[6] = &DAT_03aad864;
      *(undefined4 *)(puVar9 + 7) = 0;
      puVar9[10] = &DAT_03aad864;
      *(undefined4 *)(puVar9 + 0xb) = 0;
      puVar9[0xe] = &DAT_03aad864;
      *(undefined4 *)(puVar9 + 0xf) = 0;
      puVar9[4] = 0;
      puVar9[5] = 0x8000000000000000;
      puVar9[8] = 0;
      puVar9[9] = 0x8000000000000000;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0x8000000000000000;
      puVar9 = puVar9 + 0x10;
    } while (puVar9 != (undefined8 *)(lVar12 + lVar8));
  }
  if (lVar17 != 0) {
    if ((undefined8 *)(lVar17 + 0xb8) != puVar2) {
      lVar8 = lVar12 + lVar16 * 0x20;
      piVar18 = (int *)(lVar8 + 0xc);
      if (*piVar18 < 0) {
        local_84 = 4;
        piVar15 = (int *)(lVar8 + 8);
        iVar3 = *piVar15;
        local_90 = (long)iVar3 << 2;
        if (iVar3 < 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_84;
          piStack_70 = piVar15;
          FUN_03320b50(0x77a36e5f,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x27,"Array size overflow {}*{}",&local_80);
          iVar3 = *piVar15;
        }
        if (iVar3 == 0) {
          *piVar18 = 0;
          *puVar2 = 0;
          iVar3 = *(int *)(lVar17 + 0xc4);
        }
        else {
          pvVar7 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                     (PTR_PTR_0434a080,local_90,&local_90);
          if (pvVar7 == (void *)0x0) goto LAB_031ccc7c;
          local_b0 = local_90 >> 2;
          if (0x3ffffffe < local_b0) {
            local_b0 = 0x3fffffff;
          }
          memcpy(pvVar7,(void *)*puVar2,local_90);
          *puVar2 = pvVar7;
          *piVar18 = (int)local_b0;
          iVar3 = *(int *)(lVar17 + 0xc4);
        }
      }
      else {
LAB_031ccc7c:
        iVar3 = *(int *)(lVar17 + 0xc4);
      }
      if (iVar3 < 0) {
        local_84 = 4;
        piVar15 = (int *)(lVar17 + 0xc0);
        iVar3 = *piVar15;
        local_90 = (long)iVar3 << 2;
        if (iVar3 < 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_84;
          piStack_70 = piVar15;
          FUN_03320b50(0x77a36e5f,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x27,"Array size overflow {}*{}",&local_80);
          iVar3 = *piVar15;
        }
        if (iVar3 == 0) {
          *(undefined4 *)(lVar17 + 0xc4) = 0;
          *(undefined8 *)(lVar17 + 0xb8) = 0;
        }
        else {
          pvVar7 = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                                     (PTR_PTR_0434a080,local_90,&local_90);
          if (pvVar7 != (void *)0x0) {
            local_b0 = local_90 >> 2;
            if (0x3ffffffe < local_b0) {
              local_b0 = 0x3fffffff;
            }
            memcpy(pvVar7,*(void **)(lVar17 + 0xb8),local_90);
            *(void **)(lVar17 + 0xb8) = pvVar7;
            *(int *)(lVar17 + 0xc4) = (int)local_b0;
          }
        }
      }
      uVar10 = *puVar2;
      *puVar2 = *(undefined8 *)(lVar17 + 0xb8);
      *(undefined8 *)(lVar17 + 0xb8) = uVar10;
      uVar4 = *(undefined4 *)(lVar8 + 8);
      *(undefined4 *)(lVar8 + 8) = *(undefined4 *)(lVar17 + 0xc0);
      *(undefined4 *)(lVar17 + 0xc0) = uVar4;
      iVar3 = *piVar18;
      *piVar18 = *(int *)(lVar17 + 0xc4);
      *(int *)(lVar17 + 0xc4) = iVar3;
    }
    FUN_032c2b68(lVar12 + lVar16 * 0x20 + 0x10,lVar17 + 200);
    FUN_031ccee4(lVar17 + 0xd8);
  }
  plVar19 = plVar19 + 1;
  if (plVar19 == plVar11) {
LAB_031ccd4c:
    *param_1 = puVar6;
    return;
  }
  lVar12 = puVar6[3];
  goto LAB_031ccbb8;
}


