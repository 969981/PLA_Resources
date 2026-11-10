/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fe1a8; name: FUN_029fe1a8
 */


undefined8 FUN_029fe1a8(long param_1,long param_2)

{
  undefined8 uVar1;
  byte local_70 [4];
  undefined4 local_6c;
  ulong local_68;
  undefined8 uStack_60;
  undefined7 local_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 auStack_20 [16];
  
  if ((*(short *)(param_2 + 0x74) == 0) || ((*(byte *)(param_2 + 0xb8) & 7) == 0)) {
    uVar1 = 0;
  }
  else {
    local_70[0] = *(byte *)(param_2 + 0x7d);
    local_58 = 0;
    uStack_51 = 0;
    uStack_50 = 0x1000000000000;
    uStack_60 = 0;
    local_28 = 0;
    local_68 = (ulong)local_70[0];
    local_6c = 5;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),auStack_20,local_70);
    uVar1 = 1;
  }
  return uVar1;
}


