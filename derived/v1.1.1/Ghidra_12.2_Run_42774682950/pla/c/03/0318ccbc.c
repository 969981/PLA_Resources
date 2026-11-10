/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318ccbc; name: FUN_0318ccbc
 */


void FUN_0318ccbc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  MutexType *pMVar5;
  undefined8 uVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  undefined4 local_68 [2];
  
  *param_1 = &PTR_LAB_0430b308;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  plVar8 = param_1 + 0xd;
  *plVar8 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0x8000000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x8000000000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x8000000000000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x8000000000000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x8000000000000000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x8000000000000000;
  param_1[0x22] = 0;
  param_1[0x23] = 0x8000000000000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x8000000000000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0x8000000000000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0x8000000000000000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x8000000000000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x8000000000000000;
  param_1[0x33] = &DAT_03aad864;
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[9] = param_2[9];
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  plVar4 = (long *)*plVar8;
  plVar10 = (long *)param_2[0xd];
  if (plVar4 != plVar10) {
    if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
      plVar10 = plVar10 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar4 = (long *)*plVar8;
      plVar10 = (long *)param_2[0xd];
    }
    *plVar8 = (long)plVar10;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar10 = plVar4 + 2;
      do {
        lVar11 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  lVar12 = (long)DAT_0444b53c;
  lVar11 = tpidr_el0;
  lVar9 = *(long *)(lVar11 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar9;
  }
  if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  if (param_2 == param_1) {
    lVar12 = (long)DAT_0444b53c;
    lVar9 = *(long *)(lVar11 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar9;
    }
    if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
      lVar9 = *(long *)(lVar11 + 0x38d490);
    }
    lVar12 = (long)DAT_0444b53c;
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar9;
    }
    if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
      iVar1 = *(int *)(param_2 + 0x1d);
      goto joined_r0x0318d67c;
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 0xf);
    pvVar13 = (void *)param_2[0xe];
    pvVar7 = (void *)param_1[0xe];
    if ((int)(*(uint *)((long)param_1 + 0x7c) & 0x3fffffff) < iVar1) {
      pvVar7 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar7,*(undefined4 *)(param_1 + 0xf),
                                    (long)param_1 + 0x7c);
      param_1[0xe] = pvVar7;
    }
    memcpy(pvVar7,pvVar13,(long)iVar1 << 2);
    *(int *)(param_1 + 0xf) = iVar1;
    iVar1 = *(int *)(param_2 + 0x11);
    pvVar13 = (void *)param_2[0x10];
    pvVar7 = (void *)param_1[0x10];
    if ((int)(*(uint *)((long)param_1 + 0x8c) & 0x3fffffff) < iVar1) {
      pvVar7 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar7,*(undefined4 *)(param_1 + 0x11),
                                    (long)param_1 + 0x8c);
      param_1[0x10] = pvVar7;
    }
    memcpy(pvVar7,pvVar13,(long)iVar1 << 2);
    *(int *)(param_1 + 0x11) = iVar1;
    iVar1 = *(int *)(param_2 + 0x13);
    pvVar13 = (void *)param_2[0x12];
    pvVar7 = (void *)param_1[0x12];
    if ((int)(*(uint *)((long)param_1 + 0x9c) & 0x3fffffff) < iVar1) {
      pvVar7 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar7,*(undefined4 *)(param_1 + 0x13),
                                    (long)param_1 + 0x9c);
      param_1[0x12] = pvVar7;
    }
    memcpy(pvVar7,pvVar13,(long)iVar1 << 2);
    *(int *)(param_1 + 0x13) = iVar1;
    iVar1 = *(int *)(param_2 + 0x15);
    pvVar13 = (void *)param_2[0x14];
    pvVar7 = (void *)param_1[0x14];
    if ((int)(*(uint *)((long)param_1 + 0xac) & 0x3fffffff) < iVar1) {
      pvVar7 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar7,*(undefined4 *)(param_1 + 0x15),
                                    (long)param_1 + 0xac);
      param_1[0x14] = pvVar7;
    }
    memcpy(pvVar7,pvVar13,(long)iVar1 << 2);
    *(int *)(param_1 + 0x15) = iVar1;
    lVar12 = (long)DAT_0444b53c;
    lVar9 = *(long *)(lVar11 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar9;
    }
    if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    iVar1 = *(int *)(param_2 + 0x17);
    pvVar13 = (void *)param_2[0x16];
    pvVar7 = (void *)param_1[0x16];
    if ((int)(*(uint *)((long)param_1 + 0xbc) & 0x3fffffff) < iVar1) {
      pvVar7 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,0x10,pvVar7,
                                    *(undefined4 *)(param_1 + 0x17),(long)param_1 + 0xbc);
      param_1[0x16] = pvVar7;
    }
    memcpy(pvVar7,pvVar13,(long)iVar1 << 4);
    *(int *)(param_1 + 0x17) = iVar1;
    iVar1 = *(int *)(param_2 + 0x19);
    pvVar13 = (void *)param_2[0x18];
    pvVar7 = (void *)param_1[0x18];
    if ((int)(*(uint *)((long)param_1 + 0xcc) & 0x3fffffff) < iVar1) {
      pvVar7 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,0x14,pvVar7,
                                    *(undefined4 *)(param_1 + 0x19),(long)param_1 + 0xcc);
      param_1[0x18] = pvVar7;
    }
    memcpy(pvVar7,pvVar13,(long)iVar1 * 0x14);
    *(int *)(param_1 + 0x19) = iVar1;
    lVar12 = (long)DAT_0444b53c;
    lVar9 = *(long *)(lVar11 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar9;
    }
    if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    iVar1 = *(int *)(param_2 + 0x1b);
    pvVar13 = (void *)param_2[0x1a];
    pvVar7 = (void *)param_1[0x1a];
    if ((int)(*(uint *)((long)param_1 + 0xdc) & 0x3fffffff) < iVar1) {
      pvVar7 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,0x10,pvVar7,
                                    *(undefined4 *)(param_1 + 0x1b),(long)param_1 + 0xdc);
      param_1[0x1a] = pvVar7;
    }
    memcpy(pvVar7,pvVar13,(long)iVar1 << 4);
    *(int *)(param_1 + 0x1b) = iVar1;
  }
  iVar1 = *(int *)(param_2 + 0x1d);
