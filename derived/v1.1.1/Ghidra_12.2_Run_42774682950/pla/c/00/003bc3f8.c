/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bc3f8; name: FUN_003bc3f8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003bc3f8(long param_1,long param_2)

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
                 ,0x270c);
                    /* try { // try from 003bc43c to 003bc44f has its CatchHandler @ 003bc660 */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 003bc450 to 003bc457 has its CatchHandler @ 003bc65c */
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
  FUN_003c3b0c(param_1 + 0x18,param_2 + 0x18);
  puVar4 = PTR_DAT_043730c0;
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 0x3f) != 0) {
    if ((uVar3 & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar1 = (undefined8 *)(param_1 + 0x30);
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
      pbVar8 = *(byte **)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      puVar1 = (undefined8 *)(param_1 + 0x38);
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
    if ((uVar3 >> 2 & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      puVar1 = (undefined8 *)(param_1 + 0x40);
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
    if ((uVar3 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    }
    if ((uVar3 >> 4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    }
    if ((uVar3 >> 5 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar3;
  }
  return;
}


