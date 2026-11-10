/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018199f4; name: FUN_018199f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_018199f4(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  long local_90;
  long lStack_88;
  long *local_80;
  undefined8 uStack_78;
  long *local_70;
  long local_68;
  
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_00ac3fa4(&local_80,param_1 + 0x1f0);
  FUN_0099c748(&local_70,&local_80);
  plVar17 = local_80;
  if (local_80 != (long *)0x0) {
    plVar1 = local_80 + 1;
    do {
      iVar11 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *plVar17;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  puVar10 = PTR_DAT_043794d8;
  puVar9 = PTR_DAT_043794d0;
  puVar8 = PTR_DAT_043794c8;
  puVar7 = PTR_DAT_043794c0;
  puVar6 = PTR_DAT_043794b8;
  puVar5 = PTR_DAT_043794b0;
  if (local_70 == (long *)0x0) {
    lVar14 = *(long *)(param_1 + 0x1a8);
    if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
      piVar2 = (int *)(lVar14 + 0xc);
      iVar11 = *(int *)(lVar14 + 0xc);
      do {
        plVar17 = *(long **)(lVar14 + 0x10);
        if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
            if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)puVar10 = uVar13;
              __cxa_guard_release(puVar9);
            }
            *(undefined **)puVar8 = puVar10;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar6 = puVar8;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_01819b58;
          if (plVar17 == (long *)puVar6) break;
          plVar17 = (long *)*plVar17;
        }
        iVar12 = *piVar2;
        if (iVar12 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01819be4;
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 != 0) {
            lStack_88 = *(long *)(lVar14 + 0x88);
            local_90 = *(long *)(lVar14 + 0x80);
            lVar16 = *(long *)(lVar14 + 8);
            piVar2 = (int *)(lVar16 + 0xc);
            do {
              iVar11 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 != 0) goto LAB_01819af0;
            *(undefined8 *)(lVar16 + 0x18) = 0;
            pcVar15 = *(code **)(*(long *)(lVar14 + -0x50) + 0x20);
            goto LAB_01819b44;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01819be4:
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
LAB_01819b58:
    local_90 = _DAT_000000d0;
    lStack_88 = _DAT_000000d8;
  }
  else {
    FUN_009c69bc(&local_80);
    lStack_88 = local_80[0x1b];
    local_90 = local_80[0x1a];
    if (local_80 != (long *)0x0) {
      lVar14 = local_80[0xb];
      piVar2 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
    if (local_70 != (long *)0x0) {
      lVar14 = local_70[0xb];
      piVar2 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        pcVar15 = *(code **)(*local_70 + 0x20);
LAB_01819b44:
        (*pcVar15)();
      }
    }
  }
LAB_01819af0:
  auVar18._8_8_ = lStack_88;
  auVar18._0_8_ = local_90;
  return auVar18;
}


