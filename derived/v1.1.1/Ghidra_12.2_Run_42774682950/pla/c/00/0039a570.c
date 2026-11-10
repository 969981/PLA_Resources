/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039a570; name: FUN_0039a570
 */


bool FUN_0039a570(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  uVar3 = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + param_2 * 8);
  do {
    lVar2 = *(long *)(lVar2 + 0x10);
    uVar3 = uVar3 + 1;
  } while (lVar2 != 0);
  if (8 < uVar3) {
    FUN_0030f640(auStack_40,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map.h",
                 0x3a2);
                    /* try { // try from 0039a5b0 to 0039a5c3 has its CatchHandler @ 0039a5ec */
    uVar1 = FUN_0030f3ac(auStack_40,"CHECK failed: (count) <= (kMaxLength): ");
                    /* try { // try from 0039a5c4 to 0039a5cb has its CatchHandler @ 0039a5e8 */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
  }
  return 7 < uVar3;
}


