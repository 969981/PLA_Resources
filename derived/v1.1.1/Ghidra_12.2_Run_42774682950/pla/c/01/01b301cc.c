/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b301cc; name: FUN_01b301cc
 */


void FUN_01b301cc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  do {
    lVar5 = param_1;
    param_1 = lVar5;
    if (*(long *)(lVar5 + 0x1d0) != 0) {
      param_1 = *(long *)(lVar5 + 0x1d0);
    }
  } while (param_1 != lVar5);
  if ((*(byte *)(lVar5 + 0x1e0) >> 4 & 1) != 0) {
    if (((*(byte *)(lVar5 + 0x2b0) & 1) == 0) ||
       (lVar7 = *(long *)(lVar5 + 0x2a8), lVar6 = nn::os::GetCurrentThread(), lVar6 != lVar7)) {
      lVar6 = nn::os::GetCurrentThread();
      plVar1 = (long *)(lVar5 + 0x2a8);
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x29c));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01b3025c;
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
LAB_01b3025c:
      local_a0 = *param_2;
      uStack_98 = param_2[1];
      local_c0 = &LAB_01b37ca4;
      local_b8 = FUN_01b37efc;
      local_b0 = &LAB_01b37f00;
      puStack_a8 = &LAB_01b37f0c;
      if (*(ulong *)(lVar5 + 0x220) < *(ulong *)(lVar5 + 0x228)) {
        FUN_00d9361c(lVar5 + 0x230,*(ulong *)(lVar5 + 0x220),&local_c0);
        *(long *)(lVar5 + 0x220) = *(long *)(lVar5 + 0x220) + 0x80;
        pcVar4 = local_b8;
      }
      else {
        FUN_01b36ae4(lVar5 + 0x218,&local_c0);
        pcVar4 = local_b8;
      }
      local_b8 = pcVar4;
      if (pcVar4 != (code *)0x0) {
        local_b0 = (undefined1 *)0x0;
        puStack_a8 = (undefined1 *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar4)(&local_a0);
      }
      *(undefined1 *)(lVar5 + 0x250) = 1;
      *(undefined8 *)(lVar5 + 0x2a8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x29c));
    }
    else {
      local_a0 = *param_2;
      uStack_98 = param_2[1];
      local_c0 = &LAB_01b37ca4;
      local_b8 = FUN_01b37efc;
      local_b0 = &LAB_01b37f00;
      puStack_a8 = &LAB_01b37f0c;
      if (*(ulong *)(lVar5 + 0x260) < *(ulong *)(lVar5 + 0x268)) {
        FUN_00d9361c(lVar5 + 0x270,*(ulong *)(lVar5 + 0x260),&local_c0);
        *(long *)(lVar5 + 0x260) = *(long *)(lVar5 + 0x260) + 0x80;
        pcVar4 = local_b8;
      }
      else {
        FUN_01b36ae4(lVar5 + 600,&local_c0);
        pcVar4 = local_b8;
      }
      if (pcVar4 != (code *)0x0) {
        local_b0 = (undefined1 *)0x0;
        puStack_a8 = (undefined1 *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar4)(&local_a0);
      }
      *(undefined1 *)(lVar5 + 0x290) = 1;
    }
  }
  return;
}


