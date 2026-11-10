/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009b9e2c; name: FUN_009b9e2c
 */


long FUN_009b9e2c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *local_60;
  long *local_58;
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
  lVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x1e0,0x10);
  if (lVar8 == 0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  local_48 = (long *)0x0;
  local_58 = (long *)*param_5;
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  local_60 = &DAT_cbf29ce484222645;
  FUN_01d4880c(lVar8,param_2,PTR_DAT_0437a330,PTR_DAT_0437a120,param_3,param_4,&local_48,&local_58,
               PTR_DAT_0437a0d8,&local_60,0,0);
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  *(long **)(lVar8 + 8) = param_1;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 0x1e0;
  *(undefined8 *)(lVar8 + 0x20) = 0x10;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  return lVar8;
}


