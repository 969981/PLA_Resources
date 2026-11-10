/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffee80; name: FUN_02ffee80
 */


void FUN_02ffee80(long param_1)

{
  undefined1 local_58 [2];
  short sStack_56;
  undefined8 local_50;
  ulong uStack_48;
  undefined1 auStack_40 [32];
  
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(param_1 + 0x78) + 0x18) * 0x200 + 0x18))
            (*(long *)(param_1 + 0x78),&DAT_03aae430,auStack_40);
  local_50 = CONCAT44(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc));
  uStack_48 = (ulong)*(uint *)(param_1 + 0x2c);
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(param_1 + 0x78) + 0x18) * 0x200 + 0x28))
            (*(long *)(param_1 + 0x78),&local_50,local_58);
  *(short *)(param_1 + 0x94) = sStack_56 + 1;
  return;
}


