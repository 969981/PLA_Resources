/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bdbfc; name: FUN_031bdbfc
 */


void FUN_031bdbfc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  float fVar3;
  undefined *puVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined1 uVar17;
  byte bVar18;
  int iVar19;
  undefined4 *local_410;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  float local_3d8;
  float fStack_3d4;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  float local_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined8 uStack_380;
  int *local_378;
  undefined8 local_360;
  undefined6 uStack_358;
  undefined2 local_352;
  undefined6 uStack_350;
  undefined8 local_348;
  undefined6 local_330;
  undefined2 uStack_32a;
  undefined6 uStack_328;
  undefined8 local_320;
  undefined4 local_310;
  undefined8 local_308;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *local_210 [2];
  int local_200 [12];
  int local_1d0 [2];
  float local_1c8;
  undefined4 local_1c4;
  int local_1c0;
  undefined4 *local_1b8;
  undefined4 *local_1b0;
  int local_198;
  int local_194;
  undefined1 auStack_f0 [16];
  int local_e0 [6];
  undefined1 auStack_c8 [24];
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined4 local_84 [5];
  
  uVar13 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_3 + 0x50) = 0;
  if ((*(int *)(param_2 + 0x50) == 0) || (*(int *)(param_2 + 0x40) == -1)) {
    *(undefined4 *)(param_3 + 0x54) = 0xffffffff;
    *(undefined1 *)(param_3 + 0x5c) = 5;
    return;
  }
  local_84[0] = 0xffffffff;
  if (*(char *)(param_2 + 0x90) == '\0') {
    fVar3 = 3.40282e+38;
    bVar6 = false;
    bVar8 = 0;
    bVar18 = 0;
  }
  else {
    iVar9 = FUN_031be2f0(param_1,param_2,local_84);
    uVar5 = local_84[0];
    bVar6 = iVar9 != 0;
    bVar8 = FUN_031be478(param_1,param_2,local_84[0],param_3);
    fVar3 = *(float *)(param_3 + 0x58);
    if ((bVar8 & 1) == 0) {
      fVar3 = 3.40282e+38;
    }
    bVar18 = bVar8 & 1;
    if (*(char *)(param_2 + 0x90) == '\x02') {
      bVar7 = true;
    }
    else {
      if (*(char *)(param_2 + 0x90) != '\x01') goto LAB_031bdd68;
      bVar7 = *(long *)(param_2 + 0x80) == 0;
    }
    if (((iVar9 == 0 & (bVar8 ^ 1)) == 0) && (bVar7)) {
      FUN_031be540(param_2,param_3,uVar5,bVar6,bVar18);
      return;
    }
  }
