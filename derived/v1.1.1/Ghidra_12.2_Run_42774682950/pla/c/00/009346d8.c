/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009346d8; name: FUN_009346d8
 */


/* WARNING: Removing unreachable block (ram,0x00934e3c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_009346d8(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 auStack_7d0 [12];
  code *local_770;
  code *local_768;
  undefined1 *local_760;
  undefined1 *local_758;
  undefined8 auStack_750 [12];
  code *local_6f0;
  code *local_6e8;
  undefined1 *local_6e0;
  undefined1 *puStack_6d8;
  undefined8 local_6d0;
  long lStack_6c8;
  code *local_670;
  code *local_668;
  undefined1 *local_660;
  undefined1 *puStack_658;
  undefined8 local_650;
  long lStack_648;
  code *local_5f0;
  code *local_5e8;
  undefined1 *local_5e0;
  undefined1 *local_5d8;
  undefined8 local_5d0 [12];
  undefined **local_570;
  long local_568 [31];
  undefined **local_470;
  long local_468 [30];
  ulong local_378;
  undefined **local_370;
  long local_368 [30];
  ulong local_278;
  undefined **local_270;
  long local_268 [30];
  ulong local_178;
  undefined **local_170;
  long local_168 [30];
  ulong local_78;
  long local_70 [2];
  
  local_568[0] = 0;
  local_570 = &PTR_FUN_041c2158;
  local_568[2] = 0;
  local_568[1] = 0;
  local_568[4] = 0;
  local_568[3] = 0;
  local_568[6] = 0;
  local_568[5] = 0;
  local_568[8] = 0;
  local_568[7] = 0;
  local_568[10] = 0;
  local_568[9] = 0;
  local_568[0xc] = 0;
  local_568[0xb] = 0;
  local_568[0xe] = 0;
  local_568[0xd] = 0;
  local_568[0x10] = 0;
  local_568[0xf] = 0;
  local_568[0x12] = 0;
  local_568[0x11] = 0;
  local_568[0x14] = 0;
  local_568[0x13] = 0;
  local_568[0x16] = 0;
  local_568[0x15] = 0;
  local_568[0x18] = 0;
  local_568[0x17] = 0;
  local_568[0x1a] = 0;
  local_568[0x19] = 0;
  local_568[0x1c] = 0;
  local_568[0x1b] = 0;
  local_568[0x1e] = 0;
  local_568[0x1d] = 0;
  uVar1 = *(uint *)(param_2 + 0x1a0);
  if (uVar1 != 0) {
    memcpy(local_568,(void *)(param_2 + 0xb0),(ulong)uVar1 << 3);
  }
  local_5f0 = FUN_00935ad8;
  local_5e0 = &LAB_00935b08;
  local_568[0x1e] = (long)uVar1;
  local_5e8 = FUN_00935b04;
  local_5d8 = &LAB_00935b14;
  local_468[0] = 0;
  local_470 = &PTR_FUN_041c2158;
  local_468[2] = 0;
  local_468[1] = 0;
  local_468[4] = 0;
  local_468[3] = 0;
  local_468[6] = 0;
  local_468[5] = 0;
  local_468[8] = 0;
  local_468[7] = 0;
  local_468[10] = 0;
  local_468[9] = 0;
  local_468[0xc] = 0;
  local_468[0xb] = 0;
  local_468[0xe] = 0;
  local_468[0xd] = 0;
  local_468[0x10] = 0;
  local_468[0xf] = 0;
  local_468[0x12] = 0;
  local_468[0x11] = 0;
  local_468[0x14] = 0;
  local_468[0x13] = 0;
  local_468[0x16] = 0;
  local_468[0x15] = 0;
  local_468[0x18] = 0;
  local_468[0x17] = 0;
  local_468[0x1a] = 0;
  local_468[0x19] = 0;
  local_468[0x1c] = 0;
  local_468[0x1b] = 0;
  local_378 = 0;
  local_468[0x1d] = 0;
  local_5d0[0] = param_3;
  if (uVar1 == 0) {
    local_378._0_4_ = 0;
  }
  else {
    uVar9 = 0;
    do {
      ppuVar8 = (undefined **)local_568[uVar9];
      local_170 = ppuVar8;
      uVar3 = (*local_5f0)(local_5d0,&local_170);
      if ((uVar3 & 1) != 0) {
        uVar3 = local_378 & 0xffffffff;
        if ((uint)local_378 == 0) {
          uVar3 = 0;
        }
        else {
          plVar5 = local_568 + 0x20;
          uVar4 = uVar3;
          do {
            if ((undefined **)*plVar5 == ppuVar8) goto LAB_009348f8;
            uVar4 = uVar4 - 1;
            plVar5 = plVar5 + 1;
          } while (uVar4 != 0);
          if (0x1d < (uint)local_378) goto LAB_009348f8;
        }
        local_378 = CONCAT44(local_378._4_4_,(uint)local_378 + 1);
        local_568[uVar3 + 0x20] = (long)ppuVar8;
      }
LAB_009348f8:
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar1);
  }
  local_368[0] = 0;
  local_370 = &PTR_FUN_041c2158;
  local_670 = FUN_00935b20;
  local_668 = FUN_00935c04;
  local_368[2] = 0;
  local_368[1] = 0;
  local_368[4] = 0;
  local_368[3] = 0;
  local_368[6] = 0;
  local_368[5] = 0;
  local_368[8] = 0;
  local_368[7] = 0;
  local_368[10] = 0;
  local_368[9] = 0;
  local_368[0xc] = 0;
  local_368[0xb] = 0;
  local_368[0xe] = 0;
  local_368[0xd] = 0;
  local_368[0x10] = 0;
  local_368[0xf] = 0;
  local_368[0x12] = 0;
  local_368[0x11] = 0;
  local_368[0x14] = 0;
  local_368[0x13] = 0;
  local_368[0x16] = 0;
  local_368[0x15] = 0;
  local_368[0x18] = 0;
  local_368[0x17] = 0;
  local_368[0x1a] = 0;
  local_368[0x19] = 0;
  local_368[0x1c] = 0;
  local_368[0x1b] = 0;
  local_278 = 0;
  local_368[0x1d] = 0;
  local_660 = &LAB_00935c08;
  puStack_658 = &LAB_00935c14;
  local_278._0_4_ = 0;
  local_650 = param_3;
  lStack_648 = param_2;
  if ((uint)local_378 != 0) {
    uVar9 = 0;
    uVar3 = (ulong)(uint)local_378;
    do {
      ppuVar8 = (undefined **)local_568[uVar9 + 0x20];
      local_170 = ppuVar8;
      uVar4 = (*local_670)(&local_650,&local_170);
      if ((uVar4 & 1) != 0) {
        uVar4 = local_278 & 0xffffffff;
        if ((uint)local_278 == 0) {
          uVar4 = 0;
        }
        else {
          plVar5 = local_368;
          uVar6 = uVar4;
          do {
            if ((undefined **)*plVar5 == ppuVar8) goto LAB_00934a5c;
            uVar6 = uVar6 - 1;
            plVar5 = plVar5 + 1;
          } while (uVar6 != 0);
          if (0x1d < (uint)local_278) goto LAB_00934a5c;
        }
        local_278 = CONCAT44(local_278._4_4_,(uint)local_278 + 1);
        local_368[uVar4] = (long)ppuVar8;
      }
LAB_00934a5c:
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  local_268[0] = 0;
  local_270 = &PTR_FUN_041c2158;
  local_6f0 = FUN_00935c20;
  local_6e8 = FUN_00935d04;
  local_268[2] = 0;
  local_268[1] = 0;
  local_268[4] = 0;
  local_268[3] = 0;
  local_268[6] = 0;
  local_268[5] = 0;
  local_268[8] = 0;
  local_268[7] = 0;
  local_268[10] = 0;
  local_268[9] = 0;
  local_268[0xc] = 0;
  local_268[0xb] = 0;
  local_268[0xe] = 0;
  local_268[0xd] = 0;
  local_268[0x10] = 0;
  local_268[0xf] = 0;
  local_268[0x12] = 0;
  local_268[0x11] = 0;
  local_268[0x14] = 0;
  local_268[0x13] = 0;
  local_268[0x16] = 0;
  local_268[0x15] = 0;
  local_268[0x18] = 0;
  local_268[0x17] = 0;
  local_268[0x1a] = 0;
  local_268[0x19] = 0;
  local_268[0x1c] = 0;
  local_268[0x1b] = 0;
  local_178 = 0;
  local_268[0x1d] = 0;
  local_6e0 = &LAB_00935d08;
  puStack_6d8 = &LAB_00935d14;
  local_178._0_4_ = 0;
  local_6d0 = param_3;
  lStack_6c8 = param_2;
  if ((uint)local_278 != 0) {
    uVar9 = 0;
    uVar3 = (ulong)(uint)local_278;
    do {
      ppuVar8 = (undefined **)local_368[uVar9];
      local_170 = ppuVar8;
      uVar4 = (*local_6f0)(&local_6d0,&local_170);
      if ((uVar4 & 1) != 0) {
        uVar4 = local_178 & 0xffffffff;
        if ((uint)local_178 == 0) {
          uVar4 = 0;
        }
        else {
          plVar5 = local_268;
          uVar6 = uVar4;
          do {
            if ((undefined **)*plVar5 == ppuVar8) goto LAB_00934bbc;
            uVar6 = uVar6 - 1;
            plVar5 = plVar5 + 1;
          } while (uVar6 != 0);
          if (0x1d < (uint)local_178) goto LAB_00934bbc;
        }
        local_178 = CONCAT44(local_178._4_4_,(uint)local_178 + 1);
        local_268[uVar4] = (long)ppuVar8;
      }
LAB_00934bbc:
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  local_770 = FUN_00935d20;
  local_168[0] = 0;
  local_170 = &PTR_FUN_041c2158;
  local_768 = FUN_00935db8;
  local_760 = &LAB_00935dbc;
  local_758 = &LAB_00935dc8;
  local_168[2] = 0;
  local_168[1] = 0;
  local_168[4] = 0;
  local_168[3] = 0;
  local_168[6] = 0;
  local_168[5] = 0;
  local_168[8] = 0;
  local_168[7] = 0;
  local_168[10] = 0;
  local_168[9] = 0;
  local_168[0xc] = 0;
  local_168[0xb] = 0;
  local_168[0xe] = 0;
  local_168[0xd] = 0;
  local_168[0x10] = 0;
  local_168[0xf] = 0;
  local_168[0x12] = 0;
  local_168[0x11] = 0;
  local_168[0x14] = 0;
  local_168[0x13] = 0;
  local_168[0x16] = 0;
  local_168[0x15] = 0;
  local_168[0x18] = 0;
  local_168[0x17] = 0;
  local_168[0x1a] = 0;
  local_168[0x19] = 0;
  local_168[0x1c] = 0;
  local_168[0x1b] = 0;
  local_78 = 0;
  local_168[0x1d] = 0;
  auStack_750[0] = param_3;
  if ((uint)local_178 == 0) {
    local_78._0_4_ = 0;
  }
  else {
    uVar9 = 0;
    uVar3 = (ulong)(uint)local_178;
    do {
      lVar7 = local_268[uVar9];
      local_70[0] = lVar7;
      uVar4 = (*local_770)(auStack_750,local_70);
      if ((uVar4 & 1) != 0) {
        uVar4 = local_78 & 0xffffffff;
        if ((uint)local_78 == 0) {
          uVar4 = 0;
        }
        else {
          plVar5 = local_168;
          uVar6 = uVar4;
          do {
            if (*plVar5 == lVar7) goto LAB_00934d10;
            uVar6 = uVar6 - 1;
            plVar5 = plVar5 + 1;
          } while (uVar6 != 0);
          if (0x1d < (uint)local_78) goto LAB_00934d10;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 + 1);
        local_168[uVar4] = lVar7;
      }
LAB_00934d10:
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  *param_1 = (long)&PTR_FUN_041c2158;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  auStack_7d0[0] = param_3;
  if ((uint)local_78 != 0) {
    uVar9 = 0;
    uVar3 = (ulong)(uint)local_78;
    do {
      lVar7 = local_168[uVar9];
      local_70[0] = lVar7;
      uVar4 = FUN_00935dd4(auStack_7d0,local_70);
      if ((uVar4 & 1) != 0) {
        uVar1 = *(uint *)(param_1 + 0x1f);
        uVar4 = (ulong)uVar1;
        if (uVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar6 = uVar4;
          plVar5 = param_1;
          do {
            plVar5 = plVar5 + 1;
            if (*plVar5 == lVar7) goto LAB_00934e20;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          if (0x1d < uVar1) goto LAB_00934e20;
        }
        *(uint *)(param_1 + 0x1f) = uVar1 + 1;
        param_1[uVar4 + 1] = lVar7;
      }
LAB_00934e20:
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  FUN_00935e50(auStack_7d0);
  pcVar2 = local_768;
  if (local_768 == (code *)0x0) {
    local_768 = (code *)0x0;
    pcVar2 = local_6e8;
  }
  else {
    local_760 = (undefined1 *)0x0;
    local_758 = (undefined1 *)0x0;
    local_770 = (code *)0x0;
    local_768 = (code *)0x0;
    (*pcVar2)(auStack_750);
    pcVar2 = local_6e8;
  }
  if (pcVar2 == (code *)0x0) {
    local_6e8 = (code *)0x0;
    pcVar2 = local_668;
  }
  else {
    local_6e0 = (undefined1 *)0x0;
    puStack_6d8 = (undefined1 *)0x0;
    local_6f0 = (code *)0x0;
    local_6e8 = (code *)0x0;
    (*pcVar2)(&local_6d0);
    pcVar2 = local_668;
  }
  if (pcVar2 == (code *)0x0) {
    local_668 = (code *)0x0;
    pcVar2 = local_5e8;
  }
  else {
    local_660 = (undefined1 *)0x0;
    puStack_658 = (undefined1 *)0x0;
    local_670 = (code *)0x0;
    local_668 = (code *)0x0;
    (*pcVar2)(&local_650);
    pcVar2 = local_5e8;
  }
  if (pcVar2 != (code *)0x0) {
    local_5d8 = (undefined1 *)0x0;
    local_5e0 = (undefined1 *)0x0;
    local_5e8 = (code *)0x0;
    local_5f0 = (code *)0x0;
    (*pcVar2)(local_5d0);
  }
  return;
}


