/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067f284; name: FUN_0067f284
 */


void FUN_0067f284(long *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    iVar3 = *(int *)((long)param_1 + 0xc);
LAB_0067f2f4:
    FUN_0032bcac(param_1,iVar3 + 1);
LAB_0067f300:
    piVar2 = (int *)param_1[2];
    iVar1 = *piVar2;
  }
  else {
    iVar3 = (int)param_1[1];
    if (iVar3 == *(int *)((long)param_1 + 0xc)) goto LAB_0067f2f4;
    iVar1 = *piVar2;
    if (iVar1 == *(int *)((long)param_1 + 0xc)) {
      lVar4 = *(long *)(piVar2 + (long)iVar3 * 2 + 2);
      if (lVar4 != 0 && *param_1 == 0) {
        FUN_00697b40(lVar4);
        FUN_002e2ea0(PTR_LAB_04373088,lVar4);
        piVar2 = (int *)param_1[2];
      }
      goto LAB_0067f310;
    }
    if (iVar3 < iVar1) {
      *(undefined8 *)(piVar2 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar2 + (long)iVar3 * 2 + 2);
      goto LAB_0067f300;
    }
  }
  *piVar2 = iVar1 + 1;
LAB_0067f310:
  lVar4 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar4 + 1;
  *(undefined8 *)(piVar2 + (long)(int)lVar4 * 2 + 2) = param_2;
  return;
}


