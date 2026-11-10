/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002b23d4; name: FUN_002b23d4
 */


byte * FUN_002b23d4(long param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  byte *local_68;
  
  local_68 = param_2;
  uVar1 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)(param_3 + 0x5c));
  if ((uVar1 & 1) == 0) {
    do {
      pbVar3 = local_68 + 1;
      uVar4 = (uint)*local_68;
      if ((char)*local_68 < '\0') {
        uVar4 = (uVar4 + (uint)*pbVar3 * 0x80) - 0x80;
        if (-1 < (char)*pbVar3) {
          pbVar3 = local_68 + 2;
          goto LAB_002b2464;
        }
        auVar5 = FUN_00323230();
        if (auVar5._0_8_ == 0) {
          return (byte *)0x0;
        }
        uVar4 = (uint)(auVar5._8_8_ >> 3) & 0x1fffffff;
      }
      else {
LAB_002b2464:
        auVar5._8_4_ = uVar4;
        auVar5._0_8_ = pbVar3;
        auVar5._12_4_ = 0;
        uVar4 = uVar4 >> 3;
      }
      local_68 = auVar5._0_8_;
      if (uVar4 - 1 < 4) {
                    /* WARNING: Could not recover jumptable at 0x002b2484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pbVar3 = (byte *)(*(code *)(&UNK_002b2488 + (ulong)(byte)(&DAT_039f5485)[uVar4 - 1] * 4))();
        return pbVar3;
      }
      uVar4 = auVar5._8_4_;
      if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = uVar4 - 1;
        return local_68;
      }
      uVar1 = *(ulong *)(param_1 + 8);
      if ((uVar1 & 1) == 0) {
        lVar2 = FUN_0033aecc((ulong *)(param_1 + 8),auVar5._8_8_,local_68);
      }
      else {
        lVar2 = (uVar1 & 0xfffffffffffffffe) + 8;
      }
      local_68 = (byte *)FUN_00323c60(auVar5._8_8_ & 0xffffffff,lVar2,local_68,param_3);
      if (local_68 == (byte *)0x0) {
        return (byte *)0x0;
      }
      uVar1 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)(param_3 + 0x5c));
    } while ((uVar1 & 1) == 0);
  }
  return local_68;
}


