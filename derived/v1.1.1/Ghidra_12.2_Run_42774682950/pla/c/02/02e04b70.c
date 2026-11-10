/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e04b70; name: FUN_02e04b70
 */


long * FUN_02e04b70(uint param_1,ulong param_2,long *param_3,ulong *param_4)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  long local_58;
  
  if ((param_1 & 1) == 0) {
    iVar5 = (int)param_1 >> 1;
    FUN_02e059f0(iVar5,param_2,0,&local_58);
    iVar3 = (param_1 & 0xfffffffe) + iVar5;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    uVar1 = local_58 + (long)(iVar3 >> 1) * 8 + 0x20;
    plVar6 = (long *)0x0;
    if (uVar1 <= *param_4) {
      plVar6 = param_3;
    }
    *param_4 = uVar1;
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 4;
      *plVar6 = (long)plVar2;
      plVar6[1] = (long)plVar2 + local_58;
      plVar6[2] = (long)plVar2 + local_58 + (long)iVar5 * 8;
      FUN_02e059f0(iVar5,param_2 & 0xffffffff,plVar2,&local_58);
      iVar3 = iVar5;
      if (iVar5 < 0) {
        iVar3 = iVar5 + 1;
      }
      if ((int)param_2 == 0) {
        if (3 < (int)param_1) {
          lVar7 = 0;
          lVar8 = 0;
          do {
            lVar8 = lVar8 + 1;
            dVar10 = (1.0 / (double)iVar5) * (double)(int)lVar8 * -3.141592653589793 +
                     -1.5707963267948966;
            dVar9 = cos(dVar10);
            *(float *)(plVar6[2] + lVar7) = (float)dVar9;
            dVar9 = sin(dVar10);
            lVar4 = plVar6[2] + lVar7;
            lVar7 = lVar7 + 8;
            *(float *)(lVar4 + 4) = (float)dVar9;
          } while (lVar8 < iVar3 >> 1);
        }
      }
      else if (3 < (int)param_1) {
        lVar7 = 0;
        lVar8 = 0;
        do {
          lVar8 = lVar8 + 1;
          dVar10 = (1.0 / (double)iVar5) * (double)(int)lVar8 * 3.141592653589793 +
                   1.5707963267948966;
          dVar9 = cos(dVar10);
          *(float *)(plVar6[2] + lVar7) = (float)dVar9;
          dVar9 = sin(dVar10);
          lVar4 = plVar6[2] + lVar7;
          lVar7 = lVar7 + 8;
          *(float *)(lVar4 + 4) = (float)dVar9;
        } while (lVar8 < iVar3 >> 1);
      }
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  return plVar6;
}


