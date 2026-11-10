/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d89cc; name: FUN_005d89cc
 */


void FUN_005d89cc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  char *pcVar10;
  char *local_70;
  undefined4 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined ***local_40;
  long local_28;
  
  local_28 = 0;
  lVar9 = param_1 + 0x18;
                    /* try { // try from 005d89e8 to 005d89ef has its CatchHandler @ 005d8c10 */
  FUN_002ef750(lVar9);
  pcVar10 = *(char **)(param_1 + 0x38);
  if (pcVar10 == (char *)0x0) {
    *(undefined1 *)(param_1 + 0xf0) = 1;
    FUN_0050d560(param_1 + 0x40,param_2);
                    /* try { // try from 005d8af8 to 005d8aff has its CatchHandler @ 005d8b68 */
    FUN_002ef790(lVar9);
    goto LAB_005d8b44;
  }
  plVar1 = (long *)(pcVar10 + 0x10);
  do {
    lVar6 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar7 = *(long *)(pcVar10 + 8);
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 005d8a28 to 005d8a43 has its CatchHandler @ 005d8b60 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),pcVar10 + 8,lVar6,lVar6 + 1);
  }
                    /* try { // try from 005d8a48 to 005d8a53 has its CatchHandler @ 005d8bf4 */
  local_70 = pcVar10;
  FUN_005d8c24(&local_28,&local_70);
  FUN_005d80b8(&local_70);
                    /* try { // try from 005d8a5c to 005d8a63 has its CatchHandler @ 005d8bf0 */
  FUN_002ef790(lVar9);
                    /* try { // try from 005d8a64 to 005d8a6f has its CatchHandler @ 005d8bdc */
  uStack_58 = FUN_005d90a0(&local_28,param_2);
  uVar3 = *(undefined8 *)(local_28 + 0x18);
  plVar1 = *(long **)(local_28 + 0x20);
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = &PTR_LAB_0418da98;
  local_70 = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver/fake/fake_resolver.cc"
  ;
  local_68 = 0xf0;
                    /* try { // try from 005d8abc to 005d8ac7 has its CatchHandler @ 005d8b6c */
  local_40 = &local_60;
  FUN_003d4d40(uVar3,&local_60,&local_70);
  if (&local_60 == local_40) {
    pcVar8 = (code *)(*local_40)[4];
LAB_005d8b0c:
    (*pcVar8)();
  }
  else if (local_40 != (undefined ***)0x0) {
    pcVar8 = (code *)(*local_40)[5];
    goto LAB_005d8b0c;
  }
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_005d8b44:
  FUN_005d7fec(&local_28);
  return;
}


