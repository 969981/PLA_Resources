/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a62f0; name: FUN_003a62f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003a62f0(long param_1,long param_2)

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
                 ,0x1b9f);
                    /* try { // try from 003a6328 to 003a633b has its CatchHandler @ 003a6918 */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 003a633c to 003a6343 has its CatchHandler @ 003a6914 */
    FUN_0030f41c(auStack_28,uVar5);
    FUN_0030f658(auStack_60);
  }
  FUN_00334da8(param_1 + 0x10,param_2 + 0x10);
  uVar9 = *(ulong *)(param_2 + 8);
  if ((uVar9 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar6 = FUN_0030c8c0();
    }
    else {
      lVar6 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0030cefc(lVar6,(uVar9 & 0xfffffffffffffffe) + 8);
  }
  FUN_003c32e0(param_1 + 0x30,param_2 + 0x30);
  puVar4 = PTR_DAT_043730c0;
  uVar3 = *(uint *)(param_2 + 0x28);
  if ((uVar3 & 0xff) != 0) {
    if ((uVar3 & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0x48);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
      puVar1 = (undefined8 *)(param_1 + 0x48);
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
      pbVar8 = *(byte **)(param_2 + 0x50);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
      puVar1 = (undefined8 *)(param_1 + 0x50);
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
      pbVar8 = *(byte **)(param_2 + 0x58);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
      puVar1 = (undefined8 *)(param_1 + 0x58);
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
      pbVar8 = *(byte **)(param_2 + 0x60);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
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
    if ((uVar3 >> 4 & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0x68);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
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
    if ((uVar3 >> 5 & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0x70);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
      puVar1 = (undefined8 *)(param_1 + 0x70);
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
    if ((uVar3 >> 6 & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0x78);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x40;
      puVar1 = (undefined8 *)(param_1 + 0x78);
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
    if ((uVar3 >> 7 & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0x80);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      puVar1 = (undefined8 *)(param_1 + 0x80);
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
  if ((uVar3 & 0xff00) != 0) {
    if ((uVar3 >> 8 & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0x88);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x100;
      puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar7 = (ulong *)*puVar7;
      }
      pbVar10 = *(byte **)(param_1 + 0x88);
      if (pbVar10 == PTR_DAT_043730c0) {
        FUN_0029175c((undefined8 *)(param_1 + 0x88),puVar7);
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
    if ((uVar3 >> 9 & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0x90);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x200;
      puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar7 = (ulong *)*puVar7;
      }
      pbVar10 = *(byte **)(param_1 + 0x90);
      if (pbVar10 == PTR_DAT_043730c0) {
        FUN_0029175c((undefined8 *)(param_1 + 0x90),puVar7);
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
    if ((uVar3 >> 10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
    }
    if ((uVar3 >> 0xb & 1) != 0) {
      *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x99);
    }
    if ((uVar3 >> 0xc & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)(param_2 + 0x9a);
    }
    if ((uVar3 >> 0xd & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9b) = *(undefined1 *)(param_2 + 0x9b);
    }
    if ((uVar3 >> 0xe & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(param_2 + 0x9c);
    }
    if ((uVar3 >> 0xf & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9d) = *(undefined1 *)(param_2 + 0x9d);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar3;
  }
  if ((uVar3 & 0xf0000) != 0) {
    if ((uVar3 >> 0x10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9e) = *(undefined1 *)(param_2 + 0x9e);
    }
    if ((uVar3 >> 0x11 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9f) = *(undefined1 *)(param_2 + 0x9f);
    }
    if ((uVar3 >> 0x12 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    }
    if ((uVar3 >> 0x13 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar3;
  }
  return;
}


