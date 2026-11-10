/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b4f48; name: FUN_003b4f48
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_003b4f48(long param_1,undefined2 *param_2,long *param_3)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined2 *puVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  size_t sVar15;
  
  uVar9 = *(uint *)(param_1 + 0x28);
  if ((uVar9 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x48);
    if ((*pbVar10 & 1) == 0) {
      pbVar11 = pbVar10 + 1;
      uVar7 = (ulong)(*pbVar10 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar10 + 8);
      pbVar11 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar11,uVar7,1,"google.protobuf.FileOptions.java_package");
    pbVar10 = *(byte **)(param_1 + 0x48);
    if ((*pbVar10 & 1) == 0) {
      sVar15 = (size_t)(*pbVar10 >> 1);
LAB_003b5010:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 10;
        *(char *)((long)param_2 + 1) = (char)sVar15;
        pbVar11 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar11 = pbVar10 + 1;
        }
        memcpy(param_2 + 1,pbVar11,sVar15);
        param_2 = (undefined2 *)((long)(param_2 + 1) + sVar15);
        goto joined_r0x003b5054;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar15 < 0x80) goto LAB_003b5010;
    }
    param_2 = (undefined2 *)FUN_003112b4(param_3,1,pbVar10,param_2);
  }
joined_r0x003b5054:
  if ((uVar9 >> 1 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x50);
    if ((*pbVar10 & 1) == 0) {
      pbVar11 = pbVar10 + 1;
      uVar7 = (ulong)(*pbVar10 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar10 + 8);
      pbVar11 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar11,uVar7,1,"google.protobuf.FileOptions.java_outer_classname");
    pbVar10 = *(byte **)(param_1 + 0x50);
    if ((*pbVar10 & 1) == 0) {
      sVar15 = (size_t)(*pbVar10 >> 1);
LAB_003b50a4:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x42;
        *(char *)((long)param_2 + 1) = (char)sVar15;
        pbVar11 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar11 = pbVar10 + 1;
        }
        memcpy((undefined2 *)((long)param_2 + 2U),pbVar11,sVar15);
        param_2 = (undefined2 *)((long)param_2 + 2U + sVar15);
        goto joined_r0x003b4f70;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar15 < 0x80) goto LAB_003b50a4;
    }
    param_2 = (undefined2 *)FUN_003112b4(param_3,8,pbVar10,param_2);
  }
joined_r0x003b4f70:
  if ((uVar9 >> 0x12 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar3 = *(uint *)(param_1 + 0xa0);
    *(undefined1 *)param_2 = 0x48;
    if (uVar3 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar3;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar3 | 0x80;
      uVar7 = (ulong)(long)(int)uVar3 >> 7;
      if (((ulong)(long)(int)uVar3 >> 0xe & 0x3ffff) == 0) {
        *(char *)(param_2 + 1) = (char)uVar7;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        do {
          puVar8 = param_2;
          uVar12 = uVar7 >> 7;
          *(byte *)((long)puVar8 + -1) = (byte)uVar7 | 0x80;
          param_2 = (undefined2 *)((long)puVar8 + 1);
          uVar13 = uVar7 >> 0xe;
          uVar7 = uVar12;
        } while (uVar13 != 0);
        *(char *)puVar8 = (char)uVar12;
      }
    }
  }
  if ((uVar9 >> 10 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x98);
    *(undefined1 *)param_2 = 0x50;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = param_2 + 1;
  }
  if ((uVar9 >> 2 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x58);
    if ((*pbVar10 & 1) == 0) {
      pbVar11 = pbVar10 + 1;
      uVar7 = (ulong)(*pbVar10 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar10 + 8);
      pbVar11 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar11,uVar7,1,"google.protobuf.FileOptions.go_package");
    pbVar10 = *(byte **)(param_1 + 0x58);
    if ((*pbVar10 & 1) == 0) {
      sVar15 = (size_t)(*pbVar10 >> 1);
LAB_003b51ac:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x5a;
        *(char *)((long)param_2 + 1) = (char)sVar15;
        pbVar11 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar11 = pbVar10 + 1;
        }
        memcpy((undefined2 *)((long)param_2 + 2U),pbVar11,sVar15);
        param_2 = (undefined2 *)((long)param_2 + 2U + sVar15);
        goto joined_r0x003b585c;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar15 < 0x80) goto LAB_003b51ac;
    }
    param_2 = (undefined2 *)FUN_003112b4(param_3,0xb,pbVar10,param_2);
  }
