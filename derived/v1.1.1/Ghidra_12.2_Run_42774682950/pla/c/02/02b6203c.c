/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6203c; name: FUN_02b6203c
 */


void FUN_02b6203c(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  char cVar5;
  bool bVar6;
  size_t sVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  
  param_1[7] = 0;
  puVar8 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar8 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar11 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_042855d8;
  param_1[1] = lVar11;
  param_1[9] = (long)&PTR_LAB_04285610;
  lVar10 = *param_2;
  param_1[0xb] = lVar10;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar2 = param_1 + 0xc;
  FUN_0290f77c(plVar2);
  plVar3 = param_1 + 0x15;
  FUN_0290f77c(plVar3);
  FUN_0290f77c(param_1 + 0x1c);
  pvVar4 = (void *)param_1[0xc];
  *(undefined1 *)(param_1 + 0x23) = 0;
  uVar13 = (ulong)*(byte *)(param_1[0xb] + 0x160);
  pvVar12 = (void *)param_1[0xd];
  uVar14 = (long)pvVar12 - (long)pvVar4 >> 2;
  if (uVar14 < uVar13) {
    FUN_02b5ee30(plVar2,uVar13 - uVar14);
    pvVar4 = (void *)param_1[0xc];
    sVar7 = param_1[0xd] - (long)pvVar4;
  }
  else {
    if (uVar14 != uVar13) {
      pvVar12 = (void *)((long)pvVar4 + uVar13 * 4);
      param_1[0xd] = (long)pvVar12;
    }
    sVar7 = (long)pvVar12 - (long)pvVar4;
  }
  if (sVar7 != 0) {
    memset(pvVar4,0,sVar7);
  }
  uVar13 = (ulong)*(byte *)(param_1[0xb] + 0x161);
  pvVar4 = (void *)param_1[0x15];
  pvVar12 = (void *)param_1[0x16];
  uVar14 = (long)pvVar12 - (long)pvVar4 >> 2;
  if (uVar14 < uVar13) {
    FUN_02b5ee30(plVar3,uVar13 - uVar14);
    pvVar4 = (void *)param_1[0x15];
    sVar7 = param_1[0x16] - (long)pvVar4;
  }
  else {
    if (uVar14 != uVar13) {
      pvVar12 = (void *)((long)pvVar4 + uVar13 * 4);
      param_1[0x16] = (long)pvVar12;
    }
    sVar7 = (long)pvVar12 - (long)pvVar4;
  }
  if (sVar7 != 0) {
    memset(pvVar4,0,sVar7);
  }
  uVar13 = (ulong)*(byte *)(param_1[0xb] + 0x161);
  pvVar4 = (void *)param_1[0x1c];
  pvVar12 = (void *)param_1[0x1d];
  uVar14 = (long)pvVar12 - (long)pvVar4 >> 2;
  if (uVar14 < uVar13) {
    FUN_02b5ee30(param_1 + 0x1c,uVar13 - uVar14);
    pvVar4 = (void *)param_1[0x1c];
    sVar7 = param_1[0x1d] - (long)pvVar4;
  }
  else {
    if (uVar14 != uVar13) {
      pvVar12 = (void *)((long)pvVar4 + uVar13 * 4);
      param_1[0x1d] = (long)pvVar12;
    }
    sVar7 = (long)pvVar12 - (long)pvVar4;
  }
  if (sVar7 != 0) {
    memset(pvVar4,0,sVar7);
  }
  FUN_02b5e1ac(param_1[0xb],plVar2);
  FUN_02b5e508(param_1[0xb],plVar3);
  FUN_02b62284(param_1);
  return;
}


