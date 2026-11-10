/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083c0b0; name: FUN_0083c0b0
 */


undefined8 FUN_0083c0b0(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long local_50;
  undefined4 local_48;
  
  lVar6 = param_1 + 0xb0;
  local_48 = 0;
  local_50 = 0x10000000000;
  FUN_00840040(lVar6,&local_50);
  puVar10 = PTR_DAT_043773c0;
  if (*(int *)(*(long *)(param_1 + 0x58) + 0x784) == 0) {
    uVar3 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
    lVar4 = FUN_008280b4(uVar3,lVar6);
    puVar1 = PTR_DAT_04377550;
    if (((lVar4 != 0) && (*(char *)(lVar4 + 0x90) != -3)) && (*(char *)(lVar4 + 0x91) != -3)) {
      local_50 = 0x10000000000;
      local_48 = 0;
      lVar4 = *(long *)PTR_DAT_04377550;
      (**(code **)(*(long *)(param_1 + 0xb0) + 0x20))(lVar6,&local_50);
      FUN_0083fc48(lVar4 + 0x1b8,lVar6);
      uVar12 = *(undefined8 *)(param_1 + 0x58);
      uVar3 = FUN_0083fd98(lVar6);
      FUN_008473fc(uVar12,uVar3);
      *(undefined1 *)(param_1 + 0xa9) = 0;
      uVar5 = FUN_0083fc94(lVar6,*(long *)puVar1 + 0x178);
      if ((uVar5 & 1) == 0) {
        plVar7 = (long *)FUN_007ecfa4();
        lVar6 = *plVar7;
        local_50 = 0;
        FUN_007ecf14(&local_50);
        *(long *)(param_1 + 0x70) = local_50 + lVar6 * 10000;
        if (*(int *)(param_1 + 0x60) != 0x65) {
          *(undefined4 *)(param_1 + 0x60) = 0x65;
        }
        pcVar8 = "ProcessHostMigrationJob::WaitUpdateSessionMessageFromNewHost";
        puVar10 = PTR_LAB_04377ec0;
      }
      else {
        lVar6 = FUN_00855004(*(undefined8 *)puVar10);
        lVar4 = *(long *)(lVar6 + 0x20);
        lVar6 = FUN_00855004(*(undefined8 *)puVar10);
        lVar6 = lVar6 + 0x18;
        if (lVar4 != lVar6) {
          lVar11 = 0;
          do {
            uVar5 = (**(code **)(**(long **)(*(long *)puVar1 + 0x18) + 0x120))
                              (*(long **)(*(long *)puVar1 + 0x18),*(long *)(lVar4 + 0x10) + 8);
            if ((uVar5 & 1) == 0) {
              FUN_00835f44(*(undefined8 *)(param_1 + 0x58),*(long *)(lVar4 + 0x10) + 8);
              bVar2 = lVar11 == 0;
              lVar6 = FUN_00855004(*(undefined8 *)puVar10);
              lVar13 = *(long *)(lVar6 + 0x20);
              lVar6 = FUN_00855004(*(undefined8 *)puVar10);
              lVar6 = lVar6 + 0x18;
              if (lVar13 == lVar6) break;
            }
            else {
              lVar13 = *(long *)(lVar4 + 8);
              lVar11 = *(long *)(lVar4 + 0x10);
              bVar2 = true;
              if (lVar13 == lVar6) break;
            }
            while (lVar4 = lVar13, !bVar2) {
              plVar7 = (long *)(lVar13 + 8);
              bVar2 = *(long *)(lVar13 + 0x10) == lVar11;
              lVar13 = *plVar7;
              if (*plVar7 == lVar6) goto LAB_0083c270;
            }
          } while( true );
        }
LAB_0083c270:
        uVar5 = (**(code **)(**(long **)(*(long *)puVar1 + 0x18) + 0xf0))();
        uVar9 = 1;
        if ((uVar5 & 1) == 0) {
          uVar9 = 2;
        }
        FUN_0082b294(*(undefined8 *)puVar1,uVar9);
        pcVar8 = "ProcessHostMigrationJob::CompleteProcess";
        puVar10 = PTR_LAB_04377eb8;
      }
      goto LAB_0083c100;
    }
  }
  pcVar8 = "ProcessHostMigrationJob::CompleteFailure";
  puVar10 = PTR_FUN_04377ea8;
LAB_0083c100:
  *(undefined **)(param_1 + 0x30) = puVar10;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar8;
  return 0;
}


