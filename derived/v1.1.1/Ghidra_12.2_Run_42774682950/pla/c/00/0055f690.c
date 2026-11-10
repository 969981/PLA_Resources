/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055f690; name: FUN_0055f690
 */


/* WARNING: Removing unreachable block (ram,0x0055f718) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0055f690(ulong param_1,undefined4 *param_2,uint param_3,byte *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  
  uVar8 = (ulong)param_3;
  if ((param_1 & 1) != 0) {
    bVar2 = *param_4;
    uVar5 = (ulong)(int)param_3;
    if ((bVar2 & 1) == 0) {
      uVar6 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar6 = *(ulong *)(param_4 + 8);
    }
    if (uVar6 < uVar5) {
      FUN_002e6bd4(param_4,uVar5 - uVar6,0);
    }
    else if ((bVar2 & 1) == 0) {
      param_4[uVar5 + 1] = 0;
      *param_4 = (byte)(param_3 << 1);
    }
    else {
      *(undefined1 *)(*(long *)(param_4 + 0x10) + uVar5) = 0;
      *(ulong *)(param_4 + 8) = uVar5;
    }
    if (0 < (int)param_3) {
      uVar5 = 0;
      uVar1 = *param_2;
      bVar2 = *param_4;
      while( true ) {
        pbVar7 = param_4 + 1;
        if ((bVar2 & 1) != 0) {
          pbVar7 = *(byte **)(param_4 + 0x10);
        }
        pbVar7[uVar5] = (byte)uVar1;
        uVar5 = uVar5 + 1;
        if (uVar8 == uVar5) break;
        uVar1 = param_2[uVar5];
        bVar2 = *param_4;
      }
    }
    return;
  }
  bVar2 = *param_4;
  uVar5 = -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2;
  if ((bVar2 & 1) == 0) {
    uVar6 = (ulong)(bVar2 >> 1);
    if (uVar5 <= uVar6) goto LAB_0055f6fc;
LAB_0055f750:
    FUN_002e6bd4(param_4,uVar5 - uVar6,0);
    bVar2 = *param_4;
joined_r0x0055f80c:
    uVar5 = (ulong)bVar2;
    if ((bVar2 & 1) == 0) goto LAB_0055f768;
    pbVar7 = *(byte **)(param_4 + 0x10);
    if (0 < (int)param_3) goto LAB_0055f820;
LAB_0055f774:
    if ((uVar5 & 1) == 0) goto LAB_0055f778;
LAB_0055f844:
    pbVar7 = pbVar7 + -*(long *)(param_4 + 0x10);
    lVar4 = (long)pbVar7 - (long)*(byte **)(param_4 + 8);
    if (*(byte **)(param_4 + 8) <= pbVar7 && lVar4 != 0) goto LAB_0055f854;
  }
  else {
    uVar6 = *(ulong *)(param_4 + 8);
    if (uVar6 < uVar5) goto LAB_0055f750;
LAB_0055f6fc:
    if ((bVar2 & 1) != 0) {
      *(undefined1 *)(*(long *)(param_4 + 0x10) + uVar5) = 0;
      *(ulong *)(param_4 + 8) = uVar5;
      bVar2 = *param_4;
      goto joined_r0x0055f80c;
    }
    param_4[uVar5 + 1] = 0;
    *param_4 = (byte)(param_3 << 3);
    uVar5 = (ulong)(param_3 << 3 & 0xff);
LAB_0055f768:
    pbVar7 = param_4 + 1;
    if ((int)param_3 < 1) goto LAB_0055f774;
LAB_0055f820:
    do {
      iVar3 = FUN_00550a10(pbVar7,param_2);
      pbVar7 = pbVar7 + iVar3;
      param_2 = param_2 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    uVar5 = (ulong)*param_4;
    if ((*param_4 & 1) != 0) goto LAB_0055f844;
LAB_0055f778:
    pbVar7 = pbVar7 + ~(ulong)param_4;
    lVar4 = (long)pbVar7 - (long)(uVar5 >> 1);
    if ((byte *)(uVar5 >> 1) <= pbVar7 && lVar4 != 0) {
LAB_0055f854:
      FUN_002e6bd4(param_4,lVar4,0);
      goto LAB_0055f870;
    }
  }
  if ((uVar5 & 1) == 0) {
    (param_4 + (long)pbVar7)[1] = 0;
    *param_4 = (byte)((int)pbVar7 << 1);
  }
  else {
    pbVar7[*(long *)(param_4 + 0x10)] = 0;
    *(byte **)(param_4 + 8) = pbVar7;
  }
LAB_0055f870:
                    /* try { // try from 0055f870 to 0055f87b has its CatchHandler @ 0055f88c */
  FUN_0030ff7c(param_4,0);
  return;
}


