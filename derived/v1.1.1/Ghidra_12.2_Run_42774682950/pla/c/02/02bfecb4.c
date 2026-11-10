/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bfecb4; name: FUN_02bfecb4
 */


void FUN_02bfecb4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 local_6c [4];
  undefined8 *local_68;
  long *local_60;
  undefined1 auStack_58 [8];
  
  puVar5 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar6 = PTR_DAT_04379528;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  puVar9 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x490,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  uVar14 = *param_3;
  FUN_02a6f65c(puVar9,DAT_043eef30);
  *(undefined4 *)(puVar9 + 0x73) = 1;
  *puVar9 = &PTR_LAB_04288358;
  puVar9[0x72] = 0;
  puVar9[0x71] = 0;
  *(undefined1 *)((long)puVar9 + 0x39c) = 0;
  puVar9[0x74] = 0;
  puVar9[0x75] = 0;
  puVar9[0x76] = 0;
  puVar9[0x77] = 0;
  puVar9[0x84] = 0;
  puVar9[0x85] = 0;
  puVar9[0x86] = 0;
  puVar9[9] = &PTR_LAB_042883e0;
  puVar9[10] = &PTR_LAB_04288428;
  if (((*puVar5 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  lVar16 = DAT_043f1798;
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar4 = tpidr_el0;
    lVar10 = *(long *)(lVar4 + 0x20);
    if (*(long *)(lVar4 + 0x20) == 0) {
      *(long *)(lVar4 + 0x20) = DAT_043f1798;
      lVar10 = lVar16;
    }
  }
  puVar9[0x87] = lVar10;
  puVar9[0x88] = 0x1fffffffffffffff;
  puVar9[0x89] = 0;
  *(undefined4 *)(puVar9 + 0x8a) = 0;
  nn::os::InitializeSemaphore((SemaphoreType *)(puVar9 + 0x8b),1,1);
  local_60 = (long *)puVar9[0x42];
  puVar9[0x91] = 0;
  puVar9[0x90] = uVar14;
  uVar14 = puVar9[1];
  local_68 = (undefined8 *)0x0;
  if (puVar9[0x71] != 0) {
    puVar15 = *(undefined8 **)(puVar9[0x71] + 0x18);
    if (puVar15 != (undefined8 *)0x0) {
      plVar11 = (long *)(**(code **)*puVar15)(puVar15);
      puVar5 = PTR_DAT_043794d8;
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar5 = uVar12;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        if (plVar11 == (long *)puVar5) {
          local_68 = puVar15 + -1;
          goto LAB_02bfee84;
        }
      }
    }
    local_68 = (undefined8 *)0x0;
  }
LAB_02bfee84:
  local_6c[0] = *(undefined1 *)((long)puVar9 + 0x39c);
  plVar11 = (long *)FUN_02a5fd30(auStack_58,uVar14,&local_60,&local_68,local_6c);
  plVar11[0x3c] = plVar11[0x3c] | 8;
  if (plVar11 != (long *)0x0) {
    lVar16 = plVar11[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02bff0e8;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcVar13 = (code *)plVar11[0x75];
  if (pcVar13 != (code *)0x0) {
    plVar11[0x76] = 0;
    plVar11[0x77] = 0;
    plVar11[0x74] = 0;
    plVar11[0x75] = 0;
    (*pcVar13)(plVar11 + 0x78);
  }
  plVar11[0x74] = (long)&LAB_02c04a4c;
  plVar11[0x75] = (long)&LAB_02c04b10;
  plVar11[0x78] = (long)puVar9;
  plVar11[0x76] = (long)&LAB_02c04b14;
  plVar11[0x77] = (long)&LAB_02c04b20;
  local_60 = plVar11;
  FUN_02a700c0(puVar9,&local_60);
  if (local_60 != (long *)0x0) {
    lVar16 = local_60[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  FUN_02c03f44(puVar9);
  puVar9[1] = param_2;
  puVar9[2] = puVar9;
  puVar9[3] = 0x490;
  puVar9[4] = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  puVar9[0x3c] = puVar9[0x3c] | 8;
  *param_1 = puVar9;
  lVar8 = puVar9[0xb];
  if (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return;
  }
LAB_02bff0e8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


