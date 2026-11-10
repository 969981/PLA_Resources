/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bb9e8c; name: FUN_00bb9e8c
 */


void FUN_00bb9e8c(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 local_80 [16];
  ulong *local_70;
  uint local_68;
  long local_60;
  uint local_58;
  ulong *local_50;
  uint local_48;
  ulong *local_38;
  
  uVar4 = param_1[1];
  uVar5 = (uVar4 - *(uint *)(param_2 + 1)) + (ulong)*(uint *)(param_3 + 1) +
          (*param_3 - *param_2) * 8;
  param_1[1] = uVar5;
  if ((uVar4 == 0) || (0x3f < (uVar5 - 1 ^ uVar4 - 1))) {
    puVar1 = (undefined8 *)*param_1;
    if (0x40 < uVar5) {
      puVar1 = (undefined8 *)(*param_1 + (uVar5 - 1 >> 3 & 0x1ffffffffffffff8));
    }
    *puVar1 = 0;
  }
  local_48 = *(uint *)(param_2 + 1);
  uVar5 = (ulong)local_48;
  local_68 = (uint)uVar4 & 0x3f;
  local_70 = (ulong *)(*param_1 + (uVar4 >> 3 & 0x1ffffffffffffff8));
  local_50 = (ulong *)*param_2;
  local_60 = *param_3;
  local_58 = *(uint *)(param_3 + 1);
  if (local_48 == local_68) {
    uVar4 = (local_58 - uVar5) + (local_60 - (long)local_50) * 8;
    if (0 < (long)uVar4) {
      local_38 = local_50;
      if (local_48 != 0) {
        uVar6 = (ulong)(0x40 - local_48);
        uVar2 = uVar4;
        if ((long)uVar6 <= (long)uVar4) {
          uVar2 = uVar6;
        }
        uVar4 = uVar4 - uVar2;
        local_38 = local_50 + 1;
        lVar7 = uVar2 + uVar5;
        uVar5 = 0xffffffffffffffffU >> (uVar6 - uVar2 & 0x3f) & -1L << (uVar5 & 0x3f);
        *local_70 = *local_70 & (uVar5 ^ 0xffffffffffffffff) | *local_50 & uVar5;
        lVar3 = lVar7 + 0x3f;
        if (-1 < lVar7) {
          lVar3 = lVar7;
        }
        local_70 = local_70 + (lVar3 >> 6);
      }
      uVar5 = uVar4 + 0x3f;
      if (-1 < (long)uVar4) {
        uVar5 = uVar4;
      }
      lVar7 = (long)uVar5 >> 6;
      memmove(local_70,local_38,lVar7 * 8);
      if (0 < (long)uVar4 % 0x40) {
        uVar5 = 0xffffffffffffffff >> (-((long)uVar4 % 0x40) & 0x3fU);
        local_70[lVar7] = local_70[lVar7] & (uVar5 ^ 0xffffffffffffffff) | local_38[lVar7] & uVar5;
      }
    }
  }
  else {
    FUN_00bba090(local_80,&local_50,&local_60,&local_70);
  }
  return;
}


