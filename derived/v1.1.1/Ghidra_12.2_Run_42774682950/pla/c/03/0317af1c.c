/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317af1c; name: FUN_0317af1c
 */


long * FUN_0317af1c(long *param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  void *__src;
  void *__dest;
  long *plVar5;
  long lVar6;
  
  plVar4 = (long *)*param_1;
  plVar5 = (long *)*param_2;
  if (plVar4 != plVar5) {
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar5 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar4 = (long *)*param_1;
      plVar5 = (long *)*param_2;
    }
    *param_1 = (long)plVar5;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar5 = plVar4 + 2;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  plVar4 = (long *)param_1[1];
  plVar5 = (long *)param_2[1];
  if (plVar4 != plVar5) {
    if ((plVar5 == (long *)0x0) || (plVar5[1] == 0)) {
      param_1[1] = (long)plVar5;
    }
    else {
      plVar5 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar4 = (long *)param_1[1];
      param_1[1] = param_2[1];
    }
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar5 = plVar4 + 2;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  plVar4 = (long *)param_1[2];
  plVar5 = (long *)param_2[2];
  if (plVar4 != plVar5) {
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar5 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar4 = (long *)param_1[2];
      plVar5 = (long *)param_2[2];
    }
    param_1[2] = (long)plVar5;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar5 = plVar4 + 2;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  param_1[3] = param_2[3];
  lVar6 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar6;
  lVar6 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar6;
  lVar6 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = lVar6;
  lVar6 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = lVar6;
  lVar6 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = lVar6;
  lVar6 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = lVar6;
  *(char *)(param_1 + 0x10) = (char)param_2[0x10];
  lVar6 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = lVar6;
  if (param_2 != param_1) {
    __src = (void *)param_2[0x14];
    iVar1 = (int)param_2[0x15];
    __dest = (void *)param_1[0x14];
    if ((int)(*(uint *)((long)param_1 + 0xac) & 0x3fffffff) < iVar1) {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,8,__dest,(int)param_1[0x15]);
      param_1[0x14] = (long)__dest;
    }
    memcpy(__dest,__src,(long)iVar1 << 3);
    *(int *)(param_1 + 0x15) = iVar1;
  }
  FUN_032c27dc(param_1 + 0x16,param_2 + 0x16);
  FUN_0317b180(param_1 + 0x18,param_2 + 0x18);
  *(char *)(param_1 + 0x1c) = (char)param_2[0x1c];
  return param_1;
}


