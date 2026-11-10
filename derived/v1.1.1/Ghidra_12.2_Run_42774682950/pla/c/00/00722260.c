/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00722260; name: FUN_00722260
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00722260(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  void *__src;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *__src_00;
  ulong uVar7;
  size_t sVar8;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar5;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_00722320;
LAB_0072228c:
    if ((bVar1 & 1) == 0) {
      pbVar5 = pbVar5 + 1;
      uVar6 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar6 = *(ulong *)(pbVar5 + 8);
      pbVar5 = *(byte **)(pbVar5 + 0x10);
    }
    FUN_0033b628(pbVar5,uVar6,1,"nn.npln.matchmaking.v1.StunServer.host");
    pbVar5 = *(byte **)(param_1 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      sVar8 = (size_t)(*pbVar5 >> 1);
LAB_007222dc:
      if ((long)sVar8 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (char)sVar8;
        __src_00 = *(byte **)(pbVar5 + 0x10);
        if ((*pbVar5 & 1) == 0) {
          __src_00 = pbVar5 + 1;
        }
        memcpy(param_2 + 2,__src_00,sVar8);
        param_2 = param_2 + 2 + sVar8;
        goto LAB_00722320;
      }
    }
    else {
      sVar8 = *(size_t *)(pbVar5 + 8);
      if ((long)sVar8 < 0x80) goto LAB_007222dc;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar5,param_2);
    uVar4 = *(uint *)(param_1 + 0x18);
    if (uVar4 != 0) goto LAB_00722328;
LAB_007223bc:
    uVar4 = *(uint *)(param_1 + 0x1c);
  }
  else {
    if (*(long *)(pbVar5 + 8) != 0) goto LAB_0072228c;
LAB_00722320:
    uVar4 = *(uint *)(param_1 + 0x18);
    if (uVar4 == 0) goto LAB_007223bc;
LAB_00722328:
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x10;
      if (uVar4 < 0x80) goto LAB_00722344;
LAB_0072239c:
      param_2[1] = (byte)uVar4 | 0x80;
      if (uVar4 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar4 >> 7);
        param_2 = param_2 + 3;
        goto LAB_007223bc;
      }
      uVar6 = (ulong)(long)(int)uVar4 >> 7;
      param_2 = param_2 + 3;
      do {
        puVar2 = param_2;
        uVar3 = uVar6 >> 7;
        puVar2[-1] = (byte)uVar6 | 0x80;
        param_2 = puVar2 + 1;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar3;
      } while (uVar7 != 0);
      *puVar2 = (char)uVar3;
      uVar4 = *(uint *)(param_1 + 0x1c);
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar4 = *(uint *)(param_1 + 0x18);
      *param_2 = 0x10;
      if (0x7f < uVar4) goto LAB_0072239c;
LAB_00722344:
      param_2[1] = (char)uVar4;
      param_2 = param_2 + 2;
      uVar4 = *(uint *)(param_1 + 0x1c);
    }
  }
  if (uVar4 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x18;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar4 = *(uint *)(param_1 + 0x1c);
      *param_2 = 0x18;
    }
    if (uVar4 < 0x80) {
      param_2[1] = (char)uVar4;
      param_2 = param_2 + 2;
      uVar6 = *(ulong *)(param_1 + 8);
      goto joined_r0x0072246c;
    }
    param_2[1] = (char)uVar4 | 0x80;
    if (uVar4 >> 0xe == 0) {
      param_2[2] = (char)((ulong)(long)(int)uVar4 >> 7);
      param_2 = param_2 + 3;
      uVar6 = *(ulong *)(param_1 + 8);
      goto joined_r0x0072246c;
    }
    uVar6 = (ulong)(long)(int)uVar4 >> 7;
    param_2 = param_2 + 3;
    do {
      puVar2 = param_2;
      uVar3 = uVar6 >> 7;
      puVar2[-1] = (byte)uVar6 | 0x80;
      param_2 = puVar2 + 1;
      uVar7 = uVar6 >> 0xe;
      uVar6 = uVar3;
    } while (uVar7 != 0);
    *puVar2 = (char)uVar3;
  }
  uVar6 = *(ulong *)(param_1 + 8);
joined_r0x0072246c:
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar6 + 8) & 1) == 0) {
      __src = (void *)(uVar6 + 9);
      uVar3 = (ulong)(*(byte *)(uVar6 + 8) >> 1);
    }
    else {
      uVar3 = *(ulong *)(uVar6 + 0x10);
      __src = *(void **)(uVar6 + 0x18);
    }
    sVar8 = (size_t)(int)uVar3;
    if (*param_3 - (long)param_2 < (long)sVar8) {
      puVar2 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar3,param_2);
      return puVar2;
    }
    memcpy(param_2,__src,sVar8);
    param_2 = param_2 + sVar8;
  }
  return param_2;
}


