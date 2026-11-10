/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b1b74; name: FUN_003b1b74
 */


undefined1 * FUN_003b1b74(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  size_t __n;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) == 0) {
LAB_003b1c2c:
    iVar2 = *(int *)(param_1 + 0x20);
  }
  else {
    pbVar9 = *(byte **)(param_1 + 0x30);
    if ((*pbVar9 & 1) == 0) {
      pbVar10 = pbVar9 + 1;
      uVar7 = (ulong)(*pbVar9 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar9 + 8);
      pbVar10 = *(byte **)(pbVar9 + 0x10);
    }
    FUN_0033b628(pbVar10,uVar7,1,"google.protobuf.ServiceDescriptorProto.name");
    pbVar9 = *(byte **)(param_1 + 0x30);
    if ((*pbVar9 & 1) == 0) {
      __n = (size_t)(*pbVar9 >> 1);
LAB_003b1be8:
      if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (char)__n;
        pbVar10 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar10 = pbVar9 + 1;
        }
        memcpy(param_2 + 2,pbVar10,__n);
        param_2 = param_2 + 2 + __n;
        goto LAB_003b1c2c;
      }
    }
    else {
      __n = *(size_t *)(pbVar9 + 8);
      if ((long)__n < 0x80) goto LAB_003b1be8;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar9,param_2);
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 == 0) {
LAB_003b1d10:
    if ((uVar1 >> 1 & 1) != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      }
      lVar5 = *(long *)(param_1 + 0x38);
      *param_2 = 0x1a;
      uVar1 = *(uint *)(lVar5 + 0x2c);
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
            puVar6 = param_2;
            uVar8 = uVar1 >> 7;
            puVar6[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar6 + 1;
            uVar3 = uVar1 >> 0xe;
            uVar1 = uVar8;
          } while (uVar3 != 0);
          *puVar6 = (char)uVar8;
        }
      }
      param_2 = (undefined1 *)FUN_003b9aa8(lVar5,param_2,param_3);
    }
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      return param_2;
    }
    puVar6 = (undefined1 *)
             FUN_00311a94((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,param_2,param_3);
    return puVar6;
  }
  iVar11 = 0;
  if (param_2 < (undefined1 *)*param_3) goto LAB_003b1c7c;
  do {
    param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003b1c7c:
    do {
      lVar5 = FUN_003666a8(param_1 + 0x18,iVar11);
      *param_2 = 0x12;
      uVar8 = *(uint *)(lVar5 + 0x14);
      if (uVar8 < 0x80) {
        param_2[1] = (byte)uVar8;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar8 | 0x80;
        if (uVar8 >> 0xe == 0) {
          param_2[2] = (char)(uVar8 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar8 = uVar8 >> 7;
          do {
            puVar6 = param_2;
            uVar3 = uVar8 >> 7;
            puVar6[-1] = (byte)uVar8 | 0x80;
            param_2 = puVar6 + 1;
            uVar4 = uVar8 >> 0xe;
            uVar8 = uVar3;
          } while (uVar4 != 0);
          *puVar6 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_003b2ee0(lVar5,param_2,param_3);
      iVar11 = iVar11 + 1;
      if (iVar11 == iVar2) goto LAB_003b1d10;
    } while (param_2 < (undefined1 *)*param_3);
  } while( true );
}


