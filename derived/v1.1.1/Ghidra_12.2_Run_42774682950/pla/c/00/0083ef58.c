/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083ef58; name: FUN_0083ef58
 */


undefined8 FUN_0083ef58(long param_1)

{
  ulong uVar1;
  long *plVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  long local_28;
  
  if (*(int *)(*(long *)(param_1 + 0x58) + 0x784) == 0) {
    uVar1 = FUN_007e5f0c(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0xc0));
    if ((uVar1 & 1) != 0) {
      return 5;
    }
    plVar2 = (long *)FUN_007ecfa4();
    lVar5 = *plVar2;
    local_28 = 0;
    FUN_007ecf14(&local_28);
    pcVar3 = "LeaveMeshWithHostMigrationJob::CalcNextHost";
    *(long *)(param_1 + 0xd8) = local_28 + lVar5 * 8000;
    puVar4 = PTR_FUN_04377f40;
  }
  else {
    pcVar3 = "LeaveMeshWithHostMigrationJob::CompleteProcess";
    puVar4 = PTR_FUN_04377f38;
  }
  *(undefined **)(param_1 + 0x30) = puVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar3;
  return 0;
}


