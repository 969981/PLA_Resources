/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03159198; name: FUN_03159198
 */


ulong FUN_03159198(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined **local_350;
  ulong local_348;
  undefined **local_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined *local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  long lStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_280;
  undefined8 uStack_278;
  long local_268;
  undefined *local_260;
  undefined8 uStack_258;
  undefined **local_250;
  float local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  float local_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  
  lVar11 = tpidr_el0;
  if (*(long *)(lVar11 + 0x38d490) == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar7;
    lVar11 = *(long *)(lVar7 + 0x10);
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38d490) + 0x10);
  }
  if (lVar11 != 0) {
    puVar1 = *(undefined8 **)(lVar11 + 8);
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= *(ulong *)(lVar11 + 0x10)) &&
       (*(ulong *)(lVar11 + 8) = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtgetFaceForPath";
      uVar12 = nn::os::GetSystemTick();
      puVar1[1] = uVar12;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x40);
  uVar5 = (ulong)uVar2;
  local_268 = lVar11;
  if ((int)uVar2 < 1) {
    uVar10 = 0xffffffff;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x38);
    uVar10 = 0xffffffff;
    plVar9 = plVar6;
    do {
      if (*plVar9 != 0) {
        local_248 = *(float *)((long)param_4 + 0x14);
        lVar7 = (long)(int)uVar2;
        plVar9 = *(long **)(param_1 + 0xe0);
        local_230 = *(float *)((long)param_4 + 0x2c);
        goto LAB_03159240;
      }
      uVar5 = uVar5 - 1;
      plVar9 = plVar9 + 0x1e;
    } while (uVar5 != 0);
  }
  goto joined_r0x031596d4;
  while( true ) {
    lVar7 = lVar7 + -1;
    plVar6 = plVar6 + 0x1e;
    if (lVar7 == 0) break;
LAB_03159240:
    if ((*plVar6 != 0) &&
       (lVar8 = *(long *)(*plVar6 + 0x20), *(float *)(lVar8 + 0x180) == local_230)) {
      if (*(char *)(param_4 + 2) == '\0') goto LAB_03159280;
      fVar14 = local_248 - *(float *)(*(long *)(lVar8 + 0x68) + 0xb0);
      fVar13 = 0.0;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (*(float *)(param_4 + 3) * fVar14 <= 0.0) goto LAB_03159280;
      lVar7 = param_4[7];
      if (-1 < lVar7) {
        fVar15 = *(float *)(*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x18) +
                                     (long)(int)lVar7 * 0x18) + (lVar7 >> 0x20) * 0x18 + 8);
        fVar16 = *(float *)(param_1 + ((lVar7 << 0x20) >> 0x1e) + 0x60);
        if (fVar16 + 0.001 < fVar15) {
          fVar13 = (float)((int)((fVar15 - fVar16) / 254.0) + 1);
        }
      }
      local_248 = local_248 + local_248;
      uStack_258 = param_2[1];
      local_260 = (undefined *)*param_2;
      local_244 = 3;
      local_250 = (undefined **)CONCAT44((int)*param_4,*(float *)(param_4 + 3) * fVar14 + fVar13);
      uStack_238 = param_3[1];
      local_240 = *param_3;
      uStack_218 = param_4[6];
      local_210 = *(undefined4 *)(param_4 + 10);
      lVar7 = param_4[7];
      fStack_224 = *(float *)(param_4 + 8);
      fStack_22c = (float)lVar7;
      fStack_228 = (float)((ulong)lVar7 >> 0x20);
      local_220 = param_4[9];
      iVar3 = FUN_031978f0(param_1,&local_260,param_5,&local_350);
      if (iVar3 == 0) {
        uVar12 = *param_2;
        uVar10 = 0xffffffff;
        param_5[1] = param_2[1];
        *param_5 = uVar12;
      }
      else {
        uVar10 = (ulong)local_350 & 0xffffffff;
      }
      goto joined_r0x031596d4;
    }
  }
  FUN_0331fefc(&local_350,&local_260,0x200);
  FUN_033243f0(local_348,"Layer not found");
  iVar3 = FUN_03320a10(3,0x4ed2fce5,&local_260,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Ai/Pathfinding/Character/Utilities/hkaiCharacterUtil.cpp"
                       ,0x11d);
  if (iVar3 != 0) {
    CallSupervisor(0x26);
  }
  local_350 = &PTR_FUN_0434fca8;
  local_348 = 0;
  FUN_03324278(&local_350);
