/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00691d74; name: FUN_00691d74
 */


byte * FUN_00691d74(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  byte *local_28;
  
  local_28 = param_2;
  do {
    uVar4 = FUN_0030c7bc(param_3,&local_28,*(undefined4 *)(param_3 + 0x5c));
    if ((uVar4 & 1) != 0) {
      return local_28;
    }
    bVar2 = *local_28;
    uVar4 = (ulong)(uint)bVar2;
    pbVar3 = local_28 + 1;
    if ((char)bVar2 < '\0') {
      bVar1 = local_28[1];
      uVar4 = (ulong)(((uint)bVar2 + (uint)bVar1 * 0x80) - 0x80);
      if (-1 < (char)bVar1) {
        pbVar3 = local_28 + 2;
        goto LAB_00691dd0;
      }
      auVar7 = FUN_00323230(local_28,uVar4);
      local_28 = auVar7._0_8_;
      if (local_28 == (byte *)0x0) {
        return (byte *)0x0;
      }
      if (auVar7._8_4_ == 0) {
        uVar6 = 0;
        goto LAB_00691e48;
      }
    }
    else {
LAB_00691dd0:
      local_28 = pbVar3;
      auVar7._8_8_ = uVar4;
      auVar7._0_8_ = local_28;
      uVar6 = 0;
      if ((int)uVar4 == 0) goto LAB_00691e48;
    }
    local_28 = auVar7._0_8_;
    uVar6 = auVar7._8_4_;
    if ((uVar6 & 7) == 4) {
LAB_00691e48:
      *(uint *)(param_3 + 0x50) = uVar6 - 1;
      return local_28;
    }
    uVar4 = *(ulong *)(param_1 + 8);
    if ((uVar4 & 1) == 0) {
      lVar5 = FUN_0033aecc((ulong *)(param_1 + 8));
    }
    else {
      lVar5 = (uVar4 & 0xfffffffffffffffe) + 8;
    }
    local_28 = (byte *)FUN_00323c60(auVar7._8_8_ & 0xffffffff,lVar5,local_28,param_3);
    if (local_28 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


