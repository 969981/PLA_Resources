/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018ff688; name: FUN_018ff688
 */


void FUN_018ff688(char *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      pcVar5 = param_1 + 0x10;
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5[4] = '\0';
      pcVar5[5] = '\0';
      pcVar5[6] = '\0';
      pcVar5[7] = '\0';
      FUN_0087fcf0(pcVar5,param_2 + 0x10);
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
      param_1[0x2c] = '\0';
      param_1[0x2d] = '\0';
      param_1[0x2e] = '\0';
      param_1[0x2f] = '\0';
      pcVar5 = param_1 + 0x20;
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5[4] = '\0';
      pcVar5[5] = '\0';
      pcVar5[6] = '\0';
      pcVar5[7] = '\0';
      FUN_00b6081c(pcVar5,param_2 + 0x20);
      cVar2 = param_2[0x40];
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      uVar7 = *(undefined8 *)(param_2 + 0x30);
      param_1[0x40] = cVar2;
      *param_1 = '\x01';
      *(undefined8 *)(param_1 + 0x30) = uVar7;
    }
  }
  else if (*param_2 == '\0') {
    puVar8 = *(undefined8 **)(param_1 + 0x20);
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
        local_28 = *puVar8;
        FUN_02a44274(lVar6 + 0xd8,&local_28);
      }
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
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
        local_28 = *puVar8;
        FUN_02a44274(lVar6 + 0xd8,&local_28);
      }
    }
    *param_1 = '\0';
  }
  else {
    FUN_0087fcf0(param_1 + 0x10,param_2 + 0x10);
    FUN_00b6081c(param_1 + 0x20,param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    param_1[0x40] = param_2[0x40];
  }
  return;
}


