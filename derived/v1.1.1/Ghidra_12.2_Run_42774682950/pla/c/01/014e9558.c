/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014e9558; name: FUN_014e9558
 */


void FUN_014e9558(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auStack_40 [24];
  long *local_28;
  
  uVar1 = 0;
  if (param_2 < 10) {
    uVar1 = param_2;
  }
  FUN_00d42690(param_1,1,1);
  FUN_02a4754c(auStack_40,&DAT_04217428 + (ulong)uVar1 * 0x18);
  lVar2 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),auStack_40);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_00d7331c(param_1,0);
  return;
}