LAB_031bdd68:
  local_410 = (undefined4 *)(param_3 + 0x58);
  lVar11 = tpidr_el0;
  if (*(long *)(lVar11 + 0x38d490) == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar14;
    local_90 = *(long *)(lVar14 + 0x10);
  }
  else {
    local_90 = *(long *)(*(long *)(lVar11 + 0x38d490) + 0x10);
  }
  if (local_90 != 0) {
    FUN_032d5b78(local_90,"LtFindVolumePath",0x10,"Stinit",6);
  }
  local_b0 = 0;
  local_a8 = -0x8000000000000000;
  local_a0 = 0;
  local_98 = -0x8000000000000000;
  lVar14 = *(long *)(param_2 + 0x9c);
  iVar9 = (int)lVar14;
  if (iVar9 < 1) {
    iVar9 = 0x20000;
  }
  iVar19 = (int)((ulong)lVar14 >> 0x20);
  if (iVar19 == 0 || lVar14 < 0) {
    iVar19 = 0x90200;
  }
  local_3c0 = CONCAT44(iVar19,iVar9);
  FUN_031b1548(auStack_c8,param_2 + 0xb0,&local_3c0);
  FUN_031bf120(local_210,auStack_c8);
  FUN_033299e0(0xca30930e);
  local_360 = 0xffffffffffffffff;
  uStack_358 = 0;
  local_348 = 0;
  local_352 = 0;
  uStack_350 = 0;
  local_320 = 0;
  local_330 = 0;
  uStack_32a = 0;
  uStack_328 = 0;
  local_310 = 0xffffffff;
  local_308 = 0;
  local_2d0 = 0xffffffff;
  local_2c8 = 0;
  local_290 = 0xffffffff;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  uStack_238 = 0x7f7fffee7f7fffee;
  local_240 = 0x7f7fffee7f7fffee;
  uStack_228 = 0xff7fffeeff7fffee;
  uStack_230 = 0xff7fffeeff7fffee;
  local_3b0 = *(undefined8 *)(param_2 + 0x80);
  uStack_3a8 = *(undefined8 *)(param_2 + 0x88);
  local_3b8 = *(undefined8 *)(param_2 + 0x5c);
  uStack_3e8 = *(undefined8 *)(param_2 + 0x28);
  local_3f0 = *(undefined8 *)(param_2 + 0x20);
  local_3d8 = *(float *)(param_2 + 0x40);
  uStack_38c = *(undefined4 *)(param_2 + 0x38);
  local_3e0 = *(undefined8 *)(param_2 + 0x30);
  local_3d0 = *(undefined8 *)(param_2 + 0x48);
  local_1c4 = *(undefined4 *)(param_2 + 0x94);
  local_1c8 = *(float *)(param_2 + 0x98);
  if (fVar3 <= *(float *)(param_2 + 0x98)) {
    local_1c8 = fVar3;
  }
  local_3c8 = uVar13;
  local_3c0 = param_1;
  local_3a0 = local_3f0;
  uStack_398 = uStack_3e8;
  local_390 = local_3d8;
  local_388 = local_3e0;
  uStack_380 = local_3d0;
  local_378 = local_200;
  local_210[0] = &local_3c0;
  FUN_031bf21c(local_210,&local_3c0,(undefined8 *)(param_2 + 0x5c),&local_3f0);
  iVar9 = *(int *)(param_2 + 0x58);
  if (*(long *)(lVar11 + 0x38d490) == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar14;
    lVar14 = *(long *)(lVar14 + 0x10);
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar11 + 0x38d490) + 0x10);
  }
  if (lVar14 != 0) {
    FUN_032d5bc0(lVar14,"StAStar",7);
  }
  iVar19 = 0;
  do {
    if (iVar9 <= iVar19) {
      uVar10 = 3;
      uVar17 = 1;
      goto LAB_031bdfa0;
    }
    iVar19 = iVar19 + 1;
    uVar10 = FUN_031bf5b8(local_210);
    if (uVar10 == 3) {
      uVar17 = 2;
      if (local_198 < local_194) {
        uVar17 = 3;
      }
      FUN_033299e0(0x3c86ec3);
      goto LAB_031bdfa0;
    }
    FUN_033299e0(0x3c86ec3);
  } while (uVar10 == 0);
  uVar17 = 0;
