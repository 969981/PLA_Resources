/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011738b4; name: FUN_011738b4
 */


void FUN_011738b4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined1 *local_50;
  undefined *local_48;
  undefined8 uStack_40;
  long *local_38;
  long *local_30;
  long *local_28;
  
  local_50 = &DAT_a957e3270a9644aa;
  local_48 = &DAT_039a7d21;
  uStack_40 = 3;
  FUN_00d18d1c(&local_70,&local_50);
  plVar5 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x88) = local_70;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar5 = (long *)(**(code **)*puVar9)(puVar9);
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar4 != 0))
  {
    uVar8 = FUN_009311a8();
    *(undefined8 *)PTR_DAT_04379c98 = uVar8;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar5 != (long *)PTR_DAT_04379c98) {
    for (plVar5 = (long *)*plVar5; plVar5 != (long *)PTR_DAT_04379c98; plVar5 = (long *)*plVar5) {
    }
  }
  lVar6 = FUN_0115f2b0(puVar9[0x8f],"View_Main");
  *(long *)(param_1 + 0x90) = lVar6;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_01179118();
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148e38(&local_28);
  uVar7 = FUN_010daba4(local_28);
  if ((uVar7 & 1) == 0) {
    local_70 = 0xbcfb0442746693a4;
    pcStack_68 = "RESULT";
    local_60 = 6;
    local_58 = (long *)0x0;
    FUN_02928390(&local_50,&local_70);
    if (((*PTR_DAT_04379e40 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    uVar8 = *(undefined8 *)PTR_DAT_04379e48;
    *(undefined8 *)PTR_DAT_04379e50 = uVar8;
    FUN_02928c7c(uVar8,&local_48,0,0);
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
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
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_02a4754c(&local_50,&DAT_041f39c8);
  FUN_028354b0(&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


