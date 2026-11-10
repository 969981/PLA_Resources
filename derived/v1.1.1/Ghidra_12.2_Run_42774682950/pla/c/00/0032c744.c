/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032c744; name: FUN_0032c744
 */


void FUN_0032c744(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if ((param_2 + 7 & 0xfffffffffffffff8) != param_2) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/arena_impl.h"
                 ,0xb8);
                    /* try { // try from 0032c780 to 0032c793 has its CatchHandler @ 0032c83c */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: (internal::AlignUpTo8(n)) == (n): ");
                    /* try { // try from 0032c794 to 0032c79b has its CatchHandler @ 0032c838 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
  uVar2 = *(ulong *)(param_1 + 0x28);
  uVar3 = *(ulong *)(param_1 + 0x30);
  if (uVar3 < uVar2) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/arena_impl.h"
                 ,0xb9);
                    /* try { // try from 0032c7c8 to 0032c7db has its CatchHandler @ 0032c834 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: (limit_) >= (ptr_): ");
                    /* try { // try from 0032c7dc to 0032c7e3 has its CatchHandler @ 0032c830 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar3 = *(ulong *)(param_1 + 0x30);
  }
  if (uVar3 - uVar2 < param_2) {
    FUN_0032cdac(param_1,param_2);
    return;
  }
  *(ulong *)(param_1 + 0x28) = uVar2 + param_2;
  return;
}


