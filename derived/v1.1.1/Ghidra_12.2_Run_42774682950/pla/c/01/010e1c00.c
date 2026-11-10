/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e1c00; name: FUN_010e1c00
 */


void FUN_010e1c00(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 int param_7,long *param_8,long *param_9)

{
  void *__src;
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint local_68;
  uint uStack_64;
  
  if (((0x1f < (param_4 | param_2)) || (6 < param_3 % 6 + param_6 || 5 < param_3 / 6 + param_7)) ||
     (6 < param_5 % 6 + param_6 || 5 < param_5 / 6 + param_7)) {
    return;
  }
  pvVar5 = (void *)(**(code **)(*param_9 + 0x10))(param_9,param_6 * param_7 * 0x168,8);
  if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_02c5d39c(*param_8);
  if ((param_7 != 0) && (param_6 != 0)) {
    iVar7 = 0;
    pvVar8 = pvVar5;
    do {
      uVar13 = 0;
      do {
        uVar12 = param_3 + iVar7 * 6 + (int)uVar13;
        __src = (void *)(param_1 + (ulong)param_2 * 0x2a30 + (ulong)uVar12 * 0x168 + 0x68);
        memcpy(pvVar8,__src,0x168);
        lVar11 = *(long *)(*param_8 + 0x98);
        lVar6 = nn::os::GetCurrentThread();
        plVar1 = (long *)(lVar11 + 0x30);
        do {
          if (*plVar1 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x24));
              while (*plVar1 == 0) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar6;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_010e1dd4;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_010e1dd4:
        FUN_02c65ef8(lVar11,__src,0);
        *(undefined8 *)(lVar11 + 0x30) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x24));
        local_68 = param_2;
        uStack_64 = uVar12;
        FUN_010e2068(param_1 + 0x54670,iVar7 * param_6 + (int)uVar13,&local_68);
        uVar12 = uVar12 + param_2 * 0x1e;
        if (0x3bf < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_010e4430();
        }
        lVar6 = param_1 + ((ulong)(uVar12 >> 3) & 0x1ffffff8);
        *(ulong *)(lVar6 + 0x54670) =
             *(ulong *)(lVar6 + 0x54670) & (1L << ((ulong)uVar12 & 0x3f) ^ 0xffffffffffffffffU);
        uVar13 = uVar13 + 1;
        pvVar8 = (void *)((long)pvVar8 + 0x168);
      } while (uVar13 != param_6);
      iVar7 = iVar7 + 1;
    } while (iVar7 != param_7);
    iVar10 = 0;
    iVar7 = 0;
    pvVar8 = pvVar5;
    do {
      uVar13 = (ulong)param_6;
      uVar12 = param_5;
      iVar9 = iVar10;
      do {
        (**(code **)(*(long *)*param_8 + 0x28))((long *)*param_8,pvVar8);
        iVar4 = FUN_02c6849c(*(undefined8 *)(*param_8 + 0x98));
        if (iVar4 != 0) {
          memcpy((void *)(param_1 + (ulong)param_4 * 0x2a30 + (ulong)uVar12 * 0x168 + 0x68),pvVar8,
                 0x168);
          local_68 = param_4;
          uStack_64 = uVar12;
          FUN_010e20e4(param_1 + 0x54670,&local_68,iVar9);
        }
        pvVar8 = (void *)((long)pvVar8 + 0x168);
        uVar13 = uVar13 - 1;
        iVar9 = iVar9 + 1;
        uVar12 = uVar12 + 1;
      } while (uVar13 != 0);
      iVar10 = iVar10 + param_6;
      iVar7 = iVar7 + 1;
      param_5 = param_5 + 6;
    } while (iVar7 != param_7);
  }
  uVar13 = (**(code **)(*param_9 + 0xc0))(param_9);
  if ((uVar13 & 1) != 0) {
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(param_9,pvVar5,0x168,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x010e1fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_9 + 0x18))(param_9,pvVar5,0x168,8);
  return;
}


