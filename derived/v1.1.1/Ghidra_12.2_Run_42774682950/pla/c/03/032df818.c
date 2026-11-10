/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032df818; name: FUN_032df818
 */


long FUN_032df818(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  uint *puVar12;
  int *piVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined *puStack_78;
  int *local_70;
  undefined4 *puStack_68;
  
  uVar14 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar8 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar8) {
    uVar8 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar8) {
    param_2 = uVar8;
  }
  FUN_032bd100(param_2,0x18,*param_5,&local_98);
  uVar8 = *param_5;
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_98,&local_98);
  puVar4 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    uVar16 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + uVar16 * 0x18);
      puVar2 = (undefined8 *)(lVar5 + uVar16 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = 0;
      puVar2[2] = 0x8000000000000000;
      piVar11 = (int *)((long)puVar1 + 0x14);
      plVar15 = puVar1 + 1;
      if (*piVar11 < 0) {
        local_84 = 0x10;
        piVar13 = (int *)(param_3 + uVar16 * 0x18 + 0x10);
        iVar7 = *piVar13;
        local_90 = (long)iVar7 << 4;
        if (iVar7 < 0) {
          local_80 = 2;
          puStack_78 = &DAT_0411b3a0;
          local_70 = piVar13;
          puStack_68 = &local_84;
          FUN_03320b50(0x77a36e5f,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x27,"Array size overflow {}*{}",&local_80);
          iVar7 = *piVar13;
        }
        if (iVar7 == 0) {
          *piVar11 = 0;
          *plVar15 = 0;
        }
        else {
          lVar6 = (**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_90,&local_90);
          if (lVar6 != 0) {
            iVar7 = (int)(local_90 >> 4);
            if (0x3ffffffe < iVar7) {
              iVar7 = 0x3fffffff;
            }
            if (0 < *piVar13) {
              lVar9 = 0;
              lVar10 = 0;
              do {
                uVar3 = ((undefined8 *)(*plVar15 + lVar9))[1];
                lVar10 = lVar10 + 1;
                *(undefined8 *)(lVar6 + lVar9) = *(undefined8 *)(*plVar15 + lVar9);
                ((undefined8 *)(lVar6 + lVar9))[1] = uVar3;
                lVar9 = lVar9 + 0x10;
              } while (lVar10 < *piVar13);
            }
            *plVar15 = lVar6;
            *piVar11 = iVar7;
          }
        }
      }
      lVar6 = uVar16 * 0x18;
      uVar16 = uVar16 + 1;
      puVar2[1] = *plVar15;
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_3 + lVar6 + 0x10);
      *(int *)((long)puVar2 + 0x14) = *piVar11;
      *plVar15 = 0;
      puVar1[2] = 0;
    } while (uVar16 != uVar14);
    puVar12 = (uint *)(param_3 + 0x14);
    do {
      puVar12[-1] = 0;
      if ((-1 < (int)*puVar12) && (*(long *)(puVar12 + -3) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x18))
                  (puVar4,*(long *)(puVar12 + -3),((ulong)*puVar12 & 0x3fffffff) << 4);
      }
      puVar12[-3] = 0;
      puVar12[-2] = 0;
      uVar14 = uVar14 - 1;
      *puVar12 = 0x80000000;
      puVar12 = puVar12 + 6;
    } while (uVar14 != 0);
  }
  if (-1 < (int)uVar8) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar8 & 0x3fffffff) * 0x18);
  }
  if (local_98 < 0x5ffffffe8) {
    uVar8 = (uint)(local_98 / 0x18);
  }
  else {
    uVar8 = 0x3fffffff;
  }
  *param_5 = uVar8;
  return lVar5;
}


