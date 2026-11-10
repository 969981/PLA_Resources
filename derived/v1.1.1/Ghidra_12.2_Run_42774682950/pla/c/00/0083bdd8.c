/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083bdd8; name: FUN_0083bdd8
 */


undefined8 FUN_0083bdd8(long param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [16];
  ulong local_b0 [8];
  int local_70 [4];
  ulong local_60 [8];
  
  puVar10 = PTR_DAT_04377550;
  uVar4 = (**(code **)(**(long **)(*(long *)PTR_DAT_04377550 + 0x18) + 0xe8))();
  if ((uVar4 & 1) != 0) {
    iVar3 = (**(code **)(**(long **)(*(long *)puVar10 + 0x18) + 0x118))();
    if (*(int *)(param_1 + 0x60) != iVar3 + 2) {
      *(int *)(param_1 + 0x60) = iVar3 + 2;
    }
    local_60[0] = 0;
    FUN_007ecf14(local_60);
    if (local_60[0] <= *(ulong *)(param_1 + 0x68)) {
      return 5;
    }
LAB_0083beb4:
    *(undefined **)(param_1 + 0x30) = PTR_FUN_04377ea8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "ProcessHostMigrationJob::CompleteFailure";
    return 0;
  }
  uVar4 = (**(code **)(**(long **)(*(long *)puVar10 + 0x18) + 0xe0))();
  if ((uVar4 & 1) == 0) goto LAB_0083beb4;
  FUN_0083fbc0(local_60);
  (**(code **)(**(long **)(*(long *)puVar10 + 0x18) + 0x108))
            (local_70,*(long **)(*(long *)puVar10 + 0x18),local_60);
  if (local_70[0] != 0) {
LAB_0083be94:
    uVar11 = 0;
    *(undefined **)(param_1 + 0x30) = PTR_FUN_04377ea8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "ProcessHostMigrationJob::CompleteFailure";
    goto LAB_0083c000;
  }
  lVar8 = *(long *)puVar10;
  lVar5 = FUN_0083fd98(local_60);
  lVar6 = FUN_0083fd98(lVar8 + 0x1b8);
  if (lVar5 == lVar6) {
    sVar1 = FUN_0083fda0(local_60);
    sVar2 = FUN_0083fda0(lVar8 + 0x1b8);
    if (sVar1 == sVar2) {
      local_b0[0] = 0;
      FUN_007ecf14(local_b0);
      if (local_b0[0] <= *(ulong *)(param_1 + 0x68)) {
        uVar11 = 5;
        goto LAB_0083c000;
      }
      goto LAB_0083be94;
    }
  }
  FUN_0083fbc0(local_b0);
  uVar11 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  uVar7 = FUN_0083fd98(local_60);
  lVar5 = FUN_00826d78(uVar11,uVar7);
  if (lVar5 == 0) {
LAB_0083bfdc:
    pcVar9 = "ProcessHostMigrationJob::CompleteFailure";
    puVar10 = PTR_FUN_04377ea8;
  }
  else {
    FUN_00825dcc(auStack_c0,lVar5,local_b0);
    FUN_007ee660(local_70,auStack_c0);
    if (local_70[0] != 0) goto LAB_0083bfdc;
    sVar1 = FUN_0083fda0(local_b0);
    sVar2 = FUN_0083fda0(local_60);
    if (sVar1 != sVar2) goto LAB_0083bfdc;
    FUN_0083fc48(param_1 + 0xb0,local_b0);
    if (*(int *)(param_1 + 0x60) != 100) {
      *(undefined4 *)(param_1 + 0x60) = 100;
    }
    pcVar9 = "ProcessHostMigrationJob::UpdateHost";
    puVar10 = PTR_FUN_04377eb0;
  }
  *(undefined **)(param_1 + 0x30) = puVar10;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar9;
  FUN_0083fc40(local_b0);
  uVar11 = 0;
LAB_0083c000:
  FUN_0083fc40(local_60);
  return uVar11;
}


