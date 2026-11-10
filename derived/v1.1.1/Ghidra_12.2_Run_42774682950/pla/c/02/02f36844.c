/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f36844; name: FUN_02f36844
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_02f36844(undefined4 param_1,undefined8 param_2,long *param_3,undefined8 param_4,long param_5
                ,undefined8 param_6,undefined8 *param_7,byte param_8,undefined8 param_9,
                undefined4 param_10,uint param_11,ulong *param_12)

{
  MutexType *pMVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long lVar11;
  long *plVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  long local_3b8;
  long local_3b0;
  long *local_3a8;
  undefined8 local_3a0;
  ulong local_398;
  ulong local_390;
  char local_384 [4];
  undefined1 local_380 [8];
  undefined8 uStack_378;
  undefined4 local_370;
  ulong local_368;
  undefined8 local_360;
  long local_358;
  int *local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined8 local_32c;
  ulong local_324;
  undefined8 local_31c;
  undefined8 local_314;
  undefined8 local_30c;
  undefined8 local_304;
  undefined8 local_2fc;
  undefined8 local_2f4;
  undefined4 local_2ec;
  uint local_2e4;
  undefined8 local_2d8;
  undefined2 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined8 local_24c;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_238;
  undefined2 local_234;
  ushort local_232;
  long local_230;
  ulong local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined1 auStack_208 [256];
  undefined1 *local_108;
  ulong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  byte local_e4;
  byte local_e0;
  undefined8 local_d8;
  ulong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98 [2];
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c [3];
  
  *param_12 = 0;
  plVar16 = param_3;
  if ((*(byte *)((long)param_3 + 0xab) >> 4 & 1) == 0) {
    do {
      plVar12 = (long *)plVar16[0x10];
      if (plVar12 == (long *)0x0) break;
      plVar16 = plVar12;
    } while ((*(byte *)((long)plVar12 + 0xab) >> 4 & 1) == 0);
  }
  bVar5 = *(byte *)((long)plVar16 + 0xc1);
  FUN_02f0fb64(local_98,param_3,param_5,&local_80);
  local_7c[0] = 0x21;
  iVar7 = FUN_02f10e60(local_98[0]);
  if (iVar7 == 2) {
    uVar14 = 0;
    iVar8 = 3;
  }
  else {
    local_2d0 = 0xff00;
    local_360 = 0;
    local_2d8 = 0;
    local_240 = 0;
    local_238 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_232 = local_232 & 0xfc00;
    local_108 = (undefined1 *)0x0;
    local_100 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_278 = 0;
    uStack_270 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_234 = 0;
    local_254 = 0;
    local_24c = 0;
    local_244 = 0;
    local_258 = 0x3f800000;
    local_230 = 0;
    local_228 = 0;
    local_e4 = local_e4 & 0xfe;
    local_210 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_220 = 0;
    uStack_218 = 0;
    local_334 = *(undefined4 *)((long)param_7 + 0x14);
    local_340 = param_7[1];
    local_338 = *(undefined4 *)(param_7 + 2);
    local_348 = (int *)*param_7;
    if (local_348 != (int *)0x0) {
      *local_348 = *local_348 + 1;
    }
    local_330 = 0;
    local_30c = local_b8;
    local_304 = uStack_b0;
    local_2fc = local_a8;
    local_2f4 = uStack_a0;
    local_32c = local_d8;
    local_324 = uStack_d0;
    local_31c = local_c8;
    local_314 = uStack_c0;
    local_e0 = local_e0 & 0xf0 | 3 | (param_8 & 1) << 2;
    local_2e4 = param_11;
    local_2ec = 0;
    local_358 = param_5;
    puVar9 = (undefined8 *)(*DAT_0442d138)(0,0x330);
    if (puVar9 == (undefined8 *)0x0) {
      uVar14 = 0;
      *param_12 = 0;
      iVar8 = 2;
      local_384[0] = '\0';
joined_r0x02f36d50:
      uVar13 = false;
    }
    else {
      bVar2 = bVar5 & 0xf;
      uStack_378 = uStack_90;
      local_370 = local_88;
      FUN_02ecaee8(puVar9,&local_368,param_3,param_4,local_380,param_10);
      *puVar9 = &PTR_LAB_042add70;
      puVar9[2] = &PTR_LAB_042adea0;
      puVar9[0x62] = param_2;
      puVar9[3] = &PTR_FUN_042adeb8;
      puVar9[0x60] = &PTR_LAB_042adf38;
      puVar9[100] = 0;
      puVar9[99] = param_9;
      *(byte *)(puVar9 + 0x65) = *(byte *)(puVar9 + 0x65) & 0xfe;
      *(uint *)((long)puVar9 + 0x2a3) = *(uint *)((long)puVar9 + 0x2a3) & 0x8fdfffff | 0x10000000;
      *(undefined4 *)((long)puVar9 + 0x24c) = param_1;
      *param_12 = (ulong)puVar9;
      local_384[0] = '\0';
      iVar8 = FUN_02e9c220(local_80,puVar9 + 3,0,bVar2 != 1,local_7c,&uStack_2c0,local_384);
      if (iVar8 == 1) {
        plVar16 = (long *)*param_12;
        local_3b8 = CONCAT44(local_3b8._4_4_,local_98[0]);
        local_3a0._0_6_ =
             CONCAT15(((bVar5 & 0xf) == 0 || local_384[0] == '\0') &&
                      (*(uint *)((long)plVar16 + 0x2a3) & 0x2000000) == 0,1);
        if ((*(byte *)(plVar16 + 0x33) >> 6 & 1) == 0) {
          local_3a8 = plVar16 + 0x5c;
        }
        else {
          local_3a8 = (long *)0x0;
        }
        local_3b0 = param_5;
        iVar8 = (**(code **)(*param_3 + 0x120))(param_3,&local_3b8,1,0);
        if ((iVar8 == 2) ||
           (((iVar7 == 0x50 || (iVar8 == 0x50)) &&
            (*(ushort *)(plVar16 + 0x33) = *(ushort *)(plVar16 + 0x33) | 0x100, bVar2 == 1)))) {
          local_7c[0] = 0x20;
          uVar14 = 1;
          iVar8 = 3;
          goto joined_r0x02f36d50;
        }
        iVar8 = (**(code **)(*plVar16 + 0x18))(plVar16);
        if (iVar8 != 1) {
          uVar14 = 1;
          goto joined_r0x02f36e58;
        }
        local_3b0 = CONCAT62(local_3b0._2_6_,0xff00);
        local_3a8 = (long *)0x0;
        local_390 = *param_12;
        local_3a0 = (ulong)*(uint *)(local_390 + 0x210) << 0x20;
        local_398 = (ulong)param_11;
        local_3b8 = param_5;
        (**(code **)(*param_3 + 0x150))(param_3,&local_3b8,local_390 + 0x68,1);
        uVar15 = *param_12;
        *(undefined8 *)(uVar15 + 0x1c8) = 0;
        puVar10 = (ulong *)&DAT_0440ad48;
        if (DAT_0440ad48 != 0) {
          puVar10 = (ulong *)(DAT_0440ad40 + 0x1c8);
        }
        *puVar10 = uVar15;
        DAT_0440ad38 = DAT_0440ad38 + 1;
        DAT_0440ad40 = uVar15;
        FUN_02ecc0d0(uVar15);
        iVar8 = 1;
        FUN_02ecc620(uVar15,param_6,0,1);
        uVar14 = 1;
        uVar13 = true;
      }
      else {
        uVar14 = 0;
joined_r0x02f36e58:
        uVar13 = false;
      }
    }
    if (local_230 != 0) {
      local_228 = local_228 & 0xffffffff00000000;
      (*DAT_0442d150)(0);
      local_228 = local_228 & 0xffffffff;
    }
    local_230 = 0;
    if (local_108 != (undefined1 *)0x0) {
      local_100 = local_100 & 0xffffffff00000000;
      if (auStack_208 != local_108) {
        FUN_02f59e70(0);
      }
      local_100 = local_100 & 0xffffffff;
    }
    local_108 = (undefined1 *)0x0;
    if (local_348 != (int *)0x0) {
      FUN_02e771a8();
    }
    if (iVar8 == 1) {
      return 1;
    }
    if ((bool)uVar13) goto LAB_02f36d00;
  }
  plVar16 = DAT_0440a170;
  uVar3 = *(uint *)((long)param_7 + 0x14);
  if ((uVar3 != 0) && (*param_12 != 0)) {
    pMVar1 = (MutexType *)(DAT_0440a170 + 3);
    nn::os::LockMutex(pMVar1);
    uVar4 = *(uint *)(plVar16 + 1);
    if (uVar4 != 0) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar3 / uVar4;
      }
      for (lVar11 = *(long *)(*plVar16 + (ulong)(uVar3 - uVar6 * uVar4) * 8); lVar11 != 0;
          lVar11 = *(long *)(lVar11 + 0x68)) {
        if (*(uint *)(lVar11 + 0x4c) == uVar3) {
          *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + 1;
          break;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
  }
LAB_02f36d00:
  local_368 = *param_12;
  FUN_02f0ff04(param_3,&local_368,uVar14,param_5);
  *param_12 = 0;
  if (iVar8 != 3) {
    local_7c[0] = 0x1e;
  }
  local_324 = local_324 & 0xffffffff00000000;
  local_368 = local_368 & 0xffffffff00000000;
  FUN_02ef63b0(param_3,local_7c[0],*(undefined8 *)(param_5 + 0x48),param_7,&local_368);
  return iVar8;
}


