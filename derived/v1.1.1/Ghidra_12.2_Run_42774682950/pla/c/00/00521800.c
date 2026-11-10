/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00521800; name: FUN_00521800
 */


void FUN_00521800(byte *param_1,long *param_2,long *param_3,void *param_4,size_t param_5)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  byte *pbVar5;
  long *plVar6;
  
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
  lVar2 = param_2[5];
  plVar4 = (long *)param_2[1];
  plVar6 = param_2;
  if ((long *)param_2[1] == (long *)0x0) goto LAB_00521858;
  do {
    do {
      plVar3 = plVar4;
      plVar4 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
    while( true ) {
      if (plVar3 == param_3) {
        if (lVar2 == 0) {
          return;
        }
                    /* try { // try from 00521894 to 0052189b has its CatchHandler @ 00521958 */
        FUN_002e5a60(param_1);
        pbVar5 = *(byte **)(param_1 + 0x10);
        if ((*param_1 & 1) == 0) {
          pbVar5 = param_1 + 1;
        }
        memcpy(pbVar5,(void *)param_2[4],param_2[5]);
        pbVar5 = pbVar5 + param_2[5];
        plVar4 = (long *)param_2[1];
        if ((long *)param_2[1] == (long *)0x0) goto LAB_005218d8;
        do {
          do {
            param_2 = plVar4;
            plVar4 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
          while( true ) {
            if (param_2 == param_3) {
              return;
            }
            memcpy(pbVar5,param_4,param_5);
            memcpy(pbVar5 + param_5,(void *)param_2[4],param_2[5]);
            pbVar5 = pbVar5 + param_5 + param_2[5];
            plVar4 = (long *)param_2[1];
            if ((long *)param_2[1] != (long *)0x0) break;
LAB_005218d8:
            plVar4 = param_2 + 2;
            bVar1 = *(long **)*plVar4 != param_2;
            param_2 = (long *)*plVar4;
            if (bVar1) {
              do {
                lVar2 = *plVar4;
                plVar4 = (long *)(lVar2 + 0x10);
                param_2 = (long *)*plVar4;
              } while (*param_2 != lVar2);
            }
          }
        } while( true );
      }
      lVar2 = lVar2 + param_5 + plVar3[5];
      plVar4 = (long *)plVar3[1];
      plVar6 = plVar3;
      if ((long *)plVar3[1] != (long *)0x0) break;
LAB_00521858:
      while( true ) {
        plVar3 = (long *)plVar6[2];
        if ((long *)*plVar3 == plVar6) break;
        plVar6 = (long *)plVar6[2];
      }
    }
  } while( true );
}


