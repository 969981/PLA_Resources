/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00399644; name: FUN_00399644
 */


long * FUN_00399644(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [48];
  long *local_18;
  
  lVar4 = *(long *)(*param_1 + 0x10);
  if (lVar4 != 0) {
LAB_0039965c:
    *param_1 = lVar4;
    return param_1;
  }
  local_18 = (long *)0x0;
  uVar2 = FUN_00399760(param_1,&local_18);
  uVar5 = param_1[2];
  if ((uVar2 & 1) == 0) {
    if ((uVar5 & 1) != 0) {
      FUN_0030f640(auStack_48,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map.h",
                   0x1f5);
                    /* try { // try from 003996ac to 003996bf has its CatchHandler @ 0039974c */
      uVar3 = FUN_0030f3ac(auStack_48,"CHECK failed: (bucket_index_ & 1) == (0u): ");
                    /* try { // try from 003996c0 to 003996c7 has its CatchHandler @ 00399748 */
      FUN_0030f41c(auStack_50,uVar3);
      FUN_0030f658(auStack_48);
      uVar5 = param_1[2];
    }
    plVar1 = (long *)local_18[1];
    if ((long *)local_18[1] == (long *)0x0) {
      while( true ) {
        plVar6 = (long *)local_18[2];
        if ((long *)*plVar6 == local_18) break;
        local_18 = (long *)local_18[2];
      }
    }
    else {
      do {
        plVar6 = plVar1;
        plVar1 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    if (plVar6 != (long *)(*(long *)(*(long *)(param_1[1] + 0x20) + uVar5 * 8) + 8)) {
      lVar4 = plVar6[4];
      goto LAB_0039965c;
    }
    lVar4 = uVar5 + 2;
    local_18 = plVar6;
  }
  else {
    lVar4 = uVar5 + 1;
  }
  FUN_003994d4(param_1,lVar4);
  return param_1;
}


