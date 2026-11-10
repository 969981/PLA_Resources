/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a5fc4; name: FUN_003a5fc4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003a5fc4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x878);
                    /* try { // try from 003a602c to 003a603f has its CatchHandler @ 003a62dc */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 003a6040 to 003a6047 has its CatchHandler @ 003a62d8 */
    FUN_0030f41c(auStack_68,uVar5);
    FUN_0030f658(auStack_60);
    uVar9 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar9 = *(ulong *)(param_2 + 8);
  }
  if ((uVar9 & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8);
    if ((uVar10 & 1) == 0) {
      lVar6 = FUN_0030c8c0((ulong *)(param_1 + 8));
    }
    else {
      lVar6 = (uVar10 & 0xfffffffffffffffe) + 8;
    }
    FUN_0030cefc(lVar6,(uVar9 & 0xfffffffffffffffe) + 8);
  }
  FUN_0032ba34(param_1 + 0x18,param_2 + 0x18);
  FUN_003c26dc(param_1 + 0x30,param_2 + 0x30);
  FUN_003c2860(param_1 + 0x48,param_2 + 0x48);
  FUN_003c29e4(param_1 + 0x60,param_2 + 0x60);
  FUN_003c2b68(param_1 + 0x78,param_2 + 0x78);
  FUN_00326f44(param_1 + 0x90,param_2 + 0x90);
  FUN_00326f44(param_1 + 0xa0,param_2 + 0xa0);
  puVar2 = PTR_DAT_043730c0;
  uVar4 = *(uint *)(param_2 + 0x10);
  if ((uVar4 & 0x1f) != 0) {
    if ((uVar4 & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0xb0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar1 = (undefined8 *)(param_1 + 0xb0);
      puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        pbVar11 = (byte *)*puVar1;
      }
      else {
        puVar7 = (ulong *)*puVar7;
        pbVar11 = (byte *)*puVar1;
      }
      if (pbVar11 == puVar2) {
        FUN_0029175c(puVar1,puVar7);
      }
      else if (pbVar11 != pbVar8) {
        uVar9 = *(ulong *)(pbVar8 + 8);
        pbVar3 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar3 = pbVar8 + 1;
          uVar9 = (ulong)(*pbVar8 >> 1);
        }
        FUN_00291910(pbVar11,pbVar3,uVar9);
      }
    }
    if ((uVar4 >> 1 & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0xb8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      puVar1 = (undefined8 *)(param_1 + 0xb8);
      puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        pbVar11 = (byte *)*puVar1;
      }
      else {
        puVar7 = (ulong *)*puVar7;
        pbVar11 = (byte *)*puVar1;
      }
      if (pbVar11 == puVar2) {
        FUN_0029175c(puVar1,puVar7);
      }
      else if (pbVar11 != pbVar8) {
        uVar9 = *(ulong *)(pbVar8 + 8);
        pbVar3 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar3 = pbVar8 + 1;
          uVar9 = (ulong)(*pbVar8 >> 1);
        }
        FUN_00291910(pbVar11,pbVar3,uVar9);
      }
    }
    if ((uVar4 >> 2 & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0xc0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      puVar1 = (undefined8 *)(param_1 + 0xc0);
      puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        pbVar11 = (byte *)*puVar1;
      }
      else {
        puVar7 = (ulong *)*puVar7;
        pbVar11 = (byte *)*puVar1;
      }
      if (pbVar11 == puVar2) {
        FUN_0029175c(puVar1,puVar7);
      }
      else if (pbVar11 != pbVar8) {
        uVar9 = *(ulong *)(pbVar8 + 8);
        pbVar3 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar3 = pbVar8 + 1;
          uVar9 = (ulong)(*pbVar8 >> 1);
        }
        FUN_00291910(pbVar11,pbVar3,uVar9);
      }
    }
    if ((uVar4 >> 3 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 200);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if (lVar6 == 0) {
        uVar9 = *(ulong *)(param_1 + 8);
        puVar7 = (ulong *)(uVar9 & 0xfffffffffffffffe);
        if ((uVar9 & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        lVar6 = FUN_003c04f8(puVar7);
        *(long *)(param_1 + 200) = lVar6;
      }
      puVar2 = PTR_DAT_04373bf0;
      if (*(undefined **)(param_2 + 200) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_2 + 200);
      }
      FUN_003a62f0(lVar6,puVar2);
    }
    if ((uVar4 >> 4 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0xd0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      if (lVar6 == 0) {
        uVar9 = *(ulong *)(param_1 + 8);
        puVar7 = (ulong *)(uVar9 & 0xfffffffffffffffe);
        if ((uVar9 & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        lVar6 = FUN_003c10fc(puVar7);
        *(long *)(param_1 + 0xd0) = lVar6;
      }
      puVar2 = PTR_DAT_04373be8;
      if (*(undefined **)(param_2 + 0xd0) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_2 + 0xd0);
      }
      FUN_003a692c(lVar6,puVar2);
    }
  }
  return;
}


