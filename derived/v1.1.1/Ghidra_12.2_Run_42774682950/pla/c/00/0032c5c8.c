/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032c5c8; name: FUN_0032c5c8
 */


void FUN_0032c5c8(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x28);
  }
  else {
    uVar7 = *(long *)(param_2 + 0x10) << 1;
    uVar4 = *(ulong *)(param_1 + 0x30);
    if (uVar7 <= *(ulong *)(param_1 + 0x30)) {
      uVar4 = uVar7;
    }
  }
  if (0xffffffffffffffe7 < param_3) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/arena.cc",
                 0x76);
                    /* try { // try from 0032c62c to 0032c63f has its CatchHandler @ 0032c6a0 */
    uVar5 = FUN_0030f3ac(auStack_60,
                         "CHECK failed: (min_bytes) <= (nn::npln::gnp::std::numeric_limits<size_t>::max() - kBlockHeaderSize): "
                        );
                    /* try { // try from 0032c640 to 0032c647 has its CatchHandler @ 0032c69c */
    FUN_0030f41c(auStack_28,uVar5);
    FUN_0030f658(auStack_60);
  }
  uVar7 = param_3 + 0x18;
  if (param_3 + 0x18 <= uVar4) {
    uVar7 = uVar4;
  }
  plVar6 = (long *)(**(code **)(param_1 + 0x48))(uVar7);
  *plVar6 = param_2;
  plVar6[1] = 0x18;
  plVar1 = (long *)(param_1 + 0x10);
  plVar6[2] = uVar7;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + uVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


