/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00723c50; name: FUN_00723c50
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00723c50(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  void *__src;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  size_t sVar9;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar5;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_00723c7c;
LAB_00723c94:
    pbVar5 = *(byte **)(param_1 + 0x18);
    uVar7 = (ulong)*pbVar5;
    if ((*pbVar5 & 1) != 0) goto LAB_00723d64;
LAB_00723ca0:
    if (uVar7 >> 1 != 0) goto LAB_00723ca8;
LAB_00723d6c:
    pbVar5 = *(byte **)(param_1 + 0x20);
    uVar7 = (ulong)*pbVar5;
    if ((*pbVar5 & 1) == 0) goto LAB_00723d78;
LAB_00723dec:
    if (*(long *)(pbVar5 + 8) == 0) goto LAB_00723e70;
LAB_00723d80:
    if ((uVar7 & 1) == 0) {
      pbVar5 = pbVar5 + 1;
      uVar7 = uVar7 >> 1;
    }
    else {
      uVar7 = *(ulong *)(pbVar5 + 8);
      pbVar5 = *(byte **)(pbVar5 + 0x10);
    }
    FUN_0033b628(pbVar5,uVar7,1,"nn.npln.matchmaking.v1.LatencyMeasurementServer.host");
    pbVar5 = *(byte **)(param_1 + 0x20);
    if ((*pbVar5 & 1) == 0) {
      sVar9 = (size_t)(*pbVar5 >> 1);
LAB_00723e2c:
      if ((long)sVar9 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x1a;
        param_2[1] = (char)sVar9;
        pbVar6 = *(byte **)(pbVar5 + 0x10);
        if ((*pbVar5 & 1) == 0) {
          pbVar6 = pbVar5 + 1;
        }
        memcpy(param_2 + 2,pbVar6,sVar9);
        param_2 = param_2 + 2 + sVar9;
        goto LAB_00723e70;
      }
    }
    else {
      sVar9 = *(size_t *)(pbVar5 + 8);
      if ((long)sVar9 < 0x80) goto LAB_00723e2c;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,3,pbVar5,param_2);
    uVar4 = *(uint *)(param_1 + 0x28);
    if (uVar4 != 0) goto LAB_00723e78;
LAB_00723f54:
    uVar4 = *(uint *)(param_1 + 0x2c);
  }
  else {
    if (*(long *)(pbVar5 + 8) == 0) goto LAB_00723c94;
LAB_00723c7c:
    if ((bVar1 & 1) == 0) {
      pbVar5 = pbVar5 + 1;
      uVar7 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar5 + 8);
      pbVar5 = *(byte **)(pbVar5 + 0x10);
    }
    FUN_0033b628(pbVar5,uVar7,1,"nn.npln.matchmaking.v1.LatencyMeasurementServer.name");
    pbVar5 = *(byte **)(param_1 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      sVar9 = (size_t)(*pbVar5 >> 1);
LAB_00723d14:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar9) goto LAB_00723ea8;
      *param_2 = 10;
      param_2[1] = (char)sVar9;
      pbVar6 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar6 = pbVar5 + 1;
      }
      memcpy(param_2 + 2,pbVar6,sVar9);
      param_2 = param_2 + 2 + sVar9;
      pbVar5 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar5;
    }
    else {
      sVar9 = *(size_t *)(pbVar5 + 8);
      if ((long)sVar9 < 0x80) goto LAB_00723d14;
LAB_00723ea8:
      param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar5,param_2);
      pbVar5 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar5;
    }
    uVar7 = (ulong)bVar1;
    if ((bVar1 & 1) == 0) goto LAB_00723ca0;
LAB_00723d64:
    if (*(long *)(pbVar5 + 8) == 0) goto LAB_00723d6c;
