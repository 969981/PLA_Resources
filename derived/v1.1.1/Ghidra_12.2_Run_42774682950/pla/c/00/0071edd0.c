/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071edd0; name: FUN_0071edd0
 */


void * FUN_0071edd0(long param_1,void *param_2,long *param_3)

{
  byte *pbVar1;
  void *__src;
  ulong uVar2;
  long *plVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  size_t __n;
  long *plVar7;
  long local_80;
  long *plStack_78;
  long local_60;
  long *plStack_58;
  
  plVar3 = *(long **)(param_1 + 0x20);
  lVar6 = *plVar3;
  if (lVar6 != 0) {
    if (lVar6 == 1 || *(char *)((long)param_3 + 0x3a) == '\0') {
      plStack_58 = plVar3;
      FUN_006fb578(&local_60,plVar3[3]);
      plStack_78 = plStack_58;
      local_80 = local_60;
      while (local_80 != 0) {
        param_2 = (void *)FUN_0071f050(1,*(long *)(local_80 + 8),*(long *)(local_80 + 8) + 0x18,
                                       param_2,param_3);
        pbVar4 = *(byte **)(local_80 + 8);
        if ((*pbVar4 & 1) == 0) {
          pbVar1 = pbVar4 + 1;
          uVar5 = (ulong)(*pbVar4 >> 1);
        }
        else {
          uVar5 = *(ulong *)(pbVar4 + 8);
          pbVar1 = *(byte **)(pbVar4 + 0x10);
        }
        FUN_0033b628(pbVar1,uVar5,1,"nn.npln.matchmaking.v1.LatencyData.LatenciesEntry.key");
        FUN_006fb6e8(&local_80);
      }
    }
    else {
      plVar3 = (long *)FUN_002e2ec0(PTR_FUN_04373078,lVar6 << 3);
      plStack_58 = *(long **)(param_1 + 0x20);
                    /* try { // try from 0071eeb8 to 0071eebf has its CatchHandler @ 0071f014 */
      FUN_006fb578(&local_60,plStack_58[3]);
      lVar6 = 0;
      plStack_78 = plStack_58;
      local_80 = local_60;
      while (local_80 != 0) {
        plVar3[lVar6] = *(long *)(local_80 + 8);
                    /* try { // try from 0071eee4 to 0071eeeb has its CatchHandler @ 0071f020 */
        FUN_006fb6e8(&local_80);
        lVar6 = lVar6 + 1;
      }
                    /* try { // try from 0071eefc to 0071ef07 has its CatchHandler @ 0071f008 */
      FUN_00727390(plVar3,plVar3 + lVar6,&local_60);
      if (lVar6 == 0) {
        if (plVar3 == (long *)0x0) goto LAB_0071ef88;
      }
      else {
        plVar7 = plVar3;
        do {
                    /* try { // try from 0071ef20 to 0071ef5b has its CatchHandler @ 0071f02c */
          param_2 = (void *)FUN_0071f050(1,*plVar7,*plVar7 + 0x18,param_2,param_3);
          pbVar4 = (byte *)*plVar7;
          if ((*pbVar4 & 1) == 0) {
            pbVar1 = pbVar4 + 1;
            uVar5 = (ulong)(*pbVar4 >> 1);
          }
          else {
            uVar5 = *(ulong *)(pbVar4 + 8);
            pbVar1 = *(byte **)(pbVar4 + 0x10);
          }
          FUN_0033b628(pbVar1,uVar5,1,"nn.npln.matchmaking.v1.LatencyData.LatenciesEntry.key");
          lVar6 = lVar6 + -1;
          plVar7 = plVar7 + 1;
        } while (lVar6 != 0);
      }
      FUN_002e2f10(plVar3);
      FUN_002e2ef0(PTR_LAB_04373088,plVar3);
    }
  }
LAB_0071ef88:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar5 + 8) & 1) == 0) {
      __src = (void *)(uVar5 + 9);
      uVar2 = (ulong)(*(byte *)(uVar5 + 8) >> 1);
    }
    else {
      uVar2 = *(ulong *)(uVar5 + 0x10);
      __src = *(void **)(uVar5 + 0x18);
    }
    __n = (size_t)(int)uVar2;
    if (*param_3 - (long)param_2 < (long)__n) {
      param_2 = (void *)FUN_00310fe4(param_3,__src,uVar2,param_2);
    }
    else {
      memcpy(param_2,__src,__n);
      param_2 = (void *)((long)param_2 + __n);
    }
  }
  return param_2;
}


