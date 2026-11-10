/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e3258; name: FUN_032e3258
 */


long FUN_032e3258(ulong *param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  short *psVar4;
  long *plVar5;
  short *psVar6;
  ulong uVar7;
  
  if ((param_1 != (ulong *)0x0) && (param_2 != 0)) {
    if ((param_3 & 1) != 0) {
      do {
        puVar3 = param_1;
        do {
          uVar2 = (uint)*puVar3;
          if ((uVar2 >> 0x17 & 1) != 0) {
            uVar2 = (uVar2 & 0x7fffff) - (uVar2 >> 1 & 0x155555);
            uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
            psVar4 = (short *)puVar3[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)
                                     + 2];
            if (psVar4 != (short *)0x0) {
              psVar6 = psVar4 + 4;
              psVar4 = psVar6 + ((long)psVar4[1] + (long)*psVar4) * 4;
              goto LAB_032e3308;
            }
            break;
          }
          if ((*puVar3 & 1) != 0) {
            psVar6 = (short *)0x0;
            psVar4 = (short *)0x0;
            goto LAB_032e3308;
          }
          puVar3 = (ulong *)puVar3[1];
        } while (puVar3 != (ulong *)0x0);
        psVar4 = (short *)0x0;
        psVar6 = (short *)0x0;
LAB_032e3308:
        if (0 < (int)((ulong)((long)psVar4 - (long)psVar6) >> 3)) {
          uVar7 = 0;
          do {
            plVar5 = (long *)(psVar6 + uVar7 * 4);
            puVar3 = (ulong *)*plVar5;
            if (puVar3 != (ulong *)0x0) {
              while( true ) {
                uVar2 = (uint)*puVar3;
                if ((uVar2 >> 0x10 & 1) != 0) break;
                if (((*puVar3 & 1) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
                goto LAB_032e3324;
              }
              uVar2 = (uVar2 & 0xffff) - (uVar2 >> 1 & 0x5555);
              uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
              if ((puVar3[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] != 0)
                 && (iVar1 = FUN_032c4870(param_2), iVar1 == 0)) goto LAB_032e34b4;
            }
LAB_032e3324:
            uVar7 = uVar7 + 1;
          } while (uVar7 != ((ulong)((long)psVar4 - (long)psVar6) >> 3 & 0xffffffff));
        }
        param_1 = (ulong *)param_1[1];
        if (param_1 == (ulong *)0x0) {
          return 0;
        }
        while ((*param_1 & 1) == 0) {
          param_1 = (ulong *)param_1[1];
          if (param_1 == (ulong *)0x0) {
            return 0;
          }
        }
      } while( true );
    }
    do {
      uVar2 = (uint)*param_1;
      if ((uVar2 >> 0x17 & 1) != 0) {
        uVar2 = (uVar2 & 0x7fffff) - (uVar2 >> 1 & 0x155555);
        uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
        psVar4 = (short *)param_1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                  2];
        if (psVar4 == (short *)0x0) {
          psVar6 = (short *)0x0;
          psVar4 = (short *)0x0;
        }
        else {
          psVar6 = psVar4 + 4;
          psVar4 = psVar6 + ((long)psVar4[1] + (long)*psVar4) * 4;
        }
        goto LAB_032e3424;
      }
      if ((*param_1 & 1) != 0) {
        psVar6 = (short *)0x0;
        psVar4 = (short *)0x0;
        goto LAB_032e3424;
      }
      param_1 = (ulong *)param_1[1];
    } while (param_1 != (ulong *)0x0);
    psVar4 = (short *)0x0;
    psVar6 = (short *)0x0;
LAB_032e3424:
    if (0 < (int)((ulong)((long)psVar4 - (long)psVar6) >> 3)) {
      uVar7 = 0;
      do {
        plVar5 = (long *)(psVar6 + uVar7 * 4);
        puVar3 = (ulong *)*plVar5;
        if (puVar3 != (ulong *)0x0) {
          while( true ) {
            uVar2 = (uint)*puVar3;
            if ((uVar2 >> 0x10 & 1) != 0) break;
            if (((*puVar3 & 1) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
            goto LAB_032e3444;
          }
          uVar2 = (uVar2 & 0xffff) - (uVar2 >> 1 & 0x5555);
          uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
          if ((puVar3[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] != 0) &&
             (iVar1 = FUN_032c4870(param_2), iVar1 == 0)) {
LAB_032e34b4:
            return *plVar5;
          }
        }
LAB_032e3444:
        uVar7 = uVar7 + 1;
      } while (uVar7 != ((ulong)((long)psVar4 - (long)psVar6) >> 3 & 0xffffffff));
    }
  }
  return 0;
}


