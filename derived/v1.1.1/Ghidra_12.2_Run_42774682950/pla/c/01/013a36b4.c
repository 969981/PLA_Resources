/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a36b4; name: FUN_013a36b4
 */


long FUN_013a36b4(long *param_1,undefined8 *param_2,char *param_3,undefined4 *param_4)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_50 [2];
  long *local_48;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_1;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  lVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x698,8);
  if (lVar8 == 0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  local_50[0] = *param_4;
  uVar9 = *param_2;
  cVar2 = *param_3;
  local_48 = *(long **)(param_4 + 2);
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0138dea8(lVar8,uVar9,cVar2 != '\0',local_50);
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  *(long **)(lVar8 + 8) = param_1;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 0x698;
  *(undefined8 *)(lVar8 + 0x20) = 8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  return lVar8;
}


