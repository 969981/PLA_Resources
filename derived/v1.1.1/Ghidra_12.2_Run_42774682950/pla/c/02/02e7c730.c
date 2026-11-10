/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7c730; name: FUN_02e7c730
 */


void FUN_02e7c730(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  FUN_02e7c340();
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x70) & 1) == 0)) {
    lVar3 = *(long *)(param_1 + 0x68);
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        while (lVar4 = lVar3, *(uint *)(lVar4 + 4) < param_3) {
          lVar3 = *(long *)(lVar4 + 8);
          plVar1 = (long *)(param_1 + 0x68);
          if (*(long *)(param_1 + 0x68) != lVar4) {
            plVar1 = (long *)(lVar5 + 8);
          }
          *plVar1 = lVar3;
          if (*(long *)(param_1 + 0x60) == lVar4) {
            *(long *)(param_1 + 0x60) = lVar5;
          }
          FUN_02e7c1ac(param_1,param_2,lVar4,*(undefined4 *)(lVar4 + 4),0,0,0);
          FUN_02f59e60(0,lVar4);
          if (lVar3 == 0) goto LAB_02e7c7f4;
        }
        *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) - param_3;
        lVar3 = *(long *)(lVar4 + 8);
        lVar5 = lVar4;
      } while (*(long *)(lVar4 + 8) != 0);
    }
  }
LAB_02e7c7f4:
  iVar2 = FUN_02e7c354(param_1);
  if (((iVar2 == 1) && ((*(byte *)(param_1 + 0x70) & 6) == 2)) && (*(long *)(param_1 + 0x68) == 0))
  {
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 4;
    FUN_02e7c354(param_1);
    return;
  }
  return;
}


