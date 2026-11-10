/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f94a0; name: FUN_031f94a0
 */


void FUN_031f94a0(undefined8 *param_1,long param_2,char *param_3,byte param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *__dest;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char *pcVar14;
  undefined8 *puVar15;
  void *__src;
  long lVar16;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  lVar8 = *(long *)(lVar10 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar8;
  }
  lVar16 = *(long *)(lVar8 + 0x10);
  if (lVar16 != 0) {
    puVar6 = *(undefined8 **)(lVar16 + 8);
    uVar9 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar16 + 0x10)) &&
       (*(ulong *)(lVar16 + 8) = uVar9, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "TthkaiWorldProcessingTasks::makeContext";
      uVar11 = nn::os::GetSystemTick();
      puVar6[1] = uVar11;
      lVar8 = *(long *)(lVar10 + 0x38d490);
    }
  }
  local_68 = lVar16;
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar8;
  }
  plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
  puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0xb8,0);
  puVar6[4] = 0;
  puVar6[8] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[0xd] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar12 = puVar6 + 0xe;
  *puVar12 = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar15 = puVar6 + 10;
  *puVar15 = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar13 = puVar6 + 9;
  *puVar13 = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  pcVar14 = (char *)(puVar6 + 5);
  pcVar14[0] = '\0';
  pcVar14[1] = '\0';
  pcVar14[2] = '\0';
  pcVar14[3] = '\0';
  pcVar14[4] = '\0';
  pcVar14[5] = '\0';
  pcVar14[6] = '\0';
  pcVar14[7] = '\0';
  *puVar6 = &PTR_LAB_042f11c0;
  puVar6[1] = 0xffffffff;
  puVar6[2] = 1;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0x80000000;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0;
  puVar6[4] = 0;
  *pcVar14 = '\0';
  *(undefined4 *)puVar13 = 0x7fffffff;
  *(undefined1 *)((long)puVar6 + 0x4c) = 0;
  *puVar15 = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  puVar6[0xb] = 0x8000000000000000;
  puVar6[0xc] = &DAT_03aad864;
  *(undefined1 *)puVar12 = 0;
  *(undefined8 *)((long)puVar6 + 0x74) = 0x7fffffff7fffffff;
  *(undefined4 *)((long)puVar6 + 0x7c) = 0xffffffff;
  *(undefined1 *)(puVar6 + 0x10) = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  *param_1 = puVar6;
  puVar6[3] = param_2;
  *pcVar14 = *param_3;
  if (pcVar14 != param_3) {
    iVar1 = *(int *)(param_3 + 0x10);
    __src = *(void **)(param_3 + 8);
    if (iVar1 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,0,0);
      puVar6[6] = __dest;
    }
    memcpy(__dest,__src,(long)iVar1 << 2);
    *(int *)(puVar6 + 7) = iVar1;
  }
  *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(param_3 + 0x18);
  uVar2 = *(undefined4 *)(param_3 + 0x20);
  *(char *)((long)puVar6 + 0x4c) = param_3[0x24];
  *(undefined4 *)puVar13 = uVar2;
  FUN_031faa70(puVar15,param_3 + 0x28);
  pcVar14 = param_3 + 0x48;
  uVar11 = *(undefined8 *)(param_3 + 0x50);
  cVar3 = param_3[0x58];
  *puVar12 = *(undefined8 *)pcVar14;
  puVar6[0xf] = uVar11;
  *(char *)(puVar6 + 0x10) = cVar3;
  *(byte *)(puVar6 + 0x15) = param_4 & 1;
  if (*pcVar14 == '\0' && *param_3 == '\0') {
LAB_031f96a4:
    local_70 = *(long **)(param_2 + 0x130);
LAB_031f96ac:
    if (param_3[0x24] == '\0') goto LAB_031f96b4;
LAB_031f983c:
    FUN_0320c390(&local_78,param_2,local_70,param_3,param_4 & 1,param_5);
    plVar5 = local_78;
    local_78 = (long *)0x0;
    plVar7 = (long *)puVar6[0x12];
    puVar6[0x12] = plVar5;
    if ((plVar7 == (long *)0x0) || (plVar7[1] == 0)) goto LAB_031f96b4;
    plVar5 = plVar7 + 2;
    do {
      lVar10 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((lVar10 + -1 != 0) || ((**(code **)(*plVar7 + 0x18))(), local_78 == (long *)0x0)) ||
       (local_78[1] == 0)) goto LAB_031f96b4;
    plVar5 = local_78 + 2;
    do {
      lVar10 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 != 0) goto LAB_031f96b4;
    (**(code **)(*local_78 + 0x18))();
    if (*pcVar14 != '\0') goto LAB_031f98c8;
LAB_031f96bc:
    cVar3 = param_3[0x58];
  }
  else {
    if ((param_4 & 1) == 0) {
      lVar10 = *(long *)(param_2 + 0x250);
      if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
        plVar5 = (long *)(lVar10 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = *plVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar5 = (long *)puVar6[4];
      puVar6[4] = lVar10;
      if ((plVar5 == (long *)0x0) || (plVar5[1] == 0)) goto LAB_031f97a4;
      plVar7 = plVar5 + 2;
      do {
        lVar10 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 != 0) goto LAB_031f97a4;
LAB_031f99f8:
      (**(code **)(*plVar5 + 0x18))();
      cVar3 = *param_3;
    }
    else {
      if (*pcVar14 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_3 + 0x54);
      }
      FUN_031c4e70(&local_70,*(undefined8 *)(param_2 + 0x250),uVar2);
      plVar5 = local_70;
      local_70 = (long *)0x0;
      plVar7 = (long *)puVar6[4];
      puVar6[4] = plVar5;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar5 = plVar7 + 2;
        do {
          lVar10 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((lVar10 + -1 == 0) && ((**(code **)(*plVar7 + 0x18))(), local_70 != (long *)0x0)) &&
           (local_70[1] != 0)) {
          plVar5 = local_70 + 2;
          do {
            lVar10 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar5 = local_70;
          if (lVar10 + -1 == 0) goto LAB_031f99f8;
        }
      }
LAB_031f97a4:
      cVar3 = *param_3;
    }
    if (cVar3 == '\0') goto LAB_031f96a4;
    FUN_031fbb40(&local_78,param_2,param_3,puVar6[4],param_4 & 1,param_5,&local_70);
    plVar5 = local_78;
    local_78 = (long *)0x0;
    plVar7 = (long *)puVar6[0x11];
    puVar6[0x11] = plVar5;
    if ((plVar7 == (long *)0x0) || (plVar7[1] == 0)) goto LAB_031f96ac;
    plVar5 = plVar7 + 2;
    do {
      lVar10 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((lVar10 + -1 != 0) || ((**(code **)(*plVar7 + 0x18))(), local_78 == (long *)0x0)) ||
       (local_78[1] == 0)) goto LAB_031f96ac;
    plVar5 = local_78 + 2;
    do {
      lVar10 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 != 0) goto LAB_031f96ac;
    (**(code **)(*local_78 + 0x18))();
    if (param_3[0x24] != '\0') goto LAB_031f983c;
LAB_031f96b4:
    if (*pcVar14 == '\0') goto LAB_031f96bc;
LAB_031f98c8:
    FUN_0320e780(&local_78,param_2,local_70,param_3,puVar6[4],param_4 & 1,param_5);
    plVar5 = local_78;
    local_78 = (long *)0x0;
    plVar7 = (long *)puVar6[0x13];
    puVar6[0x13] = plVar5;
    if ((plVar7 == (long *)0x0) || (plVar7[1] == 0)) goto LAB_031f96bc;
    plVar5 = plVar7 + 2;
    do {
      lVar10 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((lVar10 + -1 != 0) || ((**(code **)(*plVar7 + 0x18))(), local_78 == (long *)0x0)) ||
       (local_78[1] == 0)) goto LAB_031f96bc;
    plVar5 = local_78 + 2;
    do {
      lVar10 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 != 0) goto LAB_031f96bc;
    (**(code **)(*local_78 + 0x18))();
    cVar3 = param_3[0x58];
  }
  if (cVar3 != '\0') {
    FUN_03212770(&local_78,param_2,param_3,param_4 & 1,param_5);
    plVar5 = local_78;
    local_78 = (long *)0x0;
    plVar7 = (long *)puVar6[0x14];
    puVar6[0x14] = plVar5;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar5 = plVar7 + 2;
      do {
        lVar10 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((lVar10 + -1 == 0) && ((**(code **)(*plVar7 + 0x18))(), local_78 != (long *)0x0)) &&
         (local_78[1] != 0)) {
        plVar5 = local_78 + 2;
        do {
          lVar10 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*local_78 + 0x18))();
          *(undefined4 *)((long)puVar6 + 0xac) = 0;
          goto joined_r0x031f973c;
        }
      }
    }
  }
  *(undefined4 *)((long)puVar6 + 0xac) = 0;
joined_r0x031f973c:
  if (lVar16 != 0) {
    puVar6 = *(undefined8 **)(lVar16 + 8);
    uVar9 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar16 + 0x10)) &&
       (*(ulong *)(lVar16 + 8) = uVar9, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = &DAT_0390f40e;
      uVar11 = nn::os::GetSystemTick();
      puVar6[1] = uVar11;
    }
  }
  return;
}