LAB_031bdfa0:
  if (uVar10 == 1 || ((bVar8 ^ 0xff) & 1) != 0) {
    *(char *)(param_3 + 0x5c) = (char)uVar10;
    *(undefined1 *)(param_3 + 0x5d) = uVar17;
    *(int *)(param_3 + 0x50) = iVar19;
    *(undefined4 *)(param_3 + 0x54) = 0xffffffff;
    if ((uVar10 | 2) == 3) {
      piVar2 = local_e0;
      if (uVar10 != 1) {
        piVar2 = local_1d0;
      }
      iVar9 = *piVar2;
      if ((uVar10 != 1) || ((int)*(uint *)(param_2 + 0x50) < 1)) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar16 = 0;
        uVar13 = 0xffffffff;
        do {
          if (*(int *)(*(long *)(param_2 + 0x48) + uVar16 * 4) == local_e0[0]) {
            uVar13 = (undefined4)uVar16;
            break;
          }
          uVar16 = uVar16 + 1;
        } while (*(uint *)(param_2 + 0x50) != uVar16);
      }
      *(undefined4 *)(param_3 + 0x54) = uVar13;
      local_1b8 = (undefined4 *)FUN_031befdc(local_200,iVar9);
      local_1c0 = ((int)local_1b8 - local_200[0]) * 0x1000 >> 0x10;
      *local_410 = *local_1b8;
      local_1b0 = local_1b8;
      if (*(long *)(lVar11 + 0x38d490) == 0) {
        lVar14 = FUN_0333d16c(0,1);
        *(long *)(lVar11 + 0x38d490) = lVar14;
        lVar11 = *(long *)(lVar14 + 0x10);
      }
      else {
        lVar11 = *(long *)(*(long *)(lVar11 + 0x38d490) + 0x10);
      }
      if (lVar11 != 0) {
        FUN_032d5bc0(lVar11,"Stoutput",8);
      }
      plVar1 = (long *)(param_3 + 0x18);
      FUN_031be6b4(local_200,iVar9,plVar1);
      FUN_031bfe08(local_210,plVar1,param_3 + 0x28);
      puVar15 = *(undefined8 **)(param_2 + 0x30);
      local_400 = *puVar15;
      uStack_3f8 = puVar15[1];
      if (uVar10 == 1) {
        uStack_3f8 = (puVar15 + (long)*(int *)(param_3 + 0x54) * 2)[1];
        local_400 = puVar15[(long)*(int *)(param_3 + 0x54) * 2];
      }
      else if (*(int *)(param_3 + 0x20) != 0) {
        uVar10 = *(uint *)(*plVar1 + (long)(*(int *)(param_3 + 0x20) + -1) * 4);
        lVar11 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar10 >> 0x16) * 0xf0 + 8);
        FUN_03159b7c(lVar11,*(long *)(*(long *)(lVar11 + 0x20) + 0x18) +
                            ((ulong)uVar10 & 0x3fffff) * 0x18,&local_3f0);
        local_400 = CONCAT44(((float)((ulong)local_3f0 >> 0x20) + (float)((ulong)local_3e0 >> 0x20))
                             * 0.5,((float)local_3f0 + (float)local_3e0) * 0.5);
        uStack_3f8 = CONCAT44(((float)((ulong)uStack_3e8 >> 0x20) + fStack_3d4) * 0.5,
                              ((float)uStack_3e8 + local_3d8) * 0.5);
      }
      if ((int)(*(uint *)(param_3 + 0x44) & 0x3fffffff) <= *(int *)(param_3 + 0x20)) {
        uVar12 = FUN_0318a008(PTR_PTR_0434a080,*(int *)(param_3 + 0x20) + 1,
                              *(undefined8 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x40));
        *(undefined8 *)(param_3 + 0x38) = uVar12;
      }
      FUN_033299e0(0x9db05698);
      FUN_031c0944(param_1,plVar1,param_3 + 0x28,*(undefined4 *)(param_2 + 0x40),
                   (undefined8 *)(param_2 + 0x20),&local_400,param_3 + 0x38,0,0);
    }
  }
  else {
    FUN_031be540(param_2,param_3,local_84[0],bVar6,bVar18);
  }
  FUN_031bf074(auStack_f0,PTR_PTR_0434a080);
  lVar11 = local_98;
  puVar4 = PTR_PTR_0434a090;
  uVar10 = local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_a0 != 0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_a0,1,uVar10 & 0x3fffffff);
  }
  lVar11 = local_a8;
  local_98 = CONCAT44(0x80000000,(undefined4)local_98);
  uVar10 = local_a8._4_4_;
  local_a0 = 0;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_b0 != 0)) {
    FUN_032cf244(puVar4,local_b0,1,uVar10 & 0x3fffffff);
  }
  if (local_90 != 0) {
    FUN_032d5c04(local_90,&DAT_03922da5);
  }
  return;
}


