/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03339724; name: FUN_03339724
 */


void FUN_03339724(long *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == -1) {
    FUN_03339a6c(param_1 + 3);
    iVar2 = (int)param_1[5];
  }
  lVar3 = (long)iVar2;
  lVar5 = (lVar3 + (long)iVar2 * 4) * 4;
  lVar4 = param_1[3] + lVar5;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((long)param_1 + 0x2c);
  lVar4 = param_1[3];
  piVar1 = (int *)(lVar4 + lVar5);
  *(int *)((long)param_1 + 0x2c) = iVar2;
  *piVar1 = param_2;
  piVar1[1] = param_3;
  if (param_2 != -1) {
    lVar5 = *param_1 + (long)param_2 * 0x18;
    *(undefined4 *)(lVar4 + lVar3 * 0x14 + 0xc) = *(undefined4 *)(lVar5 + 8);
    *(int *)(lVar5 + 8) = iVar2;
  }
  if (param_3 != -1) {
    lVar5 = *param_1 + (long)param_3 * 0x18;
    *(undefined4 *)(lVar4 + lVar3 * 0x14 + 8) = *(undefined4 *)(lVar5 + 0xc);
    *(int *)(lVar5 + 0xc) = iVar2;
  }
  return;
}


