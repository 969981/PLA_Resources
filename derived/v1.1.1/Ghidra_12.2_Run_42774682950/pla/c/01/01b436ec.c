/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b436ec; name: FUN_01b436ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b436ec(long param_1,undefined8 param_2)

{
  int *piVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  ulong *puVar11;
  undefined1 in_q3 [16];
  long lVar12;
  long *local_38;
  long *local_28;
  
  lVar12 = in_q3._8_8_;
  lVar10 = in_q3._0_8_;
  if (*(int *)(param_1 + 0xbf8) == 0) {
    FUN_00956dac(&local_28,param_1 + 0x1a8);
    lVar8 = local_28[0x16];
    *(long *)(param_1 + 0xc18) = local_28[0x17];
    *(long *)(param_1 + 0xc10) = lVar8;
    if (local_28 != (long *)0x0) {
      lVar8 = local_28[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0xbf8) = 4;
  pcVar9 = *(code **)(param_1 + 0xc48);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xc58) = 0;
    *(undefined8 *)(param_1 + 0xc50) = 0;
    *(undefined8 *)(param_1 + 0xc48) = 0;
    *(undefined8 *)(param_1 + 0xc40) = 0;
    (*pcVar9)(param_1 + 0xc60);
  }
  pcVar9 = *(code **)(param_1 + 0xcc8);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xcd8) = 0;
    *(undefined8 *)(param_1 + 0xcd0) = 0;
    *(undefined8 *)(param_1 + 0xcc8) = 0;
    *(undefined8 *)(param_1 + 0xcc0) = 0;
    (*pcVar9)(param_1 + 0xce0);
  }
  FUN_008c4b3c(param_1 + 0xd58,param_2);
  puVar11 = *(ulong **)(param_1 + 0xd48);
  *(undefined8 *)(param_1 + 0xd78) = 0;
  *(undefined8 *)(param_1 + 0xd70) = 0;
  *(undefined8 *)(param_1 + 0xd48) = 0;
  if (puVar11 != (ulong *)0x0) {
    puVar2 = puVar11 + 1;
    do {
      iVar7 = (int)*puVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *(int *)puVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_28 = (long *)*puVar11;
      FUN_02a44274(lVar8 + 0xd8,&local_28);
    }
  }
  *(undefined8 *)(param_1 + 0xd50) = 0;
  FUN_00956dac(&local_28,param_1 + 0x1a8);
  lVar5 = _UNK_03888ec8;
  lVar8 = _DAT_03888ec0;
  *(undefined1 *)(local_28 + 0x1c) = 1;
  local_28[0x17] = lVar5;
  local_28[0x16] = lVar8;
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_00956dac(&local_28,param_1 + 0xd58);
  if (local_28 != (long *)0x0) {
    FUN_00956dac(&local_38,param_1 + 0x1a8);
    plVar6 = local_38;
    (**(code **)(*local_28 + 0x40))();
    *(undefined1 *)(plVar6 + 0x1c) = 1;
    plVar6[0x1b] = lVar12;
    plVar6[0x1a] = lVar10;
    if (local_38 != (long *)0x0) {
      lVar10 = local_38[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
    if (local_28 != (long *)0x0) {
      lVar10 = local_28[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
        pcVar9 = *(code **)(param_1 + 0xae0);
        goto joined_r0x01b438e8;
      }
    }
  }
  pcVar9 = *(code **)(param_1 + 0xae0);
joined_r0x01b438e8:
  if (pcVar9 != (code *)0x0) {
    local_28 = (long *)((ulong)local_28 & 0xffffffffffffff00);
    (*pcVar9)(param_1 + 0xb00,&local_28);
  }
  FUN_01a9b270(param_1,0,4);
  return;
}