joined_r0x0318d67c:
  if (iVar1 != 0) {
    lVar12 = (long)DAT_0444b53c;
    lVar9 = *(long *)(lVar11 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar9;
    }
    if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    iVar1 = *(int *)(param_2 + 0x1d);
    if ((int)(*(uint *)((long)param_1 + 0xec) & 0x3fffffff) < iVar1) {
      uVar6 = FUN_0318a8d4(PTR_PTR_0434a080,iVar1,param_1[0x1c],*(undefined4 *)(param_1 + 0x1d),
                           (uint *)((long)param_1 + 0xec));
      param_1[0x1c] = uVar6;
    }
    if (*(int *)(param_1 + 0x1d) != iVar1) {
      *(int *)(param_1 + 0x1d) = iVar1;
    }
    lVar12 = (long)DAT_0444b53c;
    local_68[0] = 0;
    lVar9 = *(long *)(lVar11 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar9;
    }
    if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    FUN_032bb1d0(param_1[0x1c],param_2[0x1c],*(int *)(param_2 + 0x1d) * 0x14,local_68);
  }
  lVar12 = (long)DAT_0444b53c;
  lVar9 = *(long *)(lVar11 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar9;
  }
  if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  if (param_2 == param_1) {
    lVar12 = (long)DAT_0444b53c;
    lVar9 = *(long *)(lVar11 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar9;
    }
    if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 0x1f);
    pvVar13 = (void *)param_2[0x1e];
    pvVar7 = (void *)param_1[0x1e];
    if ((int)(*(uint *)((long)param_1 + 0xfc) & 0x3fffffff) < iVar1) {
      pvVar7 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,0x10,pvVar7,
                                    *(undefined4 *)(param_1 + 0x1f),(long)param_1 + 0xfc);
      param_1[0x1e] = pvVar7;
    }
    memcpy(pvVar7,pvVar13,(long)iVar1 << 4);
    *(int *)(param_1 + 0x1f) = iVar1;
    lVar12 = (long)DAT_0444b53c;
    lVar9 = *(long *)(lVar11 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar9;
    }
    if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    iVar1 = *(int *)(param_2 + 0x21);
    pvVar7 = (void *)param_2[0x20];
    if ((int)(*(uint *)((long)param_1 + 0x10c) & 0x3fffffff) < iVar1) {
      pvVar13 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,1,param_1[0x20],
                                     *(undefined4 *)(param_1 + 0x21),(uint *)((long)param_1 + 0x10c)
                                    );
      param_1[0x20] = pvVar13;
    }
    else {
      pvVar13 = (void *)param_1[0x20];
    }
    memcpy(pvVar13,pvVar7,(long)iVar1);
    *(int *)(param_1 + 0x21) = iVar1;
    iVar1 = *(int *)(param_2 + 0x23);
    pvVar13 = (void *)param_2[0x22];
    pvVar7 = (void *)param_1[0x22];
    if ((int)(*(uint *)((long)param_1 + 0x11c) & 0x3fffffff) < iVar1) {
      pvVar7 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,2,pvVar7,*(undefined4 *)(param_1 + 0x23),
                                    (long)param_1 + 0x11c);
      param_1[0x22] = pvVar7;
    }
    memcpy(pvVar7,pvVar13,(long)iVar1 << 1);
    *(int *)(param_1 + 0x23) = iVar1;
    iVar1 = *(int *)(param_2 + 0x25);
    pvVar13 = (void *)param_2[0x24];
    pvVar7 = (void *)param_1[0x24];
    if ((int)(*(uint *)((long)param_1 + 300) & 0x3fffffff) < iVar1) {
      pvVar7 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar7,*(undefined4 *)(param_1 + 0x25),
                                    (long)param_1 + 300);
      param_1[0x24] = pvVar7;
    }
    memcpy(pvVar7,pvVar13,(long)iVar1 << 2);
    *(int *)(param_1 + 0x25) = iVar1;
    iVar1 = *(int *)(param_2 + 0x27);
    pvVar13 = (void *)param_2[0x26];
    pvVar7 = (void *)param_1[0x26];
    if ((int)(*(uint *)((long)param_1 + 0x13c) & 0x3fffffff) < iVar1) {
      pvVar7 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar7,*(undefined4 *)(param_1 + 0x27),
                                    (long)param_1 + 0x13c);
      param_1[0x26] = pvVar7;
    }
    memcpy(pvVar7,pvVar13,(long)iVar1 << 2);
    *(int *)(param_1 + 0x27) = iVar1;
    iVar1 = *(int *)(param_2 + 0x29);
    pvVar13 = (void *)param_2[0x28];
    pvVar7 = (void *)param_1[0x28];
    if ((int)(*(uint *)((long)param_1 + 0x14c) & 0x3fffffff) < iVar1) {
      pvVar7 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar7,*(undefined4 *)(param_1 + 0x29),
                                    (long)param_1 + 0x14c);
      param_1[0x28] = pvVar7;
    }
    memcpy(pvVar7,pvVar13,(long)iVar1 << 2);
    *(int *)(param_1 + 0x29) = iVar1;
    iVar1 = *(int *)(param_2 + 0x2b);
    pvVar13 = (void *)param_2[0x2a];
    pvVar7 = (void *)param_1[0x2a];
    if ((int)(*(uint *)((long)param_1 + 0x15c) & 0x3fffffff) < iVar1) {
      pvVar7 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar7,*(undefined4 *)(param_1 + 0x2b),
                                    (long)param_1 + 0x15c);
      param_1[0x2a] = pvVar7;
    }
    memcpy(pvVar7,pvVar13,(long)iVar1 << 2);
    *(int *)(param_1 + 0x2b) = iVar1;
    iVar1 = *(int *)(param_2 + 0x2e);
    pvVar13 = (void *)param_2[0x2d];
    pvVar7 = (void *)param_1[0x2d];
    if ((int)(*(uint *)((long)param_1 + 0x174) & 0x3fffffff) < iVar1) {
      pvVar7 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar7,*(undefined4 *)(param_1 + 0x2e),
                                    (long)param_1 + 0x174);
      param_1[0x2d] = pvVar7;
    }
    memcpy(pvVar7,pvVar13,(long)iVar1 << 2);
    *(int *)(param_1 + 0x2e) = iVar1;
  }
  lVar12 = (long)DAT_0444b53c;
  lVar9 = *(long *)(lVar11 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar9;
  }
  if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
    FUN_0332a954();
    lVar9 = *(long *)(lVar11 + 0x38d490);
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((long)param_1 + 0x164) = *(undefined4 *)((long)param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)((long)param_1 + 0x17c) = *(undefined4 *)((long)param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  lVar12 = (long)DAT_0444b53c;
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar9;
  }
  if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  FUN_03191394(param_1 + 0x31,param_2 + 0x31);
  lVar9 = *(long *)(lVar11 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar9;
  }
  plVar10 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
  pMVar5 = (MutexType *)(**(code **)(*plVar10 + 0x10))(plVar10,0x20,0);
  nn::os::InitializeMutex(pMVar5,true,0);
  param_1[0x35] = pMVar5;
  return;
}


