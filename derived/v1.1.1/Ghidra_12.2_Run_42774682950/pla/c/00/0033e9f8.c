/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033e9f8; name: FUN_0033e9f8
 */


void FUN_0033e9f8(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  std::mutex::~mutex((mutex *)(param_1 + 0x28));
  puVar2 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[0x25];
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(plVar5 + 2);
    plVar4 = (long *)*plVar5;
    while( true ) {
      if ((bVar1 & 1) != 0) {
        FUN_002e2ea0(puVar2,plVar5[4]);
      }
      FUN_002e2ea0(puVar2,plVar5);
      if (plVar4 == (long *)0x0) break;
      bVar1 = *(byte *)(plVar4 + 2);
      plVar5 = plVar4;
      plVar4 = (long *)*plVar4;
    }
  }
  lVar3 = param_1[0x23];
  param_1[0x23] = 0;
  if (lVar3 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  puVar2 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[0x1f];
  while (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    FUN_002e2ea0(puVar2);
  }
  lVar3 = param_1[0x1d];
  param_1[0x1d] = 0;
  if (lVar3 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  puVar2 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[0x1a];
  while (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    FUN_002e2ea0(puVar2);
  }
  lVar3 = param_1[0x18];
  param_1[0x18] = 0;
  if (lVar3 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  puVar2 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[0x15];
  while (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    FUN_002e2ea0(puVar2);
  }
  lVar3 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar3 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  plVar5 = (long *)param_1[0x11];
  param_1[0x11] = 0;
  puVar2 = PTR_LAB_04373088;
  if (plVar5 != (long *)0x0) {
    plVar4 = (long *)plVar5[2];
    while (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      FUN_002e2ea0(puVar2);
    }
    lVar3 = *plVar5;
    *plVar5 = 0;
    if (lVar3 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar5);
  }
  puVar2 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[0xe];
  while (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    FUN_002e2ea0(puVar2);
  }
  lVar3 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar3 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  plVar5 = (long *)param_1[10];
  param_1[10] = 0;
  puVar2 = PTR_LAB_04373088;
  if (plVar5 != (long *)0x0) {
    plVar4 = (long *)plVar5[2];
    while (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      FUN_002e2ea0(puVar2);
    }
    lVar3 = *plVar5;
    *plVar5 = 0;
    if (lVar3 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar5);
  }
  puVar2 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[7];
  while (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    FUN_002e2ea0(puVar2);
  }
  lVar3 = param_1[5];
  param_1[5] = 0;
  if (lVar3 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  puVar2 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[2];
  while (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    FUN_002e2ea0(puVar2);
  }
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


