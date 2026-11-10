/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d79c8; name: FUN_005d79c8
 */


void FUN_005d79c8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_60;
  long *plStack_58;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  long *plStack_38;
  
  plStack_38 = *(long **)(param_2 + 0x20);
  local_40 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  local_48 = *(undefined8 **)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
                    /* try { // try from 005d79f8 to 005d7a03 has its CatchHandler @ 005d7cac */
  FUN_0050ce5c(param_1,&local_40,&local_48);
  puVar5 = local_48;
  local_48 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_002e2ea0(PTR_LAB_04373088,puVar5);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar4 = PTR_DAT_043750c0;
  param_1[6] = 0;
  *param_1 = (long)(puVar4 + 0x10);
                    /* try { // try from 005d7a80 to 005d7aef has its CatchHandler @ 005d7cfc */
  piVar6 = (int *)FUN_002e4780(*(undefined8 *)(param_2 + 8),"grpc.fake_resolver.response_generator")
  ;
  if ((piVar6 == (int *)0x0) || (*piVar6 != 2)) {
    param_1[7] = 0;
  }
  else {
    lVar9 = *(long *)(piVar6 + 4);
    plVar1 = (long *)(lVar9 + 0x10);
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar8 = *(long *)(lVar9 + 8);
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),(long *)(lVar9 + 8),lVar7,
                   lVar7 + 1);
    }
    param_1[7] = lVar9;
  }
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  local_50 = "grpc.fake_resolver.response_generator";
                    /* try { // try from 005d7b30 to 005d7b3b has its CatchHandler @ 005d7be4 */
  lVar9 = FUN_002e45c0(*(undefined8 *)(param_2 + 8),&local_50,1);
  lVar7 = param_1[7];
  param_1[6] = lVar9;
  if (lVar7 != 0) {
    plVar1 = param_1 + 2;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar8 = param_1[1];
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 005d7b78 to 005d7b93 has its CatchHandler @ 005d7bc8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),param_1 + 1,lVar9,lVar9 + 1);
    }
    local_60 = 0;
                    /* try { // try from 005d7b98 to 005d7ba3 has its CatchHandler @ 005d7bcc */
    plStack_58 = param_1;
    FUN_005d7d7c(lVar7,&plStack_58);
    FUN_005d7fec(&plStack_58);
    FUN_005d80b8(&local_60);
  }
  return;
}


