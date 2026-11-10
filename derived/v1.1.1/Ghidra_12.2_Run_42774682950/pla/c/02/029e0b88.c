/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e0b88; name: FUN_029e0b88
 */


void FUN_029e0b88(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined1 local_90 [16];
  byte local_80 [4];
  undefined4 local_7c;
  ulong local_78;
  undefined8 local_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined6 uStack_60;
  undefined1 uStack_5a;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((*(byte *)(param_2 + 0x1b0) & 7) != 0) {
    uStack_60 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_61 = 0;
    local_38 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_80[0] = *(byte *)(param_2 + 0x7d);
    local_7c = 0x24;
    local_78 = (ulong)local_80[0];
    uStack_5a = 1;
    local_58 = 0x1000000;
    FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),local_90,local_80);
    lVar1 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(lVar1 + 0x20) + 0x10) + 8) +
                      (ulong)*(byte *)(param_2 + 0x7d) * 8 + 0x120);
    *(byte *)(lVar2 + 0x387) = *(byte *)(lVar2 + 0x387) & 0xf7;
    FUN_02a3e6b8(*(undefined8 *)(lVar1 + 0x18),0x1f,*(undefined1 *)(param_2 + 0x7d),3);
    if ((param_3 & 1) != 0) {
      local_90[0] = *(undefined1 *)(param_2 + 0x7d);
      FUN_029d1538(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x120),local_80,local_90);
    }
  }
  return;
}


