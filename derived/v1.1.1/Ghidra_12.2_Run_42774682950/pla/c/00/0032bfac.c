/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032bfac; name: FUN_0032bfac
 */


void FUN_0032bfac(long *param_1,long *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  long local_60;
  undefined8 uStack_58;
  uint *local_50;
  undefined1 auStack_28 [8];
  
  local_60 = *param_2;
  if (local_60 == *param_1) {
    FUN_0030f640(&local_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x689);
                    /* try { // try from 0032bfec to 0032bfff has its CatchHandler @ 0032c0f0 */
    uVar3 = FUN_0030f3ac(&local_60,"CHECK failed: other->GetArena() != GetArena(): ");
                    /* try { // try from 0032c000 to 0032c007 has its CatchHandler @ 0032c0ec */
    FUN_0030f41c(auStack_28,uVar3);
    FUN_0030f658(&local_60);
    local_60 = *param_2;
  }
  uStack_58 = 0;
  local_50 = (uint *)0x0;
                    /* try { // try from 0032c01c to 0032c047 has its CatchHandler @ 0032c108 */
  FUN_0032ba34(&local_60,param_1);
  FUN_0032b96c(param_1);
  FUN_0032ba34(param_1,param_2);
  FUN_0032bcc4(param_2,&local_60);
  puVar2 = PTR_LAB_04373088;
  if (local_50 != (uint *)0x0) {
    if (local_60 != 0) goto LAB_0032c0d0;
    uVar5 = (ulong)*local_50;
    if (0 < (int)*local_50) {
      puVar1 = local_50 + 2;
      pbVar4 = *(byte **)puVar1;
      while( true ) {
        if (pbVar4 != (byte *)0x0) {
          if ((*pbVar4 & 1) != 0) {
            FUN_002e2ea0(puVar2,*(undefined8 *)(pbVar4 + 0x10));
          }
          FUN_002e2ea0(puVar2,pbVar4);
        }
        uVar5 = uVar5 - 1;
        puVar1 = puVar1 + 2;
        if (uVar5 == 0) break;
        pbVar4 = *(byte **)puVar1;
      }
    }
    FUN_002ee710(local_50);
  }
  if (local_60 == 0) {
    return;
  }
LAB_0032c0d0:
                    /* try { // try from 0032c0d0 to 0032c0d7 has its CatchHandler @ 0032c104 */
  local_50 = (uint *)0x0;
  FUN_0032ce8c(local_60);
  return;
}


