/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00722ce8; name: FUN_00722ce8
 */


undefined1 * FUN_00722ce8(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  void *__src;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  size_t sVar9;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_00722da8;
LAB_00722d14:
    if ((bVar1 & 1) == 0) {
      pbVar4 = pbVar4 + 1;
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = *(ulong *)(pbVar4 + 8);
      pbVar4 = *(byte **)(pbVar4 + 0x10);
    }
    FUN_0033b628(pbVar4,uVar5,1,"nn.npln.matchmaking.v1.TurnServer.host");
    pbVar4 = *(byte **)(param_1 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      sVar9 = (size_t)(*pbVar4 >> 1);
LAB_00722d64:
      if ((long)sVar9 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (char)sVar9;
        pbVar6 = *(byte **)(pbVar4 + 0x10);
        if ((*pbVar4 & 1) == 0) {
          pbVar6 = pbVar4 + 1;
        }
        memcpy(param_2 + 2,pbVar6,sVar9);
        param_2 = param_2 + 2 + sVar9;
        goto LAB_00722da8;
      }
    }
    else {
      sVar9 = *(size_t *)(pbVar4 + 8);
      if ((long)sVar9 < 0x80) goto LAB_00722d64;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar4,param_2);
    uVar3 = *(uint *)(param_1 + 0x28);
    if (uVar3 != 0) goto LAB_00722db0;
LAB_00722e44:
    uVar3 = *(uint *)(param_1 + 0x2c);
joined_r0x00722ea8:
    if (uVar3 != 0) goto LAB_00722e4c;
LAB_00722eac:
    pbVar4 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar4;
joined_r0x00722fc8:
    uVar5 = (ulong)bVar1;
    if ((bVar1 & 1) == 0) goto LAB_00722eb8;
LAB_00722fcc:
    if (*(long *)(pbVar4 + 8) != 0) goto LAB_00722ec0;
LAB_00722fd4:
    pbVar4 = *(byte **)(param_1 + 0x20);
    bVar1 = *pbVar4;
joined_r0x00722fdc:
    uVar5 = (ulong)bVar1;
    if ((bVar1 & 1) == 0) goto LAB_00722fe0;
LAB_00722ff8:
    uVar7 = *(ulong *)(pbVar4 + 8);
  }
  else {
    if (*(long *)(pbVar4 + 8) != 0) goto LAB_00722d14;
LAB_00722da8:
    uVar3 = *(uint *)(param_1 + 0x28);
    if (uVar3 == 0) goto LAB_00722e44;
LAB_00722db0:
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar3 = *(uint *)(param_1 + 0x28);
      *param_2 = 0x10;
      if (uVar3 < 0x80) goto LAB_00722dcc;
LAB_00722e24:
      param_2[1] = (byte)uVar3 | 0x80;
      if (uVar3 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar3 >> 7);
        param_2 = param_2 + 3;
        goto LAB_00722e44;
      }
      uVar5 = (ulong)(long)(int)uVar3 >> 7;
      param_2 = param_2 + 3;
      do {
        puVar2 = param_2;
        uVar7 = uVar5 >> 7;
        puVar2[-1] = (byte)uVar5 | 0x80;
        param_2 = puVar2 + 1;
        uVar8 = uVar5 >> 0xe;
        uVar5 = uVar7;
      } while (uVar8 != 0);
      *puVar2 = (char)uVar7;
      uVar3 = *(uint *)(param_1 + 0x2c);
      goto joined_r0x00722ea8;
    }
    *param_2 = 0x10;
    if (0x7f < uVar3) goto LAB_00722e24;
LAB_00722dcc:
    param_2[1] = (char)uVar3;
    param_2 = param_2 + 2;
    uVar3 = *(uint *)(param_1 + 0x2c);
    if (uVar3 == 0) goto LAB_00722eac;
LAB_00722e4c:
    uVar5 = (ulong)uVar3;
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x18;
      if (uVar3 < 0x80) goto LAB_00722e68;
LAB_00722fa0:
      param_2[1] = (byte)uVar5 | 0x80;
      uVar7 = (ulong)(long)(int)uVar5 >> 7;
      if (uVar5 >> 0xe == 0) {
        param_2[2] = (char)uVar7;
        param_2 = param_2 + 3;
        pbVar4 = *(byte **)(param_1 + 0x18);
        bVar1 = *pbVar4;
        goto joined_r0x00722fc8;
      }
      param_2 = param_2 + 3;
      do {
        puVar2 = param_2;
        uVar5 = uVar7 >> 7;
        puVar2[-1] = (byte)uVar7 | 0x80;
        param_2 = puVar2 + 1;
        uVar8 = uVar7 >> 0xe;
        uVar7 = uVar5;
      } while (uVar8 != 0);
      *puVar2 = (char)uVar5;
      pbVar4 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar4;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar3 = *(uint *)(param_1 + 0x2c);
      uVar5 = (ulong)uVar3;
      *param_2 = 0x18;
      if (0x7f < uVar3) goto LAB_00722fa0;
