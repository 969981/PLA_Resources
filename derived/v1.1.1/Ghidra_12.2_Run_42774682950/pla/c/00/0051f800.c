/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051f800; name: FUN_0051f800
 */


void FUN_0051f800(byte *param_1,long *param_2,long *param_3,void *param_4,size_t param_5)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  byte *pbVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (param_2 == param_3) {
    return;
  }
  pbVar9 = (byte *)(param_2 + 4);
  if ((*pbVar9 & 1) == 0) {
    uVar2 = (ulong)(*pbVar9 >> 1);
    plVar5 = (long *)param_2[1];
  }
  else {
    uVar2 = param_2[5];
    plVar5 = (long *)param_2[1];
  }
  plVar3 = param_2;
  if (plVar5 != (long *)0x0) goto LAB_0051f8b8;
LAB_0051f878:
  plVar5 = plVar3 + 2;
  plVar7 = (long *)*plVar5;
  if ((long *)*plVar7 != plVar3) {
    do {
      lVar8 = *plVar5;
      plVar5 = (long *)(lVar8 + 0x10);
      plVar7 = (long *)*plVar5;
    } while (*plVar7 != lVar8);
  }
  do {
    if (plVar7 == param_3) {
      if (uVar2 == 0) {
        return;
      }
                    /* try { // try from 0051f8f0 to 0051f8fb has its CatchHandler @ 0051f958 */
      FUN_002e5a60(param_1,uVar2);
      pbVar4 = *(byte **)(param_1 + 0x10);
      if ((*param_1 & 1) == 0) {
        pbVar4 = param_1 + 1;
      }
      if ((*pbVar9 & 1) == 0) {
        memcpy(pbVar4,(void *)((long)param_2 + 0x21),(ulong)(*pbVar9 >> 1));
        bVar1 = *pbVar9;
      }
      else {
        memcpy(pbVar4,(void *)param_2[6],param_2[5]);
        bVar1 = *pbVar9;
      }
      if ((bVar1 & 1) != 0) {
        pbVar4 = pbVar4 + param_2[5];
        plVar5 = (long *)param_2[1];
        plVar3 = param_2;
        goto joined_r0x0051f950;
      }
LAB_0051f97c:
      pbVar4 = pbVar4 + (bVar1 >> 1);
      plVar5 = (long *)param_2[1];
      plVar3 = param_2;
      if ((long *)param_2[1] == (long *)0x0) goto LAB_0051f99c;
LAB_0051f98c:
      do {
        param_2 = plVar5;
        plVar5 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
      do {
        if (param_2 == param_3) {
          return;
        }
        while( true ) {
          memcpy(pbVar4,param_4,param_5);
          pbVar9 = (byte *)(param_2 + 4);
          pbVar4 = pbVar4 + param_5;
          if ((*pbVar9 & 1) == 0) {
            memcpy(pbVar4,(void *)((long)param_2 + 0x21),(ulong)(*pbVar9 >> 1));
            bVar1 = *pbVar9;
          }
          else {
            memcpy(pbVar4,(void *)param_2[6],param_2[5]);
            bVar1 = *pbVar9;
          }
          if ((bVar1 & 1) == 0) goto LAB_0051f97c;
          pbVar4 = pbVar4 + param_2[5];
          plVar5 = (long *)param_2[1];
          plVar3 = param_2;
joined_r0x0051f950:
          if (plVar5 != (long *)0x0) goto LAB_0051f98c;
LAB_0051f99c:
          plVar5 = plVar3 + 2;
          param_2 = (long *)*plVar5;
          if ((long *)*param_2 != plVar3) break;
          if (param_2 == param_3) {
            return;
          }
        }
        do {
          lVar8 = *plVar5;
          plVar5 = (long *)(lVar8 + 0x10);
          param_2 = (long *)*plVar5;
        } while (*param_2 != lVar8);
      } while( true );
    }
    if ((*(byte *)(plVar7 + 4) & 1) == 0) {
      uVar6 = (ulong)(*(byte *)(plVar7 + 4) >> 1);
      plVar5 = (long *)plVar7[1];
    }
    else {
      uVar6 = plVar7[5];
      plVar5 = (long *)plVar7[1];
    }
    uVar2 = uVar2 + param_5 + uVar6;
    plVar3 = plVar7;
    if (plVar5 == (long *)0x0) goto LAB_0051f878;
LAB_0051f8b8:
    do {
      plVar7 = plVar5;
      plVar5 = (long *)*plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
  } while( true );
}


