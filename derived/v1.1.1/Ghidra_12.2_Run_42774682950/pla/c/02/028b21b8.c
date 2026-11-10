/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b21b8; name: FUN_028b21b8
 */


void FUN_028b21b8(float param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  LightEventType *pLVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  ushort *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  float local_68;
  float fStack_64;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_2 + 0x360);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x354));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_028b222c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_028b222c:
  if ((ulong)*(uint *)((long)param_3 + 4) <
      (ulong)((*(long *)(param_2 + 0xb0) - *(long *)(param_2 + 0xa8) >> 4) * -0x5555555555555555)) {
    fVar12 = *(float *)(*(long *)(param_2 + 0xa8) + (ulong)*(uint *)((long)param_3 + 4) * 0x30 +
                       0x28);
    pLVar2 = (LightEventType *)(param_2 + 0x354);
    *(undefined8 *)(param_2 + 0x360) = 0;
    nn::os::SignalLightEvent(pLVar2);
    lVar5 = *(long *)(param_2 + 0xa8);
    uVar7 = (ulong)*(uint *)((long)param_3 + 4);
    if (uVar7 < (ulong)((*(long *)(param_2 + 0xb0) - lVar5 >> 4) * -0x5555555555555555)) {
      piVar8 = *(int **)(lVar5 + uVar7 * 0x30);
      puVar9 = (ushort *)((long)piVar8 - (long)*piVar8);
      if (*puVar9 < 7) {
        fVar10 = 0.0;
        fVar11 = 0.0;
      }
      else {
        fVar11 = 0.0;
        fVar10 = 0.0;
        if ((ulong)puVar9[3] != 0) {
          fVar10 = *(float *)((long)piVar8 + (ulong)puVar9[3]);
        }
        if ((8 < *puVar9) && ((ulong)puVar9[4] != 0)) {
          fVar11 = *(float *)((long)piVar8 + (ulong)puVar9[4]);
        }
      }
      if (param_1 <= fVar11) {
        fVar11 = param_1;
      }
      if (fVar10 <= fVar11) {
        fVar10 = fVar11;
      }
      *(float *)(lVar5 + uVar7 * 0x30 + 0x28) = fVar10;
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar2);
            while (*plVar1 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_028b2330;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_028b2330:
      if ((ulong)*(uint *)((long)param_3 + 4) <
          (ulong)((*(long *)(param_2 + 0xb0) - *(long *)(param_2 + 0xa8) >> 4) * -0x5555555555555555
                 )) {
        fVar11 = *(float *)(*(long *)(param_2 + 0xa8) + (ulong)*(uint *)((long)param_3 + 4) * 0x30 +
                           0x28);
        *(undefined8 *)(param_2 + 0x360) = 0;
        nn::os::SignalLightEvent(pLVar2);
        if (fVar12 != fVar11 && *(long *)(param_2 + 0x1d0) != 0) {
          puVar6 = (undefined8 *)FUN_028b2084(param_2,param_3);
          local_90 = *puVar6;
          local_70 = *param_3;
          local_88 = puVar6[1];
          local_80 = puVar6[2];
          local_78 = (long *)puVar6[3];
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x18))();
          }
          local_68 = fVar12;
          fStack_64 = fVar11;
          (**(code **)(param_2 + 0x1d0))(param_2 + 0x1f0,&local_90);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


