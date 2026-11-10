/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014610bc; name: FUN_014610bc
 */


void FUN_014610bc(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  if (((*(byte *)(param_1 + 0x18) & 1) != 0) && (*(char *)(param_1 + 0x40) == '\0')) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN_02a4754c(auStack_40,&DAT_04211698);
    lVar1 = FUN_0283ac34(*(undefined8 *)(lVar1 + 0x148),auStack_40);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    FUN_02a4754c(auStack_40,&DAT_042116b0);
    FUN_0146119c(param_1,auStack_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    FUN_02a4754c(auStack_40,&DAT_042116c8);
    FUN_00d2df7c(*(undefined8 *)(param_1 + 0x10),auStack_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


