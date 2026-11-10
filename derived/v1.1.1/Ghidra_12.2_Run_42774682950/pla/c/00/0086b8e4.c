/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086b8e4; name: FUN_0086b8e4
 */


undefined8 FUN_0086b8e4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  int local_20 [4];
  
  lVar1 = *(long *)PTR_DAT_04377550;
  if (*(long *)(lVar1 + 0xb8) != 0) {
    if (*(long *)(lVar1 + 0xb8) == *(long *)(lVar1 + 0xc0)) {
      FUN_00834c8c(local_20,*(undefined8 *)(lVar1 + 0x10));
      if (local_20[0] != 0) {
LAB_0086b950:
        *(undefined **)(param_1 + 0x30) = PTR_LAB_04378388;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "DetachMeshJob::MeshCleanup";
        return 0;
      }
      pcVar3 = "DetachMeshJob::WaitLeaveMeshWithHostMigration";
      puVar2 = PTR_LAB_04378380;
      goto LAB_0086b988;
    }
    if (*(long *)(lVar1 + 0xc0) != 0) {
      FUN_00834f04(local_20,*(undefined8 *)(lVar1 + 0x10));
      if (local_20[0] != 0) goto LAB_0086b950;
      pcVar3 = "DetachMeshJob::WaitLeaveMesh";
      puVar2 = PTR_LAB_04378390;
      goto LAB_0086b988;
    }
  }
  pcVar3 = "DetachMeshJob::MeshCleanup";
  puVar2 = PTR_LAB_04378388;
LAB_0086b988:
  *(undefined **)(param_1 + 0x30) = puVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar3;
  return 5;
}


