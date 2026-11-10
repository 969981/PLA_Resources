/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d7d7c; name: FUN_005d7d7c
 */


void FUN_005d7d7c(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  char *local_80;
  undefined4 local_78;
  undefined **local_70;
  undefined8 uStack_68;
  undefined ***local_50;
  
  FUN_002ef750(param_1 + 0x18);
  plVar7 = (long *)(param_1 + 0x38);
  plVar8 = (long *)*plVar7;
  lVar10 = *param_2;
  if (plVar8 == (long *)0x0) {
LAB_005d7e10:
    *plVar7 = lVar10;
    *param_2 = 0;
    lVar10 = *plVar7;
  }
  else {
    lVar5 = plVar8[1];
    plVar1 = plVar8 + 2;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 005d7de0 to 005d7dff has its CatchHandler @ 005d7f68 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar8 + 1,lVar9);
    }
    if (lVar9 < 1) {
                    /* try { // try from 005d7f40 to 005d7f67 has its CatchHandler @ 005d7f68 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar9 != 1) goto LAB_005d7e10;
    (**(code **)(*plVar8 + 8))(plVar8);
    FUN_002e2ea0(PTR_LAB_04373088,plVar8);
    *plVar7 = lVar10;
    *param_2 = 0;
    lVar10 = *plVar7;
  }
  if ((lVar10 == 0) || (*(char *)(param_1 + 0xf0) == '\0')) goto LAB_005d7eec;
                    /* try { // try from 005d7e2c to 005d7e33 has its CatchHandler @ 005d7fd0 */
  uStack_68 = FUN_005d90a0(plVar7,param_1 + 0x40);
  uVar2 = *(undefined8 *)(*plVar7 + 0x18);
  plVar7 = *(long **)(*plVar7 + 0x20);
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_70 = &PTR_LAB_0418db18;
  local_80 = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver/fake/fake_resolver.cc"
  ;
  local_78 = 0x132;
                    /* try { // try from 005d7e80 to 005d7e8b has its CatchHandler @ 005d7f6c */
  local_50 = &local_70;
  FUN_003d4d40(uVar2,&local_70,&local_80);
  if (&local_70 == local_50) {
    pcVar6 = (code *)(*local_50)[4];
LAB_005d7eb0:
    (*pcVar6)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_50)[5];
    goto LAB_005d7eb0;
  }
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      lVar10 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined1 *)(param_1 + 0xf0) = 0;
LAB_005d7eec:
                    /* try { // try from 005d7eec to 005d7ef3 has its CatchHandler @ 005d7fe8 */
  FUN_002ef790(param_1 + 0x18);
  return;
}


