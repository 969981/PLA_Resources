/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b18540; name: FUN_02b18540
 */


void FUN_02b18540(undefined8 *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar9;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  lVar8 = *param_3;
  *param_2 = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[3] = param_3[3];
  plVar7 = (long *)param_3[4];
  param_2[4] = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined1 *)(param_2 + 5) = 0;
  if ((char)param_3[5] != '\0') {
    param_2[6] = param_3[6];
    param_2[7] = param_3[7];
    param_2[8] = param_3[8];
    plVar7 = (long *)param_3[9];
    param_2[9] = (long)plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    *(undefined1 *)(param_2 + 5) = 1;
  }
  *(undefined1 *)(param_2 + 10) = 0;
  if ((char)param_3[10] != '\0') {
    param_2[0xb] = param_3[0xb];
    param_2[0xc] = param_3[0xc];
    param_2[0xd] = param_3[0xd];
    plVar7 = (long *)param_3[0xe];
    param_2[0xe] = (long)plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    *(undefined1 *)(param_2 + 10) = 1;
  }
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


