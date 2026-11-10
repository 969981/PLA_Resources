/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017fb168; name: FUN_017fb168
 */


void FUN_017fb168(char *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_58;
  
  lVar7 = 0x10;
  do {
    if (*param_1 == '\0') {
      if (*param_2 != '\0') {
        param_1[0x10] = '\0';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        pcVar5 = param_1 + 8;
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5[4] = '\0';
        pcVar5[5] = '\0';
        pcVar5[6] = '\0';
        pcVar5[7] = '\0';
        FUN_00b63974(pcVar5,param_2 + 8);
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
        param_1[0x22] = '\0';
        param_1[0x23] = '\0';
        param_1[0x24] = '\0';
        param_1[0x25] = '\0';
        param_1[0x26] = '\0';
        param_1[0x27] = '\0';
        pcVar5 = param_1 + 0x18;
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5[4] = '\0';
        pcVar5[5] = '\0';
        pcVar5[6] = '\0';
        pcVar5[7] = '\0';
        FUN_00cfa028(pcVar5,param_2 + 0x18);
        *param_1 = '\x01';
      }
    }
    else if (*param_2 == '\0') {
      puVar8 = *(undefined8 **)(param_1 + 0x18);
      if (puVar8 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar8 + 1);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          puVar8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar6 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar6;
          local_58 = *puVar8;
          FUN_02a44274(lVar6 + 0xd8,&local_58);
        }
      }
      puVar8 = *(undefined8 **)(param_1 + 8);
      if (puVar8 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar8 + 1);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          puVar8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar6 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar6;
          local_58 = *puVar8;
          FUN_02a44274(lVar6 + 0xd8,&local_58);
        }
      }
      *param_1 = '\0';
    }
    else {
      FUN_00b63974(param_1 + 8,param_2 + 8);
      FUN_00cfa028(param_1 + 0x18,param_2 + 0x18);
    }
    param_1 = param_1 + 0x28;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}


