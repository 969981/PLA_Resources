/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003be6b8; name: FUN_003be6b8
 */


byte * FUN_003be6b8(long param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  byte *local_a0 [8];
  
  local_a0[0] = param_2;
  uVar1 = FUN_0030c7bc(param_3,local_a0,*(undefined4 *)(param_3 + 0x5c));
  if ((uVar1 & 1) == 0) {
    do {
      pbVar3 = local_a0[0] + 1;
      uVar4 = (uint)*local_a0[0];
      if ((char)*local_a0[0] < '\0') {
        uVar4 = (uVar4 + (uint)*pbVar3 * 0x80) - 0x80;
        if (-1 < (char)*pbVar3) {
          pbVar3 = local_a0[0] + 2;
          goto LAB_003be854;
        }
        auVar5 = FUN_00323230();
        if (auVar5._0_8_ != 0) {
          uVar4 = (uint)(auVar5._8_8_ >> 3) & 0x1fffffff;
          goto joined_r0x003be980;
        }
LAB_003bea94:
        local_a0[0] = (byte *)0x0;
        break;
      }
LAB_003be854:
      auVar5._8_4_ = uVar4;
      auVar5._0_8_ = pbVar3;
      auVar5._12_4_ = 0;
      uVar4 = uVar4 >> 3;
joined_r0x003be980:
      local_a0[0] = auVar5._0_8_;
      if (uVar4 - 1 < 4) {
                    /* WARNING: Could not recover jumptable at 0x003be874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pbVar3 = (byte *)(*(code *)(&UNK_003be720 + (ulong)(byte)(&DAT_039fb91e)[uVar4 - 1] * 4))();
        return pbVar3;
      }
      uVar4 = auVar5._8_4_;
      if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = uVar4 - 1;
        break;
      }
      uVar1 = *(ulong *)(param_1 + 8);
      if ((uVar1 & 1) == 0) {
        lVar2 = FUN_0030c8c0((ulong *)(param_1 + 8));
      }
      else {
        lVar2 = (uVar1 & 0xfffffffffffffffe) + 8;
      }
      local_a0[0] = (byte *)FUN_0030e020(auVar5._8_8_ & 0xffffffff,lVar2,local_a0[0],param_3);
      if (local_a0[0] == (byte *)0x0) goto LAB_003bea94;
      uVar1 = FUN_0030c7bc(param_3,local_a0,*(undefined4 *)(param_3 + 0x5c));
    } while ((uVar1 & 1) == 0);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return local_a0[0];
}


