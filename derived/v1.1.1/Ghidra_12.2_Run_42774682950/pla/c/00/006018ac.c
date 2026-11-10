/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006018ac; name: FUN_006018ac
 */


void FUN_006018ac(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_006018ac(param_1,*param_2);
  FUN_006018ac(param_1,param_2[1]);
  puVar6 = (undefined8 *)param_2[8];
  if (puVar6 != (undefined8 *)0x0) {
    lVar5 = puVar6[1];
    plVar1 = puVar6 + 2;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 00601908 to 00601927 has its CatchHandler @ 006019c8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar6 + 1,lVar7);
    }
    if (lVar7 < 1) {
                    /* try { // try from 006019a0 to 006019c7 has its CatchHandler @ 006019c8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (**(code **)*puVar6)(puVar6);
      FUN_002e2ea0(PTR_LAB_04373088,puVar6);
      bVar2 = *(byte *)(param_2 + 4);
      goto joined_r0x0060193c;
    }
  }
  bVar2 = *(byte *)(param_2 + 4);
joined_r0x0060193c:
  if ((bVar2 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_2[6]);
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return;
}