joined_r0x003b585c:
  if ((uVar9 >> 0xd & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x9b);
    *param_2 = 0x180;
    *(undefined1 *)(param_2 + 1) = uVar2;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar9 >> 0xe & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x9c);
    *param_2 = 0x188;
    *(undefined1 *)(param_2 + 1) = uVar2;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar9 >> 0xf & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x9d);
    *param_2 = 400;
    *(undefined1 *)(param_2 + 1) = uVar2;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar9 >> 0xb & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x99);
    *param_2 = 0x1a0;
    *(undefined1 *)(param_2 + 1) = uVar2;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar9 >> 0x11 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x9f);
    *param_2 = 0x1b8;
    *(undefined1 *)(param_2 + 1) = uVar2;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar9 >> 0xc & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x9a);
    *param_2 = 0x1d8;
    *(undefined1 *)(param_2 + 1) = uVar2;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar9 >> 0x13 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0xa4);
    *param_2 = 0x1f8;
    *(undefined1 *)(param_2 + 1) = uVar2;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar9 >> 3 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x60);
    if ((*pbVar10 & 1) == 0) {
      pbVar11 = pbVar10 + 1;
      uVar7 = (ulong)(*pbVar10 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar10 + 8);
      pbVar11 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar11,uVar7,1,"google.protobuf.FileOptions.objc_class_prefix");
    pbVar10 = *(byte **)(param_1 + 0x60);
    if ((*pbVar10 & 1) == 0) {
      sVar15 = (size_t)(*pbVar10 >> 1);
LAB_003b533c:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x2a2;
        *(char *)((long)param_2 + 2) = (char)sVar15;
        pbVar11 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar11 = pbVar10 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 3),pbVar11,sVar15);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar15);
        goto joined_r0x003b5878;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar15 < 0x80) goto LAB_003b533c;
    }
    param_2 = (undefined2 *)FUN_003112b4(param_3,0x24,pbVar10,param_2);
  }
joined_r0x003b5878:
  if ((uVar9 >> 4 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x68);
    if ((*pbVar10 & 1) == 0) {
      pbVar11 = pbVar10 + 1;
      uVar7 = (ulong)(*pbVar10 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar10 + 8);
      pbVar11 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar11,uVar7,1,"google.protobuf.FileOptions.csharp_namespace");
    pbVar10 = *(byte **)(param_1 + 0x68);
    if ((*pbVar10 & 1) == 0) {
      sVar15 = (size_t)(*pbVar10 >> 1);
LAB_003b53d0:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x2aa;
        *(char *)((long)param_2 + 2) = (char)sVar15;
        pbVar11 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar11 = pbVar10 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 3),pbVar11,sVar15);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar15);
        goto joined_r0x003b4fa0;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar15 < 0x80) goto LAB_003b53d0;
    }
    param_2 = (undefined2 *)FUN_003112b4(param_3,0x25,pbVar10,param_2);
  }
joined_r0x003b4fa0:
  if ((uVar9 >> 5 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x70);
    if ((*pbVar10 & 1) == 0) {
      pbVar11 = pbVar10 + 1;
      uVar7 = (ulong)(*pbVar10 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar10 + 8);
      pbVar11 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar11,uVar7,1,"google.protobuf.FileOptions.swift_prefix");
    pbVar10 = *(byte **)(param_1 + 0x70);
    if ((*pbVar10 & 1) == 0) {
      sVar15 = (size_t)(*pbVar10 >> 1);
LAB_003b5464:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x2ba;
        *(char *)((long)param_2 + 2) = (char)sVar15;
        pbVar11 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar11 = pbVar10 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 3),pbVar11,sVar15);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar15);
        goto joined_r0x003b54a8;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar15 < 0x80) goto LAB_003b5464;
    }
    param_2 = (undefined2 *)FUN_003112b4(param_3,0x27,pbVar10,param_2);
  }
joined_r0x003b54a8:
  if ((uVar9 >> 6 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x78);
    if ((*pbVar10 & 1) == 0) {
      pbVar11 = pbVar10 + 1;
      uVar7 = (ulong)(*pbVar10 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar10 + 8);
      pbVar11 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar11,uVar7,1,"google.protobuf.FileOptions.php_class_prefix");
    pbVar10 = *(byte **)(param_1 + 0x78);
    if ((*pbVar10 & 1) == 0) {
      sVar15 = (size_t)(*pbVar10 >> 1);
LAB_003b54f8:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x2c2;
        *(char *)((long)param_2 + 2) = (char)sVar15;
        pbVar11 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar11 = pbVar10 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 3),pbVar11,sVar15);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar15);
        goto joined_r0x003b4fa8;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar15 < 0x80) goto LAB_003b54f8;
    }
    param_2 = (undefined2 *)FUN_003112b4(param_3,0x28,pbVar10,param_2);
  }
joined_r0x003b4fa8:
  if ((uVar9 >> 7 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x80);
    if ((*pbVar10 & 1) == 0) {
      pbVar11 = pbVar10 + 1;
      uVar7 = (ulong)(*pbVar10 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar10 + 8);
      pbVar11 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar11,uVar7,1,"google.protobuf.FileOptions.php_namespace");
    pbVar10 = *(byte **)(param_1 + 0x80);
    if ((*pbVar10 & 1) == 0) {
      sVar15 = (size_t)(*pbVar10 >> 1);
LAB_003b558c:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x2ca;
        *(char *)((long)param_2 + 2) = (char)sVar15;
        pbVar11 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar11 = pbVar10 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 3),pbVar11,sVar15);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar15);
        goto joined_r0x003b55d0;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar15 < 0x80) goto LAB_003b558c;
    }
    param_2 = (undefined2 *)FUN_003112b4(param_3,0x29,pbVar10,param_2);
  }
