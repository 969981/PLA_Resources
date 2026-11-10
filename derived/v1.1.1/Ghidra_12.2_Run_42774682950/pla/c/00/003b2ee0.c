/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b2ee0; name: FUN_003b2ee0
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_003b2ee0(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  size_t sVar12;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x18);
    if ((*pbVar10 & 1) == 0) {
      pbVar11 = pbVar10 + 1;
      uVar9 = (ulong)(*pbVar10 >> 1);
    }
    else {
      uVar9 = *(ulong *)(pbVar10 + 8);
      pbVar11 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar11,uVar9,1,"google.protobuf.MethodDescriptorProto.name");
    pbVar10 = *(byte **)(param_1 + 0x18);
    if ((*pbVar10 & 1) == 0) {
      sVar12 = (size_t)(*pbVar10 >> 1);
LAB_003b2f84:
      if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (char)sVar12;
        pbVar11 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar11 = pbVar10 + 1;
        }
        memcpy(param_2 + 2,pbVar11,sVar12);
        param_2 = param_2 + 2 + sVar12;
        goto joined_r0x003b2fc8;
      }
    }
    else {
      sVar12 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar12 < 0x80) goto LAB_003b2f84;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar10,param_2);
  }
joined_r0x003b2fc8:
  if ((uVar1 >> 1 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x20);
    if ((*pbVar10 & 1) == 0) {
      pbVar11 = pbVar10 + 1;
      uVar9 = (ulong)(*pbVar10 >> 1);
    }
    else {
      uVar9 = *(ulong *)(pbVar10 + 8);
      pbVar11 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar11,uVar9,1,"google.protobuf.MethodDescriptorProto.input_type");
    pbVar10 = *(byte **)(param_1 + 0x20);
    if ((*pbVar10 & 1) == 0) {
      sVar12 = (size_t)(*pbVar10 >> 1);
LAB_003b3018:
      if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        *(char *)((long)param_2 + 1) = (char)sVar12;
        pbVar11 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar11 = pbVar10 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 2),pbVar11,sVar12);
        param_2 = (undefined1 *)((long)param_2 + 2) + sVar12;
        goto joined_r0x003b2f08;
      }
    }
    else {
      sVar12 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar12 < 0x80) goto LAB_003b3018;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,2,pbVar10,param_2);
  }
joined_r0x003b2f08:
  if ((uVar1 >> 2 & 1) == 0) goto joined_r0x003b3254;
  pbVar10 = *(byte **)(param_1 + 0x28);
  if ((*pbVar10 & 1) == 0) {
    pbVar11 = pbVar10 + 1;
    uVar9 = (ulong)(*pbVar10 >> 1);
  }
  else {
    uVar9 = *(ulong *)(pbVar10 + 8);
    pbVar11 = *(byte **)(pbVar10 + 0x10);
  }
  FUN_0033b628(pbVar11,uVar9,1,"google.protobuf.MethodDescriptorProto.output_type");
  pbVar10 = *(byte **)(param_1 + 0x28);
  if ((*pbVar10 & 1) == 0) {
    sVar12 = (size_t)(*pbVar10 >> 1);
LAB_003b30ac:
    if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x1a;
      *(char *)((long)param_2 + 1) = (char)sVar12;
      pbVar11 = *(byte **)(pbVar10 + 0x10);
      if ((*pbVar10 & 1) == 0) {
        pbVar11 = pbVar10 + 1;
      }
      memcpy((undefined1 *)((long)param_2 + 2),pbVar11,sVar12);
      param_2 = (undefined1 *)((long)param_2 + 2) + sVar12;
      goto joined_r0x003b3254;
    }
  }
  else {
    sVar12 = *(size_t *)(pbVar10 + 8);
    if ((long)sVar12 < 0x80) goto LAB_003b30ac;
  }
  param_2 = (undefined1 *)FUN_003112b4(param_3,3,pbVar10,param_2);
joined_r0x003b3254:
  if ((uVar1 >> 3 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 0x30);
    *param_2 = 0x22;
    uVar2 = *(uint *)(lVar6 + 0x2c);
    if (uVar2 < 0x80) {
      param_2[1] = (byte)uVar2;
      param_2 = (undefined1 *)FUN_003ba4a4(lVar6,param_2 + 2,param_3);
    }
    else {
      param_2[1] = (byte)uVar2 | 0x80;
      if (uVar2 >> 0xe == 0) {
        param_2[2] = (char)(uVar2 >> 7);
        param_2 = (undefined1 *)FUN_003ba4a4(lVar6,param_2 + 3,param_3);
      }
      else {
        puVar7 = param_2 + 3;
        uVar2 = uVar2 >> 7;
        do {
          puVar8 = puVar7;
          uVar4 = uVar2 >> 7;
          puVar8[-1] = (byte)uVar2 | 0x80;
          uVar5 = uVar2 >> 0xe;
          puVar7 = puVar8 + 1;
          uVar2 = uVar4;
        } while (uVar5 != 0);
        *puVar8 = (char)uVar4;
        param_2 = (undefined1 *)FUN_003ba4a4(lVar6,puVar8 + 1,param_3);
      }
    }
  }
  if ((uVar1 >> 4 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x38);
    *param_2 = 0x28;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 5 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x39);
    *param_2 = 0x30;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
    uVar9 = *(ulong *)(param_1 + 8);
  }
  if ((uVar9 & 1) == 0) {
    return param_2;
  }
  puVar7 = (undefined1 *)FUN_00311a94((uVar9 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar7;
}


