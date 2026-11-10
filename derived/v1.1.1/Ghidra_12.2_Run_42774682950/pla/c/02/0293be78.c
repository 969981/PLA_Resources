/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293be78; name: FUN_0293be78
 */


undefined1 FUN_0293be78(long param_1,byte param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_30;
  char local_2c;
  undefined1 auStack_28 [8];
  
  if (param_3 < 0) {
    return 0x1f;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 8);
  if (param_2 < 6) {
    uVar4 = 0;
  }
  else {
    uVar2 = 3;
    if (0x17 < param_2) {
      uVar2 = (uint)(param_2 < 0x1e) << 2;
    }
    uVar3 = 1;
    if (0x11 < param_2) {
      uVar3 = uVar2;
    }
    uVar2 = 2;
    if (0xb < param_2) {
      uVar2 = uVar3;
    }
    uVar4 = (ulong)uVar2;
  }
  uVar2 = (uint)*(byte *)(lVar5 + uVar4 * 0x38 + 0x38);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(byte *)(*(long *)(lVar5 + uVar4 * 0x38 + (ulong)(uVar3 & 0xff) * 8 + 8) + 0x7d) ==
          param_2) {
        local_2c = FUN_0294753c(*(undefined8 *)(param_1 + 0x58),uVar4);
        if (local_2c != '\x06') goto LAB_0293bf48;
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  local_2c = '\x06';
LAB_0293bf48:
  local_30 = 8;
  uVar2 = FUN_0299d334(&local_30,*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x55),
                       *(undefined8 *)(*(long *)(param_1 + 0x88) + 8),auStack_28);
  if (param_3 < (int)(uVar2 & 0xff)) {
    uVar1 = auStack_28[param_3];
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}


