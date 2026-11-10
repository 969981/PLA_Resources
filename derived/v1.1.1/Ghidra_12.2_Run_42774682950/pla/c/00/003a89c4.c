/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a89c4; name: FUN_003a89c4
 */


byte * FUN_003a89c4(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  byte *local_68;
  
  local_68 = param_2;
  uVar2 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)(param_3 + 0x5c));
  if ((uVar2 & 1) == 0) {
    bVar1 = *local_68;
    while( true ) {
      uVar2 = (ulong)bVar1;
      pbVar3 = local_68 + 1;
      if ((char)bVar1 < '\0') break;
LAB_003a8ac4:
      auVar6._8_8_ = uVar2;
      auVar6._0_8_ = pbVar3;
      uVar5 = (uint)(uVar2 >> 3);
      local_68 = pbVar3;
joined_r0x003a8ad4:
      if (uVar5 - 1 < 10) {
                    /* WARNING: Could not recover jumptable at 0x003a8aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pbVar3 = (byte *)(*(code *)(&UNK_003a8af0 +
                                   (ulong)*(ushort *)(&DAT_039fb870 + (ulong)(uVar5 - 1) * 2) * 4))
                                   ();
        return pbVar3;
      }
      local_68 = auVar6._0_8_;
      uVar5 = auVar6._8_4_;
      if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = uVar5 - 1;
        return local_68;
      }
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) == 0) {
        lVar4 = FUN_0030c8c0((ulong *)(param_1 + 8));
      }
      else {
        lVar4 = (uVar2 & 0xfffffffffffffffe) + 8;
      }
      local_68 = (byte *)FUN_0030e020(auVar6._8_8_ & 0xffffffff,lVar4,local_68,param_3);
      if (local_68 == (byte *)0x0) goto LAB_003a9740;
      uVar2 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)(param_3 + 0x5c));
      if ((uVar2 & 1) != 0) {
        return local_68;
      }
      bVar1 = *local_68;
    }
    uVar2 = (ulong)(((uint)bVar1 + (uint)*pbVar3 * 0x80) - 0x80);
    if (-1 < (char)*pbVar3) {
      pbVar3 = local_68 + 2;
      goto LAB_003a8ac4;
    }
    auVar6 = FUN_00323230();
    local_68 = auVar6._0_8_;
    if (local_68 != (byte *)0x0) {
      uVar5 = (uint)(auVar6._8_8_ >> 3) & 0x1fffffff;
      goto joined_r0x003a8ad4;
    }
LAB_003a9740:
    local_68 = (byte *)0x0;
  }
  return local_68;
}


