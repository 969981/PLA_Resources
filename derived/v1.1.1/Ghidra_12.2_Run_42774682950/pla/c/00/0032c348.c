/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032c348; name: FUN_0032c348
 */


undefined8 * FUN_0032c348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 8) != 0x18) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/arena.cc",
                 0x13d);
                    /* try { // try from 0032c388 to 0032c39b has its CatchHandler @ 0032c4e4 */
    uVar1 = FUN_0030f3ac(auStack_60,"CHECK failed: (b->pos()) == (kBlockHeaderSize): ");
                    /* try { // try from 0032c39c to 0032c3a3 has its CatchHandler @ 0032c4e0 */
    FUN_0030f41c(auStack_28,uVar1);
    FUN_0030f658(auStack_60);
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar2 < 0x60) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/arena.cc",
                 0x13e);
                    /* try { // try from 0032c3d0 to 0032c3e3 has its CatchHandler @ 0032c4dc */
    uVar1 = FUN_0030f3ac(auStack_60,
                         "CHECK failed: (kBlockHeaderSize + kSerialArenaSize) <= (b->size()): ");
                    /* try { // try from 0032c3e4 to 0032c3eb has its CatchHandler @ 0032c4d8 */
    FUN_0030f41c(auStack_28,uVar1);
    FUN_0030f658(auStack_60);
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (uVar2 < 0x18) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/arena_impl.h"
                   ,0x104);
                    /* try { // try from 0032c418 to 0032c42b has its CatchHandler @ 0032c4cc */
      uVar1 = FUN_0030f3ac(auStack_60,"CHECK failed: n <= size_: ");
                    /* try { // try from 0032c42c to 0032c433 has its CatchHandler @ 0032c4c8 */
      FUN_0030f41c(auStack_28,uVar1);
      FUN_0030f658(auStack_60);
      uVar2 = *(ulong *)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 8) = 0x60;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = param_1;
  if (uVar2 < 0x60) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/arena_impl.h"
                 ,0x104);
                    /* try { // try from 0032c474 to 0032c487 has its CatchHandler @ 0032c4d4 */
    uVar1 = FUN_0030f3ac(auStack_60,"CHECK failed: n <= size_: ");
                    /* try { // try from 0032c488 to 0032c48f has its CatchHandler @ 0032c4d0 */
    FUN_0030f41c(auStack_28,uVar1);
    FUN_0030f658(auStack_60);
    uVar2 = *(ulong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(long *)(param_1 + 0x40) = param_1 + 0x60;
  *(ulong *)(param_1 + 0x48) = param_1 + uVar2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return (undefined8 *)(param_1 + 0x18);
}


