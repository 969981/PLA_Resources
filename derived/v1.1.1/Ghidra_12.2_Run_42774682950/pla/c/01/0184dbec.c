/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0184dbec; name: FUN_0184dbec
 */


undefined8 * FUN_0184dbec(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  int iVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 local_68;
  
  puVar11 = *(undefined8 **)(param_1 + 8);
  puVar13 = param_2 + 0x26;
  puVar4 = PTR_LAB_04379590;
  plVar5 = (long *)PTR_DAT_043794a8;
  plVar6 = (long *)PTR_DAT_043794a0;
  pbVar7 = PTR_DAT_04379498;
  puVar12 = param_2;
  if (puVar13 != puVar11) {
    puVar13 = param_2;
    do {
      puVar12 = puVar13;
      FUN_0087fcf0(puVar12,puVar12 + 0x26);
      FUN_00b5fc1c(puVar12 + 2,puVar12 + 0x28);
      pcVar9 = (code *)puVar12[5];
      if (pcVar9 != (code *)0x0) {
        puVar12[6] = 0;
        puVar12[7] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        (*pcVar9)(puVar12 + 8);
      }
      if ((code *)puVar12[0x2d] != (code *)0x0) {
        (*(code *)puVar12[0x2d])(puVar12 + 0x2e,puVar12 + 8);
        pcVar9 = (code *)puVar12[0x2b];
        puVar12[4] = puVar12[0x2a];
        puVar12[5] = pcVar9;
        puVar12[6] = puVar12[0x2c];
        puVar12[7] = puVar12[0x2d];
        if (pcVar9 != (code *)0x0) {
          puVar12[0x2c] = 0;
          puVar12[0x2d] = 0;
          puVar12[0x2a] = 0;
          puVar12[0x2b] = 0;
          (*pcVar9)(puVar12 + 0x2e);
        }
      }
      pcVar9 = (code *)puVar12[0x15];
      if (pcVar9 != (code *)0x0) {
        puVar12[0x16] = 0;
        puVar12[0x17] = 0;
        puVar12[0x14] = 0;
        puVar12[0x15] = 0;
        (*pcVar9)(puVar12 + 0x18);
      }
      if ((code *)puVar12[0x3d] != (code *)0x0) {
        (*(code *)puVar12[0x3d])(puVar12 + 0x3e,puVar12 + 0x18);
        pcVar9 = (code *)puVar12[0x3b];
        puVar12[0x14] = puVar12[0x3a];
        puVar12[0x15] = pcVar9;
        puVar12[0x16] = puVar12[0x3c];
        puVar12[0x17] = puVar12[0x3d];
        if (pcVar9 != (code *)0x0) {
          puVar12[0x3c] = 0;
          puVar12[0x3d] = 0;
          puVar12[0x3a] = 0;
          puVar12[0x3b] = 0;
          (*pcVar9)(puVar12 + 0x3e);
        }
      }
      *(undefined1 *)(puVar12 + 0x24) = *(undefined1 *)(puVar12 + 0x4a);
      puVar13 = puVar12 + 0x26;
    } while (puVar12 + 0x4c != puVar11);
    puVar13 = *(undefined8 **)(param_1 + 8);
    puVar12 = puVar12 + 0x26;
    puVar4 = PTR_LAB_04379590;
    plVar5 = (long *)PTR_DAT_043794a8;
    plVar6 = (long *)PTR_DAT_043794a0;
    pbVar7 = PTR_DAT_04379498;
    if (puVar13 == puVar12) goto LAB_0184dea4;
  }
  do {
    pcVar9 = (code *)puVar13[-0x11];
    if (pcVar9 != (code *)0x0) {
      puVar13[-0x10] = 0;
      puVar13[-0xf] = 0;
      puVar13[-0x12] = 0;
      puVar13[-0x11] = 0;
      (*pcVar9)(puVar13 + -0xe);
    }
    pcVar9 = (code *)puVar13[-0x21];
    puVar11 = puVar13 + -0x26;
    if (pcVar9 != (code *)0x0) {
      puVar13[-0x20] = 0;
      puVar13[-0x1f] = 0;
      puVar13[-0x21] = 0;
      puVar13[-0x22] = 0;
      (*pcVar9)(puVar13 + -0x1e);
    }
    puVar13 = (undefined8 *)puVar13[-0x24];
    if (puVar13 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar13 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        puVar13[2] = 0;
        if (((*pbVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar7), iVar8 != 0)) {
          FUN_00100250(puVar4,plVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar7);
        }
        lVar10 = *plVar6;
        *plVar5 = lVar10;
        local_68 = *puVar13;
        FUN_02a44274(lVar10 + 0xd8,&local_68);
      }
    }
    puVar13 = (undefined8 *)*puVar11;
    if (puVar13 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar13 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        puVar13[2] = 0;
        if (((*pbVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar7), iVar8 != 0)) {
          FUN_00100250(puVar4,plVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar7);
        }
        lVar10 = *plVar6;
        *plVar5 = lVar10;
        local_68 = *puVar13;
        FUN_02a44274(lVar10 + 0xd8,&local_68);
      }
    }
    puVar13 = puVar11;
  } while (puVar11 != puVar12);
LAB_0184dea4:
  *(undefined8 **)(param_1 + 8) = puVar12;
  return param_2;
}


