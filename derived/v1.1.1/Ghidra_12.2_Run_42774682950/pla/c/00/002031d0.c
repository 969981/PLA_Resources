/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002031d0; name: FUN_002031d0
 */


void FUN_002031d0(long param_1,char *param_2)

{
  uint *puVar1;
  size_t __n;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_e0;
  uint local_d8 [16];
  ulong local_98;
  undefined1 local_90 [56];
  ulong local_58;
  
  local_e0 = 0;
  local_d8[0] = 0x6a09e667;
  local_d8[1] = 0;
  local_d8[2] = 0xbb67ae85;
  local_d8[3] = 0;
  local_d8[4] = 0x3c6ef372;
  local_d8[5] = 0;
  local_d8[6] = 0xa54ff53a;
  local_d8[7] = 0;
  local_d8[8] = 0x510e527f;
  local_d8[9] = 0;
  local_d8[10] = 0x9b05688c;
  local_d8[0xb] = 0;
  local_d8[0xc] = 0x1f83d9ab;
  local_d8[0xd] = 0;
  local_d8[0xe] = 0x5be0cd19;
  local_d8[0xf] = 0;
  local_98 = 0;
  strlen(param_2);
  uVar3 = FUN_00204358();
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar6 = (ulong)uVar3;
    do {
      while ((uVar4 == 0 && (uVar2 = uVar6 - 0x40, 0x3f < uVar6))) {
        FUN_00203404(&local_e0,param_2);
        local_e0 = local_e0 + 0x200;
        param_2 = param_2 + 0x40;
        uVar4 = local_98;
        uVar6 = uVar2;
        if (uVar2 == 0) goto LAB_00203304;
      }
      __n = uVar6;
      if (0x40 - uVar4 <= uVar6) {
        __n = 0x40 - uVar4;
      }
      memcpy(local_90 + uVar4,param_2,__n);
      local_98 = local_98 + __n;
      param_2 = param_2 + __n;
      uVar6 = uVar6 - __n;
      if (local_98 == 0x40) {
        FUN_00203404(&local_e0,local_90);
        local_98 = 0;
        local_e0 = local_e0 + 0x200;
      }
      uVar4 = local_98;
    } while (uVar6 != 0);
LAB_00203304:
    uVar4 = local_98;
    if (0x3f < local_98) {
      return;
    }
  }
  local_e0 = local_e0 + uVar4 * 8;
  local_98 = uVar4 + 1;
  local_90[uVar4] = 0x80;
  if (local_98 < 0x39) {
    if (local_98 == 0x38) goto LAB_002033a4;
  }
  else {
    for (; local_98 < 0x40; local_98 = local_98 + 1) {
      local_90[local_98] = 0;
    }
    FUN_00203404(&local_e0,local_90);
    local_98 = 0;
  }
  do {
    uVar4 = local_98 + 1;
    local_90[local_98] = 0;
    local_98 = uVar4;
  } while (uVar4 < 0x38);
LAB_002033a4:
  uVar4 = (local_e0 & 0xff00ff00ff00ff00) >> 8 | (local_e0 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  local_58 = uVar4 >> 0x20 | uVar4 << 0x20;
  FUN_00203404(&local_e0,local_90);
  lVar5 = 0;
  param_1 = param_1 + 1;
  do {
    puVar1 = (uint *)((long)local_d8 + lVar5);
    lVar5 = lVar5 + 8;
    uVar3 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
    *(uint *)(param_1 + -1) = uVar3 >> 0x10 | uVar3 << 0x10;
    param_1 = param_1 + 4;
  } while (lVar5 != 0x40);
  return;
}


