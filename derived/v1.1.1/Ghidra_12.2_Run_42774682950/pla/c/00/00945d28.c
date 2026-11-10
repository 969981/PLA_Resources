/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00945d28; name: FUN_00945d28
 */


void FUN_00945d28(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar1 = FUN_00923bb4(*(undefined8 *)(param_1 + 0x28));
  if (**(char **)(lVar1 + 0x398) == '\0') {
    FUN_008c4dc0(&local_40,*(undefined8 *)(param_1 + 0x28));
    lVar1 = FUN_00923bb4(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(lVar1 + 0x390) = local_40;
    *(undefined8 *)(lVar1 + 0x398) = local_38;
    *(undefined8 *)(lVar1 + 0x3a0) = local_30;
    plVar2 = *(long **)(lVar1 + 0x3a8);
    *(undefined8 *)(lVar1 + 0x3a8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    *(undefined8 *)(lVar1 + 0x3a8) = local_28;
  }
  return;
}


