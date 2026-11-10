/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003adda4; name: FUN_003adda4
 */


void FUN_003adda4(long param_1,long param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong *puVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x1166);
                    /* try { // try from 003ade9c to 003adeaf has its CatchHandler @ 003adf38 */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 003adeb0 to 003adeb7 has its CatchHandler @ 003adf34 */
    FUN_0030f41c(auStack_28,uVar5);
    FUN_0030f658(auStack_60);
    uVar8 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
  }
  if ((uVar8 & 1) == 0) {
    uVar3 = *(uint *)(param_2 + 0x10);
  }
  else {
    uVar10 = *(ulong *)(param_1 + 8);
    if ((uVar10 & 1) == 0) {
      lVar4 = FUN_0030c8c0((ulong *)(param_1 + 8));
    }
    else {
      lVar4 = (uVar10 & 0xfffffffffffffffe) + 8;
    }
    FUN_0030cefc(lVar4,(uVar8 & 0xfffffffffffffffe) + 8);
    uVar3 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      pbVar7 = *(byte **)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      pbVar9 = *(byte **)(param_1 + 0x18);
      if (pbVar9 == PTR_DAT_043730c0) {
        FUN_0029175c((undefined8 *)(param_1 + 0x18),puVar6);
      }
      else if (pbVar9 != pbVar7) {
        uVar8 = *(ulong *)(pbVar7 + 8);
        pbVar2 = *(byte **)(pbVar7 + 0x10);
        if ((*pbVar7 & 1) == 0) {
          pbVar2 = pbVar7 + 1;
          uVar8 = (ulong)(*pbVar7 >> 1);
        }
        FUN_00291910(pbVar9,pbVar2,uVar8);
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar4 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar4 = FUN_003c0804(puVar6);
        *(long *)(param_1 + 0x20) = lVar4;
      }
      puVar1 = PTR_DAT_04373c10;
      if (*(undefined **)(param_2 + 0x20) != (undefined *)0x0) {
        puVar1 = *(undefined **)(param_2 + 0x20);
      }
      FUN_003adf4c(lVar4,puVar1);
    }
  }
  return;
}


