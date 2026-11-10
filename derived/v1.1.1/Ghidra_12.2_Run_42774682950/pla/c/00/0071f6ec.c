/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071f6ec; name: FUN_0071f6ec
 */


byte * FUN_0071f6ec(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  byte *local_68;
  
  local_68 = param_2;
  auVar8 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)(param_3 + 0x5c));
  uVar3 = auVar8._8_8_;
  if ((auVar8._0_8_ & 1) == 0) {
    do {
      pbVar4 = local_68 + 1;
      bVar1 = *local_68;
      uVar7 = (ulong)(uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar7 = (ulong)(((uint)bVar1 + (uint)*pbVar4 * 0x80) - 0x80);
        if (-1 < (char)*pbVar4) {
          pbVar4 = local_68 + 2;
          goto LAB_0071f7ac;
        }
        auVar8 = FUN_00323230(local_68,uVar7);
        uVar7 = auVar8._8_8_;
        if (auVar8._0_8_ == 0) {
          return (byte *)0x0;
        }
        uVar5 = (uint)(uVar7 >> 3) & 0x1fffffff;
      }
      else {
LAB_0071f7ac:
        auVar8._8_8_ = uVar3;
        auVar8._0_8_ = pbVar4;
        uVar5 = (uint)(uVar7 >> 3);
      }
      local_68 = auVar8._0_8_;
      if (uVar5 - 1 < 4) {
                    /* WARNING: Could not recover jumptable at 0x0071f7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pbVar4 = (byte *)(*(code *)(&UNK_0071f7d8 + (ulong)(byte)(&DAT_03a606ce)[uVar5 - 1] * 4))();
        return pbVar4;
      }
      uVar5 = (uint)uVar7;
      if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = uVar5 - 1;
        return local_68;
      }
      uVar6 = *(ulong *)(param_1 + 8);
      if ((uVar6 & 1) == 0) {
        lVar2 = FUN_0033aecc((ulong *)(param_1 + 8),auVar8._8_8_,local_68);
      }
      else {
        lVar2 = (uVar6 & 0xfffffffffffffffe) + 8;
      }
      local_68 = (byte *)FUN_00323c60(uVar7 & 0xffffffff,lVar2,local_68,param_3);
      if (local_68 == (byte *)0x0) {
        return (byte *)0x0;
      }
      auVar8 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)(param_3 + 0x5c));
      uVar3 = auVar8._8_8_;
    } while ((auVar8._0_8_ & 1) == 0);
  }
  return local_68;
}


