/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bd8c8; name: FUN_003bd8c8
 */


void FUN_003bd8c8(long param_1,long param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x28a7);
                    /* try { // try from 003bd90c to 003bd91f has its CatchHandler @ 003bda98 */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 003bd920 to 003bd927 has its CatchHandler @ 003bda94 */
    FUN_0030f41c(auStack_28,uVar5);
    FUN_0030f658(auStack_60);
    uVar9 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar9 = *(ulong *)(param_2 + 8);
  }
  if ((uVar9 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar6 = FUN_0030c8c0();
    }
    else {
      lVar6 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0030cefc(lVar6,(uVar9 & 0xfffffffffffffffe) + 8);
  }
  FUN_00326f44(param_1 + 0x18,param_2 + 0x18);
  FUN_00326f44(param_1 + 0x30,param_2 + 0x30);
  FUN_0032ba34(param_1 + 0x48,param_2 + 0x48);
  puVar4 = PTR_DAT_043730c0;
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0x60);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar1 = (undefined8 *)(param_1 + 0x60);
      puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        pbVar10 = (byte *)*puVar1;
      }
      else {
        puVar7 = (ulong *)*puVar7;
        pbVar10 = (byte *)*puVar1;
      }
      if (pbVar10 == puVar4) {
        FUN_0029175c(puVar1,puVar7);
      }
      else if (pbVar10 != pbVar8) {
        uVar9 = *(ulong *)(pbVar8 + 8);
        pbVar2 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar2 = pbVar8 + 1;
          uVar9 = (ulong)(*pbVar8 >> 1);
        }
        FUN_00291910(pbVar10,pbVar2,uVar9);
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0x68);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      puVar1 = (undefined8 *)(param_1 + 0x68);
      puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        pbVar10 = (byte *)*puVar1;
      }
      else {
        puVar7 = (ulong *)*puVar7;
        pbVar10 = (byte *)*puVar1;
      }
      if (pbVar10 == puVar4) {
        FUN_0029175c(puVar1,puVar7);
      }
      else if (pbVar10 != pbVar8) {
        uVar9 = *(ulong *)(pbVar8 + 8);
        pbVar2 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar2 = pbVar8 + 1;
          uVar9 = (ulong)(*pbVar8 >> 1);
        }
        FUN_00291910(pbVar10,pbVar2,uVar9);
      }
    }
  }
  return;
}


