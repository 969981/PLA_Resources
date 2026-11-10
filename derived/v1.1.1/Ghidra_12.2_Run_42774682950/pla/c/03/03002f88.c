/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03002f88; name: FUN_03002f88
 */


undefined8 FUN_03002f88(long *param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulong *puVar20;
  uint *puVar21;
  long *plVar22;
  ulong uVar23;
  ulong local_80;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  lVar10 = *param_1;
  if (lVar10 != 0) {
    FUN_03004714(lVar10 + 0x768,lVar10,param_1);
  }
  puVar20 = (ulong *)(param_1 + 1);
  uVar23 = *puVar20;
  bVar5 = *(uint *)((long)param_1 + 0x2c) < param_3;
  uVar19 = *(uint *)(param_1 + 2);
  if ((!bVar5 && param_3 <= uVar19) && (bVar5 || uVar19 != param_3)) {
    uVar17 = param_3;
    do {
      if (*(int *)(uVar23 + (long)(int)uVar17 * 0x68 + 0x30) != 0x7fffffff) {
        return 0x80040200;
      }
      uVar17 = uVar17 + 1;
    } while (uVar19 != uVar17);
  }
  lVar10 = param_1[3];
  uVar17 = uVar19;
  if (param_3 <= uVar19) {
    uVar17 = param_3;
  }
  lVar3 = param_1[4];
  if ((param_2 == 0) && (param_3 != 0)) {
    *(uint *)(param_1 + 4) = param_3 * 0x68;
    lVar6 = (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                      (PTR_PTR_0434a080,(long)(int)(param_3 * 0x68),0);
    param_1[3] = lVar6;
    param_2 = lVar6 + 0xfU & 0xfffffffffffffff0;
  }
  else {
    param_1[3] = 0;
  }
  if (uVar23 != 0) {
    if (lVar10 == 0) {
      if (*(int *)((long)param_1 + 0x14) < 0) {
        if (param_2 != uVar23) {
          FUN_032c4af0(param_2,uVar23,uVar17 * 0x68);
        }
      }
      else {
        FUN_032c4a00(param_2,uVar23,uVar17 * 0x68);
        *(undefined4 *)(param_1 + 2) = 0;
        if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (*puVar20 != 0)) {
          (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                    (PTR_PTR_0434a080,*puVar20,
                     ((ulong)*(uint *)((long)param_1 + 0x14) & 0x3fffffff) * 0x68);
        }
        param_1[1] = 0;
        *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
      }
    }
    else {
      FUN_032c4a00(param_2,uVar23,uVar17 * 0x68);
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,lVar10,(long)(int)lVar3);
    }
  }
  param_1[1] = param_2;
  *(uint *)(param_1 + 2) = param_3;
  *(uint *)((long)param_1 + 0x14) = param_3 | 0x80000000;
  if (uVar19 < param_3) {
    uVar17 = uVar19;
    while( true ) {
      puVar18 = (undefined8 *)(param_2 + (long)(int)uVar17 * 0x68);
      *(undefined4 *)(puVar18 + 6) = 0x7fffffff;
      *puVar18 = 0xffffffffffffffff;
      *(undefined4 *)(puVar18 + 1) = 0xffffff;
      puVar18[2] = 0xffffffffffffffff;
      *(undefined4 *)(puVar18 + 3) = 0xffffff;
      *(ushort *)((long)puVar18 + 0x42) = *(ushort *)((long)puVar18 + 0x42) | 4;
      if (param_3 - 1 == uVar17) break;
      param_2 = *puVar20;
      uVar17 = uVar17 + 1;
    }
    uVar17 = uVar19;
    if ((param_3 - uVar19 & 1) != 0) {
      uVar17 = uVar19 + 1;
      *(uint *)(*puVar20 + (long)(int)uVar19 * 0x68 + 0x34) = uVar17;
    }
    if (~uVar19 + param_3 != 0) {
      do {
        lVar10 = (long)(int)uVar17;
        iVar16 = uVar17 + 1;
        uVar17 = uVar17 + 2;
        *(int *)(*puVar20 + lVar10 * 0x68 + 0x34) = iVar16;
        *(uint *)(*puVar20 + (long)iVar16 * 0x68 + 0x34) = uVar17;
      } while (param_3 != uVar17);
    }
    *(undefined4 *)(param_1[1] + (long)(int)(param_3 - 1) * 0x68 + 0x34) = 0xffffffff;
    uVar17 = *(uint *)((long)param_1 + 0x24);
    if (uVar19 == 0) {
      *(uint *)((long)param_1 + 0x24) = uVar17 & 0xff000000;
    }
    else {
      uVar14 = uVar17 & 0xffffff;
      if (uVar14 == 0xffffff) {
        *(uint *)((long)param_1 + 0x24) = uVar17 & 0xff000000 | uVar19 & 0xffffff;
      }
      else {
        do {
          puVar21 = (uint *)(*puVar20 + (long)(int)uVar14 * 0x68 + 0x34);
          uVar14 = *puVar21;
        } while (uVar14 != 0xffffffff);
        *puVar21 = uVar19;
      }
    }
  }
  else {
    FUN_030047cc(puVar20);
  }
  FUN_032c1e54(0x3f59999a,param_1 + 0x12,param_3 << 1 | 1);
  uVar19 = *(uint *)(param_1 + 0x16);
  if (uVar19 < param_3) {
    puVar21 = (uint *)((long)param_1 + 0xb4);
    uVar17 = *puVar21;
    if ((int)(uVar17 & 0x3fffffff) < (int)param_3) {
      lVar10 = param_1[0x15];
      if (0x3fffffff < (int)param_3) {
        FUN_032bd0a8(param_3);
        uVar17 = *puVar21;
      }
      uVar17 = (uVar17 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar17) {
        uVar17 = 0x3fffffff;
      }
      uVar14 = param_3;
      if ((int)param_3 <= (int)uVar17) {
        uVar14 = uVar17;
      }
      lVar10 = FUN_032bd1d4(PTR_PTR_0434a080,uVar14,8,lVar10,uVar19,puVar21);
      uVar19 = *(uint *)(param_1 + 0x16);
      param_1[0x15] = lVar10;
    }
    if ((int)uVar19 < (int)param_3) {
      *(uint *)(param_1 + 0x16) = param_3;
      puVar18 = (undefined8 *)(param_1[0x15] + (long)(int)uVar19 * 8);
      uVar17 = param_3 - uVar19 & 3;
      if (2 < ~uVar19 + param_3) {
        iVar16 = (uVar19 + uVar17) - param_3;
        puVar7 = puVar18;
        do {
          puVar18 = puVar7 + 4;
          *puVar7 = 0x7fffffff7fffffff;
          puVar7[1] = 0x7fffffff7fffffff;
          iVar16 = iVar16 + 4;
          puVar7[2] = 0x7fffffff7fffffff;
          puVar7[3] = 0x7fffffff7fffffff;
          puVar7 = puVar18;
        } while (iVar16 != 0);
      }
      for (; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar18 = 0x7fffffff7fffffff;
        puVar18 = puVar18 + 1;
      }
    }
    else if ((int)param_3 < (int)uVar19) {
      *(uint *)(param_1 + 0x16) = param_3;
    }
  }
  uVar17 = *(uint *)((long)param_1 + 0x74);
  uVar19 = uVar17 & 0x3fffffff;
  *(uint *)(param_1 + 0xf) = param_3;
  if ((int)uVar19 < (int)param_3) {
    puVar18 = (undefined8 *)param_1[0xd];
    uVar14 = *(uint *)(param_1 + 0xe);
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(param_3);
      uVar17 = *(uint *)((long)param_1 + 0x74);
      uVar19 = uVar17 & 0x3fffffff;
    }
    puVar4 = PTR_PTR_0434a080;
    uVar11 = (uVar17 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    local_54 = param_3;
    if ((int)param_3 <= (int)uVar11) {
      local_54 = uVar11;
    }
    local_80 = (ulong)local_54 << 3;
    if (((int)local_54 < (int)uVar19) || (0x3fffffff < (int)local_54)) {
      local_78 = 1;
      puStack_68 = &local_54;
      local_70 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar17 = *(uint *)((long)param_1 + 0x74);
      uVar19 = uVar17 & 0x3fffffff;
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
    if (0 < (int)uVar14) {
      puVar13 = puVar7;
      puVar15 = puVar18;
      uVar23 = (ulong)uVar14;
      do {
        uVar23 = uVar23 - 1;
        *puVar13 = *puVar15;
        *puVar15 = 0;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
      } while (uVar23 != 0);
      uVar23 = 0;
      do {
        plVar9 = (long *)puVar18[uVar23];
        if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
          plVar8 = plVar9 + 2;
          do {
            lVar10 = *plVar8;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar14);
    }
    if (-1 < (int)uVar17) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,puVar18,(ulong)uVar19 << 3);
    }
    if (local_80 < 0x1fffffff8) {
      uVar12 = (undefined4)(local_80 >> 3);
    }
    else {
      uVar12 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x74) = uVar12;
    param_1[0xd] = (long)puVar7;
  }
  uVar19 = *(uint *)(param_1 + 0xe);
  if ((int)uVar19 < (int)param_3) {
    *(uint *)(param_1 + 0xe) = param_3;
    memset((void *)(param_1[0xd] + (long)(int)uVar19 * 8),0,(ulong)(~uVar19 + param_3) * 8 + 8);
  }
  else if ((int)param_3 < (int)uVar19) {
    plVar9 = (long *)(param_1[0xd] + (long)(int)param_3 * 8);
    *(uint *)(param_1 + 0xe) = param_3;
    plVar22 = (long *)(param_1[0xd] + (long)(int)uVar19 * 8 + -8);
    plVar8 = (long *)*plVar22;
    if (plVar8 != (long *)0x0) goto LAB_0300341c;
LAB_0300340c:
    if (plVar22 != plVar9) {
      while( true ) {
        plVar22 = plVar22 + -1;
        plVar8 = (long *)*plVar22;
        if (plVar8 == (long *)0x0) break;
LAB_0300341c:
        if (plVar8[1] == 0) break;
        plVar1 = plVar8 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 != 0) break;
        (**(code **)(*plVar8 + 0x18))();
        if (plVar22 == plVar9) goto LAB_0300326c;
      }
      goto LAB_0300340c;
    }
  }
LAB_0300326c:
  lVar10 = *param_1;
  if (lVar10 != 0) {
    FUN_03004714(lVar10 + 0x770,lVar10,param_1);
  }
  return 0;
}


