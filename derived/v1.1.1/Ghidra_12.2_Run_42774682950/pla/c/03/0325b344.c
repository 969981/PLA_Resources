/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325b344; name: FUN_0325b344
 */


long * FUN_0325b344(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  size_t sVar7;
  undefined8 *puVar8;
  void *__dest;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  char *__s;
  void *__src;
  
  plVar6 = (long *)*param_1;
  plVar9 = (long *)*param_2;
  if (plVar6 != plVar9) {
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar9 = plVar9 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar6 = (long *)*param_1;
      plVar9 = (long *)*param_2;
    }
    *param_1 = (long)plVar9;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar9 = plVar6 + 2;
      do {
        lVar10 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  param_1[1] = param_2[1];
  lVar10 = param_2[2];
  lVar12 = param_2[3];
  lVar11 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar11;
  param_1[2] = lVar10;
  param_1[3] = lVar12;
  lVar11 = param_2[8];
  lVar10 = param_2[6];
  lVar12 = param_2[7];
  *(char *)(param_1 + 9) = (char)param_2[9];
  param_1[7] = lVar12;
  param_1[8] = lVar11;
  param_1[6] = lVar10;
  lVar10 = param_2[10];
  lVar12 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = lVar12;
  param_1[10] = lVar10;
  lVar10 = param_2[0xd];
  lVar12 = param_2[0xe];
  lVar11 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = lVar11;
  param_1[0xd] = lVar10;
  param_1[0xe] = lVar12;
  lVar11 = param_2[0x13];
  lVar10 = param_2[0x11];
  lVar12 = param_2[0x12];
  *(undefined8 *)((long)param_1 + 0x9d) = *(undefined8 *)((long)param_2 + 0x9d);
  param_1[0x12] = lVar12;
  param_1[0x13] = lVar11;
  param_1[0x11] = lVar10;
  param_1[0x15] = param_2[0x15];
  lVar10 = param_2[0x16];
  lVar12 = param_2[0x17];
  lVar11 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = lVar11;
  param_1[0x16] = lVar10;
  param_1[0x17] = lVar12;
  if (param_2 != param_1) {
    __src = (void *)param_2[0x1a];
    iVar2 = (int)param_2[0x1b];
    __dest = (void *)param_1[0x1a];
    if ((int)(*(uint *)((long)param_1 + 0xdc) & 0x3fffffff) < iVar2) {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar2,0x10,__dest,(int)param_1[0x1b]);
      param_1[0x1a] = (long)__dest;
    }
    memcpy(__dest,__src,(long)iVar2 << 4);
    *(int *)(param_1 + 0x1b) = iVar2;
  }
  *(char *)(param_1 + 0x1c) = (char)param_2[0x1c];
  puVar5 = PTR_PTR_0434a080;
  uVar13 = param_1[0x1d];
  __s = (char *)(param_2[0x1d] & 0xfffffffffffffffe);
  if ((char *)(uVar13 & 0xfffffffffffffffe) != __s) {
    if (__s == (char *)0x0) {
      param_1[0x1d] = 0;
    }
    else {
      sVar7 = strlen(__s);
      uVar1 = (int)sVar7 + 1;
      puVar8 = (undefined8 *)
               (**(code **)(*(long *)puVar5 + 0x10))
                         (puVar5,(long)((sVar7 << 0x20) + 0x1100000000) >> 0x20,0);
      *puVar8 = puVar5;
      *(uint *)(puVar8 + 1) = uVar1;
      memcpy(puVar8 + 2,__s,(ulong)uVar1);
      param_1[0x1d] = (ulong)(puVar8 + 2) | 1;
    }
    if ((uVar13 & 1) != 0) {
      lVar10 = tpidr_el0;
      lVar12 = *(long *)(lVar10 + 0x38d490);
      if (lVar12 == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar12;
      }
      plVar9 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
      *(undefined8 *)(uVar13 - 0x11) = 0;
      (**(code **)(*plVar9 + 0x18))
                (plVar9,(undefined8 *)(uVar13 - 0x11),(long)*(int *)(uVar13 - 9) + 0x10);
    }
  }
  return param_1;
}


