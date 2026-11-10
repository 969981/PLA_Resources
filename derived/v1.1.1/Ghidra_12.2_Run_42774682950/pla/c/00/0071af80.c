/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071af80; name: FUN_0071af80
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_0071af80(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  void *__src;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  size_t sVar9;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_0071afc4;
LAB_0071afac:
    if ((bVar2 & 1) == 0) {
      pbVar5 = pbVar5 + 1;
      uVar7 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar5 + 8);
      pbVar5 = *(byte **)(pbVar5 + 0x10);
    }
    FUN_0033b628(pbVar5,uVar7,1,"nn.npln.matchmaking.v1.Backfill.game_session");
    pbVar5 = *(byte **)(param_1 + 0x10);
    if ((*pbVar5 & 1) != 0) {
      sVar9 = *(size_t *)(pbVar5 + 8);
      if ((long)sVar9 < 0x80) goto LAB_0071b044;
LAB_0071b128:
      param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar5,param_2);
      pbVar5 = *(byte **)(param_1 + 0x18);
      bVar2 = *pbVar5;
      goto joined_r0x0071b144;
    }
    sVar9 = (size_t)(*pbVar5 >> 1);
LAB_0071b044:
    if ((*param_3 - (long)param_2) + 0xe < (long)sVar9) goto LAB_0071b128;
    *param_2 = 10;
    param_2[1] = (char)sVar9;
    pbVar6 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar6 = pbVar5 + 1;
    }
    memcpy(param_2 + 2,pbVar6,sVar9);
    param_2 = param_2 + 2 + sVar9;
    pbVar5 = *(byte **)(param_1 + 0x18);
    uVar7 = (ulong)*pbVar5;
    if ((*pbVar5 & 1) == 0) goto LAB_0071afd0;
LAB_0071b094:
    if (*(long *)(pbVar5 + 8) == 0) goto LAB_0071b0f0;
LAB_0071afd8:
    if ((uVar7 & 1) == 0) {
      pbVar5 = pbVar5 + 1;
      uVar7 = uVar7 >> 1;
    }
    else {
      uVar7 = *(ulong *)(pbVar5 + 8);
      pbVar5 = *(byte **)(pbVar5 + 0x10);
    }
    FUN_0033b628(pbVar5,uVar7,1,"nn.npln.matchmaking.v1.Backfill.host");
    pbVar5 = *(byte **)(param_1 + 0x18);
    if ((*pbVar5 & 1) == 0) {
      sVar9 = (size_t)(*pbVar5 >> 1);
LAB_0071b0ac:
      if ((long)sVar9 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        param_2[1] = (char)sVar9;
        pbVar6 = *(byte **)(pbVar5 + 0x10);
        if ((*pbVar5 & 1) == 0) {
          pbVar6 = pbVar5 + 1;
        }
        memcpy(param_2 + 2,pbVar6,sVar9);
        param_2 = param_2 + 2 + sVar9;
        goto LAB_0071b0f0;
      }
    }
    else {
      sVar9 = *(size_t *)(pbVar5 + 8);
      if ((long)sVar9 < 0x80) goto LAB_0071b0ac;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,2,pbVar5,param_2);
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  else {
    if (*(long *)(pbVar5 + 8) != 0) goto LAB_0071afac;
LAB_0071afc4:
    pbVar5 = *(byte **)(param_1 + 0x18);
    bVar2 = *pbVar5;
joined_r0x0071b144:
    uVar7 = (ulong)bVar2;
    if ((bVar2 & 1) != 0) goto LAB_0071b094;
LAB_0071afd0:
    if (uVar7 >> 1 != 0) goto LAB_0071afd8;
LAB_0071b0f0:
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  if (uVar1 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x18;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x20);
      *param_2 = 0x18;
    }
    if (uVar1 < 0x80) {
      param_2[1] = (char)uVar1;
      param_2 = param_2 + 2;
      uVar7 = *(ulong *)(param_1 + 8);
      goto joined_r0x0071b1b4;
    }
    param_2[1] = (char)uVar1 | 0x80;
    if (uVar1 >> 0xe == 0) {
      param_2[2] = (char)((ulong)(long)(int)uVar1 >> 7);
      param_2 = param_2 + 3;
      uVar7 = *(ulong *)(param_1 + 8);
      goto joined_r0x0071b1b4;
    }
    uVar7 = (ulong)(long)(int)uVar1 >> 7;
    param_2 = param_2 + 3;
    do {
      puVar3 = param_2;
      uVar4 = uVar7 >> 7;
      puVar3[-1] = (byte)uVar7 | 0x80;
      param_2 = puVar3 + 1;
      uVar8 = uVar7 >> 0xe;
      uVar7 = uVar4;
    } while (uVar8 != 0);
    *puVar3 = (char)uVar4;
  }
  uVar7 = *(ulong *)(param_1 + 8);
joined_r0x0071b1b4:
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar7 + 8) & 1) == 0) {
      __src = (void *)(uVar7 + 9);
      uVar4 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
    }
    else {
      uVar4 = *(ulong *)(uVar7 + 0x10);
      __src = *(void **)(uVar7 + 0x18);
    }
    sVar9 = (size_t)(int)uVar4;
    if (*param_3 - (long)param_2 < (long)sVar9) {
      puVar3 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar4,param_2);
      return puVar3;
    }
    memcpy(param_2,__src,sVar9);
    param_2 = param_2 + sVar9;
  }
  return param_2;
}