joined_r0x003b55d0:
  if ((uVar9 >> 0x10 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x9e);
    *param_2 = 0x2d0;
    *(undefined1 *)(param_2 + 1) = uVar2;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar9 >> 8 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x88);
    if ((*pbVar10 & 1) == 0) {
      pbVar11 = pbVar10 + 1;
      uVar7 = (ulong)(*pbVar10 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar10 + 8);
      pbVar11 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar11,uVar7,1,"google.protobuf.FileOptions.php_metadata_namespace");
    pbVar10 = *(byte **)(param_1 + 0x88);
    if ((*pbVar10 & 1) == 0) {
      sVar15 = (size_t)(*pbVar10 >> 1);
LAB_003b5644:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x2e2;
        *(char *)(param_2 + 1) = (char)sVar15;
        pbVar11 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar11 = pbVar10 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 3),pbVar11,sVar15);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar15);
        goto joined_r0x003b5904;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar15 < 0x80) goto LAB_003b5644;
    }
    param_2 = (undefined2 *)FUN_003112b4(param_3,0x2c,pbVar10,param_2);
  }
joined_r0x003b5904:
  if ((uVar9 >> 9 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    goto joined_r0x003b5720;
  }
  pbVar10 = *(byte **)(param_1 + 0x90);
  if ((*pbVar10 & 1) == 0) {
    pbVar11 = pbVar10 + 1;
    uVar7 = (ulong)(*pbVar10 >> 1);
  }
  else {
    uVar7 = *(ulong *)(pbVar10 + 8);
    pbVar11 = *(byte **)(pbVar10 + 0x10);
  }
  FUN_0033b628(pbVar11,uVar7,1,"google.protobuf.FileOptions.ruby_package");
  pbVar10 = *(byte **)(param_1 + 0x90);
  if ((*pbVar10 & 1) == 0) {
    sVar15 = (size_t)(*pbVar10 >> 1);
LAB_003b56d8:
    if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xd) {
      *param_2 = 0x2ea;
      *(char *)(param_2 + 1) = (char)sVar15;
      pbVar11 = *(byte **)(pbVar10 + 0x10);
      if ((*pbVar10 & 1) == 0) {
        pbVar11 = pbVar10 + 1;
      }
      memcpy((undefined1 *)((long)param_2 + 3),pbVar11,sVar15);
      param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar15);
      iVar1 = *(int *)(param_1 + 0x38);
      goto joined_r0x003b5720;
    }
  }
  else {
    sVar15 = *(size_t *)(pbVar10 + 8);
    if ((long)sVar15 < 0x80) goto LAB_003b56d8;
  }
  param_2 = (undefined2 *)FUN_003112b4(param_3,0x2d,pbVar10,param_2);
  iVar1 = *(int *)(param_1 + 0x38);
joined_r0x003b5720:
  if (iVar1 == 0) {
LAB_003b5928:
    uVar6 = FUN_00336518(param_1 + 0x10,1000,0x20000000,param_2,param_3);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      return uVar6;
    }
    uVar6 = FUN_00311a94((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,uVar6,param_3);
    return uVar6;
  }
  iVar14 = 0;
  if (param_2 < (undefined2 *)*param_3) goto LAB_003b576c;
  do {
    param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
LAB_003b576c:
    do {
      lVar5 = FUN_003c17a8(param_1 + 0x30,iVar14);
      *param_2 = 0x3eba;
      uVar9 = *(uint *)(lVar5 + 0x14);
      if (uVar9 < 0x80) {
        *(byte *)(param_2 + 1) = (byte)uVar9;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        *(byte *)(param_2 + 1) = (byte)uVar9 | 0x80;
        if (uVar9 >> 0xe == 0) {
          *(char *)((long)param_2 + 3) = (char)(uVar9 >> 7);
          param_2 = param_2 + 2;
        }
        else {
          param_2 = param_2 + 2;
          uVar9 = uVar9 >> 7;
          do {
            puVar8 = param_2;
            uVar3 = uVar9 >> 7;
            *(byte *)((long)puVar8 + -1) = (byte)uVar9 | 0x80;
            param_2 = (undefined2 *)((long)puVar8 + 1);
            uVar4 = uVar9 >> 0xe;
            uVar9 = uVar3;
          } while (uVar4 != 0);
          *(char *)puVar8 = (char)uVar3;
        }
      }
      param_2 = (undefined2 *)FUN_003bbc94(lVar5,param_2,param_3);
      iVar14 = iVar14 + 1;
      if (iVar14 == iVar1) goto LAB_003b5928;
    } while (param_2 < (undefined2 *)*param_3);
  } while( true );
}


