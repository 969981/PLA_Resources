/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ebb88; name: FUN_005ebb88
 */


void FUN_005ebb88(long param_1,uint param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  undefined8 *local_48;
  
  if (PTR_DAT_04375158[0x10] != '\0') {
    lVar13 = *(long *)(*(long *)(param_1 + 0x48) + 0x30);
    pbVar12 = (byte *)(lVar13 + (ulong)param_2 * 0x18);
    if ((*pbVar12 & 1) == 0) {
      pbVar12 = pbVar12 + 1;
    }
    else {
      pbVar12 = *(byte **)(lVar13 + (ulong)param_2 * 0x18 + 0x10);
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                 ,0x1d1,1,"[priority_lb %p] selected priority %d, child %s",param_1,param_2,pbVar12)
    ;
  }
  lVar13 = *(long *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x88) = param_2;
  *(undefined8 *)(param_1 + 0x90) = 0;
  uVar9 = (ulong)(param_2 + 1);
  if (uVar9 < (ulong)((*(long *)(lVar13 + 0x38) - *(long *)(lVar13 + 0x30) >> 3) *
                     -0x5555555555555555)) {
    uVar14 = param_2 + 2;
    do {
      lVar6 = FUN_005ebe40(param_1 + 0x70,*(long *)(lVar13 + 0x30) + uVar9 * 0x18);
      if (param_1 + 0x78 != lVar6) {
        FUN_005e9ef0(*(undefined8 *)(lVar6 + 0x38));
        lVar13 = *(long *)(param_1 + 0x48);
      }
      uVar9 = (ulong)uVar14;
      uVar14 = uVar14 + 1;
    } while (uVar9 < (ulong)((*(long *)(lVar13 + 0x38) - *(long *)(lVar13 + 0x30) >> 3) *
                            -0x5555555555555555));
  }
  plVar7 = (long *)FUN_005e9cc0(param_1 + 0x70,*(long *)(lVar13 + 0x30) + (ulong)param_2 * 0x18);
  lVar13 = *plVar7;
  plVar7 = *(long **)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(lVar13 + 0x40);
  local_48 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
  if (local_48 != (undefined8 *)0x0) {
    lVar6 = *(long *)(lVar13 + 0x48);
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 0x10);
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar10 = *(long *)(lVar6 + 8);
      if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar10 + 8),(long *)(lVar6 + 8),lVar8,
                     lVar8 + 1);
      }
    }
    uVar11 = *(undefined8 *)(lVar13 + 0x48);
    *local_48 = &PTR_FUN_0418e8d8;
    local_48[1] = uVar11;
  }
                    /* try { // try from 005ebce8 to 005ebcf7 has its CatchHandler @ 005ebd94 */
  (**(code **)(*plVar7 + 0x18))(plVar7,uVar2,&local_48);
  puVar5 = local_48;
  local_48 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_002e2ea0(PTR_LAB_04373088,puVar5);
  }
  return;
}


