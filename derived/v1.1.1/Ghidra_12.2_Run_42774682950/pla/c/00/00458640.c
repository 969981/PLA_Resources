/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00458640; name: FUN_00458640
 */


undefined8 FUN_00458640(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 1)) {
    uVar5 = *(undefined8 *)(param_1 + 2);
    lVar3 = FUN_0044ac00(param_2);
    *(long *)(param_1 + 4) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_00407950(uVar5);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uVar4 = FUN_00407970(uVar5,iVar1);
        iVar2 = FUN_0044a2d0(*(undefined8 *)(param_1 + 4),uVar4,0xffffffff,iVar1 == 0);
        if (iVar2 == 0) goto LAB_004586ec;
        iVar1 = iVar1 + 1;
        iVar2 = FUN_00407950(uVar5);
      } while (iVar1 < iVar2);
    }
    iVar1 = FUN_0044abd0(*(undefined8 *)(param_1 + 4),0);
    if (iVar1 < 0) {
LAB_004586ec:
      FUN_0044abf0(*(undefined8 *)(param_1 + 4));
      param_1[4] = 0;
      param_1[5] = 0;
      return 0;
    }
  }
  return 1;
}


