/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f5218; name: FUN_029f5218
 */


void FUN_029f5218(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  undefined2 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  *param_2 = 0;
  local_90 = *(ulong *)(param_3 + 8);
  FUN_02995024(*(undefined8 *)(param_1 + 0x38),*param_3,*(undefined4 *)(param_3 + 4),param_3[0x10],
               &local_90);
  bVar2 = param_3[0x10];
  uVar6 = (uint)bVar2;
  if (bVar2 < 2) {
LAB_029f52b0:
    local_94 = CONCAT11(local_94._1_1_,(char)uVar6);
  }
  else {
    if (bVar2 != 5) {
      if (bVar2 != 4) {
        if (bVar2 != 3) {
          return;
        }
        uVar6 = 0;
        local_94 = 0x100;
        lVar4 = 2;
        goto LAB_029f52b8;
      }
      uVar6 = 1;
      goto LAB_029f52b0;
    }
    uVar6 = 0;
    local_94 = (ushort)local_94._1_1_ << 8;
  }
  lVar4 = 1;
LAB_029f52b8:
  pbVar7 = (byte *)((ulong)&local_94 | 1);
  while( true ) {
    lVar4 = lVar4 + -1;
    uVar3 = FUN_02a3b378(*(undefined8 *)(param_1 + 0x20),uVar6,*(undefined4 *)(param_3 + 4),
                         &local_90);
    if ((uVar3 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      uVar1 = *(undefined4 *)(param_3 + 4);
      FUN_02a35be0(*(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x18),uVar6,uVar1,&local_90);
      FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x61,uVar6,uVar1,local_90._4_4_,
                   local_90 & 0xffffffff);
      if (*(short *)(param_3 + 0x12) != 0xa7) {
        FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x89);
      }
      local_88 = *(ulong *)(param_3 + 0x14);
      uStack_70 = *(undefined8 *)(param_3 + 0x2c);
      local_80 = *(undefined8 *)(param_3 + 0x1c);
      local_78 = *(undefined8 *)(param_3 + 0x24);
      local_68 = *(undefined4 *)(param_3 + 0x34);
      if ((param_3[0x38] != '\0') && ((local_88 & 0x3f800000) != 0)) {
        local_88 = CONCAT44(uVar6,(undefined4)local_88);
      }
      FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),&local_88);
      *param_2 = 1;
    }
    if (lVar4 == 0) break;
    uVar6 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
  }
  return;
}


