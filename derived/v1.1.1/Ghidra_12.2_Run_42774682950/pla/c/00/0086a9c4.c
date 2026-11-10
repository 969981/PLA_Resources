/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086a9c4; name: FUN_0086a9c4
 */


undefined8 FUN_0086a9c4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  int local_30 [4];
  
  puVar1 = PTR_DAT_04377550;
  (**(code **)(**(long **)(*(long *)PTR_DAT_04377550 + 0x18) + 0xc0))
            (local_30,*(long **)(*(long *)PTR_DAT_04377550 + 0x18),param_1 + 0x60);
  if (local_30[0] == 0) {
    *(undefined **)(param_1 + 0x30) = PTR_LAB_04378328;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "AttachMeshJob::WaitPostConnectNetwork";
    return 0;
  }
  plVar2 = *(long **)(*(long *)puVar1 + 0x18);
  FUN_007ee578(auStack_40,local_30);
  (**(code **)(*plVar2 + 0x178))(plVar2,auStack_40);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  FUN_007ee578(auStack_50,local_30);
  FUN_007e5cac(uVar3,auStack_50);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}


