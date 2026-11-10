/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293b048; name: FUN_0293b048
 */


void FUN_0293b048(long param_1,byte param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x88) + 8);
  uVar1 = 3;
  if (0x17 < param_2) {
    uVar1 = (uint)(param_2 < 0x1e) << 2;
  }
  uVar2 = 1;
  if (0x11 < param_2) {
    uVar2 = uVar1;
  }
  uVar1 = 2;
  if (0xb < param_2) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (5 < param_2) {
    uVar2 = uVar1;
  }
  uVar3 = (ulong)uVar2;
  uVar1 = (uint)*(byte *)(lVar4 + uVar3 * 0x38 + 0x38);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(byte *)(*(long *)(lVar4 + uVar3 * 0x38 + (ulong)(uVar2 & 0xff) * 8 + 8) + 0x7d) ==
          param_2) {
        uVar1 = FUN_0294753c(*(undefined8 *)(param_1 + 0x58),uVar3);
        if ((uVar1 & 0xff) != 6) goto LAB_0293b104;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  uVar1 = 6;
LAB_0293b104:
  FUN_02964224(*(undefined8 *)(param_1 + 0x90),uVar1,param_3);
  return;
}


