/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a43fdc; name: FUN_02a43fdc
 */


int FUN_02a43fdc(int *param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 local_38;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar12 = (long *)(param_1 + 0x36);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x33));
        while (*plVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02a4403c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02a4403c:
  lVar7 = *(long *)(param_1 + 0x16);
  if (lVar7 == 0) {
    iVar10 = param_1[1];
    param_1[1] = iVar10 + 1;
  }
  else {
    uVar8 = *(long *)(param_1 + 0x14) + lVar7 + -1;
    iVar10 = *(int *)(*(long *)(*(long *)(param_1 + 6) + (uVar8 >> 7 & 0x1fffffffffffff8)) +
                     (uVar8 & 0x3ff) * 4);
    *(long *)(param_1 + 0x16) = lVar7 + -1;
    lVar6 = *(long *)(param_1 + 8) - *(long *)(param_1 + 6);
    lVar2 = 0;
    if (lVar6 != 0) {
      lVar2 = lVar6 * 0x80 + -1;
    }
    if (0x7ff < (lVar2 - (lVar7 + *(long *)(param_1 + 0x14))) + 1U) {
      plVar12 = *(long **)(param_1 + 0x18);
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 8) + -8);
      uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar8 & 1) == 0) {
LAB_02a440f0:
        (**(code **)(*plVar12 + 0x18))(plVar12,uVar11,0x1000,4);
      }
      else {
        lVar7 = tpidr_el0;
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02a440f0;
        FUN_02bcc824(plVar12,uVar11,0x1000,4);
      }
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -8;
    }
  }
  uVar5 = iVar10 - *param_1;
  if ((ulong)uVar5 < *(ulong *)(param_1 + 0x30)) goto LAB_02a441b4;
  uVar1 = uVar5 + 1;
  uVar13 = (ulong)uVar1;
  uVar8 = (ulong)(uVar1 >> 6);
  if ((uVar1 & 0x3f) != 0) {
    uVar8 = uVar8 + 1;
  }
  uVar9 = *(long *)(param_1 + 0x24) - *(long *)(param_1 + 0x22) >> 3;
  local_38 = 0;
  if (uVar8 - uVar9 == 0) {
LAB_02a44194:
    *(ulong *)(param_1 + 0x30) = uVar13;
  }
  else {
    if (uVar8 < uVar9) {
      if (uVar8 < uVar9) {
        *(ulong *)(param_1 + 0x24) = *(long *)(param_1 + 0x22) + uVar8 * 8;
      }
      goto LAB_02a44194;
    }
    FUN_02a45e20(param_1 + 0x22,uVar8 - uVar9,&local_38);
    *(ulong *)(param_1 + 0x30) = uVar13;
  }
  if ((uVar1 & 0x3f) != 0) {
    *(ulong *)(*(long *)(param_1 + 0x24) + -8) =
         *(ulong *)(*(long *)(param_1 + 0x24) + -8) & (-1L << (uVar13 & 0x3f) ^ 0xffffffffffffffffU)
    ;
  }
LAB_02a441b4:
  uVar8 = (ulong)(uVar5 >> 3) & 0x1ffffff8;
  *(ulong *)(*(long *)(param_1 + 0x22) + uVar8) =
       *(ulong *)(*(long *)(param_1 + 0x22) + uVar8) | 1L << ((ulong)uVar5 & 0x3f);
  param_1[2] = param_1[2] + 1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x33));
  return iVar10;
}


