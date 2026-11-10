/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068b314; name: FUN_0068b314
 */


undefined1 * FUN_0068b314(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  void *__src;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *__src_00;
  size_t sVar6;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_0068b340:
      if ((bVar1 & 1) == 0) {
        pbVar4 = pbVar4 + 1;
        uVar5 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar5 = *(ulong *)(pbVar4 + 8);
        pbVar4 = *(byte **)(pbVar4 + 0x10);
      }
      FUN_0033b628(pbVar4,uVar5,1,"nn.npln.gamesync.v1.DeleteTargetRequest.name");
      pbVar4 = *(byte **)(param_1 + 0x10);
      if ((*pbVar4 & 1) == 0) {
        sVar6 = (size_t)(*pbVar4 >> 1);
LAB_0068b390:
        if ((long)sVar6 <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 10;
          param_2[1] = (char)sVar6;
          __src_00 = *(byte **)(pbVar4 + 0x10);
          if ((*pbVar4 & 1) == 0) {
            __src_00 = pbVar4 + 1;
          }
          memcpy(param_2 + 2,__src_00,sVar6);
          param_2 = param_2 + 2 + sVar6;
          goto LAB_0068b3d4;
        }
      }
      else {
        sVar6 = *(size_t *)(pbVar4 + 8);
        if ((long)sVar6 < 0x80) goto LAB_0068b390;
      }
      param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar4,param_2);
      uVar5 = *(ulong *)(param_1 + 8);
      goto joined_r0x0068b408;
    }
  }
  else if (*(long *)(pbVar4 + 8) != 0) goto LAB_0068b340;
LAB_0068b3d4:
  uVar5 = *(ulong *)(param_1 + 8);
joined_r0x0068b408:
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar5 + 8) & 1) == 0) {
      __src = (void *)(uVar5 + 9);
      uVar3 = (ulong)(*(byte *)(uVar5 + 8) >> 1);
    }
    else {
      uVar3 = *(ulong *)(uVar5 + 0x10);
      __src = *(void **)(uVar5 + 0x18);
    }
    sVar6 = (size_t)(int)uVar3;
    if (*param_3 - (long)param_2 < (long)sVar6) {
      puVar2 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar3,param_2);
      return puVar2;
    }
    memcpy(param_2,__src,sVar6);
    param_2 = param_2 + sVar6;
  }
  return param_2;
}


