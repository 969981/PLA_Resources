/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3c458; name: FUN_02a3c458
 */


void FUN_02a3c458(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),0);
  if ((uVar1 & 1) != 0) {
    FUN_029486c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
                 *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8) + 8,0);
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x3a,0);
  }
  uVar1 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),1);
  if ((uVar1 & 1) != 0) {
    FUN_029486c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
                 *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8) + 0x40,1);
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x3a,1);
  }
  uVar1 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),2);
  if ((uVar1 & 1) != 0) {
    FUN_029486c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
                 *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8) + 0x78,2);
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x3a,2);
  }
  uVar1 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),3);
  if ((uVar1 & 1) != 0) {
    FUN_029486c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
                 *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8) + 0xb0,3);
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x3a,3);
  }
  uVar1 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),4);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_029486c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
               *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8) + 0xe8,4);
  FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x3a,4);
  return;
}


