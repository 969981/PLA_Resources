/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080fed4; name: FUN_0080fed4
 */


undefined8 FUN_0080fed4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [32];
  
  lVar3 = *(long *)(param_1 + 0x140);
  if (0 < *(int *)(param_1 + 0x150)) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x148) <= *(int *)(param_1 + 0x14c)) {
      iVar1 = *(int *)(param_1 + 0x148);
    }
    lVar3 = lVar3 + (long)(*(int *)(param_1 + 0x14c) - iVar1) * 0x20;
  }
  FUN_007f0d08(auStack_30,lVar3);
  if (0 < *(int *)(param_1 + 0x150)) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x14c) + 1 < *(int *)(param_1 + 0x148)) {
      iVar1 = *(int *)(param_1 + 0x14c) + 1;
    }
    *(int *)(param_1 + 0x14c) = iVar1;
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
  }
  FUN_00810118(auStack_40,*(undefined8 *)(param_1 + 0x58),param_1 + 0x158,auStack_30);
  FUN_007e5e70(*(undefined8 *)(param_1 + 0x58),1);
  puVar2 = PTR_LAB_04377990;
  *(char **)(param_1 + 0x40) = "LocalEjectClientListCheckJob::WaitEjectTargetClient";
  *(undefined **)(param_1 + 0x30) = puVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}


