/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ff7e64; name: FUN_00ff7e64
 */


void FUN_00ff7e64(long *param_1)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_48;
  
  *param_1 = (long)&DAT_04286f30;
  param_1[9] = (long)&PTR_LAB_04286fd8;
  param_1[10] = (long)&PTR_LAB_04287020;
  param_1[0x144] = (long)&PTR_LAB_042afed0;
  puVar3 = PTR_FUN_042afee8;
  (*(code *)PTR_FUN_042afee8)(param_1 + 0x144);
  puVar4 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x149) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4c)) && (param_1[0x148] != 0)) {
    FUN_032cf244(puVar4,param_1[0x148],0x80,*(uint *)((long)param_1 + 0xa4c) & 0x3fffffff);
  }
  param_1[0x148] = 0;
  *(undefined4 *)((long)param_1 + 0xa4c) = 0x80000000;
  param_1[0x9c] = (long)&PTR_LAB_042afed0;
  (*(code *)puVar3)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0xa1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x50c)) && (param_1[0xa0] != 0)) {
    FUN_032cf244(puVar4,param_1[0xa0],0x80,*(uint *)((long)param_1 + 0x50c) & 0x3fffffff);
  }
  pcVar9 = (code *)param_1[0x69];
  param_1[0xa0] = 0;
  *(undefined4 *)((long)param_1 + 0x50c) = 0x80000000;
  if (pcVar9 != (code *)0x0) {
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    (*pcVar9)(param_1 + 0x6c);
  }
  plVar8 = (long *)param_1[0x60];
  if ((plVar8 == (long *)0x0) || (plVar8[1] == 0)) {
LAB_00ff7f40:
    pcVar9 = (code *)param_1[0x41];
  }
  else {
    plVar1 = plVar8 + 2;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 + -1 != 0) goto LAB_00ff7f40;
    (**(code **)(*plVar8 + 0x18))();
    pcVar9 = (code *)param_1[0x41];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x41] = 0;
    param_1[0x40] = 0;
    (*pcVar9)(param_1 + 0x44);
  }
  pcVar9 = (code *)param_1[0x31];
  if (pcVar9 != (code *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    (*pcVar9)(param_1 + 0x34);
  }
  plVar8 = (long *)param_1[0x1b];
  if ((plVar8 == (long *)0x0) || (plVar8[1] == 0)) {
LAB_00ff7f80:
    plVar8 = (long *)param_1[0x1a];
  }
  else {
    plVar1 = plVar8 + 2;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 + -1 != 0) goto LAB_00ff7f80;
    (**(code **)(*plVar8 + 0x18))();
    plVar8 = (long *)param_1[0x1a];
  }
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar1 = plVar8 + 2;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
      plVar8 = (long *)param_1[0x19];
      goto joined_r0x00ff8150;
    }
  }
  plVar8 = (long *)param_1[0x19];
joined_r0x00ff8150:
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar1 = plVar8 + 2;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  puVar11 = (undefined8 *)param_1[0xd];
  *param_1 = (long)&PTR_LAB_041ef160;
  param_1[9] = (long)&PTR_LAB_041ef208;
  param_1[10] = (long)&PTR_LAB_041ef250;
  if (puVar11 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar11 + 1);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_48 = *puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  puVar3 = PTR_DAT_04379610 + 0x58;
  puVar4 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar3;
  param_1[10] = (long)puVar4;
  puVar11 = (undefined8 *)param_1[0xb];
  if (puVar11 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar11 + 1);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_48 = *puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  return;
}


