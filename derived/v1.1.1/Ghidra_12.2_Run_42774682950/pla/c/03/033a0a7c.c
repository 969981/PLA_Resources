/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a0a7c; name: FUN_033a0a7c
 */


long FUN_033a0a7c(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
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
  uVar12 = (local_94 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar12) {
    uVar12 = 0x3fffffff;
  }
  local_a4 = local_94 & 0x3fffffff;
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar12) {
    local_7c = uVar12;
  }
  local_88 = (ulong)local_7c * 0x18;
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
  lVar10 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  puVar9 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    lVar13 = 0;
    uVar16 = (ulong)param_4;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar13);
      puVar4 = (undefined8 *)(lVar10 + lVar13);
      *puVar4 = *puVar3;
      puVar4[1] = 0;
      puVar4[2] = 0x8000000000000000;
      if (*(int *)((long)puVar3 + 0x14) < 0) {
        FUN_033a0d48(puVar9,puVar3 + 1);
      }
      puVar4[1] = puVar3[1];
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar3 + 2);
      uVar16 = uVar16 - 1;
      lVar13 = lVar13 + 0x18;
      *(undefined4 *)((long)puVar4 + 0x14) = *(undefined4 *)((long)puVar3 + 0x14);
      puVar3[1] = 0;
      puVar3[2] = 0;
    } while (uVar16 != 0);
    uVar16 = 0;
    do {
      lVar17 = param_3 + uVar16 * 0x18;
      plVar18 = (long *)(lVar17 + 8);
      lVar13 = *plVar18;
      piVar14 = (int *)(lVar17 + 0x10);
      iVar5 = *piVar14;
      if (iVar5 != 0) {
        lVar17 = lVar13 + (long)iVar5 * 0x18;
        do {
          while( true ) {
            puVar1 = (ulong *)(lVar17 + -8);
            lVar17 = lVar17 + -0x18;
            if ((*puVar1 & 1) != 0) break;
LAB_033a0c40:
            if (lVar17 == lVar13) goto LAB_033a0c08;
          }
          plVar11 = (long *)(*puVar1 & 0xfffffffffffffffe);
          plVar2 = plVar11 + 1;
          do {
            lVar8 = *plVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *(int *)plVar2 = (int)lVar8 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((plVar11 == (long *)0x0) || ((int)lVar8 != 1)) goto LAB_033a0c40;
          (**(code **)(*plVar11 + 8))();
        } while (lVar17 != lVar13);
      }
LAB_033a0c08:
      *piVar14 = 0;
      puVar15 = (uint *)(param_3 + uVar16 * 0x18 + 0x14);
      uVar12 = *puVar15;
      if ((-1 < (int)uVar12) && (*plVar18 != 0)) {
        (**(code **)(*(long *)puVar9 + 0x18))(puVar9,*plVar18,((ulong)uVar12 & 0x3fffffff) * 0x18);
      }
      uVar16 = uVar16 + 1;
      *plVar18 = 0;
      *puVar15 = 0x80000000;
    } while (uVar16 != param_4);
  }
  if (-1 < (int)local_94) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)local_a4 * 0x18);
  }
  if (local_88 < 0x5ffffffe8) {
    uVar12 = (uint)(local_88 / 0x18);
  }
  else {
    uVar12 = 0x3fffffff;
  }
  *param_5 = uVar12;
  return lVar10;
}


