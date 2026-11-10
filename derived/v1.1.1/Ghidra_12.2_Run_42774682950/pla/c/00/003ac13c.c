/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ac13c; name: FUN_003ac13c
 */


/* WARNING: Type propagation algorithm not settling */

undefined2 * FUN_003ac13c(long param_1,undefined2 *param_2,long *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  size_t sVar15;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    pbVar11 = *(byte **)(param_1 + 0x18);
    if ((*pbVar11 & 1) == 0) {
      pbVar12 = pbVar11 + 1;
      uVar10 = (ulong)(*pbVar11 >> 1);
    }
    else {
      uVar10 = *(ulong *)(pbVar11 + 8);
      pbVar12 = *(byte **)(pbVar11 + 0x10);
    }
    FUN_0033b628(pbVar12,uVar10,1,"google.protobuf.FieldDescriptorProto.name");
    pbVar11 = *(byte **)(param_1 + 0x18);
    if ((*pbVar11 & 1) == 0) {
      sVar15 = (size_t)(*pbVar11 >> 1);
LAB_003ac1f4:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 10;
        *(char *)((long)param_2 + 1) = (char)sVar15;
        pbVar12 = *(byte **)(pbVar11 + 0x10);
        if ((*pbVar11 & 1) == 0) {
          pbVar12 = pbVar11 + 1;
        }
        memcpy(param_2 + 1,pbVar12,sVar15);
        param_2 = (undefined2 *)((long)(param_2 + 1) + sVar15);
        goto joined_r0x003ac238;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar11 + 8);
      if ((long)sVar15 < 0x80) goto LAB_003ac1f4;
    }
    param_2 = (undefined2 *)FUN_003112b4(param_3,1,pbVar11,param_2);
  }
joined_r0x003ac238:
  if ((uVar1 >> 1 & 1) != 0) {
    pbVar11 = *(byte **)(param_1 + 0x20);
    if ((*pbVar11 & 1) == 0) {
      pbVar12 = pbVar11 + 1;
      uVar10 = (ulong)(*pbVar11 >> 1);
    }
    else {
      uVar10 = *(ulong *)(pbVar11 + 8);
      pbVar12 = *(byte **)(pbVar11 + 0x10);
    }
    FUN_0033b628(pbVar12,uVar10,1,"google.protobuf.FieldDescriptorProto.extendee");
    pbVar11 = *(byte **)(param_1 + 0x20);
    if ((*pbVar11 & 1) == 0) {
      sVar15 = (size_t)(*pbVar11 >> 1);
LAB_003ac288:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x12;
        *(char *)((long)param_2 + 1) = (char)sVar15;
        pbVar12 = *(byte **)(pbVar11 + 0x10);
        if ((*pbVar11 & 1) == 0) {
          pbVar12 = pbVar11 + 1;
        }
        memcpy((undefined2 *)((long)param_2 + 2U),pbVar12,sVar15);
        param_2 = (undefined2 *)((long)param_2 + 2U + sVar15);
        goto joined_r0x003ac164;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar11 + 8);
      if ((long)sVar15 < 0x80) goto LAB_003ac288;
    }
    param_2 = (undefined2 *)FUN_003112b4(param_3,2,pbVar11,param_2);
  }
