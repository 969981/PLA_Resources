/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143457c; name: FUN_0143457c
 */


void FUN_0143457c(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_18;
  
  *param_1 = &PTR_FUN_0420f788;
  puVar7 = (undefined8 *)param_1[0x9d];
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = (undefined8 *)param_1[0x9b];
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = (undefined8 *)param_1[0x99];
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  plVar6 = (long *)param_1[0x95];
  if (plVar6 == (long *)0x0) {
LAB_014346dc:
    plVar6 = (long *)param_1[0x94];
    if (plVar6 == (long *)0x0) goto LAB_014346fc;
LAB_014346e4:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_014346fc;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x8c];
  }
  else {
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_014346dc;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x94];
    if (plVar6 != (long *)0x0) goto LAB_014346e4;
LAB_014346fc:
    plVar6 = (long *)param_1[0x8c];
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  if ((long *)param_1[0x88] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x88] + 0x20))();
  }
  if ((long *)param_1[0x84] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x84] + 0x20))();
  }
  if ((long *)param_1[0x80] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x80] + 0x20))();
  }
  if ((long *)param_1[0x7c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x7c] + 0x20))();
  }
  if ((long *)param_1[0x78] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x78] + 0x20))();
  }
  if ((long *)param_1[0x72] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x72] + 0x20))();
  }
  plVar6 = (long *)param_1[0x6a];
  if (plVar6 == (long *)0x0) {
LAB_014347a8:
    plVar6 = (long *)param_1[0x69];
    if (plVar6 == (long *)0x0) goto LAB_014347c8;
LAB_014347b0:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_014347c8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x68];
    if (plVar6 != (long *)0x0) goto LAB_014347d0;
LAB_014347e8:
    plVar6 = (long *)param_1[0x67];
    if (plVar6 == (long *)0x0) goto LAB_01434808;
LAB_014347f0:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_01434808;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x66];
    if (plVar6 != (long *)0x0) goto LAB_01434810;
LAB_01434828:
    plVar6 = (long *)param_1[0x65];
    if (plVar6 == (long *)0x0) goto LAB_01434848;
LAB_01434830:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_01434848;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[100];
    if (plVar6 != (long *)0x0) goto LAB_01434850;
LAB_01434868:
    plVar6 = (long *)param_1[99];
    if (plVar6 == (long *)0x0) goto LAB_01434888;
LAB_01434870:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_01434888;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x62];
    if (plVar6 != (long *)0x0) goto LAB_01434890;
LAB_014348a8:
    plVar6 = (long *)param_1[0x61];
    if (plVar6 == (long *)0x0) goto LAB_014348c8;
LAB_014348b0:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_014348c8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x60];
    if (plVar6 != (long *)0x0) goto LAB_014348d0;
LAB_014348e8:
    plVar6 = (long *)param_1[0x5f];
    if (plVar6 == (long *)0x0) goto LAB_01434908;
LAB_014348f0:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_01434908;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x5e];
  }
  else {
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_014347a8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x69];
    if (plVar6 != (long *)0x0) goto LAB_014347b0;
LAB_014347c8:
    plVar6 = (long *)param_1[0x68];
    if (plVar6 == (long *)0x0) goto LAB_014347e8;
LAB_014347d0:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_014347e8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x67];
    if (plVar6 != (long *)0x0) goto LAB_014347f0;
LAB_01434808:
    plVar6 = (long *)param_1[0x66];
    if (plVar6 == (long *)0x0) goto LAB_01434828;
LAB_01434810:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_01434828;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x65];
    if (plVar6 != (long *)0x0) goto LAB_01434830;
LAB_01434848:
    plVar6 = (long *)param_1[100];
    if (plVar6 == (long *)0x0) goto LAB_01434868;
LAB_01434850:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_01434868;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[99];
    if (plVar6 != (long *)0x0) goto LAB_01434870;
LAB_01434888:
    plVar6 = (long *)param_1[0x62];
    if (plVar6 == (long *)0x0) goto LAB_014348a8;
LAB_01434890:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_014348a8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x61];
    if (plVar6 != (long *)0x0) goto LAB_014348b0;
LAB_014348c8:
    plVar6 = (long *)param_1[0x60];
    if (plVar6 == (long *)0x0) goto LAB_014348e8;
LAB_014348d0:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_014348e8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x5f];
    if (plVar6 != (long *)0x0) goto LAB_014348f0;
LAB_01434908:
    plVar6 = (long *)param_1[0x5e];
  }
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      plVar6 = (long *)param_1[0x5b];
      goto joined_r0x0143492c;
    }
  }
  plVar6 = (long *)param_1[0x5b];
joined_r0x0143492c:
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  if ((long *)param_1[0x50] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x50] + 0x20))();
  }
  if ((long *)param_1[0x4c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4c] + 0x20))();
  }
  if ((long *)param_1[0x48] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x48] + 0x20))();
  }
  if ((long *)param_1[0x44] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x44] + 0x20))();
  }
  if ((long *)param_1[0x40] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x40] + 0x20))();
  }
  if ((long *)param_1[0x3c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3c] + 0x20))();
  }
  if ((long *)param_1[0x38] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x38] + 0x20))();
  }
  if ((long *)param_1[0x34] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x34] + 0x20))();
  }
  if ((long *)param_1[0x30] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x30] + 0x20))();
  }
  if ((long *)param_1[0x2c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c] + 0x20))();
  }
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 0x20))();
  }
  if ((long *)param_1[0x24] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x24] + 0x20))();
  }
  if ((long *)param_1[0x20] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x20] + 0x20))();
  }
  if ((long *)param_1[0x1c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c] + 0x20))();
  }
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 0x20))();
  }
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 0x20))();
  }
  FUN_01434f8c(param_1);
  return;
}


