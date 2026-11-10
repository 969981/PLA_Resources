/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fdcc60; name: FUN_02fdcc60
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_02fdcc60(long param_1,float *param_2,undefined4 *param_3,long *param_4,undefined8 *param_5)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  float fVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_310 [16];
  long *local_300;
  undefined8 local_2f8;
  float local_2f0;
  float local_2ec;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [10];
  undefined1 local_2a6;
  long local_280;
  uint local_278;
  uint local_274;
  undefined4 uStack_270;
  undefined4 local_26c;
  long local_268;
  undefined4 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  
  if ((*(int *)(param_1 + 8) < 1) || (*param_2 < 0.0)) {
    FUN_0331fefc(&local_2f0,&local_280,0x200);
    FUN_0332448c(&local_2f0,
                 "No vertices or a negative convex radius supplied. Could not build a convex hull.")
    ;
    uVar12 = 0xabba4d88;
    uVar7 = 0x548;
LAB_02fdcd58:
    FUN_03320af0(uVar12,&local_280,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Physics/Physics/Collide/Shape/Convex/hknpConvexShape.cpp"
                 ,uVar7);
    FUN_0331ff7c(&local_2f0);
    return 0x80040200;
  }
  FUN_001b1d20(auStack_2b0);
  local_2a6 = *(undefined1 *)((long)param_3 + 0x11);
  iVar4 = FUN_001b2c70(param_4,param_1,auStack_2b0);
  if (iVar4 < 2) {
    FUN_0331fefc(&local_2f0,&local_280,0x200);
    FUN_0332448c(&local_2f0,"Face information cannot be built for 0 or 1 dimensional hulls.");
    uVar12 = 0xabba4d89;
    uVar7 = 0x556;
    goto LAB_02fdcd58;
  }
  FUN_001b442c(*param_3,param_4,0xffff);
  iVar4 = FUN_001b9e38(param_4);
  if (iVar4 < 2) {
    FUN_001b2c70(param_4,param_1,auStack_2b0);
  }
  iVar4 = FUN_001b9e38(param_4);
  if (iVar4 == 3) {
    FUN_001b6c88(*param_3,param_4);
  }
  iVar4 = param_3[0x12];
  if (0xfb < iVar4) {
    iVar4 = 0xfc;
  }
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  iVar5 = FUN_001b6914(param_4);
  if (iVar4 < iVar5) {
    uVar12 = NEON_fminnm(*param_3,0x34000000);
    FUN_001b442c(uVar12,param_4,iVar4);
  }
  iVar4 = FUN_001b9e38(param_4);
  if (iVar4 < 2) {
    FUN_001b2c70(param_4,param_1,auStack_2b0);
    cVar3 = *(char *)((long)param_3 + 0x11);
  }
  else {
    cVar3 = *(char *)((long)param_3 + 0x11);
  }
  if (cVar3 == '\0') goto LAB_02fdd088;
  FUN_0328f14c(&local_2f0);
  local_300 = (long *)0x0;
  local_2f8 = 0x8000000000000000;
  FUN_001bb028(param_4,0,&local_300);
  fVar13 = *param_2;
  if (*param_2 <= 0.0075) {
    fVar13 = 0.0075;
  }
  switch(local_2f8 & 0xffffffff) {
  case 0:
    FUN_0331fefc(auStack_310,&local_280,0x200);
    FUN_0332448c(auStack_310,"Degenerated hull does not have valid mass properties!");
    FUN_03320af0(0x5b234d7b,&local_280,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Physics/Physics/Collide/Shape/Convex/hknpConvexShape.cpp"
                 ,0x5a1);
    FUN_0331ff7c(auStack_310);
    goto LAB_02fdd07c;
  case 1:
    iVar4 = FUN_02ffbe18(fVar13,param_3 + 6,local_300,&local_2f0);
    break;
  case 2:
    iVar4 = FUN_02ffbeac(fVar13,param_3 + 6,local_300,local_300 + 2,&local_2f0);
    break;
  case 3:
    local_280 = *local_300;
    local_278 = (uint)local_300[1];
    local_274 = (uint)local_300[2];
    uStack_270 = (undefined4)((ulong)local_300[2] >> 0x20);
    local_26c = (undefined4)local_300[3];
    local_268 = local_300[4];
    local_260 = (undefined4)local_300[5];
    iVar4 = FUN_02ffc0cc(fVar13,param_3 + 6,&local_280,&local_2f0);
    break;
  default:
    iVar4 = FUN_001b9e38(param_4);
    plVar6 = local_300;
    puVar2 = PTR_PTR_0434a090;
    if (iVar4 < 3) {
      local_280 = 0;
      local_278 = 0;
      local_274 = 0x80000000;
      if ((int)local_2f8 == 0) {
        uVar12 = 0;
      }
      else {
        lVar8 = (long)(int)local_2f8 * 0x10;
        uVar11 = 0;
        while( true ) {
          lVar8 = lVar8 + -0x10;
          lVar15 = (plVar6 + uVar11 * 2)[1];
          lVar14 = plVar6[uVar11 * 2];
          if ((uint)uVar11 < (local_274 & 0x3fffffff)) {
            local_278 = (uint)uVar11;
          }
          else {
            local_280 = FUN_02fb8184(puVar2,uVar11 + 1 & 0xffffffff,local_280,uVar11 & 0xffffffff,
                                     &local_274);
          }
          plVar9 = (long *)(local_280 + (long)(int)local_278 * 0xc);
          *plVar9 = lVar14;
          *(int *)(plVar9 + 1) = (int)lVar15;
          local_278 = (uint)(uVar11 + 1);
          if (lVar8 == 0) break;
          uVar11 = uVar11 + 1;
        }
        uVar12 = (int)local_2f8;
      }
      iVar4 = FUN_02ffc47c(fVar13,param_3 + 6,local_280,uVar12,&local_2f0);
      local_278 = 0;
      if ((-1 < (int)local_274) && (local_280 != 0)) {
        (**(code **)(*(long *)puVar2 + 0x18))
                  (puVar2,local_280,((ulong)local_274 & 0x3fffffff) * 0xc);
      }
      break;
    }
    cVar3 = FUN_001bed24(param_4);
    if (cVar3 == '\0') goto LAB_02fdd07c;
    if ((*(char *)(param_3 + 1) == '\0') && (*param_2 != 0.0)) {
      plVar6 = (long *)FUN_001b1fbc(param_4);
      FUN_001b1d4c(&local_280);
      uStack_270 = CONCAT31(uStack_270._1_3_,1);
      FUN_001bb1fc(*param_2,plVar6,&local_280);
    }
    else {
      FUN_032d645c(param_4);
      plVar6 = param_4;
    }
    FUN_001befa4(plVar6,&local_280,&local_2d0);
    uStack_2d8 = uStack_248;
    local_2e0 = local_250;
    FUN_032cb060(auStack_2c0,&local_280);
    local_2f0 = (float)FUN_001bee64(plVar6);
    local_2ec = (float)param_3[0xe];
    if (local_2ec < 0.0) {
      local_2ec = -(local_2ec * local_2f0);
    }
    fVar13 = local_2ec * (float)param_3[0xd];
    local_2d0 = CONCAT44((float)((ulong)local_2d0 >> 0x20) * fVar13,(float)local_2d0 * fVar13);
    uStack_2c8 = CONCAT44((float)((ulong)uStack_2c8 >> 0x20) * fVar13,(float)uStack_2c8 * fVar13);
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar9 = plVar6 + 2;
      do {
        lVar8 = *plVar9;
        cVar3 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar1) {
          *plVar9 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    goto LAB_02fdd010;
  }
  if (-1 < iVar4) {
LAB_02fdd010:
    plVar6 = (long *)FUN_032cf5b0(0x40);
    *plVar6 = (long)&DAT_042bba38;
    plVar6[1] = 0xffffffff;
    plVar6[2] = 1;
    *(undefined2 *)(plVar6 + 3) = 0xf100;
    plVar9 = (long *)*param_5;
    if ((plVar9 != plVar6) && (*param_5 = plVar6, plVar9 != (long *)0x0)) {
      if (plVar9[1] != 0) {
        plVar6 = plVar9 + 2;
        do {
          lVar8 = *plVar6;
          cVar3 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar1) {
            *plVar6 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
      plVar6 = (long *)*param_5;
    }
    FUN_0328eb04(plVar6 + 4,&local_2f0);
  }
LAB_02fdd07c:
  uVar11 = local_2f8;
  uVar10 = (ulong)local_2f8._4_4_;
  local_2f8 = (ulong)local_2f8._4_4_ << 0x20;
  if ((-1 < (long)uVar11) && (local_300 != (long *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_300,(uVar10 & 0x3fffffff) << 4);
  }
LAB_02fdd088:
  if ((*(char *)(param_3 + 1) != '\0') && (0.0 < *param_2)) {
    FUN_001b1d4c(&local_280);
    local_280 = CONCAT44(local_280._4_4_,2);
    local_278 = param_3[2];
    fVar13 = (float)FUN_001bb1fc(-*param_2,param_4,&local_280);
    *param_2 = -fVar13;
  }
  return 0;
}


