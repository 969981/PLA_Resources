/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032b96c; name: FUN_0032b96c
 */


void FUN_0032b96c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulong)uVar1;
  if ((int)uVar1 < 0) {
    FUN_0030f640(auStack_40,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x6e8);
                    /* try { // try from 0032b9ec to 0032b9ff has its CatchHandler @ 0032ba20 */
    uVar2 = FUN_0030f3ac(auStack_40,"CHECK failed: (n) >= (0): ");
                    /* try { // try from 0032ba00 to 0032ba07 has its CatchHandler @ 0032ba1c */
    FUN_0030f41c(auStack_48,uVar2);
    FUN_0030f658(auStack_40);
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x10) + 8);
  pbVar5 = (byte *)*puVar4;
  if ((*pbVar5 & 1) != 0) goto LAB_0032b9ac;
  do {
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    while( true ) {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        return;
      }
      puVar4 = puVar4 + 1;
      pbVar5 = (byte *)*puVar4;
      if ((*pbVar5 & 1) == 0) break;
LAB_0032b9ac:
      **(undefined1 **)(pbVar5 + 0x10) = 0;
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
    }
  } while( true );
}


