/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b3508; name: FUN_003b3508
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003b3508(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x1802);
                    /* try { // try from 003b3618 to 003b362b has its CatchHandler @ 003b37b8 */
    uVar6 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 003b362c to 003b3633 has its CatchHandler @ 003b37b4 */
    FUN_0030f41c(auStack_68,uVar6);
    FUN_0030f658(auStack_60);
    uVar10 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar10 = *(ulong *)(param_2 + 8);
  }
  if ((uVar10 & 1) == 0) {
    uVar5 = *(uint *)(param_2 + 0x10);
    pbVar4 = PTR_DAT_043730c0;
  }
  else {
    uVar12 = *(ulong *)(param_1 + 8);
    if ((uVar12 & 1) == 0) {
      lVar7 = FUN_0030c8c0((ulong *)(param_1 + 8));
    }
    else {
      lVar7 = (uVar12 & 0xfffffffffffffffe) + 8;
    }
    FUN_0030cefc(lVar7,(uVar10 & 0xfffffffffffffffe) + 8);
    uVar5 = *(uint *)(param_2 + 0x10);
    pbVar4 = PTR_DAT_043730c0;
  }
  PTR_DAT_043730c0 = pbVar4;
  if ((uVar5 & 0x3f) != 0) {
    if ((uVar5 & 1) != 0) {
      pbVar9 = *(byte **)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar1 = (undefined8 *)(param_1 + 0x18);
      puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        pbVar11 = (byte *)*puVar1;
      }
      else {
        puVar8 = (ulong *)*puVar8;
        pbVar11 = (byte *)*puVar1;
      }
      if (pbVar11 == pbVar4) {
        FUN_0029175c(puVar1,puVar8);
      }
      else if (pbVar11 != pbVar9) {
        uVar10 = *(ulong *)(pbVar9 + 8);
        pbVar3 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar3 = pbVar9 + 1;
          uVar10 = (ulong)(*pbVar9 >> 1);
        }
        FUN_00291910(pbVar11,pbVar3,uVar10);
      }
    }
    if ((uVar5 >> 1 & 1) != 0) {
      pbVar9 = *(byte **)(param_2 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      puVar1 = (undefined8 *)(param_1 + 0x20);
      puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        pbVar11 = (byte *)*puVar1;
      }
      else {
        puVar8 = (ulong *)*puVar8;
        pbVar11 = (byte *)*puVar1;
      }
      if (pbVar11 == pbVar4) {
        FUN_0029175c(puVar1,puVar8);
      }
      else if (pbVar11 != pbVar9) {
        uVar10 = *(ulong *)(pbVar9 + 8);
        pbVar3 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar3 = pbVar9 + 1;
          uVar10 = (ulong)(*pbVar9 >> 1);
        }
        FUN_00291910(pbVar11,pbVar3,uVar10);
      }
    }
    if ((uVar5 >> 2 & 1) != 0) {
      pbVar9 = *(byte **)(param_2 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      puVar1 = (undefined8 *)(param_1 + 0x28);
      puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        pbVar11 = (byte *)*puVar1;
      }
      else {
        puVar8 = (ulong *)*puVar8;
        pbVar11 = (byte *)*puVar1;
      }
      if (pbVar11 == pbVar4) {
        FUN_0029175c(puVar1,puVar8);
      }
      else if (pbVar11 != pbVar9) {
        uVar10 = *(ulong *)(pbVar9 + 8);
        pbVar4 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar4 = pbVar9 + 1;
          uVar10 = (ulong)(*pbVar9 >> 1);
        }
        FUN_00291910(pbVar11,pbVar4,uVar10);
      }
    }
    if ((uVar5 >> 3 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if (lVar7 == 0) {
        puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        lVar7 = FUN_003c0d00(puVar8);
        *(long *)(param_1 + 0x30) = lVar7;
      }
      puVar2 = PTR_DAT_04373c30;
      if (*(undefined **)(param_2 + 0x30) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_2 + 0x30);
      }
      FUN_003b37cc(lVar7,puVar2);
    }
    if ((uVar5 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    }
    if ((uVar5 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_2 + 0x39);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar5;
  }
  return;
}