LAB_00723ca8:
    if ((uVar7 & 1) == 0) {
      pbVar5 = pbVar5 + 1;
      uVar7 = uVar7 >> 1;
    }
    else {
      uVar7 = *(ulong *)(pbVar5 + 8);
      pbVar5 = *(byte **)(pbVar5 + 0x10);
    }
    FUN_0033b628(pbVar5,uVar7,1,"nn.npln.matchmaking.v1.LatencyMeasurementServer.region");
    pbVar5 = *(byte **)(param_1 + 0x18);
    if ((*pbVar5 & 1) == 0) {
      sVar9 = (size_t)(*pbVar5 >> 1);
LAB_00723d9c:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar9) goto LAB_00723ecc;
      *param_2 = 0x12;
      param_2[1] = (char)sVar9;
      pbVar6 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar6 = pbVar5 + 1;
      }
      memcpy(param_2 + 2,pbVar6,sVar9);
      param_2 = param_2 + 2 + sVar9;
      pbVar5 = *(byte **)(param_1 + 0x20);
      bVar1 = *pbVar5;
    }
    else {
      sVar9 = *(size_t *)(pbVar5 + 8);
      if ((long)sVar9 < 0x80) goto LAB_00723d9c;
LAB_00723ecc:
      param_2 = (undefined1 *)FUN_003112b4(param_3,2,pbVar5,param_2);
      pbVar5 = *(byte **)(param_1 + 0x20);
      bVar1 = *pbVar5;
    }
    uVar7 = (ulong)bVar1;
    if ((bVar1 & 1) != 0) goto LAB_00723dec;
LAB_00723d78:
    if (uVar7 >> 1 != 0) goto LAB_00723d80;
LAB_00723e70:
    uVar4 = *(uint *)(param_1 + 0x28);
    if (uVar4 == 0) goto LAB_00723f54;
LAB_00723e78:
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x20;
      if (uVar4 < 0x80) goto LAB_00723e94;
LAB_00723f34:
      param_2[1] = (byte)uVar4 | 0x80;
      if (uVar4 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar4 >> 7);
        param_2 = param_2 + 3;
        goto LAB_00723f54;
      }
      uVar7 = (ulong)(long)(int)uVar4 >> 7;
      param_2 = param_2 + 3;
      do {
        puVar2 = param_2;
        uVar3 = uVar7 >> 7;
        puVar2[-1] = (byte)uVar7 | 0x80;
        param_2 = puVar2 + 1;
        uVar8 = uVar7 >> 0xe;
        uVar7 = uVar3;
      } while (uVar8 != 0);
      *puVar2 = (char)uVar3;
      uVar4 = *(uint *)(param_1 + 0x2c);
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar4 = *(uint *)(param_1 + 0x28);
      *param_2 = 0x20;
      if (0x7f < uVar4) goto LAB_00723f34;
LAB_00723e94:
      param_2[1] = (char)uVar4;
      param_2 = param_2 + 2;
      uVar4 = *(uint *)(param_1 + 0x2c);
    }
  }
  if (uVar4 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x28;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar4 = *(uint *)(param_1 + 0x2c);
      *param_2 = 0x28;
    }
    if (uVar4 < 0x80) {
      param_2[1] = (byte)uVar4;
      param_2 = param_2 + 2;
      uVar7 = *(ulong *)(param_1 + 8);
      goto joined_r0x00724004;
    }
    param_2[1] = (byte)uVar4 | 0x80;
    if (uVar4 >> 0xe == 0) {
      param_2[2] = (char)((ulong)(long)(int)uVar4 >> 7);
      param_2 = param_2 + 3;
      uVar7 = *(ulong *)(param_1 + 8);
      goto joined_r0x00724004;
    }
    uVar7 = (ulong)(long)(int)uVar4 >> 7;
    param_2 = param_2 + 3;
    do {
      puVar2 = param_2;
      uVar3 = uVar7 >> 7;
      puVar2[-1] = (byte)uVar7 | 0x80;
      param_2 = puVar2 + 1;
      uVar8 = uVar7 >> 0xe;
      uVar7 = uVar3;
    } while (uVar8 != 0);
    *puVar2 = (char)uVar3;
  }
  uVar7 = *(ulong *)(param_1 + 8);
joined_r0x00724004:
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar7 + 8) & 1) == 0) {
      __src = (void *)(uVar7 + 9);
      uVar3 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
    }
    else {
      uVar3 = *(ulong *)(uVar7 + 0x10);
      __src = *(void **)(uVar7 + 0x18);
    }
    sVar9 = (size_t)(int)uVar3;
    if (*param_3 - (long)param_2 < (long)sVar9) {
      puVar2 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar3,param_2);
      return puVar2;
    }
    memcpy(param_2,__src,sVar9);
    param_2 = param_2 + sVar9;
  }
  return param_2;
}


