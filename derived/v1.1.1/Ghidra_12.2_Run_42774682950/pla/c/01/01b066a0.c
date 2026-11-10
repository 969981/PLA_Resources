/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b066a0; name: FUN_01b066a0
 */


void FUN_01b066a0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined8 local_28;
  
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_01a2bf84(&local_40,param_1 + 0x5c8);
  if (local_40 == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
LAB_01b066d0:
    iVar5 = *(int *)(param_1 + 0xc58);
  }
  else {
    FUN_009cf990(&local_30);
    puVar4 = local_40;
    if (local_40 == (undefined8 *)0x0) goto LAB_01b066d0;
    piVar1 = (int *)(local_40 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 != 0) goto LAB_01b066d0;
    local_40[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar7 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar7;
    local_28 = *puVar4;
    FUN_02a44274(lVar7 + 0xd8,&local_28);
    iVar5 = *(int *)(param_1 + 0xc58);
  }
  if ((iVar5 == 0) || (local_30 == (long *)0x0)) goto joined_r0x01b066dc;
  if (iVar5 == 1) {
    uVar6 = FUN_01bf2a08();
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xc58) = 2;
      goto LAB_01b067a8;
    }
    uVar6 = FUN_01bedb6c(local_30);
    if ((uVar6 & 1) != 0) {
      iVar5 = *(int *)(param_1 + 0xc58);
      goto joined_r0x01b067ec;
    }
  }
  else {
joined_r0x01b067ec:
    if (iVar5 != 2) goto joined_r0x01b066dc;
LAB_01b067a8:
    uVar6 = FUN_01bf2a08(local_30);
    if ((uVar6 & 1) != 0) goto joined_r0x01b066dc;
  }
  *(undefined4 *)(param_1 + 0xc58) = 0;
joined_r0x01b066dc:
  if (local_30 != (long *)0x0) {
    lVar7 = local_30[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
    }
  }
  return;
}


