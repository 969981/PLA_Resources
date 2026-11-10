/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337b484; name: FUN_0337b484
 */


long FUN_0337b484(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  long *plVar19;
  uint local_a4;
  uint local_94;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  local_94 = *param_5;
  uVar13 = (local_94 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar13) {
    uVar13 = 0x3fffffff;
  }
  local_a4 = local_94 & 0x3fffffff;
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar13) {
    local_7c = uVar13;
  }
  local_88 = (ulong)local_7c * 0x28;
  if ((int)local_7c < (int)local_a4 || 0x3fffffff < (int)local_7c) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    local_94 = *param_5;
    local_a4 = local_94 & 0x3fffffff;
  }
  lVar9 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  puVar8 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    lVar14 = 0;
    uVar16 = (ulong)param_4;
    do {
      puVar2 = (undefined8 *)(param_3 + lVar14);
      puVar3 = (undefined8 *)(lVar9 + lVar14);
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0x8000000000000000;
      if (*(int *)((long)puVar2 + 0x24) < 0) {
        FUN_0337aab4(puVar8,puVar2 + 3);
      }
      puVar3[3] = puVar2[3];
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar2 + 4);
      uVar16 = uVar16 - 1;
      lVar14 = lVar14 + 0x28;
      *(undefined4 *)((long)puVar3 + 0x24) = *(undefined4 *)((long)puVar2 + 0x24);
      puVar2[3] = 0;
      puVar2[4] = 0;
    } while (uVar16 != 0);
    uVar16 = 0;
    do {
      lVar18 = param_3 + uVar16 * 0x28;
      plVar19 = (long *)(lVar18 + 0x18);
      lVar14 = *plVar19;
      piVar17 = (int *)(lVar18 + 0x20);
      iVar4 = *piVar17;
      if (iVar4 != 0) {
        lVar18 = lVar14 + (long)iVar4 * 0x18;
        do {
          while( true ) {
            puVar1 = (ulong *)(lVar18 + -8);
            lVar18 = lVar18 + -0x18;
            if ((*puVar1 & 1) != 0) break;
LAB_0337b638:
            if (lVar18 == lVar14) goto LAB_0337b640;
          }
          plVar10 = (long *)(*puVar1 & 0xfffffffffffffffe);
          plVar11 = plVar10 + 1;
          do {
            lVar7 = *plVar11;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *(int *)plVar11 = (int)lVar7 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar10 == (long *)0x0) || ((int)lVar7 != 1)) goto LAB_0337b638;
          (**(code **)(*plVar10 + 8))();
        } while (lVar18 != lVar14);
      }
LAB_0337b640:
      *piVar17 = 0;
      puVar15 = (uint *)(param_3 + uVar16 * 0x28 + 0x24);
      uVar13 = *puVar15;
      if ((-1 < (int)uVar13) && (*plVar19 != 0)) {
        (**(code **)(*(long *)puVar8 + 0x18))(puVar8,*plVar19,((ulong)uVar13 & 0x3fffffff) * 0x18);
      }
      *plVar19 = 0;
      *puVar15 = 0x80000000;
      uVar12 = *(ulong *)(param_3 + uVar16 * 0x28 + 0x10);
      if ((uVar12 & 1) != 0) {
        plVar11 = (long *)(uVar12 & 0xfffffffffffffffe);
        plVar19 = plVar11 + 1;
        do {
          lVar14 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *(int *)plVar19 = (int)lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar11 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != param_4);
  }
  if (-1 < (int)local_94) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)local_a4 * 0x28);
  }
  if (local_88 < 0x9ffffffd8) {
    uVar13 = (uint)(local_88 / 0x28);
  }
  else {
    uVar13 = 0x3fffffff;
  }
  *param_5 = uVar13;
  return lVar9;
}


