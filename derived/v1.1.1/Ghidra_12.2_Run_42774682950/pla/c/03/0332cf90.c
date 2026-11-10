/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332cf90; name: FUN_0332cf90
 */


void FUN_0332cf90(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((int)param_1[1] < param_2) {
    iVar1 = (int)param_1[1] * 2;
    if (param_2 <= iVar1) {
      param_2 = iVar1;
    }
    lVar2 = FUN_032cf470((long)(param_2 << 8),0);
    if ((lVar2 != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if (*(int *)((long)param_1 + 0x14) != 0) {
        iVar1 = (int)param_1[2];
        lVar4 = (long)*(int *)((long)param_1 + 0xc);
        if (*(int *)((long)param_1 + 0xc) < iVar1) {
          lVar3 = lVar3 + lVar4 * 0x100;
          lVar4 = lVar2;
          iVar1 = *(int *)((long)param_1 + 0x14);
        }
        else {
          lVar5 = (int)param_1[1] - lVar4;
          FUN_032c4a00(lVar2,lVar3 + lVar4 * 0x100,(int)lVar5 << 8);
          lVar3 = *param_1;
          lVar4 = lVar2 + lVar5 * 0x100;
        }
        FUN_032c4a00(lVar4,lVar3,iVar1 << 8);
      }
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_1 + 0x14);
    }
    FUN_0332d9fc(param_1);
    *param_1 = lVar2;
    *(int *)(param_1 + 1) = param_2;
  }
  return;
}


