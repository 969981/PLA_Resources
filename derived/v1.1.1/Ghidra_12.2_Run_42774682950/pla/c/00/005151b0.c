/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005151b0; name: FUN_005151b0
 */


void FUN_005151b0(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong *__s;
  long lVar8;
  ulong uVar9;
  
  puVar7 = (undefined8 *)param_1[7];
  if (puVar7 == (undefined8 *)0x0) {
LAB_00515224:
    uVar6 = *param_1;
    if ((uVar6 & 1) == 0) goto LAB_0051522c;
LAB_00515264:
    __s = (ulong *)param_1[1];
    if (__s == (ulong *)0x0) {
      uVar6 = 0;
      goto LAB_005152d4;
    }
  }
  else {
    lVar5 = puVar7[1];
    plVar1 = puVar7 + 2;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 005151f4 to 00515213 has its CatchHandler @ 00515314 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar7 + 1,lVar8);
    }
    if (lVar8 < 1) {
                    /* try { // try from 005152ec to 00515313 has its CatchHandler @ 00515314 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar8 != 1) goto LAB_00515224;
    (**(code **)*puVar7)(puVar7);
    FUN_002e2ea0(PTR_LAB_04373088,puVar7);
    uVar6 = *param_1;
    if ((uVar6 & 1) != 0) goto LAB_00515264;
LAB_0051522c:
    __s = param_1 + 1;
  }
  uVar6 = uVar6 >> 1;
  if (uVar6 != 0) {
    uVar9 = uVar6;
    puVar4 = __s + uVar6 * 3;
    do {
      uVar9 = uVar9 - 1;
      FUN_0051f624(puVar4 + -3,puVar4[-2]);
      puVar4 = puVar4 + -3;
    } while (uVar9 != 0);
  }
  memset(__s,0xab,uVar6 * 0x18);
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar6 = param_1[1];
LAB_005152d4:
  FUN_002e2ea0(PTR_LAB_04373088,uVar6);
  return;
}


