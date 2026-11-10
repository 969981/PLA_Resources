/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136bdcc; name: FUN_0136bdcc
 */


void FUN_0136bdcc(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  long *local_38;
  
  uVar1 = (param_2 ^ 1) & 1;
  *(uint *)(param_1 + 0x5ac) = uVar1;
  FUN_02a4754c(auStack_50,&DAT_04207548);
  lVar2 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),auStack_50);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | (byte)param_2 & 1;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_02a4754c(auStack_50,&DAT_04207560);
  lVar2 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),auStack_50);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | (byte)(param_2 ^ 1) & 1;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_02a4754c(auStack_50,&DAT_04207578);
  lVar2 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),auStack_50);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | (byte)uVar1;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


