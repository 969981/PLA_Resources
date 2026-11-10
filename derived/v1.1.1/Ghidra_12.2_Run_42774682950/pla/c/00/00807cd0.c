/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00807cd0; name: FUN_00807cd0
 */


undefined8 FUN_00807cd0(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  int local_30 [4];
  
  FUN_008005c8(local_30,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x180));
  if (local_30[0] != 0) {
    return 5;
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x68) + 0x180);
  (**(code **)(*plVar2 + 0x80))(auStack_40,plVar2,*(undefined8 *)(param_1 + 0x60));
  FUN_007ee660(local_30,auStack_40);
  if (local_30[0] == 0) {
    *(undefined **)(param_1 + 0x30) = PTR_FUN_043778a8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NetDisconnectNetworkJob::WaitDisconnectNetwork";
    FUN_007e5e70(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x180),1);
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  FUN_007ee578(auStack_50,*(long *)(param_1 + 0x60) + 4);
  FUN_007e5cac(uVar1,auStack_50);
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_007f51b8(*(undefined8 *)(param_1 + 0x68));
  FUN_007f0d58(*(long *)(param_1 + 0x68) + 0x68);
  return 1;
}


