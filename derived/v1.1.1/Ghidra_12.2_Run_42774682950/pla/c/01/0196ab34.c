/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0196ab34; name: FUN_0196ab34
 */


void FUN_0196ab34(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  plVar14 = *(long **)(param_2 + 8);
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_008802f0(&local_78,param_2 + 0x58);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_0186453c(&local_88,&local_78);
  plVar15 = local_78;
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 1;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = *plVar15;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  puVar7 = local_88;
  puVar6 = PTR_DAT_0437c670;
  puVar5 = PTR_DAT_0437c668;
  if ((local_88 == (undefined8 *)0x0) || (*(int *)((long)local_88 + 0xc) == 0)) {
LAB_0196abe8:
    plVar15 = (long *)0x0;
  }
  else {
    piVar2 = (int *)((long)local_88 + 0xc);
    iVar8 = *(int *)((long)local_88 + 0xc);
    do {
      puVar16 = (undefined8 *)puVar7[2];
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar11;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar6 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar5);
      }
      if (puVar16 == (undefined8 *)0x0) goto LAB_0196abe8;
      while (puVar16 != (undefined8 *)puVar6) {
        puVar16 = (undefined8 *)*puVar16;
        plVar15 = (long *)0x0;
        if (puVar16 == (undefined8 *)0x0) goto LAB_0196abec;
      }
      iVar9 = *piVar2;
      if (iVar9 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar12 = puVar7[3];
          plVar15 = (long *)0x0;
          if (lVar12 != 0) {
            plVar15 = (long *)(lVar12 + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar15 = (long *)0x0;
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_0196abec:
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar5 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar14;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  lVar10 = (**(code **)(*plVar14 + 0x10))(plVar14,0x510,0x10);
  if (lVar10 == 0) {
    (**(code **)(*plVar14 + 0xb8))(plVar14);
  }
  local_78 = plVar15;
  FUN_0197737c(lVar10,&local_78,param_3);
  if (local_78 != (long *)0x0) {
    lVar13 = local_78[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  *(long **)(lVar10 + 8) = plVar14;
  *(long *)(lVar10 + 0x10) = lVar10;
  *(undefined8 *)(lVar10 + 0x18) = 0x510;
  *(undefined8 *)(lVar10 + 0x20) = 0x10;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  *(ulong *)(lVar10 + 0x1e0) = *(ulong *)(lVar10 + 0x1e0) | 8;
  if (lVar10 != 0) {
    lVar12 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar7 = local_88;
  *param_1 = lVar10;
  if (local_88 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_88 + 1);
    do {
      iVar8 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_78 = (long *)*puVar7;
      FUN_02a44274(lVar12 + 0xd8,&local_78);
    }
  }
  return;
}


