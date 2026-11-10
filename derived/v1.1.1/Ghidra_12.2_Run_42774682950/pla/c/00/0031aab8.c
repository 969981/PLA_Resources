/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031aab8; name: FUN_0031aab8
 */


int FUN_0031aab8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_0030f640(auStack_40,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map_field.h"
                 ,0x5a);
                    /* try { // try from 0031aaf0 to 0031ab1b has its CatchHandler @ 0031ab40 */
    uVar1 = FUN_0030f3ac(auStack_40,"Protocol Buffer map usage error:\n");
    uVar1 = FUN_0030f3ac(uVar1,"MapKey::type MapKey is not initialized. ");
    uVar1 = FUN_0030f3ac(uVar1,"Call set methods to initialize MapKey.");
                    /* try { // try from 0031ab1c to 0031ab23 has its CatchHandler @ 0031ab3c */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
    return *(int *)(param_1 + 0x18);
  }
  return *(int *)(param_1 + 0x18);
}


