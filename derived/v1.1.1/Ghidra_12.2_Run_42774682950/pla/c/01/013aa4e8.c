/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013aa4e8; name: FUN_013aa4e8
 */


long FUN_013aa4e8(undefined8 param_1,long *param_2,undefined8 *param_3,long *param_4,
                 undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *local_48;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar7 = (**(code **)(*param_2 + 0x10))(param_2,0x350,0x10);
  if (lVar7 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  uVar8 = *param_3;
  local_48 = (long *)*param_4;
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_027a7120(lVar7,uVar8,&local_48,param_5);
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  *(long **)(lVar7 + 8) = param_2;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x350;
  *(undefined8 *)(lVar7 + 0x20) = 0x10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  return lVar7;
}


