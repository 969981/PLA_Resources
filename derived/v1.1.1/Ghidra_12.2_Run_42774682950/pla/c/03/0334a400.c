/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0334a400; name: FUN_0334a400
 */


void FUN_0334a400(undefined4 **param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint *local_c0;
  ulong local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined1 local_80 [32];
  
  local_90 = local_80;
  local_88 = 0x8000002000000000;
  if (*(int *)(param_1 + 1) == 0) {
    uVar13 = 1;
    local_80[0] = 0x30;
    local_88 = 0x8000002000000001;
    puVar15 = PTR_PTR_0434a080;
    goto LAB_0334a68c;
  }
  local_a0 = 0;
  local_98 = -0x8000000000000000;
  FUN_03348630(&local_a0,param_2);
  puVar15 = PTR_PTR_0434a080;
  local_b0 = (undefined4 *)0x0;
  local_a8 = -0x8000000000000000;
  if (&local_b0 == param_1) {
LAB_0334a548:
    local_b8 = 0x8000000000000000;
    local_c0 = (uint *)0x0;
    uVar16 = (uint)local_88;
  }
  else {
    local_a8 = 0x8000000000000000;
    uVar16 = *(uint *)(param_1 + 1);
    if (0 < (int)uVar16) {
      puVar17 = *param_1;
      if ((int)uVar16 < 0x40000000) {
        uVar8 = 0;
      }
      else {
        FUN_032bd0a8(uVar16);
        uVar8 = (local_a8._4_4_ & 0x3fffffff) * 2;
        if (0x3ffffffe < uVar8) {
          uVar8 = 0x3fffffff;
        }
      }
      uVar9 = uVar16;
      if ((int)uVar16 <= (int)uVar8) {
        uVar9 = uVar8;
      }
      local_b0 = (undefined4 *)FUN_032bd1d4(puVar15,uVar9,4,0,0,(long)&local_a8 + 4);
      uVar13 = (long)(int)uVar16 * 4 - 4;
      uVar8 = ((uint)(uVar13 >> 2) & 0x3fffffff) + 1;
      puVar11 = puVar17;
      puVar7 = local_b0;
      if ((uVar8 & 3) != 0) {
        lVar14 = -((ulong)uVar8 & 3);
        puVar6 = local_b0;
        puVar10 = puVar17;
        do {
          puVar11 = puVar10 + 1;
          bVar5 = lVar14 != -1;
          lVar14 = lVar14 + 1;
          puVar7 = puVar6 + 1;
          *puVar6 = *puVar10;
          puVar6 = puVar7;
          puVar10 = puVar11;
        } while (bVar5);
      }
      if (0xb < uVar13) {
        do {
          *puVar7 = *puVar11;
          puVar7[1] = puVar11[1];
          puVar7[2] = puVar11[2];
          puVar6 = puVar11 + 3;
          puVar11 = puVar11 + 4;
          puVar7[3] = *puVar6;
          puVar7 = puVar7 + 4;
        } while (puVar11 != puVar17 + (int)uVar16);
      }
    }
    puVar15 = PTR_PTR_0434a080;
    local_a8 = CONCAT44(local_a8._4_4_,uVar16);
    local_c0 = (uint *)0x0;
    local_b8 = 0x8000000000000000;
    if (uVar16 == 0) goto LAB_0334a548;
    do {
      FUN_033498e0(&local_b0,&local_a0,&local_b0,&local_c0);
      uVar13 = local_88;
      puVar4 = local_90;
      uVar8 = 0;
      if ((int)local_b8 != 0) {
        uVar8 = *local_c0;
      }
      uVar16 = (uint)local_88 + 1;
      if ((int)(local_88._4_4_ & 0x3fffffff) <= (int)(uint)local_88) {
        if (0x3ffffffe < (int)(uint)local_88) {
          FUN_032bd0a8(uVar16);
        }
        uVar9 = (local_88._4_4_ & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar9) {
          uVar9 = 0x3fffffff;
        }
        uVar2 = uVar16;
        if ((int)uVar16 <= (int)uVar9) {
          uVar2 = uVar9;
        }
        local_90 = (undefined1 *)
                   FUN_032bd1d4(puVar15,uVar2,1,puVar4,uVar13 & 0xffffffff,(long)&local_88 + 4);
      }
      local_90[(int)(uint)local_88] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar8];
      local_88 = CONCAT44(local_88._4_4_,uVar16);
    } while ((int)local_a8 != 0);
  }
  uVar13 = local_b8;
  if (1 < (int)uVar16) {
    lVar14 = 0;
    iVar12 = -1;
    do {
      uVar1 = local_90[lVar14];
      local_90[lVar14] = local_90[(int)(uVar16 + iVar12)];
      lVar14 = lVar14 + 1;
      local_90[(int)(iVar12 + (uint)local_88)] = uVar1;
      iVar12 = iVar12 + -1;
      uVar16 = (uint)local_88;
    } while (lVar14 < (int)(uint)local_88 >> 1);
  }
  puVar15 = PTR_PTR_0434a080;
  uVar3 = local_b8 >> 0x20;
  local_b8 = local_b8 & 0xffffffff00000000;
  if ((-1 < (long)uVar13) && (local_c0 != (uint *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_c0,4,(uint)uVar3 & 0x3fffffff);
  }
  lVar14 = local_a8;
  uVar16 = local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_b0 != (undefined4 *)0x0)) {
    FUN_032cf244(puVar15,local_b0,4,uVar16 & 0x3fffffff);
  }
  lVar14 = local_98;
  uVar16 = local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_a0 != 0)) {
    FUN_032cf244(puVar15,local_a0,4,uVar16 & 0x3fffffff);
  }
  uVar13 = local_88 & 0xffffffff;
LAB_0334a68c:
  FUN_032c4d7c(param_3,local_90,uVar13);
  uVar13 = local_88;
  uVar16 = local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < (long)uVar13) && (local_90 != (undefined1 *)0x0)) {
    FUN_032cf244(puVar15,local_90,1,uVar16 & 0x3fffffff);
  }
  return;
}


