/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a71028; name: FUN_01a71028
 */


void FUN_01a71028(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long *plVar15;
  code *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [13];
  undefined8 local_68;
  
  FUN_02be8e60(&local_f0,*param_2,0);
  FUN_01a77e00((long *)(param_1 + 0x1f0),&local_f0);
  if (local_f0 != (code *)0x0) {
    pcVar14 = local_f0 + 8;
    do {
      iVar9 = *(int *)pcVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
      if (bVar3) {
        *(int *)pcVar14 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(local_f0 + 0x10) = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = *(undefined8 *)local_f0;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  puVar8 = PTR_DAT_0437a590;
  puVar7 = PTR_DAT_0437a588;
  puVar6 = PTR_DAT_0437a580;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar12 = *(long *)(param_1 + 0x1f0);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar12 + 0xc);
    do {
      plVar15 = *(long **)(lVar12 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        if (((*PTR_DAT_0437a598 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar10 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar11;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(PTR_DAT_0437a598);
        }
        *(undefined **)puVar8 = puVar7;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) {
          return;
        }
        if (plVar15 == (long *)puVar8) break;
        plVar15 = (long *)*plVar15;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return;
          }
          local_f0 = FUN_01a78100;
          local_e8 = FUN_01a7813c;
          local_e0 = FUN_01a78140;
          local_d8 = &LAB_01a7814c;
          pcVar14 = *(code **)(lVar12 + 0x138);
          alStack_d0[0] = param_1;
          if (pcVar14 == (code *)0x0) {
LAB_01a7120c:
            (*local_e0)(alStack_d0,lVar12 + 0x150);
            *(code **)(lVar12 + 0x138) = local_e8;
            *(undefined1 **)(lVar12 + 0x148) = local_d8;
            *(code **)(lVar12 + 0x140) = local_e0;
            *(undefined8 *)(lVar12 + 0x130) = local_f0;
          }
          else {
            *(undefined8 *)(lVar12 + 0x140) = 0;
            *(undefined8 *)(lVar12 + 0x148) = 0;
            *(undefined8 *)(lVar12 + 0x130) = 0;
            *(undefined8 *)(lVar12 + 0x138) = 0;
            (*pcVar14)(lVar12 + 0x150);
            if (local_e0 != (code *)0x0) goto LAB_01a7120c;
          }
          pcVar14 = local_e8;
          if (local_e8 != (code *)0x0) {
            local_e0 = (code *)0x0;
            local_d8 = (undefined1 *)0x0;
            local_f0 = (code *)0x0;
            local_e8 = (code *)0x0;
            (*pcVar14)(alStack_d0);
          }
          local_f0 = (code *)&LAB_01a78158;
          local_e8 = FUN_01a78254;
          local_e0 = FUN_01a78258;
          local_d8 = &LAB_01a78264;
          pcVar14 = *(code **)(lVar12 + 0x1b8);
          alStack_d0[0] = param_1;
          if (pcVar14 != (code *)0x0) {
            *(undefined8 *)(lVar12 + 0x1c0) = 0;
            *(undefined8 *)(lVar12 + 0x1c8) = 0;
            *(undefined8 *)(lVar12 + 0x1b0) = 0;
            *(undefined8 *)(lVar12 + 0x1b8) = 0;
            (*pcVar14)(lVar12 + 0x1d0);
            if (local_e0 == (code *)0x0) goto LAB_01a712d4;
          }
          (*local_e0)(alStack_d0,lVar12 + 0x1d0);
          *(code **)(lVar12 + 0x1b8) = local_e8;
          *(undefined1 **)(lVar12 + 0x1c8) = local_d8;
          *(code **)(lVar12 + 0x1c0) = local_e0;
          *(undefined8 *)(lVar12 + 0x1b0) = local_f0;
LAB_01a712d4:
          pcVar14 = local_e8;
          if (local_e8 != (code *)0x0) {
            local_e0 = (code *)0x0;
            local_d8 = (undefined1 *)0x0;
            local_f0 = (code *)0x0;
            local_e8 = (code *)0x0;
            (*pcVar14)(alStack_d0);
          }
          lVar13 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
  return;
}


