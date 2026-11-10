/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009270c4; name: FUN_009270c4
 */


uint FUN_009270c4(long param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_138 [248];
  uint local_40;
  undefined4 local_38;
  int iStack_34;
  
  if (param_2 < 6) {
    iVar6 = 0;
  }
  else if (param_2 < 0xc) {
    iVar6 = 2;
  }
  else if (param_2 < 0x12) {
    iVar6 = 1;
  }
  else if (param_2 < 0x18) {
    iVar6 = 3;
  }
  else {
    iVar6 = (uint)(param_2 < 0x1e) << 2;
  }
  local_38 = 0x2000000;
  iStack_34 = iVar6;
  FUN_009346d8(auStack_138,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),&local_38);
  if (local_40 != 0) {
    if (iVar6 == 0) {
      uVar3 = 0;
      do {
        uVar1 = (uint)*(byte *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) +
                                                   0x370) + 8) + 0x38);
        uVar2 = (uint)*(byte *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x88);
        bVar4 = 0;
        if (uVar3 != uVar2) {
          bVar4 = 0x1f;
        }
        if (uVar3 != uVar2 && uVar1 != 0) {
          uVar5 = 0;
          bVar4 = 0;
          do {
            if ((uVar2 != uVar5) && (bVar4 = bVar4 + 1, uVar3 == uVar5)) goto LAB_00927198;
            uVar5 = uVar5 + 1;
          } while (uVar1 != uVar5);
          bVar4 = 0x1f;
        }
LAB_00927198:
        if (bVar4 == param_2) {
          return uVar3;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != local_40);
    }
    else {
      uVar3 = (uint)(byte)(param_2 - 0xc);
      do {
        if (uVar3 == 0) {
          return (uint)(byte)(param_2 - 0xc);
        }
        uVar3 = uVar3 - 1;
        local_40 = local_40 - 1;
      } while (local_40 != 0);
    }
  }
  return 0xffffffff;
}


