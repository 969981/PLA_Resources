/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064e784; name: FUN_0064e784
 */


void FUN_0064e784(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x38);
    if (lVar5 != 0) {
                    /* try { // try from 0064e7ec to 0064e7f7 has its CatchHandler @ 0064e88c */
      FUN_006946e0(lVar5,0);
    }
    *(long *)(param_1 + 8) = lVar5;
    piVar3 = *(int **)(lVar5 + 0x20);
    puVar7 = (undefined8 *)(lVar5 + 0x10);
    if (piVar3 == (int *)0x0) goto LAB_0064e808;
LAB_0064e7ac:
    iVar1 = *(int *)(lVar5 + 0x18);
    iVar4 = *piVar3;
    if (iVar1 < iVar4) {
      *(int *)(lVar5 + 0x18) = iVar1 + 1;
      uVar6 = *(undefined8 *)(piVar3 + (long)iVar1 * 2 + 2);
      goto LAB_0064e85c;
    }
    if (iVar4 == *(int *)(lVar5 + 0x1c)) goto LAB_0064e81c;
  }
  else {
    piVar3 = *(int **)(lVar5 + 0x20);
    puVar7 = (undefined8 *)(lVar5 + 0x10);
    if (piVar3 != (int *)0x0) goto LAB_0064e7ac;
LAB_0064e808:
    iVar4 = *(int *)(lVar5 + 0x1c);
LAB_0064e81c:
                    /* try { // try from 0064e820 to 0064e87b has its CatchHandler @ 0064e890 */
    FUN_0032bcac(puVar7,iVar4 + 1);
    piVar3 = *(int **)(lVar5 + 0x20);
    iVar4 = *piVar3;
  }
  *piVar3 = iVar4 + 1;
  uVar6 = FUN_0069d2a0(*puVar7);
  iVar4 = *(int *)(lVar5 + 0x18);
  *(int *)(lVar5 + 0x18) = iVar4 + 1;
  *(undefined8 *)(*(long *)(lVar5 + 0x20) + (long)iVar4 * 8 + 8) = uVar6;
LAB_0064e85c:
  uVar2 = FUN_0064eaf8(param_3);
  FUN_006976d8(uVar6,uVar2);
  FUN_0064e8f0(uVar6,param_2);
  return;
}


