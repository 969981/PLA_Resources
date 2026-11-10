/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278aff0; name: FUN_0278aff0
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_0278aff0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  char local_9e0 [12];
  int local_9d4;
  char local_964;
  int local_958;
  char local_8e8;
  int local_8dc;
  char local_86c;
  int local_860;
  char local_7f0;
  int local_7e4;
  char local_774;
  int local_768;
  char local_6f8;
  int local_6ec;
  char local_67c;
  int local_670;
  char local_600;
  int local_5f4;
  char local_584;
  int local_578;
  char local_508;
  int local_4fc;
  char local_48c;
  int local_480;
  char local_410;
  int local_404;
  char local_394;
  int local_388;
  char local_318;
  int local_30c;
  char local_29c;
  int local_290;
  char local_220;
  int local_214;
  char local_1a4;
  int local_198;
  char local_128;
  int local_11c;
  char local_ac;
  int local_a0;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar6 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar6;
  plVar7 = *(long **)(lVar6 + 0x2a8);
  if (plVar7 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    lVar6 = plVar7[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_0110c3e4(local_9e0,plVar7 + 0x217f);
    if (local_9e0[0] == '\0') {
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)(local_9d4 == 1);
    }
    if ((local_964 != '\0') && (local_958 == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_8e8 != '\0') && (local_8dc == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_86c != '\0') && (local_860 == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_7f0 != '\0') && (local_7e4 == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_774 != '\0') && (local_768 == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_6f8 != '\0') && (local_6ec == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_67c != '\0') && (local_670 == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_600 != '\0') && (local_5f4 == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_584 != '\0') && (local_578 == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_508 != '\0') && (local_4fc == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_48c != '\0') && (local_480 == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_410 != '\0') && (local_404 == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_394 != '\0') && (local_388 == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_318 != '\0') && (local_30c == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_29c != '\0') && (local_290 == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_220 != '\0') && (local_214 == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_1a4 != '\0') && (local_198 == 1)) {
      uVar8 = uVar8 + 1;
    }
    if ((local_128 != '\0') && (local_11c == 1)) {
      uVar8 = uVar8 + 1;
    }
    if (local_ac != '\0') {
      if (local_a0 == 1) {
        uVar8 = uVar8 + 1;
      }
      local_ac = '\0';
    }
    local_1a4 = '\0';
    local_128 = '\0';
    local_220 = '\0';
    local_29c = '\0';
    local_318 = '\0';
    local_394 = '\0';
    local_410 = '\0';
    local_48c = '\0';
    local_508 = '\0';
    local_584 = '\0';
    local_600 = '\0';
    local_67c = '\0';
    local_6f8 = '\0';
    local_774 = '\0';
    local_7f0 = '\0';
    local_86c = '\0';
    local_8e8 = 0;
    local_964 = 0;
    if (local_9e0[0] != '\0') {
      local_9e0[0] = '\0';
    }
    lVar6 = plVar7[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  return uVar8;
}


