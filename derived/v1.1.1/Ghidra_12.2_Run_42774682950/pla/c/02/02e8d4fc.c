/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8d4fc; name: FUN_02e8d4fc
 */


/* WARNING: Removing unreachable block (ram,0x02e8d7d8) */
/* WARNING: Removing unreachable block (ram,0x02e8d7e8) */

int FUN_02e8d4fc(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined4 local_318 [2];
  undefined8 local_310;
  undefined8 local_308;
  undefined8 *local_300;
  int *local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined8 *local_290;
  ulong local_288;
  uint local_280 [2];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined2 local_1e4;
  ushort local_1e2;
  long local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined1 auStack_1b8 [256];
  undefined1 *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  byte local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78;
  long local_70;
  undefined4 local_68;
  long *local_60;
  ulong local_58;
  undefined8 local_50;
  uint local_48;
  byte local_44 [4];
  
  local_50 = CONCAT44(4,*(undefined4 *)(param_1 + 0xb8));
  local_48 = local_48 & 0xffffff00;
  lVar9 = *(long *)(param_1 + 0xb0);
  if (lVar9 == 0) {
    local_50 = *(undefined8 *)(param_1 + 0xf8);
    local_48 = *(uint *)(param_1 + 0x100);
  }
  else {
    if ((*(byte *)(lVar9 + 0x358) & 0xf) == 2) {
      local_50 = CONCAT44(1,*(undefined4 *)(param_1 + 0xb8));
    }
    FUN_02ecc3d4(lVar9,&local_50,1);
  }
  plVar10 = (long *)FUN_02e8766c(param_1);
  if (plVar10 == (long *)0x0) {
    return 0xf;
  }
  local_88 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = *(undefined8 *)(param_1 + 0x48);
  plVar11 = (long *)(param_1 + 0x50);
  local_68 = *(undefined4 *)(param_1 + 0xe8);
  local_60 = (long *)0x0;
  local_58 = 0;
  local_70 = *(long *)(param_1 + 0x60);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    *(int *)(local_70 + 0x10) = *(int *)(local_70 + 0x10) + 1;
  }
  local_2e0 = *(undefined8 *)(param_1 + 0x68);
  local_2d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_2d0 = *(undefined8 *)(param_1 + 0x78);
  local_2c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_2c0 = *(undefined8 *)(param_1 + 0x88);
  local_2b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_2b0 = *(undefined8 *)(param_1 + 0x98);
  local_2a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_2a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_270 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_b0 = 0;
  local_b8 = (undefined1 *)0x0;
  local_218 = 0;
  uStack_210 = 0;
  local_1e2 = local_1e2 & 0xfc00;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_1e4 = 0;
  local_204 = 0;
  local_1fc = 0;
  local_1f4 = 0;
  local_208 = 0x3f800000;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_98 = *(undefined4 *)(param_1 + 200);
  local_94 = *(undefined1 *)(param_1 + 0xcc);
  local_318[0] = *(undefined4 *)(param_1 + 0xd0);
  local_310 = *(undefined8 *)(param_1 + 0xe0);
  local_308 = *(undefined8 *)(param_2 + 0x40);
  local_2e4 = *(undefined4 *)(param_2 + 0x30);
  local_2f0 = *(undefined8 *)(param_2 + 0x24);
  local_2e8 = *(undefined4 *)(param_2 + 0x2c);
  local_2f8 = *(int **)(param_2 + 0x1c);
  if (local_2f8 != (int *)0x0) {
    *local_2f8 = *local_2f8 + 1;
  }
  local_298 = *(undefined4 *)(param_1 + 0xbc);
  local_294 = *(undefined4 *)(param_2 + 0x14);
  local_288 = (ulong)*(uint *)(param_1 + 0xc0);
  local_280[0] = *(uint *)(param_1 + 0x104);
  local_278 = *(undefined8 *)(param_1 + 0x108);
  local_290 = &local_88;
  local_300 = &local_50;
  local_90 = *(byte *)(*(long *)(param_2 + 8) + 0x36) >> 5 & 4 |
             local_90 & 0xf0 | 1 | (*(byte *)(param_1 + 0xc5) & 0x7d) << 1;
  local_78 = plVar11;
  if (((local_280[0] & 0xff) == 0x90) && (local_280[0] >> 0x18 != 0)) {
    local_44[0] = 1;
    uVar8 = FUN_02ecf10c(local_318);
    iVar7 = FUN_02ed13fc(plVar10,local_280,uVar8,local_44,local_308,local_2e4);
    if (iVar7 != 1) goto LAB_02e8d720;
    local_90 = local_90 & 0xfe | local_44[0];
  }
  iVar7 = FUN_02ed2bb4(plVar10,local_318);
  if (iVar7 == 1) {
    iVar7 = (**(code **)(*plVar10 + 0x240))(plVar10,local_318);
  }
  else if (iVar7 == 3) {
    iVar7 = 1;
  }