LAB_03159280:
  uStack_278 = param_2[1];
  local_280 = *param_2;
  local_2a0 = 0xffffffff;
  uStack_2b8 = 0x7f7fffee7f7fffee;
  local_2c0 = 0x7f7fffee7f7fffee;
  uStack_2a8 = 0x7f7fffee7f7fffee;
  local_2b0 = 0x7f7fffee7f7fffee;
  local_298 = 0x3a83126f3a83126f;
  local_290 = 0x3dcccccd3dcccccd;
  cVar4 = *(char *)((long)param_4 + 0x1c);
  if (cVar4 != '\0') {
    local_298 = param_4[4];
    uStack_2a8 = param_3[1];
    local_2b0 = *param_3;
    local_2a0 = *(undefined4 *)(param_4 + 5);
    uStack_2b8 = param_2[1];
    local_2c0 = *param_2;
  }
  local_2e8 = 1;
  local_2f8 = &DAT_042ef818;
  uStack_2f0 = 0xffffffff;
  lStack_2e0 = param_1;
  if (*(int *)((long)param_4 + 0x3c) < 0) {
    local_2d8 = param_4[9];
  }
  else {
    local_2d8 = FUN_0315f5b0(*(undefined8 *)(param_1 + 0x58),param_4[7],*(undefined4 *)(param_4 + 8)
                            );
    cVar4 = *(char *)((long)param_4 + 0x1c);
  }
  local_2d0 = param_4[6];
  local_2c8 = *(undefined4 *)(param_4 + 10);
  local_2c4 = *(undefined4 *)((long)param_4 + 0x14);
  local_248 = 0.0;
  local_240 = 0;
  local_260 = &DAT_042ef9c8;
  uStack_258 = CONCAT44(uStack_258._4_4_,1 << (ulong)(*(uint *)((long)param_4 + 0x2c) & 0x1f));
  local_250 = &local_2f8;
  fStack_228 = (float)param_2[1];
  fStack_224 = (float)((ulong)param_2[1] >> 0x20);
  local_230 = (float)*param_2;
  fStack_22c = (float)((ulong)*param_2 >> 0x20);
  uVar12 = *param_4;
  fVar13 = (float)((ulong)uVar12 >> 0x20);
  local_348 = CONCAT44(local_348._4_4_,0xffffffff);
  local_220 = CONCAT44(fStack_22c + fVar13 * (float)((ulong)*param_3 >> 0x20),
                       local_230 + (float)uVar12 * (float)*param_3);
  uStack_218 = CONCAT44(fStack_224 + fVar13 * (float)((ulong)param_3[1] >> 0x20),
                        fStack_228 + (float)uVar12 * (float)param_3[1]);
  local_350 = (undefined **)NEON_fmov(0x3f800000,4);
  if (cVar4 == '\0') {
    uVar5 = (**(code **)(*plVar9 + 0x38))(plVar9,&local_260,&local_350);
    if ((uVar5 & 1) != 0) goto LAB_031593a8;
LAB_03159590:
    local_338 = 0;
    local_330 = 0;
    local_350 = (undefined **)(PTR_DAT_04387f60 + 0x10);
    uStack_318 = param_2[1];
    local_320 = *param_2;
    local_340 = &local_2f8;
    local_348 = CONCAT44(local_348._4_4_,1 << (ulong)(*(uint *)((long)param_4 + 0x2c) & 0x1f));
    local_310 = param_4[1];
    if (*(char *)((long)param_4 + 0x1c) == '\0') {
      uVar10 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_350,&local_280);
    }
    else {
      local_290 = param_4[4];
      uVar10 = FUN_03159d04(plVar9,param_1,&local_350,&local_2c0,&local_280);
    }
  }
  else {
    local_290 = uVar12;
    uVar5 = FUN_0315a540(plVar9,param_1,&local_260,&local_2c0,&local_350);
    if ((uVar5 & 1) == 0) goto LAB_03159590;
LAB_031593a8:
    uVar10 = local_348 & 0xffffffff;
    fVar13 = (float)((ulong)local_350 >> 0x20);
    local_280 = CONCAT44(fStack_22c + ((float)((ulong)local_220 >> 0x20) - fStack_22c) * fVar13,
                         local_230 + ((float)local_220 - local_230) * SUB84(local_350,0));
    uStack_278 = CONCAT44(fStack_224 + ((float)((ulong)uStack_218 >> 0x20) - fStack_224) * fVar13,
                          fStack_228 + ((float)uStack_218 - fStack_228) * SUB84(local_350,0));
    if ((int)local_348 == -1) goto LAB_03159590;
  }
  param_5[1] = uStack_278;
  *param_5 = local_280;
joined_r0x031596d4:
  if (lVar11 != 0) {
    puVar1 = *(undefined8 **)(lVar11 + 8);
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= *(ulong *)(lVar11 + 0x10)) &&
       (*(ulong *)(lVar11 + 8) = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_0390f40e;
      uVar12 = nn::os::GetSystemTick();
      puVar1[1] = uVar12;
    }
  }
  return uVar10 & 0xffffffff;
}


