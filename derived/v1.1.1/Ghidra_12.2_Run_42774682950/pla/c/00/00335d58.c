/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00335d58; name: FUN_00335d58
 */


void FUN_00335d58(long *param_1,long *param_2)

{
  undefined2 uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  if (*param_1 == *param_2) {
    lVar5 = param_1[1];
    *(short *)(param_1 + 1) = (short)param_2[1];
    *(short *)(param_2 + 1) = (short)lVar5;
    uVar1 = *(undefined2 *)((long)param_1 + 10);
    *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_2 + 10);
    *(undefined2 *)((long)param_2 + 10) = uVar1;
    lVar5 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = lVar5;
  }
  else {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
                    /* try { // try from 00335d8c to 00335d97 has its CatchHandler @ 00335f50 */
    FUN_00334da8(&local_48,param_2);
    if (*(ushort *)(param_2 + 1) < 0x101) {
      if ((ulong)*(ushort *)((long)param_2 + 10) != 0) {
        lVar7 = (ulong)*(ushort *)((long)param_2 + 10) << 5;
        lVar5 = param_2[2] + 8;
        do {
                    /* try { // try from 00335db8 to 00335dbf has its CatchHandler @ 00335f58 */
          FUN_0032e380(lVar5);
          lVar7 = lVar7 + -0x20;
          lVar5 = lVar5 + 0x20;
        } while (lVar7 != 0);
      }
    }
    else {
      plVar6 = (long *)param_2[2];
      plVar3 = (long *)*plVar6;
      while (plVar3 != plVar6 + 1) {
                    /* try { // try from 00335e8c to 00335e8f has its CatchHandler @ 00335f4c */
        FUN_0032e380(plVar3 + 5);
        plVar4 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 2;
          bVar2 = (long *)*(long *)*plVar4 != plVar3;
          plVar3 = (long *)*plVar4;
          if (bVar2) {
            do {
              lVar5 = *plVar4;
              plVar4 = (long *)(lVar5 + 0x10);
              plVar3 = (long *)*plVar4;
            } while (*(long *)*plVar4 != lVar5);
          }
        }
        else {
          do {
            plVar3 = plVar4;
            plVar4 = (long *)*plVar3;
          } while (plVar4 != (long *)0x0);
        }
      }
    }
                    /* try { // try from 00335dcc to 00335dd7 has its CatchHandler @ 00335f50 */
    FUN_00334da8(param_2,param_1);
    if (*(ushort *)(param_1 + 1) < 0x101) {
      if ((ulong)*(ushort *)((long)param_1 + 10) != 0) {
        lVar7 = (ulong)*(ushort *)((long)param_1 + 10) << 5;
        lVar5 = param_1[2] + 8;
        do {
                    /* try { // try from 00335df8 to 00335dff has its CatchHandler @ 00335f54 */
          FUN_0032e380(lVar5);
          lVar7 = lVar7 + -0x20;
          lVar5 = lVar5 + 0x20;
        } while (lVar7 != 0);
      }
    }
    else {
      plVar6 = (long *)param_1[2];
      plVar3 = (long *)*plVar6;
      while (plVar3 != plVar6 + 1) {
                    /* try { // try from 00335efc to 00335eff has its CatchHandler @ 00335f48 */
        FUN_0032e380(plVar3 + 5);
        plVar4 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 2;
          bVar2 = (long *)*(long *)*plVar4 != plVar3;
          plVar3 = (long *)*plVar4;
          if (bVar2) {
            do {
              lVar5 = *plVar4;
              plVar4 = (long *)(lVar5 + 0x10);
              plVar3 = (long *)*plVar4;
            } while (*(long *)*plVar4 != lVar5);
          }
        }
        else {
          do {
            plVar3 = plVar4;
            plVar4 = (long *)*plVar3;
          } while (plVar4 != (long *)0x0);
        }
      }
    }
                    /* try { // try from 00335e0c to 00335e17 has its CatchHandler @ 00335f50 */
    FUN_00334da8(param_1,&local_48);
    FUN_0032dd18(&local_48);
  }
  return;
}


