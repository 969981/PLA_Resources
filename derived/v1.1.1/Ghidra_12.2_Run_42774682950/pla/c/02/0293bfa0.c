/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293bfa0; name: FUN_0293bfa0
 */


undefined1 FUN_0293bfa0(long param_1,byte param_2)

{
  undefined1 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined4 local_28;
  char local_24;
  undefined1 auStack_18 [8];
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x88) + 8);
  if (param_2 < 6) {
    uVar3 = 0;
  }
  else {
    uVar5 = 3;
    if (0x17 < param_2) {
      uVar5 = (uint)(param_2 < 0x1e) << 2;
    }
    uVar2 = 1;
    if (0x11 < param_2) {
      uVar2 = uVar5;
    }
    uVar5 = 2;
    if (0xb < param_2) {
      uVar5 = uVar2;
    }
    uVar3 = (ulong)uVar5;
  }
  uVar5 = (uint)*(byte *)(lVar4 + uVar3 * 0x38 + 0x38);
  if (uVar5 != 0) {
    uVar2 = 0;
    do {
      if (*(byte *)(*(long *)(lVar4 + uVar3 * 0x38 + (ulong)(uVar2 & 0xff) * 8 + 8) + 0x7d) ==
          param_2) {
        local_24 = FUN_0294753c(*(undefined8 *)(param_1 + 0x58),uVar3);
        if (local_24 != '\x06') goto LAB_0293c060;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar5 != uVar2);
  }
  local_24 = '\x06';
LAB_0293c060:
  local_28 = 7;
  uVar1 = FUN_0299d334(&local_28,*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x55),
                       *(undefined8 *)(*(long *)(param_1 + 0x88) + 8),auStack_18);
  return uVar1;
}


