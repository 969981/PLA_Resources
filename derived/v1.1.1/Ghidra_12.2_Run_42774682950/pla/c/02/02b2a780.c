/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2a780; name: FUN_02b2a780
 */


void FUN_02b2a780(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long local_28;
  
  param_1[7] = 0;
  puVar5 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar9 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_04284428;
  param_1[1] = lVar9;
  param_1[9] = (long)&PTR_LAB_04284460;
  lVar7 = *param_2;
  param_1[0xb] = lVar7;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = param_1[1];
  }
  plVar10 = param_1 + 0xc;
  *plVar10 = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  param_1[0x1a] = 0;
  param_1[0xf] = lVar9;
  param_1[0x10] = 0x666666666666666;
  param_1[0x13] = 0;
  param_1[0x14] = lVar9;
  param_1[0x15] = 0x666666666666666;
  param_1[0x16] = 0;
  FUN_02b2a9ac(param_1 + 0x1b);
  param_1[0x22] = 0;
  FUN_00b6e968(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  *(undefined1 *)((long)param_1 + 0x18a) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = param_1[1];
  param_1[0x2e] = 0x1fffffffffffffff;
  param_1[0x2f] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x194,0,1);
  lVar7 = param_1[1];
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x3f800000;
  param_1[0x36] = 0;
  param_1[0x37] = lVar7;
  param_1[0x38] = 0x7ffffffffffffff;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = lVar7;
  param_1[0x3d] = 0x7ffffffffffffff;
  param_1[0x3e] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = lVar7;
  param_1[0x45] = 0x7ffffffffffffff;
  param_1[0x48] = 0;
  param_1[0x49] = lVar7;
  param_1[0x4a] = 0x7ffffffffffffff;
  param_1[0x4b] = 0;
  (**(code **)(*(long *)(*(long *)(*param_2 + 0x58) + 0x58) + 0x38))(&local_28);
  plVar8 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  *plVar10 = local_28;
  return;
}


