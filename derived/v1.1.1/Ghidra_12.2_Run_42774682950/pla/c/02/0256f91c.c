/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256f91c; name: FUN_0256f91c
 */


void FUN_0256f91c(float param_1,float param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  float *pfVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined *local_88;
  long *plStack_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined1 local_48;
  float local_38;
  float local_34;
  
  local_38 = param_2;
  local_34 = param_1;
  lVar8 = nn::os::GetCurrentThread();
  plVar15 = (long *)(param_3 + 0x4e0);
  do {
    if (*plVar15 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x4d4));
        while (*plVar15 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_0256f984;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_0256f984:
  pfVar10 = (float *)&DAT_039c72d4;
  if (local_34 <= 1.0) {
    pfVar10 = &local_34;
  }
  pfVar4 = (float *)&DAT_039c72d8;
  if (0.0 <= local_34) {
    pfVar4 = pfVar10;
  }
  *(float *)(param_3 + 0x438) = *pfVar4;
  pfVar10 = (float *)&DAT_039c72ec;
  if (local_38 <= 5.0) {
    pfVar10 = &local_38;
  }
  if (local_38 < 0.001) {
    pfVar10 = (float *)&DAT_039c72f4;
  }
  *(float *)(param_3 + 0x43c) = *pfVar10;
  plVar15 = *(long **)(param_3 + 0x2d0);
  if (plVar15 != (long *)0x0) {
    puVar2 = PTR_DAT_04387990 + 0x10;
    do {
      plStack_80 = (long *)plVar15[4];
      local_88 = puVar2;
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 0x18))();
      }
      local_78 = plVar15[5];
      if (local_78 != 0) {
        lVar8 = *(long *)(local_78 + 0x58);
        if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0256fce0;
        if (*(long *)(lVar8 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
          *(undefined8 *)(lVar8 + 0x10) = uVar9;
        }
        piVar3 = (int *)(lVar8 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      local_70 = plVar15[6];
      if (local_70 != 0) {
        lVar8 = *(long *)(local_70 + 0x58);
        if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0256fce0;
        if (*(long *)(lVar8 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
          *(undefined8 *)(lVar8 + 0x10) = uVar9;
        }
        piVar3 = (int *)(lVar8 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      local_68 = plVar15[7];
      if (local_68 != 0) {
        lVar8 = *(long *)(local_68 + 0x58);
        if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0256fce0;
        if (*(long *)(lVar8 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
          *(undefined8 *)(lVar8 + 0x10) = uVar9;
        }
        piVar3 = (int *)(lVar8 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      local_60 = plVar15[8];
      if (local_60 != 0) {
        lVar8 = *(long *)(local_60 + 0x58);
        if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_0256fce0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar8 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
          *(undefined8 *)(lVar8 + 0x10) = uVar9;
        }
        piVar3 = (int *)(lVar8 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      local_58 = plVar15[9];
      if (local_58 != 0) {
        piVar3 = (int *)(local_58 + 0x50);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      local_50 = plVar15[10];
      local_48 = (undefined1)plVar15[0xb];
      plVar11 = *(long **)(local_70 + 0x208);
      plVar13 = *(long **)(local_70 + 0x210);
      if (plVar11 != plVar13) {
        uVar5 = *(undefined4 *)(param_3 + 0x438);
        uVar14 = (long)plVar13 + (-8 - (long)plVar11);
        uVar1 = ((uint)(uVar14 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 7) != 0) {
          lVar8 = -((ulong)uVar1 & 7);
          plVar12 = plVar11;
          do {
            plVar11 = plVar12 + 1;
            bVar7 = lVar8 != -1;
            lVar8 = lVar8 + 1;
            *(undefined4 *)(*plVar12 + 0x2ac) = uVar5;
            plVar12 = plVar11;
          } while (bVar7);
        }
        if (0x37 < uVar14) {
          do {
            *(undefined4 *)(*plVar11 + 0x2ac) = uVar5;
            *(undefined4 *)(plVar11[1] + 0x2ac) = uVar5;
            *(undefined4 *)(plVar11[2] + 0x2ac) = uVar5;
            *(undefined4 *)(plVar11[3] + 0x2ac) = uVar5;
            *(undefined4 *)(plVar11[4] + 0x2ac) = uVar5;
            *(undefined4 *)(plVar11[5] + 0x2ac) = uVar5;
            *(undefined4 *)(plVar11[6] + 0x2ac) = uVar5;
            plVar12 = plVar11 + 7;
            plVar11 = plVar11 + 8;
            *(undefined4 *)(*plVar12 + 0x2ac) = uVar5;
          } while (plVar11 != plVar13);
        }
        plVar11 = *(long **)(local_70 + 0x208);
        plVar13 = *(long **)(local_70 + 0x210);
        if (plVar11 != plVar13) {
          uVar5 = *(undefined4 *)(param_3 + 0x43c);
          uVar14 = (long)plVar13 + (-8 - (long)plVar11);
          uVar1 = ((uint)(uVar14 >> 3) & 0x1fffffff) + 1;
          if ((uVar1 & 7) != 0) {
            lVar8 = -((ulong)uVar1 & 7);
            plVar12 = plVar11;
            do {
              plVar11 = plVar12 + 1;
              bVar7 = lVar8 != -1;
              lVar8 = lVar8 + 1;
              *(undefined4 *)(*plVar12 + 0x2b0) = uVar5;
              plVar12 = plVar11;
            } while (bVar7);
          }
          if (0x37 < uVar14) {
            do {
              *(undefined4 *)(*plVar11 + 0x2b0) = uVar5;
              *(undefined4 *)(plVar11[1] + 0x2b0) = uVar5;
              *(undefined4 *)(plVar11[2] + 0x2b0) = uVar5;
              *(undefined4 *)(plVar11[3] + 0x2b0) = uVar5;
              *(undefined4 *)(plVar11[4] + 0x2b0) = uVar5;
              *(undefined4 *)(plVar11[5] + 0x2b0) = uVar5;
              *(undefined4 *)(plVar11[6] + 0x2b0) = uVar5;
              plVar12 = plVar11 + 7;
              plVar11 = plVar11 + 8;
              *(undefined4 *)(*plVar12 + 0x2b0) = uVar5;
            } while (plVar11 != plVar13);
          }
        }
      }
      FUN_0256719c(&local_88);
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
  }
  *(undefined8 *)(param_3 + 0x4e0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_3 + 0x4d4));
  return;
}


