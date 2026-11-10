/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057f2c4; name: FUN_0057f2c4
 */


void FUN_0057f2c4(long *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *local_38;
  undefined8 *local_28;
  
  local_28 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
                    /* try { // try from 0057f2e0 to 0057f2ef has its CatchHandler @ 0057f488 */
  FUN_003f68f4(param_1,0,&local_28,&local_38);
  puVar6 = local_38;
  puVar5 = local_28;
  if (local_38 != (undefined8 *)0x0) {
    lVar7 = local_38[1];
    plVar1 = local_38 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 0057f324 to 0057f343 has its CatchHandler @ 0057f484 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),local_38 + 1,lVar8);
    }
    if (lVar8 < 1) {
                    /* try { // try from 0057f430 to 0057f457 has its CatchHandler @ 0057f484 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar5 = local_28;
    if (lVar8 == 1) {
      (**(code **)*puVar6)(puVar6);
      FUN_002e2ea0(PTR_LAB_04373088,puVar6);
      puVar5 = local_28;
    }
  }
  if (puVar5 != (undefined8 *)0x0) {
    lVar7 = puVar5[1];
    plVar1 = puVar5 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_28 = puVar5;
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 0057f388 to 0057f3a7 has its CatchHandler @ 0057f480 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),puVar5 + 1,lVar8);
    }
    if (lVar8 < 1) {
                    /* try { // try from 0057f458 to 0057f47f has its CatchHandler @ 0057f480 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar8 == 1) {
      (**(code **)*puVar5)(puVar5);
      FUN_002e2ea0(PTR_LAB_04373088,puVar5);
    }
  }
  puVar2 = PTR_DAT_04374e20 + 0x10;
  param_1[7] = 0;
  param_1[8] = param_2;
  *param_1 = (long)puVar2;
  return;
}


