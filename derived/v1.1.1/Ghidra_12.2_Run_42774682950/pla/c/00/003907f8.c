/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003907f8; name: FUN_003907f8
 */


void FUN_003907f8(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint *puVar5;
  long local_60 [2];
  uint *local_50;
  undefined1 auStack_28 [8];
  
  local_60[0] = *param_2;
  if (local_60[0] == *param_1) {
    FUN_0030f640(local_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x689);
                    /* try { // try from 00390838 to 0039084b has its CatchHandler @ 0039093c */
    uVar2 = FUN_0030f3ac(local_60,"CHECK failed: other->GetArena() != GetArena(): ");
                    /* try { // try from 0039084c to 00390853 has its CatchHandler @ 00390938 */
    FUN_0030f41c(auStack_28,uVar2);
    FUN_0030f658(local_60);
    local_60[0] = *param_2;
  }
  local_60[1] = 0;
  local_50 = (uint *)0x0;
                    /* try { // try from 00390868 to 00390893 has its CatchHandler @ 00390954 */
  FUN_00390970(local_60,param_1);
  FUN_00387124(param_1);
  FUN_00390970(param_1,param_2);
  FUN_0032bcc4(param_2,local_60);
  puVar1 = PTR_LAB_04373088;
  if (local_50 != (uint *)0x0) {
    if (local_60[0] != 0) goto LAB_0039091c;
    uVar4 = (ulong)*local_50;
    if (0 < (int)*local_50) {
      puVar5 = local_50 + 2;
      puVar3 = *(undefined8 **)puVar5;
      if (puVar3 != (undefined8 *)0x0) goto LAB_003908e0;
      while (uVar4 = uVar4 - 1, uVar4 != 0) {
        while( true ) {
          puVar5 = puVar5 + 2;
          puVar3 = *(undefined8 **)puVar5;
          if (puVar3 == (undefined8 *)0x0) break;
LAB_003908e0:
          (**(code **)*puVar3)(puVar3);
          FUN_002e2ea0(puVar1,puVar3);
          uVar4 = uVar4 - 1;
          if (uVar4 == 0) goto LAB_0039090c;
        }
      }
    }
LAB_0039090c:
    FUN_002ee710(local_50);
  }
  if (local_60[0] == 0) {
    return;
  }
LAB_0039091c:
                    /* try { // try from 0039091c to 00390923 has its CatchHandler @ 00390950 */
  local_50 = (uint *)0x0;
  FUN_0032ce8c(local_60[0]);
  return;
}


