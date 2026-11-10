/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079dc1c; name: FUN_0079dc1c
 */


byte * FUN_0079dc1c(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  byte *local_a0 [8];
  
  local_a0[0] = param_2;
  uVar2 = FUN_0030c7bc(param_3,local_a0,*(undefined4 *)(param_3 + 0x5c));
  if ((uVar2 & 1) == 0) {
    bVar1 = *local_a0[0];
    while( true ) {
      uVar2 = (ulong)bVar1;
      pbVar3 = local_a0[0] + 1;
      if ((char)bVar1 < '\0') break;
LAB_0079dcf8:
      auVar6._8_8_ = uVar2;
      auVar6._0_8_ = pbVar3;
      uVar5 = (uint)(uVar2 >> 3);
      local_a0[0] = pbVar3;
joined_r0x0079dd08:
      if (uVar5 - 1 < 10) {
                    /* WARNING: Could not recover jumptable at 0x0079dd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pbVar3 = (byte *)(*(code *)(&UNK_0079dd1c + (ulong)(byte)(&DAT_03a6d886)[uVar5 - 1] * 4))();
        return pbVar3;
      }
      local_a0[0] = auVar6._0_8_;
      uVar5 = auVar6._8_4_;
      if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = uVar5 - 1;
        return local_a0[0];
      }
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) == 0) {
        lVar4 = FUN_0033aecc((ulong *)(param_1 + 8));
      }
      else {
        lVar4 = (uVar2 & 0xfffffffffffffffe) + 8;
      }
      local_a0[0] = (byte *)FUN_00323c60(auVar6._8_8_ & 0xffffffff,lVar4,local_a0[0],param_3);
      if (local_a0[0] == (byte *)0x0) goto LAB_0079e32c;
      uVar2 = FUN_0030c7bc(param_3,local_a0,*(undefined4 *)(param_3 + 0x5c));
      if ((uVar2 & 1) != 0) {
        return local_a0[0];
      }
      bVar1 = *local_a0[0];
    }
    uVar2 = (ulong)(((uint)bVar1 + (uint)*pbVar3 * 0x80) - 0x80);
    if (-1 < (char)*pbVar3) {
      pbVar3 = local_a0[0] + 2;
      goto LAB_0079dcf8;
    }
    auVar6 = FUN_00323230(local_a0[0],uVar2);
    local_a0[0] = auVar6._0_8_;
    if (local_a0[0] != (byte *)0x0) {
      uVar5 = (uint)(auVar6._8_8_ >> 3) & 0x1fffffff;
      goto joined_r0x0079dd08;
    }
LAB_0079e32c:
    local_a0[0] = (byte *)0x0;
  }
  return local_a0[0];
}


