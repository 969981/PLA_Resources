/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278b3b0; name: FUN_0278b3b0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0278b3b0(int *param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  ulong uVar10;
  char *pcVar11;
  char local_a10 [4];
  int aiStack_a0c [4];
  char acStack_9fc [104];
  char local_994 [4];
  int aiStack_990 [4];
  char acStack_980 [104];
  char local_918 [4];
  int aiStack_914 [4];
  char acStack_904 [104];
  char local_89c [4];
  int aiStack_898 [4];
  char acStack_888 [104];
  char local_820 [124];
  char local_7a4;
  char local_728;
  char local_6ac;
  char local_630;
  char local_5b4;
  char local_538;
  char local_4bc;
  char local_440;
  char local_3c4;
  char local_348;
  char local_2cc;
  char local_250;
  char local_1d4;
  char local_158;
  char local_dc;
  
  uVar3 = *(byte *)((long)param_1 + 0x41) - 1;
  if (4 < uVar3) {
    return 0;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar8 = *(long **)(lVar7 + 0x2a8);
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar8[0xb];
  if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
    uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
    *(undefined8 *)(lVar7 + 0x10) = uVar6;
  }
  piVar9 = (int *)(lVar7 + 0xc);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
    if (bVar2) {
      *piVar9 = *piVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_0110c3e4(local_a10,plVar8 + 0x217f);
  uVar10 = (ulong)uVar3 & 0xff;
  pcVar11 = local_a10 + uVar10 * 0x1f0;
  piVar9 = param_1 + 4;
  iVar5 = *param_1;
  if ((((*pcVar11 == '\0') || (aiStack_a0c[uVar10 * 0x7c] != iVar5)) ||
      (iVar4 = strcmp(acStack_9fc + uVar10 * 0x1f0,(char *)piVar9), iVar4 != 0)) &&
     ((((pcVar11 = local_994 + uVar10 * 0x1f0, *pcVar11 == '\0' ||
        (aiStack_990[uVar10 * 0x7c] != iVar5)) ||
       (iVar4 = strcmp(acStack_980 + uVar10 * 0x1f0,(char *)piVar9), iVar4 != 0)) &&
      (((pcVar11 = local_918 + uVar10 * 0x1f0, *pcVar11 == '\0' ||
        (aiStack_914[uVar10 * 0x7c] != iVar5)) ||
       (iVar4 = strcmp(acStack_904 + uVar10 * 0x1f0,(char *)piVar9), iVar4 != 0)))))) {
    if (((local_89c[uVar10 * 0x1f0] != '\0') && (aiStack_898[uVar10 * 0x7c] == iVar5)) &&
       (iVar5 = strcmp(acStack_888 + uVar10 * 0x1f0,(char *)piVar9), iVar5 == 0)) {
      pcVar11 = local_89c + uVar10 * 0x1f0;
      goto LAB_0278b588;
    }
  }
  else {
LAB_0278b588:
    if (pcVar11 != local_820 + uVar10 * 0x1f0) {
      *(undefined4 *)(pcVar11 + 0xc) = param_2;
      FUN_0110b990(plVar8,local_a10);
      uVar6 = 1;
      goto code_r0x0278b6a4;
    }
  }
  uVar6 = 0;
code_r0x0278b6a4:
  local_dc = '\0';
  local_158 = '\0';
  local_1d4 = '\0';
  local_250 = '\0';
  local_2cc = '\0';
  local_348 = '\0';
  local_3c4 = '\0';
  local_440 = '\0';
  local_4bc = '\0';
  local_538 = '\0';
  local_5b4 = '\0';
  local_630 = '\0';
  local_6ac = '\0';
  local_728 = '\0';
  local_7a4 = '\0';
  local_820[0] = '\0';
  local_89c[0] = '\0';
  local_918[0] = '\0';
  local_994[0] = '\0';
  if (local_a10[0] != '\0') {
    local_a10[0] = '\0';
  }
  lVar7 = plVar8[0xb];
  piVar9 = (int *)(lVar7 + 0xc);
  do {
    iVar5 = *piVar9;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
    if (bVar2) {
      *piVar9 = iVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))(plVar8);
    return uVar6;
  }
  return uVar6;
}


