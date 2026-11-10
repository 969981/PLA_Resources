/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03147580; name: FUN_03147580
 */


void FUN_03147580(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((int)param_1[1] < param_2) {
    iVar1 = (int)param_1[1] * 2;
    if (param_2 <= iVar1) {
      param_2 = iVar1;
    }
    lVar4 = FUN_032cf470((long)(param_2 << 3),0);
    if ((lVar4 != 0) && (lVar6 = *param_1, lVar6 != 0)) {
      if (*(int *)((long)param_1 + 0x14) != 0) {
        iVar1 = *(int *)((long)param_1 + 0xc);
        iVar3 = (int)param_1[2];
        if (iVar1 < iVar3) {
          lVar6 = lVar6 + (long)iVar1 * 8;
          lVar5 = lVar4;
          iVar3 = *(int *)((long)param_1 + 0x14);
        }
        else {
          iVar2 = (int)param_1[1] - iVar1;
          FUN_032c4a00(lVar4,lVar6 + (long)iVar1 * 8,iVar2 * 8);
          lVar6 = *param_1;
          lVar5 = lVar4 + (long)iVar2 * 8;
        }
        FUN_032c4a00(lVar5,lVar6,iVar3 << 3);
      }
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_1 + 0x14);
    }
    FUN_03147e3c(param_1);
    *param_1 = lVar4;
    *(int *)(param_1 + 1) = param_2;
  }
  return;
}


