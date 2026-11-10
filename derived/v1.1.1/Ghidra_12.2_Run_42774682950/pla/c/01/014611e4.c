/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014611e4; name: FUN_014611e4
 */


void FUN_014611e4(long param_1,char *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  uVar1 = 0x3f800000;
  if (*param_2 != '\x01') {
    uVar1 = 0;
  }
  FUN_02a4754c(auStack_40,&DAT_042116e0);
  FUN_00d2df7c(*(undefined8 *)(param_1 + 0x10),auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_02a4754c(auStack_40,&DAT_042116e0);
  FUN_01461288(uVar1,param_1,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