LAB_00722e68:
      param_2[1] = (char)uVar5;
      param_2 = param_2 + 2;
      pbVar4 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar4;
    }
    uVar5 = (ulong)bVar1;
    if ((bVar1 & 1) != 0) goto LAB_00722fcc;
LAB_00722eb8:
    if (uVar5 >> 1 == 0) goto LAB_00722fd4;
LAB_00722ec0:
    if ((uVar5 & 1) == 0) {
      pbVar4 = pbVar4 + 1;
      uVar5 = uVar5 >> 1;
    }
    else {
      uVar5 = *(ulong *)(pbVar4 + 8);
      pbVar4 = *(byte **)(pbVar4 + 0x10);
    }
    FUN_0033b628(pbVar4,uVar5,1,"nn.npln.matchmaking.v1.TurnServer.username");
    pbVar4 = *(byte **)(param_1 + 0x18);
    if ((*pbVar4 & 1) != 0) {
      sVar9 = *(size_t *)(pbVar4 + 8);
      if ((long)sVar9 < 0x80) goto LAB_00722f04;
LAB_00722f58:
      param_2 = (undefined1 *)FUN_003112b4(param_3,4,pbVar4,param_2);
      pbVar4 = *(byte **)(param_1 + 0x20);
      bVar1 = *pbVar4;
      goto joined_r0x00722fdc;
    }
    sVar9 = (size_t)(*pbVar4 >> 1);
LAB_00722f04:
    if ((*param_3 - (long)param_2) + 0xe < (long)sVar9) goto LAB_00722f58;
    *param_2 = 0x22;
    param_2[1] = (char)sVar9;
    pbVar6 = *(byte **)(pbVar4 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      pbVar6 = pbVar4 + 1;
    }
    memcpy(param_2 + 2,pbVar6,sVar9);
    param_2 = param_2 + 2 + sVar9;
    pbVar4 = *(byte **)(param_1 + 0x20);
    uVar5 = (ulong)*pbVar4;
    if ((*pbVar4 & 1) != 0) goto LAB_00722ff8;
LAB_00722fe0:
    uVar7 = uVar5 >> 1;
  }
  if (uVar7 == 0) {
LAB_0072307c:
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar5 & 1) == 0) {
      pbVar4 = pbVar4 + 1;
      uVar5 = uVar5 >> 1;
    }
    else {
      uVar5 = *(ulong *)(pbVar4 + 8);
      pbVar4 = *(byte **)(pbVar4 + 0x10);
    }
    FUN_0033b628(pbVar4,uVar5,1,"nn.npln.matchmaking.v1.TurnServer.password");
    pbVar4 = *(byte **)(param_1 + 0x20);
    if ((*pbVar4 & 1) == 0) {
      sVar9 = (size_t)(*pbVar4 >> 1);
LAB_00723038:
      if ((long)sVar9 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x2a;
        param_2[1] = (char)sVar9;
        pbVar6 = *(byte **)(pbVar4 + 0x10);
        if ((*pbVar4 & 1) == 0) {
          pbVar6 = pbVar4 + 1;
        }
        memcpy(param_2 + 2,pbVar6,sVar9);
        param_2 = param_2 + 2 + sVar9;
        goto LAB_0072307c;
      }
    }
    else {
      sVar9 = *(size_t *)(pbVar4 + 8);
      if ((long)sVar9 < 0x80) goto LAB_00723038;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,5,pbVar4,param_2);
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar5 + 8) & 1) == 0) {
      __src = (void *)(uVar5 + 9);
      uVar7 = (ulong)(*(byte *)(uVar5 + 8) >> 1);
    }
    else {
      uVar7 = *(ulong *)(uVar5 + 0x10);
      __src = *(void **)(uVar5 + 0x18);
    }
    sVar9 = (size_t)(int)uVar7;
    if (*param_3 - (long)param_2 < (long)sVar9) {
      puVar2 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar7,param_2);
      return puVar2;
    }
    memcpy(param_2,__src,sVar9);
    param_2 = param_2 + sVar9;
  }
  return param_2;
}


