/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00935284; name: FUN_00935284
 */


undefined4 FUN_00935284(long param_1,byte param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  byte *apbStack_1c0 [12];
  undefined **local_160;
  long local_158 [30];
  ulong local_68;
  byte local_5c [4];
  long local_58;
  
  apbStack_1c0[0] = local_5c;
  local_160 = &PTR_FUN_041c2158;
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[4] = 0;
  local_158[5] = 0;
  local_158[6] = 0;
  local_158[7] = 0;
  local_158[8] = 0;
  local_158[9] = 0;
  local_158[10] = 0;
  local_158[0xb] = 0;
  local_158[0xc] = 0;
  local_158[0xd] = 0;
  local_158[0xe] = 0;
  local_158[0xf] = 0;
  local_158[0x10] = 0;
  local_158[0x11] = 0;
  local_158[0x12] = 0;
  local_158[0x13] = 0;
  local_158[0x14] = 0;
  local_158[0x15] = 0;
  local_158[0x16] = 0;
  local_158[0x17] = 0;
  local_158[0x18] = 0;
  local_158[0x19] = 0;
  local_158[0x1a] = 0;
  local_158[0x1b] = 0;
  local_158[0x1c] = 0;
  local_158[0x1d] = 0;
  local_68 = 0;
  local_5c[0] = param_2;
  if (*(int *)(param_1 + 0x1a0) != 0) {
    uVar8 = 0;
    do {
      plVar9 = (long *)(param_1 + uVar8 * 8 + 0xb0);
      local_58 = *plVar9;
      uVar2 = FUN_00935a9c(apbStack_1c0,&local_58);
      if ((uVar2 & 1) != 0) {
        lVar5 = *plVar9;
        uVar2 = local_68 & 0xffffffff;
        if ((uint)local_68 == 0) {
          uVar2 = 0;
        }
        else {
          plVar9 = local_158;
          uVar7 = uVar2;
          do {
            if (*plVar9 == lVar5) goto LAB_009353ac;
            uVar7 = uVar7 - 1;
            plVar9 = plVar9 + 1;
          } while (uVar7 != 0);
          if (0x1d < (uint)local_68) goto LAB_009353ac;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 + 1);
        local_158[uVar2] = lVar5;
      }
LAB_009353ac:
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x1a0));
  }
  FUN_00935abc(apbStack_1c0);
  if (((uint)local_68 != 0) && (local_158[0] != 0)) {
    lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) + 0x370) + 8);
    if (param_2 < 6) {
      lVar3 = 0;
    }
    else if (param_2 < 0xc) {
      lVar3 = 2;
    }
    else if (param_2 < 0x12) {
      lVar3 = 1;
    }
    else if (param_2 < 0x18) {
      lVar3 = 3;
    }
    else {
      lVar3 = (ulong)(param_2 < 0x1e) << 2;
    }
    uVar6 = (uint)*(byte *)(lVar5 + lVar3 * 0x38 + 0x38);
    if (uVar6 != 0) {
      uVar4 = 0;
      while (*(byte *)(*(long *)(lVar5 + lVar3 * 0x38 + (ulong)(uVar4 & 0xff) * 8 + 8) + 0x7d) !=
             param_2) {
        uVar4 = uVar4 + 1;
        if (uVar6 == uVar4) {
          return 0x15;
        }
      }
      bVar1 = FUN_0294753c();
      if (bVar1 != 6) {
        return *(undefined4 *)(&DAT_03a75a04 + (ulong)bVar1 * 4);
      }
    }
  }
  return 0x15;
}


