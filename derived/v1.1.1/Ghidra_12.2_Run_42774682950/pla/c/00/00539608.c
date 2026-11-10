/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00539608; name: FUN_00539608
 */


void FUN_00539608(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *local_38;
  long local_28;
  
  if (param_1[7] != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x1f5,2,"assertion failed: %s","health_check_client_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_28 = param_1[6];
  lVar7 = param_1[5];
  plVar1 = param_1 + 2;
  do {
    lVar6 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar8 = param_1[1];
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),param_1 + 1,lVar6,lVar6 + 1);
  }
                    /* try { // try from 0053968c to 005396a3 has its CatchHandler @ 005397b4 */
  local_38 = param_1;
  lVar7 = FUN_0053989c(&local_28,lVar7 + 0xb0,lVar7 + 0x18,lVar7 + 0x1c0,&local_38);
  puVar5 = (undefined8 *)param_1[7];
  param_1[7] = lVar7;
  if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 005396bc to 005396bf has its CatchHandler @ 005397b0 */
    (**(code **)*puVar5)();
  }
  plVar1 = local_38;
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[1];
    plVar2 = local_38 + 2;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 005396f4 to 00539713 has its CatchHandler @ 005397ac */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),local_38 + 1,lVar6);
    }
    if (lVar6 < 1) {
                    /* try { // try from 00539784 to 005397ab has its CatchHandler @ 005397ac */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN_002e2ea0(PTR_LAB_04373088,plVar1);
    }
  }
  return;
}


