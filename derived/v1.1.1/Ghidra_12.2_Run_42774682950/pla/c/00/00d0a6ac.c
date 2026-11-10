/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d0a6ac; name: FUN_00d0a6ac
 */


void FUN_00d0a6ac(long *param_1)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 local_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  lVar11 = *param_1;
  FUN_02a75858(&local_50,*(long *)(lVar11 + 0x70),*(undefined8 *)(*(long *)(lVar11 + 0x70) + 0x250))
  ;
  *(undefined8 *)(lVar11 + 0x98) = local_50;
  FUN_008802f0(lVar11 + 0xa0,local_48);
  if (local_48[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48[0] + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      local_48[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_38 = *local_48[0];
      FUN_02a44274(lVar8 + 0xd8,&local_38);
    }
  }
  *(undefined1 *)(lVar11 + 0xe1) = 1;
  lVar11 = param_1[1];
  if ((*(byte *)(lVar11 + 0x79) & 1) == 0) {
    lVar8 = nn::os::GetCurrentThread();
    plVar2 = (long *)(lVar11 + 0x90);
    do {
      if (*plVar2 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x84));
          while (*plVar2 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00d0a7b4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00d0a7b4:
    puVar10 = *(undefined8 **)(lVar11 + 0x98);
    puVar3 = *(undefined8 **)(lVar11 + 0xa0);
    if (puVar10 != puVar3) {
      do {
        if ((*(byte *)(lVar11 + 0x79) & 1) == 0) {
          (*(code *)*puVar10)(puVar10 + 4);
        }
        if ((*(byte *)(lVar11 + 0x79) & 1) != 0) {
          (*(code *)**(undefined8 **)puVar10[0x10])();
          *(int *)(lVar11 + 0x7c) = *(int *)(lVar11 + 0x7c) + 1;
        }
        puVar10 = puVar10 + 0x12;
      } while (puVar3 != puVar10);
      puVar10 = *(undefined8 **)(lVar11 + 0x98);
      puVar3 = *(undefined8 **)(lVar11 + 0xa0);
      while (puVar6 = puVar3, puVar6 != puVar10) {
        pcVar9 = (code *)puVar6[-0x11];
        puVar3 = puVar6 + -0x12;
        if (pcVar9 != (code *)0x0) {
          puVar6[-0x10] = 0;
          puVar6[-0xf] = 0;
          puVar6[-0x12] = 0;
          puVar6[-0x11] = 0;
          (*pcVar9)(puVar6 + -0xe);
        }
      }
    }
    *(undefined8 **)(lVar11 + 0xa0) = puVar10;
    *(undefined1 *)(lVar11 + 0x78) = 1;
    *(undefined1 *)(lVar11 + 0x68) = 1;
    *(undefined8 *)(lVar11 + 0x90) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x84));
  }
  return;
}


