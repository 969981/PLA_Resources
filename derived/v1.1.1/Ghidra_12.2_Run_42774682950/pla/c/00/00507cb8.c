/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00507cb8; name: FUN_00507cb8
 */


void FUN_00507cb8(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  
  plVar10 = (long *)param_1[0x17];
  *param_1 = (long)(PTR_DAT_04374a08 + 0x10);
  if (plVar10 != (long *)0x0) {
    plVar13 = (long *)plVar10[2];
    while( true ) {
      if ((plVar13 != (long *)0x0) && (plVar4 = (long *)*plVar13, plVar4 != (long *)0x0)) {
        plVar7 = plVar4 + 1;
        lVar5 = *plVar4;
        do {
          lVar9 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 00507d48 to 00507d77 has its CatchHandler @ 00507edc */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar4,lVar9);
        }
        if (lVar9 < 1) {
                    /* try { // try from 00507eb0 to 00507ed7 has its CatchHandler @ 00507ed8 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar9 == 1) {
          (*(code *)plVar13[3])(plVar13[4]);
        }
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) break;
      plVar13 = (long *)plVar10[2];
    }
  }
  FUN_005095f0(param_1 + 0x1b);
  puVar3 = PTR_LAB_04373088;
  plVar10 = (long *)param_1[0x17];
  while (plVar10 != (long *)0x0) {
    plVar10 = (long *)*plVar10;
    FUN_002e2ea0(puVar3);
  }
  lVar5 = param_1[0x15];
  param_1[0x15] = 0;
  if (lVar5 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  puVar3 = PTR_LAB_04373088;
  uVar6 = param_1[0x10];
  if ((uVar6 & 1) == 0) {
    plVar10 = param_1 + 0x11;
joined_r0x00507de4:
    if (uVar6 >> 1 != 0) {
      uVar11 = uVar6 >> 1;
      do {
        uVar12 = uVar11 - 1;
        puVar8 = (undefined8 *)plVar10[uVar11 - 1];
        plVar10[uVar11 - 1] = 0;
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8);
          FUN_002e2ea0(puVar3,puVar8);
        }
        uVar11 = uVar12;
      } while (uVar12 != 0);
    }
    memset(plVar10,0xab,(uVar6 >> 1) << 3);
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_00507e64;
    lVar5 = param_1[0x11];
  }
  else {
    plVar10 = (long *)param_1[0x11];
    if (plVar10 != (long *)0x0) goto joined_r0x00507de4;
    lVar5 = 0;
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar5);
LAB_00507e64:
  FUN_003ee5f8(param_1 + 6);
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_1[5]);
  return;
}


