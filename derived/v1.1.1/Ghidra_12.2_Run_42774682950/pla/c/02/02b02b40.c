/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b02b40; name: FUN_02b02b40
 */


void FUN_02b02b40(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  size_t __n;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *__dest;
  undefined8 *__src;
  
  *param_1 = &PTR_FUN_04283660;
  param_1[9] = &PTR_LAB_04283698;
  lVar6 = DAT_043ef5b0;
  lVar7 = nn::os::GetCurrentThread();
  plVar8 = (long *)(lVar6 + 0xf0);
  do {
    if (*plVar8 != 0 || *(long *)(lVar6 + 0xf8) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xe4));
        while (*plVar8 == 0 && *(long *)(lVar6 + 0xf8) == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar7;
            *(undefined8 *)(lVar6 + 0xf8) = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02b02bc8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar7;
      *(undefined8 *)(lVar6 + 0xf8) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b02bc8:
  __src = *(undefined8 **)(lVar6 + 0x100);
  do {
    __dest = __src;
    if (*(undefined8 **)(lVar6 + 0x108) == __dest) goto LAB_02b02c04;
    __src = __dest + 1;
  } while ((undefined8 *)*__dest != param_1 + 0x2b);
  __n = (long)*(undefined8 **)(lVar6 + 0x108) - (long)__src;
  if (__n != 0) {
    memmove(__dest,__src,__n);
  }
  *(undefined8 **)(lVar6 + 0x108) = __src + ((long)__n >> 3) + -1;
LAB_02b02c04:
  do {
    lVar7 = *plVar8;
    lVar9 = *(long *)(lVar6 + 0xf8);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar7;
      *(long *)(lVar6 + 0xf8) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    if (*plVar8 != lVar7 || *(long *)(lVar6 + 0xf8) != lVar9) {
      ClearExclusiveLocal();
      lVar7 = *plVar8;
      lVar9 = *(long *)(lVar6 + 0xf8);
      goto LAB_02b02da8;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = 0;
      *(long *)(lVar6 + 0xf4) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_02b02c48;
LAB_02b02da8:
  do {
    lVar2 = *plVar8;
    if (lVar2 == lVar7 && *(long *)(lVar6 + 0xf8) == lVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = 0;
        *(long *)(lVar6 + 0xf4) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_02b02da8;
      bVar4 = true;
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    lVar7 = lVar2;
    lVar9 = *(long *)(lVar6 + 0xf8);
  } while (!bVar4);
LAB_02b02c48:
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xe4));
  param_1[0x22] = &PTR_LAB_04283700;
  FUN_02b05c6c(param_1 + 0x23);
  param_1[0x19] = &PTR_LAB_04283730;
  FUN_02b05f14(param_1 + 0x1a);
  plVar8 = (long *)param_1[0x17];
  if (plVar8 == (long *)0x0) {
LAB_02b02c98:
    plVar8 = (long *)param_1[0x15];
  }
  else {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_02b02c98;
    (**(code **)(*plVar8 + 0x10))();
    plVar8 = (long *)param_1[0x15];
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  FUN_014bd284(param_1 + 0xe);
  plVar8 = (long *)param_1[0xd];
  if (plVar8 == (long *)0x0) {
LAB_02b02ce0:
    plVar8 = (long *)param_1[0xc];
  }
  else {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_02b02ce0;
    (**(code **)(*plVar8 + 0x10))();
    plVar8 = (long *)param_1[0xc];
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
      plVar8 = (long *)param_1[0xb];
      goto joined_r0x02b02d84;
    }
  }
  plVar8 = (long *)param_1[0xb];
joined_r0x02b02d84:
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02b02da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x10))();
      return;
    }
  }
  return;
}


