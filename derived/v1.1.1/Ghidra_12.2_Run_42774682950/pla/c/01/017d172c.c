/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d172c; name: FUN_017d172c
 */


void FUN_017d172c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *__dest;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = 0;
  *param_1 = (long)&PTR_LAB_04225538;
  do {
    if (*(long *)((long)param_1 + lVar7 + 0x20) != 0) {
      (**(code **)(**(long **)((long)param_1 + lVar7 + 0x10) + 0xb8))();
    }
    lVar7 = lVar7 + 0x28;
  } while (lVar7 != 0x488);
  if ((long *)param_1[0x8d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8d] + 0x20))();
  }
  if ((long *)param_1[0x88] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x88] + 0x20))();
  }
  if ((long *)param_1[0x83] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x83] + 0x20))();
  }
  if ((long *)param_1[0x7e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x7e] + 0x20))();
  }
  if ((long *)param_1[0x79] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x79] + 0x20))();
  }
  if ((long *)param_1[0x74] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x74] + 0x20))();
  }
  if ((long *)param_1[0x6f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x6f] + 0x20))();
  }
  if ((long *)param_1[0x6a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x6a] + 0x20))();
  }
  if ((long *)param_1[0x65] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x65] + 0x20))();
  }
  if ((long *)param_1[0x60] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x60] + 0x20))();
  }
  if ((long *)param_1[0x5b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5b] + 0x20))();
  }
  if ((long *)param_1[0x56] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x56] + 0x20))();
  }
  if ((long *)param_1[0x51] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x51] + 0x20))();
  }
  if ((long *)param_1[0x4c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4c] + 0x20))();
  }
  if ((long *)param_1[0x47] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x47] + 0x20))();
  }
  if ((long *)param_1[0x42] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x42] + 0x20))();
  }
  if ((long *)param_1[0x3d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3d] + 0x20))();
  }
  if ((long *)param_1[0x38] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x38] + 0x20))();
  }
  if ((long *)param_1[0x33] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x33] + 0x20))();
  }
  if ((long *)param_1[0x2e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2e] + 0x20))();
  }
  if ((long *)param_1[0x29] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x29] + 0x20))();
  }
  if ((long *)param_1[0x24] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x24] + 0x20))();
  }
  if ((long *)param_1[0x1f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1f] + 0x20))();
  }
  if ((long *)param_1[0x1a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a] + 0x20))();
  }
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 0x20))();
  }
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 0x20))();
  }
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 0x20))();
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x20))();
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x20))();
  }
  *param_1 = (long)(PTR_DAT_0437a000 + 0x10);
  if (((DAT_043f1fd0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_043f1fd0), iVar5 != 0)) {
    nn::os::InitializeLightEvent(&DAT_043f1fbc,0,1);
    DAT_043f1fc8 = 0;
    FUN_00100250(PTR_LAB_04381908,&DAT_043f1fb8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043f1fd0);
  }
  lVar7 = nn::os::GetCurrentThread();
  do {
    if (DAT_043f1fc8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)&DAT_043f1fbc);
        while (DAT_043f1fc8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(0x43f1fc8,0x10);
          if (bVar4) {
            cVar3 = ExclusiveMonitorsStatus();
            DAT_043f1fc8 = lVar7;
          }
          if (cVar3 == '\0') goto LAB_017d1a14;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x43f1fc8,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      DAT_043f1fc8 = lVar7;
    }
  } while (cVar3 != '\0');
LAB_017d1a14:
  lVar7 = DAT_043f1fb0 * 8;
  puVar2 = &DAT_043f17b0 + DAT_043f1fb0;
  __dest = &DAT_043f17b0;
  if ((lVar7 != 0) && (DAT_043f17b0 != param_1)) {
    puVar6 = &DAT_043f17b0;
    do {
      lVar7 = lVar7 + -8;
      if (lVar7 == 0) {
        __dest = puVar2;
        break;
      }
      __dest = puVar6 + 1;
      puVar1 = puVar6 + 1;
      puVar6 = __dest;
    } while ((long *)*puVar1 != param_1);
  }
  if (puVar2 != __dest) {
    puVar6 = __dest + 1;
    if (puVar6 != puVar2) {
      memmove(__dest,puVar6,(long)puVar2 - (long)puVar6);
    }
    DAT_043f1fb0 = DAT_043f1fb0 + -1;
  }
  DAT_043f1fc8 = 0;
  nn::os::SignalLightEvent((LightEventType *)&DAT_043f1fbc);
  return;
}


