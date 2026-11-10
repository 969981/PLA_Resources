/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ba0ec; name: FUN_028ba0ec
 */


void FUN_028ba0ec(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  lVar3 = nn::os::GetCurrentThread();
  plVar6 = (long *)(param_1 + 0x138);
  do {
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 300));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_028ba158;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_028ba158:
  plVar6 = *(long **)(param_1 + 0xc0);
  plVar7 = *(long **)(param_1 + 0xb8);
  if (*(long **)(param_1 + 0xb8) != plVar6) {
    do {
      while (plVar4 = plVar7 + 0x24, *plVar7 == *param_2) {
        plVar8 = plVar7;
        if (plVar4 == plVar6) {
LAB_028ba2b4:
          lVar3 = 0;
          do {
            pcVar5 = *(code **)((long)plVar6 + lVar3 + -0x78);
            if (pcVar5 != (code *)0x0) {
              *(undefined8 *)((long)plVar6 + lVar3 + -0x70) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0x68) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0x80) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0x78) = 0;
              (*pcVar5)((long)plVar6 + lVar3 + -0x60);
            }
            pcVar5 = *(code **)((long)plVar6 + lVar3 + -0xf8);
            if (pcVar5 != (code *)0x0) {
              *(undefined8 *)((long)plVar6 + lVar3 + -0xf0) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0xe8) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0x100) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0xf8) = 0;
              (*pcVar5)((long)plVar6 + lVar3 + -0xe0);
            }
            plVar4 = *(long **)((long)plVar6 + lVar3 + -0x108);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x20))();
            }
            lVar3 = lVar3 + -0x120;
          } while ((long)plVar8 - (long)plVar6 != lVar3);
        }
        else {
          do {
            *plVar8 = plVar8[0x24];
            plVar8[1] = plVar8[0x25];
            plVar4 = (long *)plVar8[3];
            plVar8[2] = plVar8[0x26];
            plVar8[3] = 0;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x20))();
            }
            lVar3 = plVar8[0x27];
            plVar8[0x27] = 0;
            plVar8[3] = lVar3;
            pcVar5 = (code *)plVar8[5];
            if (pcVar5 != (code *)0x0) {
              plVar8[6] = 0;
              plVar8[7] = 0;
              plVar8[4] = 0;
              plVar8[5] = 0;
              (*pcVar5)(plVar8 + 8);
            }
            if ((code *)plVar8[0x2b] != (code *)0x0) {
              (*(code *)plVar8[0x2b])(plVar8 + 0x2c,plVar8 + 8);
              pcVar5 = (code *)plVar8[0x29];
              plVar8[4] = plVar8[0x28];
              plVar8[5] = (long)pcVar5;
              plVar8[6] = plVar8[0x2a];
              plVar8[7] = plVar8[0x2b];
              if (pcVar5 != (code *)0x0) {
                plVar8[0x2a] = 0;
                plVar8[0x2b] = 0;
                plVar8[0x28] = 0;
                plVar8[0x29] = 0;
                (*pcVar5)(plVar8 + 0x2c);
              }
            }
            pcVar5 = (code *)plVar8[0x15];
            if (pcVar5 != (code *)0x0) {
              plVar8[0x16] = 0;
              plVar8[0x17] = 0;
              plVar8[0x14] = 0;
              plVar8[0x15] = 0;
              (*pcVar5)(plVar8 + 0x18);
            }
            if ((code *)plVar8[0x3b] != (code *)0x0) {
              (*(code *)plVar8[0x3b])(plVar8 + 0x3c,plVar8 + 0x18);
              pcVar5 = (code *)plVar8[0x39];
              plVar8[0x14] = plVar8[0x38];
              plVar8[0x15] = (long)pcVar5;
              plVar8[0x16] = plVar8[0x3a];
              plVar8[0x17] = plVar8[0x3b];
              if (pcVar5 != (code *)0x0) {
                plVar8[0x3a] = 0;
                plVar8[0x3b] = 0;
                plVar8[0x38] = 0;
                plVar8[0x39] = 0;
                (*pcVar5)(plVar8 + 0x3c);
              }
            }
            plVar8 = plVar8 + 0x24;
          } while (plVar6 + -0x24 != plVar8);
          plVar6 = *(long **)(param_1 + 0xc0);
          if (plVar6 != plVar8) goto LAB_028ba2b4;
        }
        plVar6 = plVar8;
        *(long **)(param_1 + 0xc0) = plVar6;
        if (plVar7 == plVar6) goto LAB_028ba31c;
      }
      plVar7 = plVar4;
    } while (plVar4 != plVar6);
  }
LAB_028ba31c:
  *(undefined8 *)(param_1 + 0x138) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 300));
  return;
}


