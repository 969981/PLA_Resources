/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080a2bc; name: FUN_0080a2bc
 */


void FUN_0080a2bc(undefined8 param_1,undefined8 param_2,Result *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  uVar1 = *(uint *)param_3;
  if (uVar1 == 0) {
    local_30[0] = 0;
    goto LAB_0080a3b8;
  }
  if ((uVar1 & 0x1ff) == 0xcb) {
    uVar2 = uVar1 >> 9 & 0x1fff;
    if (uVar2 - 0x11 < 5) {
LAB_0080a2f4:
      local_30[0] = 0xa466;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
      FUN_007ee578(param_1,local_30);
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)local_30,param_3);
      FUN_007f01c0(param_1,local_30);
      return;
    }
    if (uVar2 - 0x16 < 5) {
      if ((uVar1 & 0x3ffe00) == 0x3000) {
        local_30[0] = 0xc421;
      }
      else {
        if ((uVar1 & 0x3ffe00) != 0x2e00) goto LAB_0080a2f4;
        local_30[0] = 0xc420;
      }
      goto LAB_0080a3b8;
    }
    uVar1 = (uVar1 & 0x3fe000) - 0x4000 >> 0xd;
    if (uVar1 < 8) {
                    /* WARNING: Jumptable with 0 entries at 0x0080a3a0 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)",.?.."[uVar1] * 4 + 0x80a2f4))();
      return;
    }
  }
  local_30[0] = 0x10408;
LAB_0080a3b8:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


