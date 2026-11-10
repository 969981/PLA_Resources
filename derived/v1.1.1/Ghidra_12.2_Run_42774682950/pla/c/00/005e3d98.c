/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e3d98; name: FUN_005e3d98
 */


void FUN_005e3d98(long param_1,char *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined4 local_54;
  void *local_48;
  
  plVar1 = (long *)(param_1 + 0x18);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = (long *)(param_1 + 0x20);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_002ef750(param_1 + 0x38);
  puVar8 = *(ulong **)(param_1 + 0x58);
  if (puVar8 != (ulong *)0x0) goto LAB_005e3ec0;
  puVar8 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0xa8);
  if (puVar8 != (ulong *)0x0) {
    *puVar8 = 0;
  }
  puVar9 = *(ulong **)(param_1 + 0x58);
  *(ulong **)(param_1 + 0x58) = puVar8;
  if (puVar9 == (ulong *)0x0) goto LAB_005e3ec0;
  uVar6 = *puVar9;
  if ((uVar6 & 1) == 0) {
    puVar8 = puVar9 + 1;
joined_r0x005e3e40:
    if (uVar6 >> 1 != 0) {
      uVar10 = uVar6 >> 1;
      puVar11 = puVar8 + uVar10 * 2 + -2;
      pvVar5 = (void *)*puVar11;
      *puVar11 = 0;
      while( true ) {
        if (pvVar5 != (void *)0x0) {
                    /* try { // try from 005e3e74 to 005e3e77 has its CatchHandler @ 005e3fc0 */
          free(pvVar5);
        }
        uVar10 = uVar10 - 1;
        puVar11 = puVar11 + -2;
        if (uVar10 == 0) break;
        pvVar5 = (void *)*puVar11;
        *puVar11 = 0;
      }
    }
    memset(puVar8,0xab,(uVar6 >> 1) << 4);
    if ((*puVar9 & 1) != 0) {
      uVar6 = puVar9[1];
      goto LAB_005e3ea0;
    }
  }
  else {
    puVar8 = (ulong *)puVar9[1];
    if (puVar8 != (ulong *)0x0) goto joined_r0x005e3e40;
    uVar6 = 0;
LAB_005e3ea0:
    FUN_002e2ea0(PTR_LAB_04373088,uVar6);
  }
  FUN_002e2ea0(PTR_LAB_04373088,puVar9);
  puVar8 = *(ulong **)(param_1 + 0x58);
LAB_005e3ec0:
  uVar6 = *puVar8;
  if (1 < uVar6) {
    lVar7 = 0;
    uVar10 = 0;
    do {
      puVar9 = puVar8 + 1;
      if ((uVar6 & 1) != 0) {
        puVar9 = (ulong *)puVar8[1];
      }
      iVar4 = strcmp(*(char **)((long)puVar9 + lVar7),param_2);
      if (iVar4 == 0) {
        if ((uVar6 & 1) == 0) {
          puVar8 = puVar8 + 1;
        }
        else {
          puVar8 = (ulong *)puVar8[1];
        }
        *(long *)((long)puVar8 + lVar7 + 8) = *(long *)((long)puVar8 + lVar7 + 8) + 1;
        goto LAB_005e3f60;
      }
      uVar6 = *puVar8;
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar10 < uVar6 >> 1);
  }
                    /* try { // try from 005e3f08 to 005e3f0f has its CatchHandler @ 005e3fa4 */
  local_48 = (void *)FUN_002ec2d0(param_2);
  local_54 = 1;
                    /* try { // try from 005e3f1c to 005e3f2b has its CatchHandler @ 005e3f88 */
  FUN_005e4110(puVar8,&local_48,&local_54);
  pvVar5 = local_48;
  local_48 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
                    /* try { // try from 005e3f38 to 005e3f3b has its CatchHandler @ 005e3f84 */
    free(pvVar5);
  }
LAB_005e3f60:
                    /* try { // try from 005e3f60 to 005e3f67 has its CatchHandler @ 005e3fbc */
  FUN_002ef790(param_1 + 0x38);
  return;
}


