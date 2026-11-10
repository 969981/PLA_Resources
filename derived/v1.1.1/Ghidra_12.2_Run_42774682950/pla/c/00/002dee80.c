/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002dee80; name: FUN_002dee80
 */


byte * FUN_002dee80(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  byte *local_68;
  
  local_68 = param_2;
  uVar2 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)(param_3 + 0x5c));
  if ((uVar2 & 1) == 0) {
    do {
      pbVar4 = local_68 + 1;
      bVar1 = *local_68;
      uVar2 = (ulong)(uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar2 = (ulong)(((uint)bVar1 + (uint)*pbVar4 * 0x80) - 0x80);
        if (-1 < (char)*pbVar4) {
          pbVar4 = local_68 + 2;
          goto LAB_002def28;
        }
        auVar6 = FUN_00323230(local_68,uVar2);
        if (auVar6._0_8_ == 0) {
          return (byte *)0x0;
        }
        uVar5 = (uint)(auVar6._8_8_ >> 3) & 0x1fffffff;
      }
      else {
LAB_002def28:
        auVar6._8_8_ = uVar2;
        auVar6._0_8_ = pbVar4;
        uVar5 = (uint)(uVar2 >> 3);
      }
      local_68 = auVar6._0_8_;
      if (uVar5 - 1 < 10) {
                    /* WARNING: Could not recover jumptable at 0x002def48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pbVar4 = (byte *)(*(code *)(&UNK_002def4c + (ulong)(byte)(&DAT_039f88db)[uVar5 - 1] * 4))();
        return pbVar4;
      }
      uVar5 = auVar6._8_4_;
      if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = uVar5 - 1;
        return local_68;
      }
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) == 0) {
        lVar3 = FUN_0033aecc((ulong *)(param_1 + 8));
      }
      else {
        lVar3 = (uVar2 & 0xfffffffffffffffe) + 8;
      }
      local_68 = (byte *)FUN_00323c60(auVar6._8_8_ & 0xffffffff,lVar3,local_68,param_3);
      if (local_68 == (byte *)0x0) {
        return (byte *)0x0;
      }
      uVar2 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)(param_3 + 0x5c));
    } while ((uVar2 & 1) == 0);
  }
  return local_68;
}


