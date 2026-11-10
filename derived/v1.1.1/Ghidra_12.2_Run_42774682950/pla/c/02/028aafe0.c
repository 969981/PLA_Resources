/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028aafe0; name: FUN_028aafe0
 */


void FUN_028aafe0(long param_1,long *param_2,char *param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long *local_68;
  
  lVar13 = nn::os::GetCurrentThread();
  plVar17 = (long *)(param_1 + 0x3a0);
  do {
    if (*plVar17 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x394));
        while (*plVar17 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = lVar13;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_028ab058;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *plVar17 = lVar13;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_028ab058:
  puVar7 = PTR_DAT_0437a6a8;
  puVar6 = PTR_DAT_0437a6a0;
  if (*param_3 != '\0') {
    if ((ulong)*(uint *)(param_3 + 4) <= (ulong)((param_2[1] - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3))
    {
      lVar15 = *param_2 + (ulong)*(uint *)(param_3 + 4) * 0x58;
      lVar13 = *(long *)(lVar15 + 0x20);
      lVar15 = *(long *)(lVar15 + 0x28);
      if (lVar13 != lVar15) {
        do {
          local_80 = (undefined8 *)0x0;
          uStack_78 = 0;
          FUN_00af8f10(&local_80,lVar13);
          puVar8 = local_80;
          local_70 = *(undefined4 *)(lVar13 + 0x10);
          if (local_80 != (undefined8 *)0x0) {
            uVar9 = local_84;
            if (*(int *)((long)local_80 + 0xc) != 0) {
              piVar1 = (int *)((long)local_80 + 0xc);
              iVar12 = *(int *)((long)local_80 + 0xc);
              do {
                local_84 = uVar9;
                plVar17 = (long *)puVar8[2];
                uVar9 = local_84;
                uVar10 = local_70;
                if (((*puVar6 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(puVar6), uVar9 = local_84, uVar10 = local_70,
                   iVar11 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
                    uVar14 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)puVar7 = PTR_DAT_043794d8;
                  __cxa_guard_release(puVar6);
                  uVar9 = local_84;
                  uVar10 = local_70;
                }
                while( true ) {
                  local_84 = uVar10;
                  local_70 = local_84;
                  if (plVar17 == (long *)0x0) goto LAB_028ab1f8;
                  if (plVar17 == (long *)puVar7) break;
                  plVar17 = (long *)*plVar17;
                  uVar10 = local_84;
                }
                iVar11 = *piVar1;
                if (iVar11 == iVar12) {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar12 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') {
                    lVar16 = puVar8[3];
                    if (lVar16 != 0) {
                      plVar17 = (long *)(lVar16 + -8);
                      local_88[0] = 1;
                      local_68 = plVar17;
                      (*(code *)*param_4)(param_4 + 4,&local_68,local_88);
                      (**(code **)(*plVar17 + 0x18))(plVar17);
                      uVar9 = local_84;
                    }
                    break;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar12 = iVar11;
              } while (iVar11 != 0);
            }
LAB_028ab1f8:
            local_84 = uVar9;
            puVar8 = local_80;
            puVar5 = PTR_LAB_04379590;
            puVar4 = PTR_DAT_04379498;
            if (local_80 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_80 + 1);
              do {
                iVar12 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar12 + -1 == 0) {
                local_80[2] = 0;
                if (((*puVar4 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar4), iVar12 != 0)) {
                  FUN_00100250(puVar5,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar4);
                }
                lVar16 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar16;
                local_68 = (long *)*puVar8;
                FUN_02a44274(lVar16 + 0xd8,&local_68);
              }
            }
          }
          lVar13 = lVar13 + 0x18;
        } while (lVar13 != lVar15);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x394));
  return;
}


