/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050c7ec; name: FUN_0050c7ec
 */


void FUN_0050c7ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 *local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  if (DAT_0439ebd0 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver_registry.cc"
                 ,0x99,2,"assertion failed: %s","g_state != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_58 = 0;
                    /* try { // try from 0050c830 to 0050c83b has its CatchHandler @ 0050caa4 */
  plVar4 = (long *)FUN_0050c518(DAT_0439ebd0,param_2,&local_38,&local_58);
  uVar1 = *param_5;
  plVar6 = (long *)param_5[1];
  *param_5 = 0;
  param_5[1] = 0;
  puVar7 = (undefined8 *)*param_6;
  *param_6 = 0;
  if (plVar4 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    local_88 = local_38;
                    /* try { // try from 0050c868 to 0050c873 has its CatchHandler @ 0050c9ac */
    uStack_80 = param_3;
    local_78 = param_4;
    uStack_70 = uVar1;
    local_68 = plVar6;
    local_60 = puVar7;
    (**(code **)(*plVar4 + 8))(param_1,plVar4,&local_88);
    puVar7 = local_60;
    local_60 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
      FUN_002e2ea0(PTR_LAB_04373088,puVar7);
    }
    if (local_68 != (long *)0x0) {
      plVar6 = local_68 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar6 = (long *)0x0;
    puVar7 = (undefined8 *)0x0;
  }
                    /* try { // try from 0050c8ec to 0050c8ef has its CatchHandler @ 0050ca20 */
  FUN_003ec320(local_38);
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7);
    FUN_002e2ea0(PTR_LAB_04373088,puVar7);
  }
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar6 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((local_58 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  return;
}


