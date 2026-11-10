/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e14ec; name: FUN_003e14ec
 */


void FUN_003e14ec(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  
                    /* try { // try from 003e1500 to 003e1503 has its CatchHandler @ 003e178c */
  FUN_002e4a10(*param_1);
  lVar5 = param_1[2];
  if (param_1[3] != lVar5) {
    uVar9 = 0;
    do {
                    /* try { // try from 003e152c to 003e153b has its CatchHandler @ 003e1794 */
      FUN_003ce6c0(*(undefined8 *)(lVar5 + uVar9 * 8),"server",
                   "external/com_google_grpc_base/src/core/lib/surface/server.cc",0x152);
      lVar5 = param_1[2];
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(param_1[3] - lVar5 >> 3));
  }
  puVar6 = (undefined8 *)param_1[0x29];
  if (puVar6 != (undefined8 *)0x0) {
    lVar5 = puVar6[1];
    plVar8 = puVar6 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 003e1584 to 003e15a3 has its CatchHandler @ 003e177c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar6 + 1,lVar7);
    }
    if (lVar7 < 1) {
                    /* try { // try from 003e1754 to 003e177b has its CatchHandler @ 003e177c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (**(code **)*puVar6)(puVar6);
      FUN_002e2ea0(PTR_LAB_04373088,puVar6);
      lVar5 = param_1[0x23];
      goto joined_r0x003e1650;
    }
  }
  lVar5 = param_1[0x23];
joined_r0x003e1650:
  if (lVar5 != 0) {
    lVar5 = param_1[0x21];
    plVar8 = (long *)param_1[0x22];
    lVar7 = *plVar8;
    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar5 + 8);
    **(long **)(lVar5 + 8) = lVar7;
    param_1[0x23] = 0;
    puVar4 = PTR_LAB_04373088;
    if (plVar8 != param_1 + 0x21) {
      puVar6 = (undefined8 *)plVar8[2];
      plVar8[2] = 0;
      plVar3 = (long *)plVar8[1];
      while( true ) {
        if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 003e1624 to 003e1627 has its CatchHandler @ 003e1790 */
          (**(code **)*puVar6)();
        }
        FUN_002e2ea0(puVar4,plVar8);
        if (plVar3 == param_1 + 0x21) break;
        puVar6 = (undefined8 *)plVar3[2];
        plVar3[2] = 0;
        plVar8 = plVar3;
        plVar3 = (long *)plVar3[1];
      }
    }
  }
  if (param_1[0x20] != 0) {
    lVar5 = param_1[0x1e];
    plVar8 = (long *)param_1[0x1f];
    lVar7 = *plVar8;
    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar5 + 8);
    **(long **)(lVar5 + 8) = lVar7;
    param_1[0x20] = 0;
    puVar4 = PTR_LAB_04373088;
    while (plVar8 != param_1 + 0x1e) {
      plVar8 = (long *)plVar8[1];
      FUN_002e2ea0(puVar4);
    }
  }
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = param_1[0x1b];
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  puVar6 = (undefined8 *)param_1[0x19];
  param_1[0x19] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_002e2ea0(PTR_LAB_04373088,puVar6);
  }
  FUN_003e196c(param_1 + 0x16);
                    /* try { // try from 003e16f4 to 003e16f7 has its CatchHandler @ 003e1788 */
  FUN_002ef860(param_1 + 0x12);
                    /* try { // try from 003e16fc to 003e16ff has its CatchHandler @ 003e1784 */
  FUN_002ef710(param_1 + 0xd);
                    /* try { // try from 003e1704 to 003e1707 has its CatchHandler @ 003e1780 */
  FUN_002ef710(param_1 + 9);
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  puVar4 = PTR_LAB_04373088;
  if (param_1[2] == 0) {
    return;
  }
  param_1[3] = param_1[2];
  FUN_002e2ea0(puVar4);
  return;
}


