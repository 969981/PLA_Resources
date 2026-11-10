/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c4df0; name: FUN_003c4df0
 */


void FUN_003c4df0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x30) = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  lVar2 = param_2[2];
  *(long *)(param_1 + 0x38) = lVar2;
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x48) = param_2[4];
  *(ulong *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = param_2[5];
  if ((lVar2 == 0) || (uVar3 == 0)) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    if (uVar3 < 0x18) {
      FUN_0030f640(auStack_40,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/arena_impl.h"
                   ,0x59);
                    /* try { // try from 003c4e48 to 003c4e67 has its CatchHandler @ 003c4ea0 */
      uVar1 = FUN_0030f3ac(auStack_40,
                           "CHECK failed: (options_.initial_block_size) >= (sizeof(Block)): ");
      uVar1 = FUN_0030f3ac(uVar1,": Initial block size too small for header.");
                    /* try { // try from 003c4e68 to 003c4e6f has its CatchHandler @ 003c4e9c */
      FUN_0030f41c(auStack_48,uVar1);
      FUN_0030f658(auStack_40);
      lVar2 = *(long *)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  FUN_0032c29c(param_1);
  return;
}


