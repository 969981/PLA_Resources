/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031026f4; name: FUN_031026f4
 */


void FUN_031026f4(undefined8 *param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint *puVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  
  *param_1 = param_2;
  plVar16 = param_1 + 1;
  *plVar16 = 0;
  param_1[2] = 0x8000000000000000;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  uVar17 = (ulong)param_4;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  plVar10 = param_1 + 10;
  *plVar10 = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  plVar8 = param_1 + 7;
  *plVar8 = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = param_3;
  *(undefined8 *)((long)param_1 + 100) = 0;
  param_1[0xb] = 0;
  lVar20 = tpidr_el0;
  lVar13 = *(long *)(lVar20 + 0x38d490);
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar13;
  }
  plVar6 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
  plVar7 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x538,0);
  memset(plVar7 + 5,0,0x510);
  plVar7[2] = 1;
  plVar7[3] = (long)(plVar7 + 5);
  *plVar7 = (long)(PTR_DAT_04388898 + 0x10);
  plVar7[1] = 0xffffffff;
  plVar7[4] = -0x7fffffe000000000;
  lVar13 = 0x4e;
  plVar6 = plVar7 + 0x27;
  do {
    iVar11 = (int)lVar13;
    *(int *)((long)plVar6 + -0xc) = iVar11 + -0x4d;
    *(int *)(plVar6 + -1) = iVar11 + -0x4c;
    lVar13 = lVar13 + 4;
    *(int *)((long)plVar6 + -4) = iVar11 + -0x4b;
    *(int *)plVar6 = iVar11 + -0x4a;
    plVar6 = plVar6 + 2;
  } while (lVar13 != 0x14e);
  *(undefined4 *)(plVar7 + 0xa5) = 0x1ff;
  *(undefined4 *)(plVar7 + 0x25) = 0;
  plVar7[0xa6] = 0;
  plVar6 = (long *)param_1[8];
  if (((plVar6 != plVar7) && (param_1[8] = plVar7, plVar6 != (long *)0x0)) && (plVar6[1] != 0)) {
    plVar7 = plVar6 + 2;
    do {
      lVar13 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  lVar13 = *(long *)(lVar20 + 0x38d490);
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar13;
  }
  plVar6 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
  lVar13 = (**(code **)(*plVar6 + 0x10))(plVar6,0x3e40,0);
  FUN_02f903a4(lVar13,0);
  plVar6 = (long *)*plVar8;
  *plVar8 = lVar13;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
    lVar13 = *plVar8;
  }
  FUN_02f91920(lVar13 + 0x98,1,9,&LAB_030f7a80,"hkParticleCompressedMeshClosest",0xffffffff,0);
  FUN_02f91920(*plVar8 + 0x98,1,10,&LAB_030f7bb0,"hkParticleExternMeshClosest",0xffffffff,0);
  FUN_02f91920(*plVar8 + 0x98,1,8,&LAB_030f7cd0,"hkParticleMeshClosest",0xffffffff,0);
  FUN_02f91920(*plVar8 + 0x98,1,0xc,&LAB_030f7e20,"hknpParticleCompoundClosest",0xffffffff,0);
  FUN_02f91920(*plVar8 + 0x98,1,0xe,&LAB_030f7f80,"hknpParticleHeightFieldClosest",0xffffffff,0);
  FUN_02f91920(*plVar8 + 0x98,1,0xd,&LAB_030f80a0,"hknpParticleSDFClosest",0xffffffff,0);
  lVar13 = *(long *)(lVar20 + 0x38d490);
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar13;
  }
  plVar8 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
  puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x20,0);
  *puVar9 = &PTR_LAB_042b5788;
  puVar9[1] = 0;
  puVar9[2] = 0x3d088889;
  puVar9[3] = 0;
  plVar8 = (long *)*plVar10;
  *plVar10 = (long)puVar9;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x10))();
  }
  lVar13 = *(long *)(lVar20 + 0x38d490);
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar13;
  }
  plVar10 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
  puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,0);
  *puVar9 = &PTR_LAB_042b57e8;
  puVar9[1] = 0;
  plVar10 = (long *)param_1[0xb];
  param_1[0xb] = puVar9;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x10))();
  }
  *(undefined8 **)(param_1[10] + 8) = param_1;
  *(undefined8 **)(param_1[0xb] + 8) = param_1;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  uVar2 = *(uint *)(param_1 + 2);
  uVar21 = (ulong)uVar2;
  if ((param_4 <= *(uint *)((long)param_1 + 0x2c)) && (param_4 < uVar2)) {
    uVar19 = uVar17;
    do {
      if ((~*(uint *)(*plVar16 + (long)(int)uVar19 * 0x10 + 8) & 0xffffff) != 0) {
        return;
      }
      uVar3 = (int)uVar19 + 1;
      uVar19 = (ulong)uVar3;
    } while (uVar2 != uVar3);
  }
  uVar3 = *(uint *)(param_1 + 2);
  uVar19 = param_1[1];
  if ((param_4 <= *(uint *)((long)param_1 + 0x2c)) && (param_4 < uVar3)) {
    uVar18 = uVar17;
    do {
      if ((~*(uint *)(uVar19 + (long)(int)uVar18 * 0x10 + 8) & 0xffffff) != 0) {
        return;
      }
      uVar14 = (int)uVar18 + 1;
      uVar18 = (ulong)uVar14;
    } while (uVar3 != uVar14);
  }
  lVar20 = param_1[3];
  uVar14 = uVar3;
  if (param_4 <= uVar3) {
    uVar14 = param_4;
  }
  iVar11 = *(int *)(param_1 + 4);
  if (param_4 == 0) {
    uVar18 = 0;
    param_1[3] = 0;
  }
  else {
    *(uint *)(param_1 + 4) = param_4 << 4;
    lVar13 = (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                       (PTR_PTR_0434a080,(long)(int)(param_4 << 4),0);
    param_1[3] = lVar13;
    uVar18 = lVar13 + 0xfU & 0xfffffffffffffff0;
  }
  if (uVar19 != 0) {
    if (lVar20 == 0) {
      if (*(int *)((long)param_1 + 0x14) < 0) {
        if (uVar18 != uVar19) {
          FUN_032c4af0(uVar18,uVar19,uVar14 << 4);
        }
      }
      else {
        FUN_032c4a00(uVar18,uVar19,uVar14 << 4);
        *(undefined4 *)(param_1 + 2) = 0;
        if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (*plVar16 != 0)) {
          (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                    (PTR_PTR_0434a080,*plVar16,
                     ((ulong)*(uint *)((long)param_1 + 0x14) & 0x3fffffff) << 4);
        }
        param_1[1] = 0;
        *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
      }
    }
    else {
      FUN_032c4a00(uVar18,uVar19,uVar14 << 4);
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,lVar20,(long)iVar11);
    }
  }
  param_1[1] = uVar18;
  *(uint *)(param_1 + 2) = param_4;
  *(uint *)((long)param_1 + 0x14) = param_4 | 0x80000000;
  if (uVar3 < param_4) {
    lVar20 = uVar18 + (long)(int)uVar3 * 0x10;
    *(uint *)(lVar20 + 8) = *(uint *)(lVar20 + 8) | 0xffffff;
    uVar14 = uVar3 + 1;
    if (uVar14 != param_4) {
      if ((~uVar3 + param_4 & 1) != 0) {
        lVar20 = *plVar16 + (long)(int)uVar14 * 0x10;
        *(uint *)(lVar20 + 8) = *(uint *)(lVar20 + 8) | 0xffffff;
        uVar14 = uVar3 + 2;
      }
      if (param_4 - 2 != uVar3) {
        do {
          lVar20 = *plVar16 + (long)(int)uVar14 * 0x10;
          *(uint *)(lVar20 + 8) = *(uint *)(lVar20 + 8) | 0xffffff;
          iVar11 = uVar14 + 1;
          uVar14 = uVar14 + 2;
          lVar20 = *plVar16 + (long)iVar11 * 0x10;
          *(uint *)(lVar20 + 8) = *(uint *)(lVar20 + 8) | 0xffffff;
        } while (param_4 != uVar14);
      }
    }
    uVar14 = uVar3;
    if ((param_4 - uVar3 & 1) != 0) {
      uVar14 = uVar3 + 1;
      *(uint *)(*plVar16 + (long)(int)uVar3 * 0x10 + 0xc) = uVar14;
    }
    if (~uVar3 + param_4 != 0) {
      do {
        lVar20 = (long)(int)uVar14;
        iVar11 = uVar14 + 1;
        uVar14 = uVar14 + 2;
        *(int *)(*plVar16 + lVar20 * 0x10 + 0xc) = iVar11;
        *(uint *)(*plVar16 + (long)iVar11 * 0x10 + 0xc) = uVar14;
      } while (param_4 != uVar14);
    }
    *(undefined4 *)(param_1[1] + (long)(int)(param_4 - 1) * 0x10 + 0xc) = 0xffffffff;
    uVar14 = *(uint *)((long)param_1 + 0x24);
    if (uVar3 == 0) {
      *(uint *)((long)param_1 + 0x24) = uVar14 & 0xff000000;
    }
    else {
      uVar12 = uVar14 & 0xffffff;
      if (uVar12 == 0xffffff) {
        *(uint *)((long)param_1 + 0x24) = uVar14 & 0xff000000 | uVar3 & 0xffffff;
      }
      else {
        do {
          puVar15 = (uint *)(*plVar16 + (long)(int)uVar12 * 0x10 + 0xc);
          uVar12 = *puVar15;
        } while (uVar12 != 0xffffffff);
        *puVar15 = uVar3;
      }
    }
  }
  else {
    FUN_03104730(plVar16);
  }
  if (uVar2 < param_4) {
    uVar19 = ~uVar21;
    if ((param_4 - uVar2 & 1) != 0) {
      lVar20 = uVar21 * 0x10;
      uVar21 = uVar21 + 1;
      *(undefined4 *)(*plVar16 + lVar20 + 8) = 0xffffff;
    }
    if (uVar19 + uVar17 != 0) {
      lVar13 = uVar17 - uVar21;
      lVar20 = uVar21 << 4;
      do {
        *(undefined4 *)(*plVar16 + lVar20 + 8) = 0xffffff;
        lVar1 = *plVar16 + lVar20;
        lVar13 = lVar13 + -2;
        lVar20 = lVar20 + 0x20;
        *(undefined4 *)(lVar1 + 0x18) = 0xffffff;
      } while (lVar13 != 0);
    }
  }
  return;
}


