/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046b800; name: FUN_0046b800
 */


int * FUN_0046b800(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_00407710();
  if (-1 < iVar1) {
    if (1 < *param_2 - 1U) {
      piVar4 = (int *)FUN_00407970(param_1,iVar1);
      return piVar4;
    }
    iVar2 = FUN_00407950(param_1);
    if (iVar1 < iVar2) {
      do {
        piVar4 = (int *)FUN_00407970(param_1,iVar1);
        iVar3 = *piVar4;
        if (iVar3 != *param_2) {
          return (int *)0x0;
        }
        if (iVar3 == 2) {
          iVar3 = FUN_0044e390(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
          if (iVar3 != 0) {
            return (int *)0x0;
          }
LAB_0046b8b8:
          iVar3 = *param_2;
        }
        else if (iVar3 == 1) {
          iVar3 = FUN_0044e2f0(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
          if (iVar3 != 0) {
            return (int *)0x0;
          }
          goto LAB_0046b8b8;
        }
        if (iVar3 == 2) {
          iVar3 = FUN_0044e430(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
        }
        else {
          if (iVar3 != 1) {
            return piVar4;
          }
          iVar3 = FUN_0044e550(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
        }
        if (iVar3 == 0) {
          return piVar4;
        }
        iVar1 = iVar1 + 1;
      } while (iVar2 != iVar1);
    }
  }
  return (int *)0x0;
}


