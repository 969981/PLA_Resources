/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b2914; name: FUN_028b2914
 */


void FUN_028b2914(long param_1,undefined8 *param_2,byte param_3)

{
  long *plVar1;
  LightEventType *pLVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char local_58;
  char local_57;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x360);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x354));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_028b2984;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_028b2984:
  if ((ulong)*(uint *)((long)param_2 + 4) <
      (ulong)((*(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0) >> 4) * -0x5555555555555555)) {
    cVar3 = *(char *)(*(long *)(param_1 + 0xe0) + (ulong)*(uint *)((long)param_2 + 4) * 0x30 + 0x28)
    ;
    pLVar2 = (LightEventType *)(param_1 + 0x354);
    *(undefined8 *)(param_1 + 0x360) = 0;
    nn::os::SignalLightEvent(pLVar2);
    if ((ulong)*(uint *)((long)param_2 + 4) <
        (ulong)((*(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0) >> 4) * -0x5555555555555555))
    {
      *(byte *)(*(long *)(param_1 + 0xe0) + (ulong)*(uint *)((long)param_2 + 4) * 0x30 + 0x28) =
           param_3 & 1;
      lVar6 = nn::os::GetCurrentThread();
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar2);
            while (*plVar1 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_028b2a34;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_028b2a34:
      if ((ulong)*(uint *)((long)param_2 + 4) <
          (ulong)((*(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0) >> 4) * -0x5555555555555555
                 )) {
        cVar4 = *(char *)(*(long *)(param_1 + 0xe0) + (ulong)*(uint *)((long)param_2 + 4) * 0x30 +
                         0x28);
        *(undefined8 *)(param_1 + 0x360) = 0;
        nn::os::SignalLightEvent(pLVar2);
        if ((cVar3 != '\0') != (cVar4 != '\0') && *(long *)(param_1 + 0x250) != 0) {
          puVar7 = (undefined8 *)FUN_028b27e0(param_1,param_2);
          local_80 = *puVar7;
          local_60 = *param_2;
          local_78 = puVar7[1];
          local_70 = puVar7[2];
          local_68 = (long *)puVar7[3];
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x18))();
          }
          local_58 = cVar3;
          local_57 = cVar4;
          (**(code **)(param_1 + 0x250))(param_1 + 0x270,&local_80);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


