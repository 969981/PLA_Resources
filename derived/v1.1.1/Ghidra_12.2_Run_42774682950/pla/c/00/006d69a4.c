/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d69a4; name: FUN_006d69a4
 */


void FUN_006d69a4(long *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    iVar3 = *(int *)((long)param_1 + 0xc);
LAB_006d6a14:
    FUN_0032bcac(param_1,iVar3 + 1);
LAB_006d6a20:
    piVar2 = (int *)param_1[2];
    iVar1 = *piVar2;
  }
  else {
    iVar3 = (int)param_1[1];
    if (iVar3 == *(int *)((long)param_1 + 0xc)) goto LAB_006d6a14;
    iVar1 = *piVar2;
    if (iVar1 == *(int *)((long)param_1 + 0xc)) {
      lVar4 = *(long *)(piVar2 + (long)iVar3 * 2 + 2);
      if (lVar4 != 0 && *param_1 == 0) {
        FUN_002ded3c(lVar4);
        FUN_002e2ea0(PTR_LAB_04373088,lVar4);
        piVar2 = (int *)param_1[2];
      }
      goto LAB_006d6a30;
    }
    if (iVar3 < iVar1) {
      *(undefined8 *)(piVar2 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar2 + (long)iVar3 * 2 + 2);
      goto LAB_006d6a20;
    }
  }
  *piVar2 = iVar1 + 1;
LAB_006d6a30:
  lVar4 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar4 + 1;
  *(undefined8 *)(piVar2 + (long)(int)lVar4 * 2 + 2) = param_2;
  return;
}