joined_r0x003ac164:
  if ((uVar1 >> 6 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar3 = *(uint *)(param_1 + 0x48);
    *(undefined1 *)param_2 = 0x18;
    if (uVar3 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar3;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar3 | 0x80;
      uVar10 = (ulong)(long)(int)uVar3 >> 7;
      if (((ulong)(long)(int)uVar3 >> 0xe & 0x3ffff) == 0) {
        *(char *)(param_2 + 1) = (char)uVar10;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        do {
          puVar8 = param_2;
          uVar13 = uVar10 >> 7;
          *(byte *)((long)puVar8 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar8 + 1);
          uVar14 = uVar10 >> 0xe;
          uVar10 = uVar13;
        } while (uVar14 != 0);
        *(char *)puVar8 = (char)uVar13;
      }
    }
  }
  if ((uVar1 >> 9 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar3 = *(uint *)(param_1 + 0x54);
    *(undefined1 *)param_2 = 0x20;
    if (uVar3 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar3;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar3 | 0x80;
      uVar10 = (ulong)(long)(int)uVar3 >> 7;
      if (((ulong)(long)(int)uVar3 >> 0xe & 0x3ffff) == 0) {
        *(char *)(param_2 + 1) = (char)uVar10;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        do {
          puVar8 = param_2;
          uVar13 = uVar10 >> 7;
          *(byte *)((long)puVar8 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar8 + 1);
          uVar14 = uVar10 >> 0xe;
          uVar10 = uVar13;
        } while (uVar14 != 0);
        *(char *)puVar8 = (char)uVar13;
      }
    }
  }
  if ((uVar1 >> 10 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar3 = *(uint *)(param_1 + 0x58);
    *(undefined1 *)param_2 = 0x28;
    if (uVar3 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar3;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar3 | 0x80;
      uVar10 = (ulong)(long)(int)uVar3 >> 7;
      if (((ulong)(long)(int)uVar3 >> 0xe & 0x3ffff) == 0) {
        *(char *)(param_2 + 1) = (char)uVar10;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        do {
          puVar8 = param_2;
          uVar13 = uVar10 >> 7;
          *(byte *)((long)puVar8 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar8 + 1);
          uVar14 = uVar10 >> 0xe;
          uVar10 = uVar13;
        } while (uVar14 != 0);
        *(char *)puVar8 = (char)uVar13;
      }
    }
  }
  if ((uVar1 >> 2 & 1) != 0) {
    pbVar11 = *(byte **)(param_1 + 0x28);
    if ((*pbVar11 & 1) == 0) {
      pbVar12 = pbVar11 + 1;
      uVar10 = (ulong)(*pbVar11 >> 1);
    }
    else {
      uVar10 = *(ulong *)(pbVar11 + 8);
      pbVar12 = *(byte **)(pbVar11 + 0x10);
    }
    FUN_0033b628(pbVar12,uVar10,1,"google.protobuf.FieldDescriptorProto.type_name");
    pbVar11 = *(byte **)(param_1 + 0x28);
    if ((*pbVar11 & 1) == 0) {
      sVar15 = (size_t)(*pbVar11 >> 1);
LAB_003ac40c:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x32;
        *(char *)((long)param_2 + 1) = (char)sVar15;
        pbVar12 = *(byte **)(pbVar11 + 0x10);
        if ((*pbVar11 & 1) == 0) {
          pbVar12 = pbVar11 + 1;
        }
        memcpy((undefined2 *)((long)param_2 + 2U),pbVar12,sVar15);
        param_2 = (undefined2 *)((long)param_2 + 2U + sVar15);
        goto joined_r0x003ac174;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar11 + 8);
      if ((long)sVar15 < 0x80) goto LAB_003ac40c;
    }
    param_2 = (undefined2 *)FUN_003112b4(param_3,6,pbVar11,param_2);
  }
joined_r0x003ac174:
  if ((uVar1 >> 3 & 1) != 0) {
    pbVar11 = *(byte **)(param_1 + 0x30);
    if ((*pbVar11 & 1) == 0) {
      pbVar12 = pbVar11 + 1;
      uVar10 = (ulong)(*pbVar11 >> 1);
    }
    else {
      uVar10 = *(ulong *)(pbVar11 + 8);
      pbVar12 = *(byte **)(pbVar11 + 0x10);
    }
    FUN_0033b628(pbVar12,uVar10,1,"google.protobuf.FieldDescriptorProto.default_value");
    pbVar11 = *(byte **)(param_1 + 0x30);
    if ((*pbVar11 & 1) == 0) {
      sVar15 = (size_t)(*pbVar11 >> 1);
LAB_003ac4a0:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x3a;
        *(char *)((long)param_2 + 1) = (char)sVar15;
        pbVar12 = *(byte **)(pbVar11 + 0x10);
        if ((*pbVar11 & 1) == 0) {
          pbVar12 = pbVar11 + 1;
        }
        memcpy((undefined2 *)((long)param_2 + 2U),pbVar12,sVar15);
        param_2 = (undefined2 *)((long)param_2 + 2U + sVar15);
        goto joined_r0x003ac4e4;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar11 + 8);
      if ((long)sVar15 < 0x80) goto LAB_003ac4a0;
    }
    param_2 = (undefined2 *)FUN_003112b4(param_3,7,pbVar11,param_2);
  }
joined_r0x003ac4e4:
  if ((uVar1 >> 5 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    lVar7 = *(long *)(param_1 + 0x40);
    *(undefined1 *)param_2 = 0x42;
    uVar3 = *(uint *)(lVar7 + 0x2c);
    if (uVar3 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar3;
      param_2 = (undefined2 *)FUN_003b7348(lVar7,param_2 + 1,param_3);
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar3 | 0x80;
      if (uVar3 >> 0xe == 0) {
        *(char *)(param_2 + 1) = (char)(uVar3 >> 7);
        param_2 = (undefined2 *)FUN_003b7348(lVar7,(undefined1 *)((long)param_2 + 3),param_3);
      }
      else {
        puVar6 = (undefined1 *)((long)param_2 + 3);
        uVar3 = uVar3 >> 7;
        do {
          puVar9 = puVar6;
          uVar4 = uVar3 >> 7;
          puVar9[-1] = (byte)uVar3 | 0x80;
          uVar5 = uVar3 >> 0xe;
          puVar6 = puVar9 + 1;
          uVar3 = uVar4;
        } while (uVar5 != 0);
        *puVar9 = (char)uVar4;
        param_2 = (undefined2 *)FUN_003b7348(lVar7,puVar9 + 1,param_3);
      }
    }
  }
  if ((uVar1 >> 7 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar3 = *(uint *)(param_1 + 0x4c);
    *(undefined1 *)param_2 = 0x48;
    if (uVar3 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar3;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar3 | 0x80;
      uVar10 = (ulong)(long)(int)uVar3 >> 7;
      if (((ulong)(long)(int)uVar3 >> 0xe & 0x3ffff) == 0) {
        *(char *)(param_2 + 1) = (char)uVar10;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        do {
          puVar8 = param_2;
          uVar13 = uVar10 >> 7;
          *(byte *)((long)puVar8 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar8 + 1);
          uVar14 = uVar10 >> 0xe;
          uVar10 = uVar13;
        } while (uVar14 != 0);
        *(char *)puVar8 = (char)uVar13;
      }
    }
  }
  if ((uVar1 >> 4 & 1) == 0) goto joined_r0x003ac634;
  pbVar11 = *(byte **)(param_1 + 0x38);
  if ((*pbVar11 & 1) == 0) {
    pbVar12 = pbVar11 + 1;
    uVar10 = (ulong)(*pbVar11 >> 1);
  }
  else {
    uVar10 = *(ulong *)(pbVar11 + 8);
    pbVar12 = *(byte **)(pbVar11 + 0x10);
  }
  FUN_0033b628(pbVar12,uVar10,1,"google.protobuf.FieldDescriptorProto.json_name");
  pbVar11 = *(byte **)(param_1 + 0x38);
  if ((*pbVar11 & 1) == 0) {
    sVar15 = (size_t)(*pbVar11 >> 1);
LAB_003ac5f0:
    if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xe) {
      *(undefined1 *)param_2 = 0x52;
      *(char *)((long)param_2 + 1) = (char)sVar15;
      pbVar12 = *(byte **)(pbVar11 + 0x10);
      if ((*pbVar11 & 1) == 0) {
        pbVar12 = pbVar11 + 1;
      }
      memcpy(param_2 + 1,pbVar12,sVar15);
      param_2 = (undefined2 *)((long)(param_2 + 1) + sVar15);
      goto joined_r0x003ac634;
    }
  }
  else {
    sVar15 = *(size_t *)(pbVar11 + 8);
    if ((long)sVar15 < 0x80) goto LAB_003ac5f0;
  }
  param_2 = (undefined2 *)FUN_003112b4(param_3,10,pbVar11,param_2);
joined_r0x003ac634:
  if ((uVar1 >> 8 & 1) == 0) {
    uVar10 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x50);
    *param_2 = 0x188;
    *(undefined1 *)(param_2 + 1) = uVar2;
    param_2 = (undefined2 *)((long)param_2 + 3);
    uVar10 = *(ulong *)(param_1 + 8);
  }
  if ((uVar10 & 1) == 0) {
    return param_2;
  }
  puVar8 = (undefined2 *)FUN_00311a94((uVar10 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar8;
}


