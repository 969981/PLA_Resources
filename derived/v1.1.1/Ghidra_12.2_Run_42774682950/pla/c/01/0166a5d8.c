/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0166a5d8; name: FUN_0166a5d8
 */


void FUN_0166a5d8(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  
  puVar5 = PTR_DAT_043796d0;
  param_1[7] = 0;
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
  puVar7 = PTR_DAT_04380710;
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar11 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)(puVar7 + 0x10);
  param_1[1] = lVar11;
  param_1[9] = (long)(puVar7 + 0x48);
  param_1[0xb] = *param_2;
  param_1[0xc] = *(long *)(*param_3 + 0x60);
  lVar9 = *(long *)(*param_3 + 0x68);
  param_1[0xd] = lVar9;
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0xe] = *(long *)(*param_3 + 0x70);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (((*puVar5 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  lVar9 = DAT_043f1798;
  if (((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
     (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) {
    lVar4 = tpidr_el0;
    lVar11 = *(long *)(lVar4 + 0x20);
    if (*(long *)(lVar4 + 0x20) == 0) {
      *(long *)(lVar4 + 0x20) = DAT_043f1798;
      lVar11 = lVar9;
    }
  }
  param_1[0x12] = lVar11;
  param_1[0x13] = 0x1fffffffffffffff;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  lVar9 = *param_3;
  if (*(long *)(lVar9 + 0x80) == *(long *)(lVar9 + 0x78)) {
    return;
  }
  plVar13 = (long *)**(undefined8 **)(lVar9 + 0x78);
  if (plVar13 == (long *)0x0) {
    plVar12 = (long *)PTR_DAT_04379c88;
  }
  else {
    plVar12 = plVar13 + 0xb;
  }
  local_60 = *plVar12;
  if (plVar13 == (long *)0x0) {
    lStack_58 = *(long *)PTR_PTR_04379d00;
  }
  else {
    lStack_58 = plVar13[0xc];
    if (plVar13 != (long *)0x0) {
      local_50 = plVar13[0xd];
      local_48 = (long *)0x0;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      goto LAB_0166a780;
    }
  }
  local_50 = 0;
LAB_0166a780:
  local_48 = plVar13;
  FUN_01669ebc(param_1 + 0xf,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  puVar6 = PTR_PTR_04379d00;
  puVar5 = PTR_DAT_04379c88;
  lVar9 = *param_3;
  if (1 < (ulong)(*(long *)(lVar9 + 0x80) - *(long *)(lVar9 + 0x78) >> 3)) {
    uVar15 = 1;
    do {
      plVar14 = *(long **)(*(long *)(lVar9 + 0x78) + uVar15 * 8);
      plVar13 = (long *)puVar6;
      plVar12 = (long *)puVar5;
      if (plVar14 != (long *)0x0) {
        plVar13 = plVar14 + 0xc;
        plVar12 = plVar14 + 0xb;
      }
      local_60 = *plVar12;
      lStack_58 = *plVar13;
      if (plVar14 == (long *)0x0) {
        local_50 = 0;
      }
      else {
        local_50 = plVar14[0xd];
        local_48 = (long *)0x0;
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      local_48 = plVar14;
      FUN_01669ebc(param_1 + 0xf,&local_60);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      lVar9 = *param_3;
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulong)(*(long *)(lVar9 + 0x80) - *(long *)(lVar9 + 0x78) >> 3));
  }
  return;
}


