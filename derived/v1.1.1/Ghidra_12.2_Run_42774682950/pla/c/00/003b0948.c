/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b0948; name: FUN_003b0948
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_003b0948(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  size_t __n;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) == 0) goto joined_r0x003b0a24;
  pbVar7 = *(byte **)(param_1 + 0x18);
  if ((*pbVar7 & 1) == 0) {
    pbVar8 = pbVar7 + 1;
    uVar6 = (ulong)(*pbVar7 >> 1);
  }
  else {
    uVar6 = *(ulong *)(pbVar7 + 8);
    pbVar8 = *(byte **)(pbVar7 + 0x10);
  }
  FUN_0033b628(pbVar8,uVar6,1,"google.protobuf.EnumValueDescriptorProto.name");
  pbVar7 = *(byte **)(param_1 + 0x18);
  if ((*pbVar7 & 1) == 0) {
    __n = (size_t)(*pbVar7 >> 1);
LAB_003b09e0:
    if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (char)__n;
      pbVar8 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar8 = pbVar7 + 1;
      }
      memcpy(param_2 + 2,pbVar8,__n);
      param_2 = param_2 + 2 + __n;
      goto joined_r0x003b0a24;
    }
  }
  else {
    __n = *(size_t *)(pbVar7 + 8);
    if ((long)__n < 0x80) goto LAB_003b09e0;
  }
  param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar7,param_2);
joined_r0x003b0a24:
  if ((uVar1 >> 2 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(uint *)(param_1 + 0x28);
    *param_2 = 0x10;
    if (uVar2 < 0x80) {
      param_2[1] = (byte)uVar2;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar2 | 0x80;
      uVar6 = (ulong)(long)(int)uVar2 >> 7;
      if (((ulong)(long)(int)uVar2 >> 0xe & 0x3ffff) == 0) {
        param_2[2] = (char)uVar6;
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        do {
          puVar5 = param_2;
          uVar9 = uVar6 >> 7;
          puVar5[-1] = (byte)uVar6 | 0x80;
          param_2 = puVar5 + 1;
          uVar10 = uVar6 >> 0xe;
          uVar6 = uVar9;
        } while (uVar10 != 0);
        *puVar5 = (char)uVar9;
      }
    }
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar4 = *(long *)(param_1 + 0x20);
    *param_2 = 0x1a;
    uVar1 = *(uint *)(lVar4 + 0x2c);
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)(uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar1 = uVar1 >> 7;
        do {
          puVar5 = param_2;
          uVar2 = uVar1 >> 7;
          puVar5[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar5 + 1;
          uVar3 = uVar1 >> 0xe;
          uVar1 = uVar2;
        } while (uVar3 != 0);
        *puVar5 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_003b916c(lVar4,param_2,param_3);
    uVar6 = *(ulong *)(param_1 + 8);
  }
  if ((uVar6 & 1) == 0) {
    return param_2;
  }
  puVar5 = (undefined1 *)FUN_00311a94((uVar6 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar5;
}


