/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02941934; name: FUN_02941934
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02941934(long *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  void *__s;
  long *plVar10;
  
  param_1[7] = 0;
  puVar5 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar5 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar6 = PTR_DAT_04379528;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = *(long **)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = param_2;
  puVar7 = PTR_DAT_04379c50;
  *param_1 = (long)&PTR_LAB_04276688;
  param_1[1] = (long)plVar10;
  param_1[9] = (long)&PTR_LAB_042766c0;
  param_1[0xc] = (long)(puVar7 + 0x10);
  param_1[0xd] = (long)&DAT_f4b17a579f18960;
  param_1[0xe] = -0x7d5d4e8add6295a5;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0x105) = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((long)param_1 + 0x122) = 0;
  *(undefined8 *)((long)param_1 + 0x129) = 0;
  *(undefined1 *)((long)param_1 + 0x131) = 6;
  *(undefined8 *)((long)param_1 + 0x132) = 0;
  *(undefined1 *)((long)param_1 + 0x13b) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  param_1[0x3e] = 0;
  param_1[0x6d] = 0x1f1f1f1f1f1f1f1f;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((long)param_1 + 0x352) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0x35a) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0x362) = 0x1f1f1f1f1f1f1f1f;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x76] = (long)&PTR_LAB_04276780;
  *(undefined1 *)((long)param_1 + 0x13a) = 0;
  if (((*puVar5 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  __s = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,0x760,0x10);
  if (__s == (void *)0x0) {
    (**(code **)(*plVar10 + 0xb8))(plVar10);
    memset((void *)0x0,0,0x760);
    FUN_02948e2c(0);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x760;
    _DAT_00000020 = 0x10;
    _DAT_00000008 = plVar10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  else {
    memset(__s,0,0x760);
    FUN_02948e2c(__s);
    *(long **)((long)__s + 8) = plVar10;
    *(void **)((long)__s + 0x10) = __s;
    *(undefined8 *)((long)__s + 0x18) = 0x760;
    *(undefined8 *)((long)__s + 0x20) = 0x10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    piVar1 = (int *)((long)__s + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = (long *)param_1[0x3d];
  param_1[0x3d] = 0;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  param_1[0x3d] = (long)__s;
  return;
}


