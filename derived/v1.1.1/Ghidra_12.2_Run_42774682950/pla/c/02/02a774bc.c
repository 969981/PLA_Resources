/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a774bc; name: FUN_02a774bc
 */


void FUN_02a774bc(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined1 local_6c [4];
  undefined8 local_68;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar16 = (long *)(param_1 + 0x238);
  do {
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x22c));
        while (*plVar16 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = lVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02a7752c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar3) {
      *plVar16 = lVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02a7752c:
  puVar5 = PTR_DAT_04379d68;
  puVar4 = PTR_DAT_04379d60;
  if (*(char *)(param_1 + 0x1e1) == '\0') {
    uVar11 = *(ulong *)(param_1 + 0x1f8);
    puVar15 = (undefined8 *)(param_1 + 0x208);
    if (uVar11 < *(ulong *)(param_1 + 0x200)) {
      FUN_02a785d0(puVar15,uVar11,param_2);
      *(long *)(param_1 + 0x1f8) = *(long *)(param_1 + 0x1f8) + 0x10;
    }
    else {
      uVar14 = *(ulong *)(param_1 + 0x210);
      lVar9 = (long)(uVar11 - *(long *)(param_1 + 0x1f0)) >> 4;
      uVar11 = lVar9 + 1;
      if (0x7ffffffffffffffe < uVar14) {
        uVar14 = 0x7fffffffffffffff;
      }
      if (uVar14 < uVar11) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar12 = *(ulong *)(param_1 + 0x200) - *(long *)(param_1 + 0x1f0);
      if ((ulong)(lVar12 >> 4) < uVar14 >> 1) {
        uVar13 = lVar12 >> 3;
        uVar14 = uVar11;
        if (uVar11 <= uVar13) {
          uVar14 = uVar13;
        }
      }
      if (uVar14 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = (**(code **)(*(long *)*puVar15 + 0x10))((long *)*puVar15,uVar14 << 4,8);
        if (lVar12 == 0) {
          (**(code **)(*(long *)*puVar15 + 0xb8))();
        }
      }
      lVar19 = lVar12 + lVar9 * 0x10;
      FUN_02a785d0(puVar15,lVar19,param_2);
      puVar18 = *(undefined8 **)(param_1 + 0x1f0);
      puVar17 = *(undefined8 **)(param_1 + 0x1f8);
      lVar9 = lVar19 + 0x10;
      if (puVar17 == puVar18) {
        puVar17 = puVar18;
      }
      else {
        do {
          lVar19 = lVar19 + -0x10;
          puVar17 = puVar17 + -2;
          FUN_02a789c4(puVar15,lVar19,puVar17);
        } while (puVar18 != puVar17);
        puVar18 = *(undefined8 **)(param_1 + 0x1f0);
        puVar17 = *(undefined8 **)(param_1 + 0x1f8);
      }
      lVar21 = *(long *)(param_1 + 0x200);
      *(ulong *)(param_1 + 0x200) = lVar12 + uVar14 * 0x10;
      *(long *)(param_1 + 0x1f0) = lVar19;
      *(long *)(param_1 + 0x1f8) = lVar9;
      puVar6 = PTR_DAT_043794a8;
      puVar5 = PTR_DAT_043794a0;
      puVar4 = PTR_DAT_04379498;
      if (puVar17 != puVar18) {
        puVar17 = puVar17 + -2;
        puVar20 = (undefined8 *)*puVar17;
        if (puVar20 != (undefined8 *)0x0) goto LAB_02a7776c;
LAB_02a7775c:
        if (puVar17 != puVar18) {
          while( true ) {
            puVar17 = puVar17 + -2;
            puVar20 = (undefined8 *)*puVar17;
            if (puVar20 == (undefined8 *)0x0) break;
LAB_02a7776c:
            piVar1 = (int *)(puVar20 + 1);
            do {
              iVar8 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 + -1 != 0) break;
            puVar20[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar4);
            }
            lVar9 = *(long *)puVar5;
            *(long *)puVar6 = lVar9;
            local_68 = *puVar20;
            FUN_02a44274(lVar9 + 0xd8,&local_68);
            if (puVar17 == puVar18) goto LAB_02a777e4;
          }
          goto LAB_02a7775c;
        }
      }
LAB_02a777e4:
      if (puVar18 != (undefined8 *)0x0) {
        plVar16 = (long *)*puVar15;
        lVar21 = lVar21 - (long)puVar18;
        uVar11 = (**(code **)(*plVar16 + 0xc0))(plVar16);
        if ((uVar11 & 1) != 0) {
          lVar9 = tpidr_el0;
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            FUN_02bcc824(plVar16,puVar18,lVar21,8);
            goto LAB_02a77864;
          }
        }
        (**(code **)(*plVar16 + 0x18))(plVar16,puVar18,lVar21,8);
      }
    }
  }
  else {
    lVar9 = *param_2;
    if ((lVar9 == 0) || (*(int *)(lVar9 + 0xc) == 0)) {
      plVar16 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar9 + 0xc);
      iVar8 = *(int *)(lVar9 + 0xc);
      do {
        puVar15 = *(undefined8 **)(lVar9 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar10 = FUN_0093d69c();
          *(undefined8 *)puVar5 = uVar10;
          __cxa_guard_release(puVar4);
        }
        plVar16 = (long *)0x0;
        if (puVar15 == (undefined8 *)0x0) break;
        while (puVar15 != (undefined8 *)puVar5) {
          puVar15 = (undefined8 *)*puVar15;
          if (puVar15 == (undefined8 *)0x0) {
            plVar16 = (long *)0x0;
            goto LAB_02a775d4;
          }
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar8) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar16 = (long *)0x0;
            if (*(long *)(lVar9 + 0x18) != 0) {
              plVar16 = (long *)(*(long *)(lVar9 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar16 = (long *)0x0;
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_02a775d4:
    local_6c[0] = 1;
    FUN_02a78474(plVar16,local_6c);
    if (plVar16 != (long *)0x0) {
      lVar9 = plVar16[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
  }
LAB_02a77864:
  *(undefined8 *)(param_1 + 0x238) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x22c));
  return;
}


