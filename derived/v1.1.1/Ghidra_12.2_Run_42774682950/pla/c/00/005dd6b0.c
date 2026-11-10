/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005dd6b0; name: FUN_005dd6b0
 */


void FUN_005dd6b0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  *param_1 = &PTR_LAB_0418ddd0;
                    /* try { // try from 005dd6d0 to 005dd6db has its CatchHandler @ 005dd91c */
  free((void *)param_1[7]);
  FUN_002e4a10(param_1[9]);
  puVar4 = (undefined8 *)param_1[0x4d];
  param_1[0x4d] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 005dd6f0 to 005dd6f3 has its CatchHandler @ 005dd918 */
    (**(code **)*puVar4)();
  }
  if ((param_1[0x29] & 1) == 0) {
    puVar4 = param_1 + 0x2a;
LAB_005dd70c:
    uVar8 = (ulong)param_1[0x29] >> 1;
    puVar6 = puVar4 + uVar8 * 0x12 + -1;
    lVar7 = uVar8 + 1;
    while (lVar7 = lVar7 + -1, lVar7 != 0) {
      uVar5 = *puVar6;
      puVar6 = puVar6 + -0x12;
                    /* try { // try from 005dd730 to 005dd733 has its CatchHandler @ 005dd960 */
      FUN_002e4a10(uVar5);
    }
    memset(puVar4,0xab,uVar8 * 0x90);
    if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
      uVar5 = param_1[0x2a];
      goto LAB_005dd764;
    }
  }
  else {
    puVar4 = (undefined8 *)param_1[0x2a];
    if (puVar4 != (undefined8 *)0x0) goto LAB_005dd70c;
    uVar5 = 0;
LAB_005dd764:
    FUN_002e2ea0(PTR_LAB_04373088,uVar5);
  }
  FUN_005dd5a0(param_1[0x27]);
  puVar4 = (undefined8 *)param_1[0xe];
  param_1[0xe] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 005dd78c to 005dd78f has its CatchHandler @ 005dd914 */
    (**(code **)*puVar4)();
  }
  puVar4 = (undefined8 *)param_1[0xd];
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = puVar4[1];
    plVar1 = puVar4 + 2;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 005dd7c4 to 005dd7e3 has its CatchHandler @ 005dd910 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),puVar4 + 1,lVar9);
    }
    if (lVar9 < 1) {
                    /* try { // try from 005dd8bc to 005dd8e3 has its CatchHandler @ 005dd910 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar9 == 1) {
      (**(code **)*puVar4)(puVar4);
      FUN_002e2ea0(PTR_LAB_04373088,puVar4);
      puVar4 = (undefined8 *)param_1[8];
      goto joined_r0x005dd7f8;
    }
  }
  puVar4 = (undefined8 *)param_1[8];
joined_r0x005dd7f8:
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = puVar4[1];
    plVar1 = puVar4 + 2;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 005dd828 to 005dd847 has its CatchHandler @ 005dd90c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),puVar4 + 1,lVar9);
    }
    if (lVar9 < 1) {
                    /* try { // try from 005dd8e4 to 005dd90b has its CatchHandler @ 005dd90c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar9 == 1) {
      (**(code **)*puVar4)(puVar4);
      FUN_002e2ea0(PTR_LAB_04373088,puVar4);
    }
  }
  FUN_00548ed0(param_1);
  return;
}


