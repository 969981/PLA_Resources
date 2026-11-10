/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02805c5c; name: FUN_02805c5c
 */


uint FUN_02805c5c(long param_1,uint param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte local_98 [64];
  undefined8 local_58;
  undefined1 *local_50;
  byte *pbStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_98[0x30] = 0;
  local_98[0x31] = 0;
  local_98[0x32] = 0;
  local_98[0x33] = 0;
  local_98[0x34] = 0;
  local_98[0x35] = 0;
  local_98[0x36] = 0;
  local_98[0x37] = 0;
  local_98[0x38] = 0;
  local_98[0x39] = 0;
  local_98[0x3a] = 0;
  local_98[0x3b] = 0;
  local_98[0x3c] = 0;
  local_98[0x3d] = 0;
  local_98[0x3e] = 0;
  local_98[0x3f] = 0;
  local_98[0x20] = 0;
  local_98[0x21] = 0;
  local_98[0x22] = 0;
  local_98[0x23] = 0;
  local_98[0x24] = 0;
  local_98[0x25] = 0;
  local_98[0x26] = 0;
  local_98[0x27] = 0;
  local_98[0x28] = 0;
  local_98[0x29] = 0;
  local_98[0x2a] = 0;
  local_98[0x2b] = 0;
  local_98[0x2c] = 0;
  local_98[0x2d] = 0;
  local_98[0x2e] = 0;
  local_98[0x2f] = 0;
  local_98[0x10] = 0;
  local_98[0x11] = 0;
  local_98[0x12] = 0;
  local_98[0x13] = 0;
  local_98[0x14] = 0;
  local_98[0x15] = 0;
  local_98[0x16] = 0;
  local_98[0x17] = 0;
  local_98[0x18] = 0;
  local_98[0x19] = 0;
  local_98[0x1a] = 0;
  local_98[0x1b] = 0;
  local_98[0x1c] = 0;
  local_98[0x1d] = 0;
  local_98[0x1e] = 0;
  local_98[0x1f] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
  local_98[0xc] = 0;
  local_98[0xd] = 0;
  local_98[0xe] = 0;
  local_98[0xf] = 0;
  if (param_2 < 4) {
    local_50 = (undefined1 *)0xe2a06d3a0634e918;
    pbStack_48 = (byte *)0x39ac1bb;
    local_40 = 10;
    local_38 = (long *)0x0;
    lVar2 = FUN_00d2ec48(param_1 + 0x180,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    uVar4 = 0;
    if (lVar2 != 0) {
      puVar5 = &DAT_cbf29ce484222645;
      snprintf((char *)local_98,0x40,"button_%02d",param_2);
      if (local_98[0] != 0) {
        pbVar3 = (byte *)((ulong)local_98 | 1);
        bVar1 = local_98[0];
        do {
          puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)bVar1) * 0x100000001b3);
          bVar1 = *pbVar3;
          pbVar3 = pbVar3 + 1;
        } while (bVar1 != 0);
      }
      local_58 = 0;
      local_40 = 0x3f;
      local_38 = (long *)0x0;
      local_50 = puVar5;
      pbStack_48 = local_98;
      FUN_0280e56c(lVar2,&local_50,&local_58,0);
      lVar2 = *(long *)(lVar2 + 0x468);
      if (*(int *)(lVar2 + 0x1c) == 0) {
        uVar4 = (int)local_58 + *(int *)(lVar2 + 0xc) * local_58._4_4_;
      }
      else {
        uVar4 = local_58._4_4_ + *(int *)(lVar2 + 0x10) * (int)local_58;
      }
      uVar4 = *(uint *)(*(long *)(*(long *)(lVar2 + 0x40) + 0x20) + (ulong)uVar4 * 0x28 + 0x20) & 1;
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


