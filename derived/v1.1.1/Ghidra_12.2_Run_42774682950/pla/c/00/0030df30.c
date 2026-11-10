/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030df30; name: FUN_0030df30
 */


byte * FUN_0030df30(undefined8 param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 auVar4 [12];
  byte *local_18;
  
  local_18 = param_2;
  do {
    uVar1 = FUN_0030c7bc(param_3,&local_18,*(undefined4 *)(param_3 + 0x5c));
    if ((uVar1 & 1) != 0) {
      return local_18;
    }
    pbVar3 = local_18 + 1;
    uVar2 = (uint)*local_18;
    if ((char)*local_18 < '\0') {
      uVar2 = (uVar2 + (uint)*pbVar3 * 0x80) - 0x80;
      if (-1 < (char)*pbVar3) {
        pbVar3 = local_18 + 2;
        goto LAB_0030df88;
      }
      auVar4 = FUN_00323230();
      if (auVar4._0_8_ == 0) {
        return (byte *)0x0;
      }
    }
    else {
LAB_0030df88:
      auVar4._8_4_ = uVar2;
      auVar4._0_8_ = pbVar3;
    }
    uVar2 = auVar4._8_4_;
    local_18 = auVar4._0_8_;
    if ((uVar2 == 0) || ((uVar2 & 7) == 4)) {
      *(uint *)(param_3 + 0x50) = uVar2 - 1;
      return local_18;
    }
    local_18 = (byte *)FUN_0030e040(uVar2,param_1,local_18,param_3);
    if (local_18 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


