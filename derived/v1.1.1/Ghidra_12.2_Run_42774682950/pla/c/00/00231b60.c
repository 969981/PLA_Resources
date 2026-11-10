/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00231b60; name: FUN_00231b60
 */


void FUN_00231b60(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  ushort uVar1;
  
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  uVar1 = *(ushort *)(param_4 + 0x60);
  if ((uVar1 & 1) != 0) {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
    uVar1 = *(ushort *)(param_4 + 0x60);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 2;
    uVar1 = *(ushort *)(param_4 + 0x60);
  }
  if ((uVar1 >> 4 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x60);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x60) | 0x10;
    *(ushort *)(param_1 + 0x60) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_4 + 0x44);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_4 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_4 + 0x50);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_4 + 0x40);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_4 + 0x28);
  if ((uVar1 & 0x12) == 0) {
    return;
  }
  FUN_00231a08();
  return;
}


