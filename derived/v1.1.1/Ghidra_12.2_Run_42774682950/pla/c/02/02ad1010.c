/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ad1010; name: FUN_02ad1010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ad1010(long *param_1,long *param_2)

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
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
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
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar6 = PTR_DAT_04379528;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar15 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&PTR_LAB_04282378;
  param_1[1] = lVar15;
  param_1[9] = (long)&PTR_LAB_042823f8;
  puVar7 = PTR_DAT_043880b8;
  lVar9 = *(long *)(PTR_DAT_043880b8 + 0x28);
  param_1[0x10] = *(long *)(PTR_DAT_043880b8 + 0x20);
  param_1[0x11] = lVar9;
  lVar9 = *(long *)(puVar7 + 8);
  param_1[0xc] = *(long *)puVar7;
  param_1[0xd] = lVar9;
  lVar9 = *(long *)(puVar7 + 0x10);
  lVar15 = *(long *)(puVar7 + 0x18);
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xe] = lVar9;
  param_1[0xf] = lVar15;
  param_1[0xb] = 0;
  lVar9 = *(long *)(puVar7 + 0x30);
  lVar15 = *(long *)(puVar7 + 0x38);
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x12] = lVar9;
  param_1[0x13] = lVar15;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x14] = 0x3f80000000000000;
  param_1[0x15] = 0x3f800000;
  lVar9 = *param_2;
  plVar16 = *(long **)(lVar9 + 8);
  if (((*puVar5 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar16;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
  puVar10 = (undefined8 *)(**(code **)(*plVar16 + 0x10))(plVar16,0xa50,8);
  if (puVar10 == (undefined8 *)0x0) {
    (**(code **)(*plVar16 + 0xb8))(plVar16);
  }
  FUN_02bbfbb4(puVar10,lVar9);
  *puVar10 = &PTR_LAB_04282598;
  puVar10[1] = plVar16;
  puVar10[2] = puVar10;
  puVar10[3] = 0xa50;
  puVar10[9] = &PTR_LAB_042825d8;
  puVar10[4] = 8;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  if (puVar10 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    piVar1 = (int *)(puVar10 + 10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar11 = puVar10;
  }
  local_48 = 0;
  local_58 = 0x9a8;
  uStack_50 = 0x100;
  FUN_02bbfe84(puVar11,&local_58,2,0,0);
  plVar16 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 10;
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
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  param_1[0xb] = (long)puVar10;
  plVar16 = *(long **)(*param_2 + 0xd8);
  if (plVar16 == (long *)0x0) {
    uVar14 = (uint)*(ulong *)(_DAT_00000098 + 0x138);
    if (_DAT_000000a0 < 3) {
      uVar14 = uVar14 & _DAT_000000a0 - 1;
    }
    else {
      iVar8 = 0;
      if ((ulong)_DAT_000000a0 != 0) {
        iVar8 = (int)(*(ulong *)(_DAT_00000098 + 0x138) / (ulong)_DAT_000000a0);
      }
      uVar14 = uVar14 - iVar8 * _DAT_000000a0;
    }
    pcVar12 = (char *)FUN_02bc0470((long)(int)uVar14,0x58);
    lVar9 = *(long *)(pcVar12 + 8);
    if (*pcVar12 != '\0' && lVar9 != 0) {
      param_1[0x18] = *(long *)(lVar9 + 0x70);
      param_1[0x19] = *(long *)(lVar9 + 0x78);
    }
    FUN_02abace4(param_1);
  }
  else {
    plVar2 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar14 = *(uint *)(plVar16 + 0x14);
    uVar13 = (uint)*(ulong *)(plVar16[0x13] + 0x138);
    if (uVar14 < 3) {
      uVar13 = uVar13 & uVar14 - 1;
    }
    else {
      iVar8 = 0;
      if ((ulong)uVar14 != 0) {
        iVar8 = (int)(*(ulong *)(plVar16[0x13] + 0x138) / (ulong)uVar14);
      }
      uVar13 = uVar13 - iVar8 * uVar14;
    }
    pcVar12 = (char *)FUN_02bc0470((long)(int)uVar13,plVar16 + 0xb);
    lVar9 = *(long *)(pcVar12 + 8);
    if (*pcVar12 != '\0' && lVar9 != 0) {
      param_1[0x18] = *(long *)(lVar9 + 0x70);
      param_1[0x19] = *(long *)(lVar9 + 0x78);
    }
    FUN_02abace4(param_1);
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
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  return;
}


