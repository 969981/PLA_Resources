/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bb2ec; name: FUN_031bb2ec
 */


bool FUN_031bb2ec(long param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  lVar1 = (long)param_2 + 1;
  if ((int)lVar1 < *(int *)(param_1 + 0x24)) {
    lVar2 = *(long *)(param_1 + 0x40) + (long)param_2 * 0x80;
    if ((*(byte *)(lVar2 + 0x10) >> 6 & 1) == 0) {
      if (param_2 < -1) {
        iVar5 = -1;
      }
      else {
        piVar3 = (int *)(*(long *)(param_1 + 0x40) + lVar1 * 0x80);
        piVar4 = piVar3 + 1;
        if (param_3 != 1) {
          piVar4 = piVar3;
        }
        iVar5 = *piVar4;
      }
      piVar3 = (int *)(lVar2 + 0x14);
      if (param_3 != 1) {
        piVar3 = (int *)(lVar2 + 0x18);
      }
      return *piVar3 == iVar5;
    }
  }
  return false;
}


