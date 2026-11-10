/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5ef00; name: FUN_00d5ef00
 */


void FUN_00d5ef00(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_00d5f468(auStack_40,param_1,*(undefined4 *)(param_1 + 0x1624),
               *(undefined4 *)(param_1 + 0x1628),param_2 & 1,0);
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),auStack_40);
  }
  uVar1 = 0;
  if (local_28 != (long *)0x0) {
    uVar1 = (**(code **)(*local_28 + 0x20))();
  }
  FUN_00d5f468(auStack_40,uVar1,*(undefined4 *)(param_1 + 0x1624),*(undefined4 *)(param_1 + 0x1628),
               param_2 & 1,1);
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),auStack_40);
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


