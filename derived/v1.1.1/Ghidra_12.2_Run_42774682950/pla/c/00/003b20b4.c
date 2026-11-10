/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b20b4; name: FUN_003b20b4
 */


void FUN_003b20b4(long param_1,long param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x165f);
                    /* try { // try from 003b211c to 003b212f has its CatchHandler @ 003b2248 */
    uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 003b2130 to 003b2137 has its CatchHandler @ 003b2244 */
    FUN_0030f41c(auStack_28,uVar4);
    FUN_0030f658(auStack_60);
    uVar8 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
  }
  if ((uVar8 & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8);
    if ((uVar9 & 1) == 0) {
      lVar5 = FUN_0030c8c0((ulong *)(param_1 + 8));
    }
    else {
      lVar5 = (uVar9 & 0xfffffffffffffffe) + 8;
    }
    FUN_0030cefc(lVar5,(uVar8 & 0xfffffffffffffffe) + 8);
  }
  FUN_003c38d4(param_1 + 0x18,param_2 + 0x18);
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      pbVar7 = *(byte **)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      pbVar10 = *(byte **)(param_1 + 0x30);
      if (pbVar10 == PTR_DAT_043730c0) {
        FUN_0029175c((undefined8 *)(param_1 + 0x30),puVar6);
      }
      else if (pbVar10 != pbVar7) {
        uVar8 = *(ulong *)(pbVar7 + 8);
        pbVar2 = *(byte **)(pbVar7 + 0x10);
        if ((*pbVar7 & 1) == 0) {
          pbVar2 = pbVar7 + 1;
          uVar8 = (ulong)(*pbVar7 >> 1);
        }
        FUN_00291910(pbVar10,pbVar2,uVar8);
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar5 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar5 = FUN_003c0bc0(puVar6);
        *(long *)(param_1 + 0x38) = lVar5;
      }
      puVar1 = PTR_DAT_04373c08;
      if (*(undefined **)(param_2 + 0x38) != (undefined *)0x0) {
        puVar1 = *(undefined **)(param_2 + 0x38);
      }
      FUN_003b225c(lVar5,puVar1);
    }
  }
  return;
}


