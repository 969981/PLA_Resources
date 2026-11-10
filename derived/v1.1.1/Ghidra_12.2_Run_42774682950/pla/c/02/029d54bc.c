/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d54bc; name: FUN_029d54bc
 */


void FUN_029d54bc(long param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5,
                 int param_6)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  long lStack_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 auStack_18 [8];
  
  if (param_6 == 2) {
    local_24 = 1;
    local_40 = param_4;
    local_38 = param_2;
    lStack_30 = param_3;
    local_28 = param_5;
    FUN_02a08b94(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1c60),auStack_18,&local_40);
  }
  else {
    if (param_6 == 1) {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xa8,
                   *(undefined1 *)(param_2 + 0x7d),*(undefined1 *)(param_3 + 0x7d));
    }
    else {
      if (param_6 != 0) {
        return;
      }
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    *(undefined1 *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x1c8) * 0x40 + 0x43) = 1;
  }
  return;
}


