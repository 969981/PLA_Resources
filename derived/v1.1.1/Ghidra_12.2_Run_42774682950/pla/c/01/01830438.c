/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01830438; name: FUN_01830438
 */


uint FUN_01830438(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  long *local_38;
  
  fVar12 = (float)FUN_01830208();
  if (0.0 < fVar12) {
    plVar1 = (long *)(param_1 + 0x280);
    lVar11 = *plVar1;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 == lVar11) {
      bVar5 = false;
      lVar10 = 0;
      if (*(char *)(param_1 + 0x290) == '\0') goto LAB_0183052c;
LAB_018304e0:
      bVar8 = *(char *)(param_1 + 0x2c8) != '\0';
      bVar6 = false;
      uVar9 = (uint)bVar8;
      uVar7 = (uint)bVar8;
      if (bVar5) {
LAB_018304f4:
        uVar9 = uVar7;
        *(undefined8 *)(lVar10 + 0x10) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar10 + 4));
      }
    }
    else {
      lVar10 = param_1 + 0x270;
      lVar11 = nn::os::GetCurrentThread();
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x274));
            while (*plVar1 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_018304d4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_018304d4:
      bVar5 = true;
      if (*(char *)(param_1 + 0x290) != '\0') goto LAB_018304e0;
LAB_0183052c:
      uVar9 = (uint)lVar11;
      bVar6 = true;
      uVar7 = uVar9;
      if (bVar5) goto LAB_018304f4;
    }
    if (!bVar6) goto LAB_01830460;
    if (*(long *)(param_1 + 0x250) == 0) {
      uVar9 = 0;
      goto LAB_01830460;
    }
    FUN_00b91400(&local_38);
    if (local_38 != (long *)0x0) {
      uVar9 = FUN_01c3c354();
      if (local_38 != (long *)0x0) {
        lVar10 = local_38[0xb];
        piVar2 = (int *)(lVar10 + 0xc);
        do {
          iVar3 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
      goto LAB_01830460;
    }
  }
  uVar9 = 0;
LAB_01830460:
  return uVar9 & 1;
}


