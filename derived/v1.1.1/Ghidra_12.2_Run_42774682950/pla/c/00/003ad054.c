/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ad054; name: FUN_003ad054
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003ad054(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x1edf);
                    /* try { // try from 003ad088 to 003ad09b has its CatchHandler @ 003ad184 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 003ad09c to 003ad0a3 has its CatchHandler @ 003ad180 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  FUN_00334da8(param_1 + 0x10,param_2 + 0x10);
  uVar4 = *(ulong *)(param_2 + 8);
  if ((uVar4 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar3 = FUN_0030c8c0();
    }
    else {
      lVar3 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0030cefc(lVar3,(uVar4 & 0xfffffffffffffffe) + 8);
  }
  FUN_003c32e0(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(uint *)(param_2 + 0x28);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4d) = *(undefined1 *)(param_2 + 0x4d);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(param_2 + 0x4e);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4f) = *(undefined1 *)(param_2 + 0x4f);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar1;
  }
  return;
}


