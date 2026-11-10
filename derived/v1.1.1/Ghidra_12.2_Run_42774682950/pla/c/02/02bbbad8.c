/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbbad8; name: FUN_02bbbad8
 */


void FUN_02bbbad8(long *param_1,long param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long *local_68;
  long *local_60;
  long *local_58;
  undefined1 auStack_48 [8];
  
  puVar6 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar6 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar10 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar7 = PTR_DAT_04379528;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  puVar8 = PTR_DAT_043881a8;
  if (lVar11 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = param_2;
  *param_1 = (long)(puVar8 + 0x10);
  param_1[1] = lVar15;
  param_1[9] = (long)(puVar8 + 0x48);
  param_1[0xc] = *param_3;
  param_1[0xd] = param_3[1];
  param_1[0xe] = param_3[2];
  plVar12 = (long *)param_3[3];
  param_1[0xf] = (long)plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))();
    lVar15 = param_1[1];
  }
  plVar12 = param_1 + 0x10;
  *plVar12 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = lVar15;
  param_1[0x15] = 0x555555555555555;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0xc4,0,1);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x1e] = param_1[1];
  param_1[0x1f] = 0x3fffffffffffffff;
  param_1[0x24] = 0;
  param_1[0x25] = param_1[1];
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0x1fffffffffffffff;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_02ba466c(param_1 + 0x2b);
  lVar11 = param_1[0x2c] - param_1[0x2b];
  lVar15 = lVar11 >> 3;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if ((ulong)(lVar15 * -0x5555555555555555) < 2) {
    FUN_02ba4a08(param_1 + 0x2b,lVar15 * 0x5555555555555555 + 2);
  }
  else if (lVar11 != 0x30) {
    param_1[0x2c] = param_1[0x2b] + 0x30;
  }
  *(undefined4 *)(param_1 + 0x33) = 1;
  *(undefined8 *)((long)param_1 + 0x19c) = 0;
  *(undefined8 *)((long)param_1 + 0x1a4) = 0;
  *(undefined8 *)((long)param_1 + 0x1cc) = 0x1f00000000;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0;
  param_1[0x44] = param_1[1];
  param_1[0x45] = 0xfffffffffffffff;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x1000001;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  if (((*puVar6 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar10 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
  lVar11 = DAT_043f1798;
  if (((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
     (lVar15 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8), lVar15 == 0)) {
    lVar5 = tpidr_el0;
    lVar15 = *(long *)(lVar5 + 0x20);
    if (*(long *)(lVar5 + 0x20) == 0) {
      *(long *)(lVar5 + 0x20) = DAT_043f1798;
      lVar15 = lVar11;
    }
  }
  param_1[0x4c] = lVar15;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4d] = 0xccccccccccccccc;
  param_1[0x4e] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x284,0,1);
  param_1[0x52] = 0;
  puVar6 = PTR_DAT_04379cd0;
  local_60 = (long *)0x0;
  if (((*PTR_DAT_04379cd0 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379cd0);
  }
  puVar8 = PTR_DAT_04379ce0;
  puVar7 = PTR_DAT_04379cd8;
  uVar13 = *(undefined8 *)PTR_DAT_04379cd8;
  *(undefined8 *)PTR_DAT_04379ce0 = uVar13;
  FUN_02a47cd8(&local_58,uVar13,&DAT_038aa492);
  plVar9 = local_60;
  local_60 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  local_68 = (long *)0x0;
  local_60 = local_58;
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379cd0);
  }
  uVar13 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar13;
  FUN_02a47cd8(&local_58,uVar13," Settings]");
  plVar9 = local_68;
  local_68 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  local_68 = local_58;
  FUN_02bbc014(&local_58,&local_60,param_3,&local_68);
  plVar9 = local_58;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))(local_58);
  }
  lVar11 = FUN_02ba4424(auStack_48,*(undefined8 *)(param_2 + 8));
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar14 = (long *)*plVar12;
  *plVar12 = 0;
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar14 + 0x10))();
      *plVar12 = lVar11;
      goto joined_r0x02bbbe48;
    }
  }
  *plVar12 = lVar11;
joined_r0x02bbbe48:
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}


