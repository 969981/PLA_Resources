/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051a630; name: FUN_0051a630
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0051a630(long *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = (long)(PTR_DAT_04374aa8 + 0x10);
  if (PTR_DAT_04374a30[0x10] != '\0') {
                    /* try { // try from 0051a820 to 0051a83f has its CatchHandler @ 0051a844 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x717,1,"[xds_client %p] destroying xds client",param_1);
  }
  FUN_00524080(param_1 + 0x2b,param_1[0x2c]);
  FUN_00523fe4(param_1 + 0x28,param_1[0x29]);
  FUN_00523f68(param_1 + 0x25,param_1[0x26]);
  FUN_00523eb8(param_1 + 0x22,param_1[0x23]);
  if ((char)param_1[0x1e] != '\0') {
    plVar7 = param_1 + 0x1f;
    if (*plVar7 != 0) {
      FUN_0051e9cc(plVar7);
      FUN_002e2ea0(PTR_LAB_04373088,*plVar7);
    }
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  if ((char)param_1[0x16] != '\0') {
    if ((char)param_1[0x1a] != '\0') {
      plVar7 = param_1 + 0x1b;
      if (*plVar7 != 0) {
        FUN_0051e9cc(plVar7);
        FUN_002e2ea0(PTR_LAB_04373088,*plVar7);
      }
      *(undefined1 *)(param_1 + 0x1a) = 0;
    }
    if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[0x19]);
    }
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  puVar5 = (undefined8 *)param_1[0x15];
  param_1[0x15] = 0;
  if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 0051a724 to 0051a727 has its CatchHandler @ 0051a8b0 */
    (**(code **)*puVar5)();
  }
  puVar5 = (undefined8 *)param_1[0x14];
  param_1[0x14] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_002e2ea0(PTR_LAB_04373088,puVar5);
  }
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0xe);
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[0x13]);
    bVar2 = *(byte *)(param_1 + 0xe);
  }
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0xb);
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[0x10]);
    bVar2 = *(byte *)(param_1 + 0xb);
  }
  if ((bVar2 & 1) == 0) {
    lVar6 = param_1[7];
    param_1[7] = 0;
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[0xd]);
    lVar6 = param_1[7];
    param_1[7] = 0;
  }
  if (lVar6 != 0) {
    FUN_00523b24();
  }
  plVar7 = (long *)param_1[5];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


