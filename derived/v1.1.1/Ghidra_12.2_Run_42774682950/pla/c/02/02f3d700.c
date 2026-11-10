/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3d700; name: FUN_02f3d700
 */


void FUN_02f3d700(long param_1,long param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong local_60;
  uint local_58;
  
  plVar3 = (long *)(param_1 + 0x40);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    lVar1 = param_2 + (ulong)param_3;
    plVar8 = (long *)0x0;
    do {
      plVar9 = plVar4 + 1;
      lVar5 = plVar4[3];
      plVar7 = plVar4;
      if (*plVar9 == 0) {
        plVar9 = (long *)*plVar4;
        if ((long)(lVar5 + (ulong)*(uint *)(plVar4 + 4)) < param_2) {
          plVar7 = plVar3;
          if ((long *)*plVar3 != plVar4) {
            plVar7 = plVar8;
          }
          *plVar7 = (long)plVar9;
          FUN_02f3e6fc(plVar4);
          (*DAT_0442d150)(0,plVar4);
          plVar7 = plVar8;
        }
      }
      else {
        lVar6 = lVar5 - *(int *)((long)plVar4 + 0x24);
        if (lVar6 < lVar1) {
          if (param_2 <= lVar6) {
            local_58 = 0;
            local_60 = local_60 & 0xffffffff00000000;
            FUN_02f3bf24(plVar4[1],&local_60);
            lVar5 = plVar4[3];
          }
          lVar5 = lVar5 + (int)plVar4[5];
          if ((lVar5 >= param_2 && lVar1 != lVar5) && (lVar5 < param_2 || lVar5 <= lVar1)) {
            local_60 = 0x400000000;
            local_58 = local_58 & 0xffffff00;
            FUN_02f3c048(*plVar9,&local_60,(int)lVar5 - (int)param_2);
          }
          if (((*(byte *)(*plVar9 + 0x5a) >> 4 & 1) == 0) && ((*(byte *)(*plVar9 + 0x5a) & 3) != 0))
          {
            local_58 = CONCAT31(local_58._1_3_,1);
            local_60 = plVar4[3] + 1;
            (**(code **)(*(long *)plVar4[1] + 0xa8))((long *)plVar4[1],param_2,param_3,&local_60);
            plVar8 = (long *)plVar4[1];
            if (((*(byte *)((long)plVar8 + 0x5a) & 0xe) != 0) &&
               ((*plVar9 = 0, plVar8 != (long *)0x0 &&
                (iVar2 = (int)plVar8[9] + -1, *(int *)(plVar8 + 9) = iVar2, iVar2 == 0)))) {
              if (plVar8[2] == 0) {
                FUN_02f37eb4(plVar8);
              }
              else {
                FUN_02f3b8c0(plVar8[2],plVar8);
                plVar8[2] = 0;
              }
              (**(code **)(*plVar8 + 0x50))(plVar8);
              (*DAT_0442d150)(0,plVar8);
            }
          }
        }
        plVar9 = (long *)*plVar4;
      }
      plVar4 = plVar9;
      plVar8 = plVar7;
    } while (plVar4 != (long *)0x0);
  }
  return;
}


