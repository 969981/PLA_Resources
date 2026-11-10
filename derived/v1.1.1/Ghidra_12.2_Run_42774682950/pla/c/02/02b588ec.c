/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b588ec; name: FUN_02b588ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b588ec(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *local_48;
  undefined1 auStack_38 [8];
  
  puVar4 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar8 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_04285268;
  param_1[1] = lVar8;
  param_1[9] = (long)&PTR_LAB_042852a0;
  lVar6 = *param_2;
  param_1[0xb] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = _UNK_0388a228;
  lVar6 = ram0x0388a220;
  plVar11 = param_1 + 0xc;
  *plVar11 = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = lVar8;
  param_1[0x10] = lVar6;
  plVar10 = param_1 + 0x13;
  *plVar10 = (long)&DAT_cbf29ce484222645;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x14] = (long)&DAT_03996322;
  param_1[0x15] = 0;
  param_1[0x19] = 7;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *plVar10 = *param_3;
  param_1[0x14] = param_3[1];
  param_1[0x15] = param_3[2];
  plVar9 = (long *)param_3[3];
  if (plVar9 == (long *)0x0) {
    param_1[0x16] = 0;
  }
  else {
    (**(code **)(*plVar9 + 0x18))(plVar9);
    plVar7 = (long *)param_1[0x16];
    param_1[0x16] = (long)plVar9;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  FUN_02b58b6c(&local_48,plVar10);
  plVar9 = (long *)param_1[0x17];
  param_1[0x17] = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  param_1[0x17] = (long)local_48;
  lVar6 = *(long *)(*param_2 + 0x58);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))(local_48);
  }
  lVar6 = FUN_02ba4424(auStack_38,*(undefined8 *)(lVar6 + 8));
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = (long *)*plVar11;
  *plVar11 = 0;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar5 = (int)*plVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))();
      *plVar11 = lVar6;
      goto joined_r0x02b58aa0;
    }
  }
  *plVar11 = lVar6;
joined_r0x02b58aa0:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))(local_48);
  }
  return;
}


