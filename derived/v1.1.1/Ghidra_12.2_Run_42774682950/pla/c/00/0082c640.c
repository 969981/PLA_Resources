/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082c640; name: FUN_0082c640
 */


undefined8 FUN_0082c640(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  int local_20 [4];
  
  uVar1 = FUN_0082c1dc();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  lVar2 = *(long *)PTR_DAT_04377550;
  if (*(long *)(lVar2 + 0xb8) != 0) {
    if (*(long *)(lVar2 + 0xb8) == *(long *)(lVar2 + 0xc0)) {
      FUN_00834c8c(local_20,*(undefined8 *)(lVar2 + 0x10));
      if (local_20[0] != 0) {
LAB_0082c6c4:
        *(undefined **)(param_1 + 0x30) = PTR_LAB_04377d70;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "LeaveSessionJob::MeshCleanup";
        return 0;
      }
      pcVar4 = "LeaveSessionJob::WaitLeaveMeshWithHostMigration";
      puVar3 = PTR_LAB_04377d68;
      goto LAB_0082c6fc;
    }
    if (*(long *)(lVar2 + 0xc0) != 0) {
      FUN_00834f04(local_20,*(undefined8 *)(lVar2 + 0x10));
      if (local_20[0] != 0) goto LAB_0082c6c4;
      pcVar4 = "LeaveSessionJob::WaitLeaveMesh";
      puVar3 = PTR_LAB_04377d78;
      goto LAB_0082c6fc;
    }
  }
  pcVar4 = "LeaveSessionJob::MeshCleanup";
  puVar3 = PTR_LAB_04377d70;
LAB_0082c6fc:
  *(undefined **)(param_1 + 0x30) = puVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return 5;
}


