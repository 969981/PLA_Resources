/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033b2d4; name: FUN_0033b2d4
 */


void FUN_0033b2d4(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    iVar4 = *(int *)((long)param_1 + 0xc);
LAB_0033b34c:
    FUN_0032bcac(param_1,iVar4 + 1);
LAB_0033b358:
    piVar3 = (int *)param_1[2];
    iVar1 = *piVar3;
  }
  else {
    iVar4 = (int)param_1[1];
    if (iVar4 == *(int *)((long)param_1 + 0xc)) goto LAB_0033b34c;
    iVar1 = *piVar3;
    if (iVar1 == *(int *)((long)param_1 + 0xc)) {
      puVar5 = *(undefined8 **)(piVar3 + (long)iVar4 * 2 + 2);
      if (puVar5 != (undefined8 *)0x0 && *param_1 == 0) {
        (**(code **)*puVar5)(puVar5);
        FUN_002e2ea0(PTR_LAB_04373088,puVar5);
        piVar3 = (int *)param_1[2];
      }
      goto LAB_0033b368;
    }
    if (iVar4 < iVar1) {
      *(undefined8 *)(piVar3 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar3 + (long)iVar4 * 2 + 2);
      goto LAB_0033b358;
    }
  }
  *piVar3 = iVar1 + 1;
LAB_0033b368:
  lVar2 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar2 + 1;
  *(undefined8 *)(piVar3 + (long)(int)lVar2 * 2 + 2) = param_2;
  return;
}


