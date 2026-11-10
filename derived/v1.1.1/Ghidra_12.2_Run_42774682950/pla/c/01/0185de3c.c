/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185de3c; name: FUN_0185de3c
 */


void FUN_0185de3c(long param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 local_58;
  
  lVar11 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x78);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0185dea8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0185dea8:
  puVar12 = (undefined8 *)
            FUN_0185e190(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),param_2);
  puVar13 = *(undefined8 **)(param_1 + 0xc0);
  lVar11 = (long)puVar13 - (long)puVar12;
  if (lVar11 == 0) goto LAB_0185dec0;
  if ((undefined8 *)((long)puVar12 + lVar11) == puVar13) {
    if (puVar13 != puVar12) {
LAB_0185df50:
      puVar8 = PTR_DAT_043794a8;
      puVar7 = PTR_DAT_043794a0;
      puVar6 = PTR_DAT_04379498;
      puVar14 = (undefined8 *)puVar13[-2];
      puVar13 = puVar13 + -4;
      if (puVar14 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar14 + 1);
        do {
          iVar10 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          puVar14[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)puVar7;
          *(long *)puVar8 = lVar11;
          local_58 = *puVar14;
          FUN_02a44274(lVar11 + 0xd8,&local_58);
        }
      }
      puVar14 = (undefined8 *)*puVar13;
      puVar5 = PTR_LAB_04379590;
      puVar9 = PTR_LAB_04379590;
      if (puVar14 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar14 + 1);
        do {
          iVar10 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar5 = PTR_LAB_04379590;
        puVar9 = PTR_LAB_04379590;
        if (iVar10 + -1 == 0) {
          puVar14[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)puVar7;
          *(long *)puVar8 = lVar11;
          local_58 = *puVar14;
          FUN_02a44274(lVar11 + 0xd8,&local_58);
          puVar5 = PTR_LAB_04379590;
          puVar9 = PTR_LAB_04379590;
        }
      }
      while (PTR_LAB_04379590 = puVar9, puVar9 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar5,
            puVar13 != puVar12) {
        puVar14 = (undefined8 *)puVar13[-2];
        puVar13 = puVar13 + -4;
        if (puVar14 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar14 + 1);
          do {
            iVar10 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            puVar14[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar11 = *(long *)puVar7;
            *(long *)puVar8 = lVar11;
            local_58 = *puVar14;
            FUN_02a44274(lVar11 + 0xd8,&local_58);
          }
        }
        puVar14 = (undefined8 *)*puVar13;
        puVar5 = PTR_LAB_04379590;
        if (puVar14 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar14 + 1);
          do {
            iVar10 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          puVar5 = PTR_LAB_04379590;
          if (iVar10 + -1 == 0) {
            puVar14[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar11 = *(long *)puVar7;
            *(long *)puVar8 = lVar11;
            local_58 = *puVar14;
            FUN_02a44274(lVar11 + 0xd8,&local_58);
            puVar5 = PTR_LAB_04379590;
          }
        }
      }
    }
  }
  else {
    do {
      FUN_00b6141c(puVar12,puVar12 + (lVar11 >> 5) * 4);
      FUN_00b5fc1c(puVar12 + 2,puVar12 + (lVar11 >> 5) * 4 + 2);
      puVar12 = puVar12 + 4;
    } while (puVar13 + (lVar11 >> 5) * -4 != puVar12);
    puVar13 = *(undefined8 **)(param_1 + 0xc0);
    if (puVar13 != puVar12) goto LAB_0185df50;
  }
  *(undefined8 **)(param_1 + 0xc0) = puVar12;
LAB_0185dec0:
  FUN_0185da44(param_1);
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return;
}


