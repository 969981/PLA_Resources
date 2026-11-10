/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00505d84; name: FUN_00505d84
 */


void FUN_00505d84(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  *param_1 = (long)&PTR_LAB_04184a98;
                    /* try { // try from 00505da0 to 00505da3 has its CatchHandler @ 00505f54 */
  FUN_002e4a10(param_1[9]);
  if (PTR_DAT_043749f8[0x10] != '\0') {
                    /* try { // try from 00505ed0 to 00505eef has its CatchHandler @ 00505f54 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver/xds/xds_resolver.cc"
                 ,0x39,1,"[xds_resolver %p] destroyed",param_1);
  }
  puVar7 = (undefined8 *)param_1[0xc];
  if (puVar7 != (undefined8 *)0x0) {
    lVar5 = puVar7[1];
    plVar6 = puVar7 + 2;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 00505de8 to 00505e07 has its CatchHandler @ 00505f4c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar7 + 1,lVar8);
    }
    if (lVar8 < 1) {
                    /* try { // try from 00505f24 to 00505f4b has its CatchHandler @ 00505f4c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar8 == 1) {
      (**(code **)*puVar7)(puVar7);
      FUN_002e2ea0(PTR_LAB_04373088,puVar7);
      puVar7 = (undefined8 *)param_1[0xb];
      param_1[0xb] = 0;
      goto joined_r0x00505e20;
    }
  }
  puVar7 = (undefined8 *)param_1[0xb];
  param_1[0xb] = 0;
joined_r0x00505e20:
  if (puVar7 != (undefined8 *)0x0) {
                    /* try { // try from 00505e2c to 00505e2f has its CatchHandler @ 00505f50 */
    (**(code **)*puVar7)();
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[8]);
  }
  puVar4 = PTR_DAT_04374a00;
  puVar7 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7);
    FUN_002e2ea0(PTR_LAB_04373088,puVar7);
  }
  plVar6 = (long *)param_1[4];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


