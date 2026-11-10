/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba08ec; name: FUN_01ba08ec
 */


void FUN_01ba08ec(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *local_40;
  undefined1 auStack_38 [8];
  
  *(undefined1 *)(param_1 + 0x956) = 1;
  FUN_009c69bc(&local_40);
  if (local_40 != (long *)0x0) {
    lVar9 = FUN_009cd42c(local_40 + 0x1e,auStack_38);
    if (lVar9 != 0) {
      FUN_019f7be4(lVar9,0,0x40);
    }
    if (local_40 != (long *)0x0) {
      lVar9 = local_40[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x95c) = 0;
  puVar10 = (undefined8 *)FUN_01ba887c(*(undefined8 *)(param_1 + 0xab0));
  puVar8 = PTR_DAT_04379570;
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[7] = 0;
    *(undefined4 *)((long)puVar10 + 0x3f) = 0;
    *(undefined1 *)((long)puVar10 + 0x43) = 1;
    puVar10[5] = 0;
    puVar10[6] = 0;
    uVar4 = *(undefined8 *)puVar8;
    uVar5 = *(undefined8 *)(puVar8 + 8);
    puVar10[4] = 0;
    puVar10[0xd] = 0;
    puVar10[2] = uVar4;
    puVar10[3] = uVar5;
    *(undefined8 *)((long)puVar10 + 0x44) = 0x1ffff00000000;
    *(undefined4 *)((long)puVar10 + 0x4c) = 0xffff00;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
  }
  lVar11 = *(long *)(param_1 + 0xab0);
  lVar9 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar11 + 0x20);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x14));
        while (*plVar2 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01ba0a00;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01ba0a00:
  if (*(long *)(lVar11 + 8) != 0) {
    *(undefined8 *)(lVar11 + 8) = 0;
  }
  *(undefined8 *)(lVar11 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x14));
  return;
}


