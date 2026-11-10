/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00231944; name: FUN_00231944
 */


void FUN_00231944(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,uint param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  if (*(char *)(param_4 + 0x22) != '\0') {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
  }
  if (*(char *)(param_4 + 0x23) != '\0') {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 2;
  }
  if ((param_6 & 1) != 0) {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 0x10;
  }
  *(uint *)(param_1 + 0x44) = (uint)*(ushort *)(param_4 + 0x20);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(uint *)(param_1 + 0x40) = (uint)*(ushort *)(param_4 + 0x24);
  uVar2 = FUN_00251230(param_4);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if ((*(byte *)(param_1 + 0x60) & 0x12) == 0) {
    return;
  }
  FUN_00231a08(param_1,param_2,*(undefined8 *)(param_1 + 0x30),0);
  return;
}


