/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ff264; name: FUN_007ff264
 */


undefined8 FUN_007ff264(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_20 [16];
  
  (**(code **)(**(long **)(param_1 + 0x90) + 0x160))();
  puVar1 = PTR_LAB_04377680;
  if (*(char *)(*(long *)(param_1 + 0x90) + 0x24b) != '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x90) + 0x24b) = 0;
    *(char **)(param_1 + 0x40) = "NetEventJob::WaitConnectionStatusUpdated";
    *(undefined **)(param_1 + 0x30) = puVar1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_007ff478(auStack_20,*(undefined8 *)(param_1 + 0x88),param_1 + 0x58);
    FUN_007e5e70(*(undefined8 *)(param_1 + 0x88),1);
  }
  return 5;
}


