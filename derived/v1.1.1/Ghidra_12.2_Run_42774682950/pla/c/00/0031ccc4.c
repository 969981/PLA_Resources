/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031ccc4; name: FUN_0031ccc4
 */


int FUN_0031ccc4(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  if (((int)param_1[1] == 0) || (*param_1 == 0)) {
    FUN_0030f640(auStack_40,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map_field.h"
                 ,0x2b2);
                    /* try { // try from 0031cd04 to 0031cd23 has its CatchHandler @ 0031cd48 */
    uVar1 = FUN_0030f3ac(auStack_40,"Protocol Buffer map usage error:\n");
    uVar1 = FUN_0030f3ac(uVar1,"MapValueRef::type MapValueRef is not initialized.");
                    /* try { // try from 0031cd24 to 0031cd2b has its CatchHandler @ 0031cd44 */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
    return (int)param_1[1];
  }
  return (int)param_1[1];
}


