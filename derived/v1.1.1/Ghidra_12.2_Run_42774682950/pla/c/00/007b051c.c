/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b051c; name: FUN_007b051c
 */


byte * FUN_007b051c(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 auVar5 [12];
  byte *local_18;
  
  local_18 = param_2;
  do {
    uVar2 = FUN_0030c7bc(param_3,&local_18,*(undefined4 *)(param_3 + 0x5c));
    if ((uVar2 & 1) != 0) {
      return local_18;
    }
    pbVar4 = local_18 + 1;
    uVar3 = (uint)*local_18;
    if ((char)*local_18 < '\0') {
      uVar3 = (uVar3 + (uint)*pbVar4 * 0x80) - 0x80;
      if (-1 < (char)*pbVar4) {
        pbVar4 = local_18 + 2;
        goto LAB_007b0588;
      }
      auVar5 = FUN_00323230();
      if (auVar5._0_8_ == 0) {
        return (byte *)0x0;
      }
    }
    else {
LAB_007b0588:
      auVar5._8_4_ = uVar3;
      auVar5._0_8_ = pbVar4;
    }
    uVar3 = auVar5._8_4_;
    local_18 = auVar5._0_8_;
    if (uVar3 == 8) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
      bVar1 = *local_18;
      if ((char)bVar1 < '\0') {
        if ((char)local_18[1] < '\0') {
          auVar5 = FUN_00322fe0(local_18);
          local_18 = auVar5._0_8_;
          *(int *)(param_1 + 0x10) = auVar5._8_4_;
        }
        else {
          *(uint *)(param_1 + 0x10) = (uint)bVar1 + (uint)local_18[1] * 0x80 + -0x80;
          local_18 = local_18 + 2;
        }
      }
      else {
        *(uint *)(param_1 + 0x10) = (uint)bVar1;
        local_18 = local_18 + 1;
      }
    }
    else if (uVar3 == 0x10) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
      bVar1 = *local_18;
      if ((char)bVar1 < '\0') {
        if ((char)local_18[1] < '\0') {
          auVar5 = FUN_00322fe0(local_18);
          local_18 = auVar5._0_8_;
          *(int *)(param_1 + 0x14) = auVar5._8_4_;
        }
        else {
          *(uint *)(param_1 + 0x14) = (uint)bVar1 + (uint)local_18[1] * 0x80 + -0x80;
          local_18 = local_18 + 2;
        }
      }
      else {
        *(uint *)(param_1 + 0x14) = (uint)bVar1;
        local_18 = local_18 + 1;
      }
    }
    else {
      if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = uVar3 - 1;
        return local_18;
      }
      local_18 = (byte *)FUN_00323c60(uVar3,0,local_18,param_3);
    }
    if (local_18 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


