/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bf0d4; name: FUN_003bf0d4
 */


void FUN_003bf0d4(long param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x2ac2);
                    /* try { // try from 003bf114 to 003bf127 has its CatchHandler @ 003bf230 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 003bf128 to 003bf12f has its CatchHandler @ 003bf22c */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
    uVar7 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar7 = *(ulong *)(param_2 + 8);
  }
  if ((uVar7 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar4 = FUN_0030c8c0();
    }
    else {
      lVar4 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0030cefc(lVar4,(uVar7 & 0xfffffffffffffffe) + 8);
  }
  FUN_00326f44(param_1 + 0x18,param_2 + 0x18);
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar6 = *(byte **)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      pbVar8 = *(byte **)(param_1 + 0x30);
      if (pbVar8 == PTR_DAT_043730c0) {
        FUN_0029175c((undefined8 *)(param_1 + 0x30),puVar5);
      }
      else if (pbVar8 != pbVar6) {
        uVar7 = *(ulong *)(pbVar6 + 8);
        pbVar1 = *(byte **)(pbVar6 + 0x10);
        if ((*pbVar6 & 1) == 0) {
          pbVar1 = pbVar6 + 1;
          uVar7 = (ulong)(*pbVar6 >> 1);
        }
        FUN_00291910(pbVar8,pbVar1,uVar7);
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  }
  return;
}


