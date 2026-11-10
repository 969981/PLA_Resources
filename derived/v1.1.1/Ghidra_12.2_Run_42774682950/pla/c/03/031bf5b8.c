/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bf5b8; name: FUN_031bf5b8
 */


int FUN_031bf5b8(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0xf) == 0) {
    iVar1 = 2;
  }
  else {
    uVar2 = *param_1;
    iVar1 = FUN_031bf680(uVar2,uVar2,param_1 + 0xe,param_1 + 2,param_1 + 0x22,param_1 + 0x10,
                         param_1 + 2,uVar2);
    *(int *)(param_1 + 0x26) = iVar1;
    if (0 < *(int *)(param_1 + 0x11)) {
      lVar3 = 0;
      piVar4 = (int *)(param_1 + 0x14);
      do {
        if (*piVar4 == iVar1) {
          if ((int)lVar3 != 1) {
            return 1;
          }
          break;
        }
        lVar3 = lVar3 + -1;
        piVar4 = piVar4 + 8;
      } while (-lVar3 != (long)*(int *)(param_1 + 0x11));
    }
    if (*(int *)(param_1 + 0xf) < *(int *)((long)param_1 + 0x7c)) {
      iVar1 = 3;
      if (*(int *)((long)param_1 + 0x2c) < *(int *)(param_1 + 5)) {
        iVar1 = (uint)(*(int *)(param_1 + 0xf) == 0) << 1;
      }
    }
    else {
      iVar1 = 3;
    }
  }
  return iVar1;
}


