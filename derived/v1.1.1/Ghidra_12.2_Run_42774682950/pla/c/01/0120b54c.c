/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120b54c; name: FUN_0120b54c
 */


void FUN_0120b54c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 *local_30 [2];
  undefined8 local_18;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  if (iVar4 == 2) {
    uVar5 = FUN_00d4cc88(*(undefined8 *)(param_1 + 0x90));
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar5 = FUN_01227ab8(*(undefined8 *)(param_1 + 0xa0));
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar5 = FUN_0120d8b0(*(undefined8 *)(param_1 + 0x98));
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar5 = FUN_027bc6a4(param_1 + 0xc0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    uVar6 = *(undefined8 *)PTR_DAT_04379680;
    *(undefined8 *)PTR_DAT_04379688 = uVar6;
    FUN_0125e420(local_30,uVar6,1);
    if (local_30[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_30[0] + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) {
      return;
    }
    local_30[0][2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar8 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar8;
    local_18 = *local_30[0];
    FUN_02a44274(lVar8 + 0xd8,&local_18);
    return;
  }
  if (iVar4 == 1) {
    FUN_027bcfc0(param_1 + 0xc0);
    FUN_0121bd90(*(undefined8 *)(param_1 + 0x90));
    FUN_00d4cc80(*(undefined8 *)(param_1 + 0x90));
    FUN_01227aa0(*(undefined8 *)(param_1 + 0xa0));
    FUN_0120d8a8(*(undefined8 *)(param_1 + 0x98));
    uVar7 = 2;
  }
  else {
    if (iVar4 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x288) = 1;
    uVar5 = FUN_00d4cc88(*(undefined8 *)(param_1 + 0x90));
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar5 = FUN_01227ab8(*(undefined8 *)(param_1 + 0xa0));
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar5 = FUN_0120d8b0(*(undefined8 *)(param_1 + 0x98));
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar7 = 1;
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar7;
  return;
}


