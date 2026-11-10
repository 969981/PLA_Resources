/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c4120; name: FUN_004c4120
 */


long FUN_004c4120(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (((param_1 == 0) ||
      (((lVar4 = *(long *)(param_1 + 0x118), lVar4 == 0 &&
        ((*(long *)(param_1 + 0x598) == 0 ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x598) + 8), lVar4 == 0)))) ||
       (iVar1 = FUN_004dd3b0(param_1), iVar1 == 0)))) || (iVar1 = FUN_00407950(lVar4), iVar1 < 1)) {
LAB_004c41e0:
    lVar5 = 0;
  }
  else {
    iVar1 = 0;
    lVar5 = 0;
    do {
      uVar3 = FUN_00407970(lVar4,iVar1);
      iVar2 = FUN_004dd600(param_1,uVar3,0x10001,0);
      if (iVar2 == 0) {
        if ((lVar5 == 0) && (lVar5 = FUN_004071e0(), lVar5 == 0)) {
          return 0;
        }
        iVar2 = FUN_00407800(lVar5,uVar3);
        if (iVar2 == 0) {
          FUN_00407010(lVar5);
          goto LAB_004c41e0;
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_00407950(lVar4);
    } while (iVar1 < iVar2);
  }
  return lVar5;
}


