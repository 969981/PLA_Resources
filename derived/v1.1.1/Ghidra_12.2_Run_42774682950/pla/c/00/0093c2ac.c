/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0093c2ac; name: FUN_0093c2ac
 */


void FUN_0093c2ac(long *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *local_58;
  undefined1 auStack_48 [8];
  
  lVar6 = nn::os::GetCurrentThread();
  plVar7 = (long *)(param_2 + 0x98);
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x8c));
        while (*plVar7 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0093c31c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0093c31c:
  plVar7 = (long *)FUN_0093c8fc(auStack_48,param_3);
  *param_1 = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) goto LAB_0093c66c;
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_58 = plVar7;
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
LAB_0093c66c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar10 = *(ulong *)(param_2 + 0x58);
  puVar2 = (undefined8 *)(param_2 + 0x68);
  if (uVar10 < *(ulong *)(param_2 + 0x60)) {
    FUN_0093d7b4(puVar2,uVar10,&local_58);
    *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + 8;
  }
  else {
    uVar13 = *(ulong *)(param_2 + 0x70);
    lVar6 = (long)(uVar10 - *(long *)(param_2 + 0x50)) >> 3;
    uVar10 = lVar6 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = *(ulong *)(param_2 + 0x60) - *(long *)(param_2 + 0x50);
    uVar12 = lVar11 >> 2;
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    if ((ulong)(lVar11 >> 3) < uVar13 >> 1) {
      uVar13 = uVar10;
    }
    if (uVar13 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar13 << 3,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar15 = lVar11 + lVar6 * 8;
    FUN_0093d7b4(puVar2,lVar15,&local_58);
    plVar7 = *(long **)(param_2 + 0x50);
    plVar14 = *(long **)(param_2 + 0x58);
    lVar6 = lVar15 + 8;
    if (plVar14 == plVar7) {
      plVar14 = plVar7;
    }
    else {
      do {
        lVar15 = lVar15 + -8;
        plVar14 = plVar14 + -1;
        FUN_0093d894(puVar2,lVar15,plVar14);
      } while (plVar7 != plVar14);
      plVar7 = *(long **)(param_2 + 0x50);
      plVar14 = *(long **)(param_2 + 0x58);
    }
    *(long *)(param_2 + 0x50) = lVar15;
    *(long *)(param_2 + 0x58) = lVar6;
    lVar6 = *(long *)(param_2 + 0x60);
    *(ulong *)(param_2 + 0x60) = lVar11 + uVar13 * 8;
    while (plVar14 != plVar7) {
      plVar14 = plVar14 + -1;
      plVar9 = (long *)*plVar14;
      if (plVar9 != (long *)0x0) {
        lVar11 = plVar9[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))();
        }
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar14 = (long *)*puVar2;
      lVar6 = lVar6 - (long)plVar7;
      uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar10 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar14,plVar7,lVar6,8);
          goto joined_r0x0093c5ec;
        }
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar7,lVar6,8);
    }
  }
joined_r0x0093c5ec:
  if (local_58 != (long *)0x0) {
    lVar6 = local_58[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  *(undefined8 *)(param_2 + 0x98) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x8c));
  return;
}


