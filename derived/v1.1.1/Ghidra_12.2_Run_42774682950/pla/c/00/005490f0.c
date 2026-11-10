/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005490f0; name: FUN_005490f0
 */


void FUN_005490f0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  *param_1 = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
                    /* try { // try from 00549118 to 00549173 has its CatchHandler @ 005491f8 */
  FUN_0050d35c();
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  puVar5 = (undefined8 *)param_1[0x13];
  if (puVar5 != (undefined8 *)0x0) {
    lVar4 = puVar5[1];
    plVar1 = puVar5 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),puVar5 + 1,lVar6);
    }
    if (lVar6 < 1) {
                    /* try { // try from 005491d0 to 005491f7 has its CatchHandler @ 005491f8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      (**(code **)*puVar5)(puVar5);
      FUN_002e2ea0(PTR_LAB_04373088,puVar5);
    }
  }
  param_1[0x13] = uVar7;
  *(undefined8 *)(param_2 + 0x98) = 0;
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  return;
}


