/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bef094; name: FUN_01bef094
 */


undefined8 FUN_01bef094(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  FUN_01a50850(local_58);
  puVar3 = local_58[0];
  puVar5 = PTR_DAT_0437a408;
  puVar4 = PTR_DAT_0437a400;
  if (local_58[0] == (undefined8 *)0x0) {
    return 0;
  }
  if (*(int *)((long)local_58[0] + 0xc) != 0) {
    piVar1 = (int *)((long)local_58[0] + 0xc);
    iVar7 = *(int *)((long)local_58[0] + 0xc);
    do {
      plVar16 = (long *)puVar3[2];
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
        uVar14 = FUN_009cdcc0();
        *(undefined8 *)puVar5 = uVar14;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01bef408;
        if (plVar16 == (long *)puVar5) break;
        plVar16 = (long *)*plVar16;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar7) {
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = puVar3[3];
          plVar16 = (long *)0x0;
          puVar3 = local_58[0];
          if (lVar12 != 0) {
            plVar16 = (long *)(lVar12 + -0x50);
          }
          goto joined_r0x01bef150;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar8;
    } while (iVar8 != 0);
  }
LAB_01bef408:
  plVar16 = (long *)0x0;
  puVar3 = local_58[0];
joined_r0x01bef150:
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar3[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_48 = *puVar3;
      FUN_02a44274(lVar12 + 0xd8,&local_48);
    }
  }
  if (plVar16 == (long *)0x0) {
    return 0;
  }
  lVar12 = nn::os::GetCurrentThread();
  plVar13 = plVar16 + 0xf;
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar16 + 0x6c));
        while (*plVar13 == 0) {
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01bef1f8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01bef1f8:
  if ((undefined8 *)plVar16[0x15] == (undefined8 *)plVar16[0x14]) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  plVar13 = *(long **)plVar16[0x14];
  plVar16[0xf] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar16 + 0x6c));
  plVar13 = (long *)(**(code **)(*plVar13 + 0x70))(plVar13);
  iVar7 = (**(code **)(*plVar13 + 0x20))();
  if (iVar7 != 0) {
    iVar8 = 0;
    do {
      plVar9 = (long *)(**(code **)(*plVar13 + 0x28))(plVar13,iVar8);
      if (*plVar9 == 0x77316553f97233b7) {
        uVar14 = 1;
        goto LAB_01bef348;
      }
      iVar8 = iVar8 + 1;
    } while (iVar7 != iVar8);
  }
  puVar10 = (ulong *)(**(code **)(*plVar13 + 0x18))(plVar13);
  uVar15 = *puVar10;
  plVar13 = (long *)puVar10[3];
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  uVar11 = FUN_01a5a538(param_1);
  uVar14 = 1;
  if ((uVar11 & 1) == 0) {
    if ((long)uVar15 < -0x4c777fbe7a67dde3) {
      bVar6 = uVar15 == 0xb388724185980a53;
      uVar11 = 0x7c4185981b51;
    }
    else {
      bVar6 = uVar15 == 0x64ad888ec5f000e0 || uVar15 == 0xb38880418598221d;
      uVar11 = 0x904185983d4d;
    }
    if (bVar6 || uVar15 == (uVar11 | 0xb388000000000000)) goto LAB_01bef334;
  }
  else {
    if ((long)uVar15 < 0x63123ec4c686912f) {
      bVar6 = uVar15 == 0x2ddcde1c396d8fc;
      uVar11 = 0x34c4c6868031;
    }
    else {
      bVar6 = uVar15 == 0x631248c4c686a22d || uVar15 == 0x631244c4c6869b61;
      uVar11 = 0x3ec4c686912f;
    }
    if (bVar6 || uVar15 == (uVar11 | 0x6312000000000000)) goto LAB_01bef334;
  }
  uVar14 = 0;
LAB_01bef334:
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
LAB_01bef348:
  lVar12 = plVar16[0xb];
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  return uVar14;
}


