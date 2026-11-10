/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017fc290; name: FUN_017fc290
 */


void FUN_017fc290(char *param_1,char *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_58;
  
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  lVar14 = 0x10;
  do {
    if (*param_1 == '\0') {
      if (*param_2 != '\0') {
        pcVar10 = param_1 + 0x10;
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        pcVar10[4] = '\0';
        pcVar10[5] = '\0';
        pcVar10[6] = '\0';
        pcVar10[7] = '\0';
        param_1[0x18] = '\0';
        param_1[0x19] = '\0';
        param_1[0x1a] = '\0';
        param_1[0x1b] = '\0';
        param_1[0x1c] = '\0';
        param_1[0x1d] = '\0';
        param_1[0x1e] = '\0';
        param_1[0x1f] = '\0';
        FUN_00b63974(pcVar10,param_2 + 0x10);
        pcVar10 = param_1 + 0x20;
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        pcVar10[4] = '\0';
        pcVar10[5] = '\0';
        pcVar10[6] = '\0';
        pcVar10[7] = '\0';
        param_1[0x28] = '\0';
        param_1[0x29] = '\0';
        param_1[0x2a] = '\0';
        param_1[0x2b] = '\0';
        param_1[0x2c] = '\0';
        param_1[0x2d] = '\0';
        param_1[0x2e] = '\0';
        param_1[0x2f] = '\0';
        FUN_00cfa028(pcVar10,param_2 + 0x20);
        uVar2 = *(undefined4 *)(param_2 + 0x40);
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
        uVar13 = *(undefined8 *)(param_2 + 0x30);
        *(undefined4 *)(param_1 + 0x40) = uVar2;
        *(undefined8 *)(param_1 + 0x30) = uVar13;
        *param_1 = '\x01';
      }
    }
    else if (*param_2 == '\0') {
      puVar11 = *(undefined8 **)(param_1 + 0x20);
      if (puVar11 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar11 + 1);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          puVar11[2] = 0;
          if ((*puVar5 & 1) == 0) {
            iVar9 = __cxa_guard_acquire(puVar5);
            if (iVar9 != 0) {
              FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
          }
          lVar12 = *(long *)puVar6;
          *(long *)puVar7 = lVar12;
          local_58 = *puVar11;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
      puVar11 = *(undefined8 **)(param_1 + 0x10);
      if (puVar11 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar11 + 1);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          puVar11[2] = 0;
          if ((*puVar5 & 1) == 0) {
            iVar9 = __cxa_guard_acquire(puVar5);
            if (iVar9 != 0) {
              FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
          }
          lVar12 = *(long *)puVar6;
          *(long *)puVar7 = lVar12;
          local_58 = *puVar11;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
      *param_1 = '\0';
    }
    else {
      FUN_01804c00(param_1,param_2 + 0x10);
    }
    param_1 = param_1 + 0x50;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  return;
}


