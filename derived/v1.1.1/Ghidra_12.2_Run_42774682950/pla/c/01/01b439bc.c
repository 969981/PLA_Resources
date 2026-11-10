/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b439bc; name: FUN_01b439bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b439bc(long param_1,long *param_2)

{
  int *piVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  ulong *puVar9;
  long *local_28;
  
  if (*(int *)(param_1 + 0xbf8) == 0) {
    FUN_00956dac(&local_28,param_1 + 0x1a8);
    lVar7 = local_28[0x16];
    *(long *)(param_1 + 0xc18) = local_28[0x17];
    *(long *)(param_1 + 0xc10) = lVar7;
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0xbf8) = 4;
  pcVar8 = *(code **)(param_1 + 0xc48);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xc58) = 0;
    *(undefined8 *)(param_1 + 0xc50) = 0;
    *(undefined8 *)(param_1 + 0xc48) = 0;
    *(undefined8 *)(param_1 + 0xc40) = 0;
    (*pcVar8)(param_1 + 0xc60);
  }
  pcVar8 = *(code **)(param_1 + 0xcc8);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xcd8) = 0;
    *(undefined8 *)(param_1 + 0xcd0) = 0;
    *(undefined8 *)(param_1 + 0xcc8) = 0;
    *(undefined8 *)(param_1 + 0xcc0) = 0;
    (*pcVar8)(param_1 + 0xce0);
  }
  puVar9 = *(ulong **)(param_1 + 0xd58);
  *(undefined8 *)(param_1 + 0xd58) = 0;
  if (puVar9 != (ulong *)0x0) {
    puVar2 = puVar9 + 1;
    do {
      iVar6 = (int)*puVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *(int *)puVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = (long *)*puVar9;
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  *(undefined8 *)(param_1 + 0xd60) = 0;
  puVar9 = *(ulong **)(param_1 + 0xd48);
  *(undefined8 *)(param_1 + 0xd78) = 0;
  *(undefined8 *)(param_1 + 0xd70) = 0;
  *(undefined8 *)(param_1 + 0xd48) = 0;
  if (puVar9 != (ulong *)0x0) {
    puVar2 = puVar9 + 1;
    do {
      iVar6 = (int)*puVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *(int *)puVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = (long *)*puVar9;
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  *(undefined8 *)(param_1 + 0xd50) = 0;
  *(long *)(param_1 + 0xc38) = param_2[1];
  *(long *)(param_1 + 0xc30) = *param_2;
  FUN_00956dac(&local_28,param_1 + 0x1a8);
  lVar7 = param_2[1];
  local_28[0x1a] = *param_2;
  local_28[0x1b] = lVar7;
  *(undefined1 *)(local_28 + 0x1c) = 1;
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_00956dac(&local_28,param_1 + 0x1a8);
  lVar5 = _UNK_03888ec8;
  lVar7 = _DAT_03888ec0;
  *(undefined1 *)(local_28 + 0x1c) = 1;
  local_28[0x17] = lVar5;
  local_28[0x16] = lVar7;
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
      pcVar8 = *(code **)(param_1 + 0xae0);
      goto joined_r0x01b43bd4;
    }
  }
  pcVar8 = *(code **)(param_1 + 0xae0);
joined_r0x01b43bd4:
  if (pcVar8 != (code *)0x0) {
    local_28 = (long *)((ulong)local_28 & 0xffffffffffffff00);
    (*pcVar8)(param_1 + 0xb00,&local_28);
  }
  FUN_01a9b270(param_1,0,4);
  return;
}