LAB_02e8d720:
  DAT_0440a468 = DAT_0440a468 + 1;
  lVar9 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if ((lVar9 == 0) ||
     (iVar5 = *(int *)(lVar9 + 0x10) + -1, *(int *)(lVar9 + 0x10) = iVar5, iVar5 != 0)) {
    lVar9 = *plVar11;
  }
  else {
    FUN_02ea7e60(lVar9);
    (*DAT_0442d150)(0,lVar9);
    lVar9 = *plVar11;
  }
  if (lVar9 == 0) {
    plVar11 = *(long **)(param_1 + 0xf0);
  }
  else {
    plVar11 = (long *)*DAT_0440a158;
    uVar3 = *(uint *)(DAT_0440a158 + 1);
    plVar2 = plVar11 + uVar3;
    if ((uVar3 != 0) && (*plVar11 != lVar9)) {
      lVar13 = (ulong)uVar3 * 8;
      plVar12 = plVar11;
      do {
        lVar13 = lVar13 + -8;
        plVar11 = plVar2;
        if (lVar13 == 0) break;
        plVar11 = plVar12 + 1;
        plVar1 = plVar12 + 1;
        plVar12 = plVar11;
      } while (*plVar1 != lVar9);
    }
    if ((((plVar11 != (long *)0x0) && (plVar2 != plVar11)) &&
        ((sVar4 = *(short *)(lVar9 + 0x40), sVar4 == 0 ||
         (*(short *)(lVar9 + 0x40) = sVar4 + -1, sVar4 == 1)))) && (*(short *)(lVar9 + 0x42) == 0))
    {
      FUN_02edc4dc();
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    plVar11 = *(long **)(param_1 + 0xf0);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))();
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  (**(code **)(*plVar10 + 0x18))(plVar10);
  if (local_1e0 != 0) {
    local_1d8 = local_1d8 & 0xffffffff00000000;
    (*DAT_0442d150)(0);
    local_1d8 = local_1d8 & 0xffffffff;
  }
  local_1e0 = 0;
  if (local_b8 != (undefined1 *)0x0) {
    local_1e0 = 0;
    local_b0 = local_b0 & 0xffffffff00000000;
    if (auStack_1b8 != local_b8) {
      FUN_02f59e70(0);
    }
    local_b0 = local_b0 & 0xffffffff;
  }
  local_b8 = (undefined1 *)0x0;
  if (local_2f8 != (int *)0x0) {
    FUN_02e771a8();
  }
  plVar10 = local_60;
  if ((int)local_58 != 0) {
    do {
      *(int *)(*plVar10 + 0x84) = *(int *)(*plVar10 + 0x84) + -1;
      plVar11 = plVar10 + 1;
      FUN_02eb939c(*plVar10);
      plVar10 = plVar11;
    } while (plVar11 != local_60 + (local_58 & 0xffffffff));
  }
  uVar6 = local_58 >> 0x20;
  local_58 = uVar6 << 0x20;
  lVar9 = local_70;
  if (local_60 != (long *)0x0) {
    local_58 = uVar6 << 0x20;
    (*DAT_0442d150)(0);
    local_58 = local_58 & 0xffffffff;
    lVar9 = local_70;
  }
  if (lVar9 != 0) {
    local_60 = (long *)0x0;
    iVar5 = *(int *)(lVar9 + 0x10) + -1;
    *(int *)(lVar9 + 0x10) = iVar5;
    if (iVar5 == 0) {
      local_70 = lVar9;
      FUN_02ea7e60(lVar9);
      (*DAT_0442d150)(0,lVar9);
    }
  }
  return iVar7;
}


