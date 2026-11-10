/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ac849c; name: FUN_02ac849c
 */


void FUN_02ac849c(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
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
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar6 = PTR_DAT_04379528;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_04281bd8;
  param_1[1] = lVar11;
  param_1[9] = (long)&PTR_LAB_04281c58;
  param_1[0xb] = (long)&PTR_LAB_04281c88;
  param_1[0xc] = 0;
  lVar8 = *param_2;
  plVar12 = *(long **)(lVar8 + 8);
  if (((*puVar5 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar12;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  puVar9 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x1e8,8);
  if (puVar9 == (undefined8 *)0x0) {
    (**(code **)(*plVar12 + 0xb8))(plVar12);
  }
  FUN_02bbfbb4(puVar9,lVar8);
  *puVar9 = &PTR_LAB_04282730;
  puVar9[1] = plVar12;
  puVar9[2] = puVar9;
  puVar9[3] = 0x1e8;
  puVar9[9] = &PTR_LAB_04282770;
  puVar9[4] = 8;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  if (puVar9 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    piVar1 = (int *)(puVar9 + 10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar10 = puVar9;
  }
  local_48 = 0;
  local_58 = 0x140;
  uStack_50 = 0x100;
  FUN_02bbfe84(puVar10,&local_58,2,0,0);
  plVar12 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  param_1[0xc] = (long)puVar9;
  FUN_02bc0574(puVar9);
  puVar9[0x23] = 0x3f80000000000000;
  puVar9[0x24] = 0x3f80000000000000;
  *(undefined4 *)((long)puVar9 + 0xf4) = 2;
  *(undefined4 *)((long)puVar9 + 0xfc) = 0;
  *(undefined4 *)((long)puVar9 + 0x114) = 0x3f800000;
  *(undefined8 *)((long)puVar9 + 0x104) = 0;
  *(undefined8 *)((long)puVar9 + 0x10c) = 0;
  puVar9[0x25] = 0x3f800000;
  *(undefined4 *)(puVar9 + 0x26) = 0x3f800000;
  *(undefined8 *)((long)puVar9 + 0x184) = 0;
  *(undefined4 *)((long)puVar9 + 0x18c) = 0;
  *(undefined8 *)((long)puVar9 + 0x134) = 0;
  *(undefined8 *)((long)puVar9 + 0x13c) = 0;
  *(undefined8 *)((long)puVar9 + 0x144) = 0;
  *(undefined8 *)((long)puVar9 + 0x14c) = 0;
  *(undefined8 *)((long)puVar9 + 0x154) = 0;
  *(undefined8 *)((long)puVar9 + 0x15c) = 0;
  *(undefined8 *)((long)puVar9 + 0x164) = 0;
  *(undefined8 *)((long)puVar9 + 0x16c) = 0;
  *(undefined8 *)((long)puVar9 + 0x174) = 0;
  *(undefined8 *)((long)puVar9 + 0x17c) = 0;
  *(undefined4 *)(puVar9 + 0x36) = 0x3f800000;
  puVar9[0x32] = 0x3f800000;
  puVar9[0x33] = 0;
  puVar9[0x34] = 0x3f8000003f800000;
  puVar9[0x35] = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar9 + 0x1d4) = 0;
  *(undefined4 *)((long)puVar9 + 0x1dc) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c4) = 0;
  *(undefined8 *)((long)puVar9 + 0x1b4) = 0;
  *(undefined8 *)((long)puVar9 + 0x1bc) = 0;
  return;
}


