/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f428e8; name: FUN_02f428e8
 */


int FUN_02f428e8(long param_1,int param_2,int *param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = *(int **)(param_1 + 0x100);
  piVar1 = piVar4 + (ulong)*(uint *)(param_1 + 0x108) * 4;
  piVar2 = piVar4 + 4;
  if ((param_4 & 1) == 0) {
    piVar2 = piVar4;
  }
  if (piVar2 != piVar1) {
    iVar5 = *param_3;
    if (iVar5 == 0) {
      do {
        if ((uint)(piVar4[1] + param_2) <= (uint)piVar2[1]) {
          iVar5 = *piVar2;
LAB_02f4297c:
          *param_3 = iVar5;
          lVar3 = *(long *)(param_1 + 0x100);
          goto LAB_02f42984;
        }
        piVar2 = piVar2 + 4;
      } while (piVar1 != piVar2);
    }
    else {
      do {
        if (((uint)(piVar4[1] + param_2) <= (uint)piVar2[1]) && (*piVar2 == iVar5))
        goto LAB_02f4297c;
        piVar2 = piVar2 + 4;
      } while (piVar1 != piVar2);
    }
    piVar2 = piVar1;
  }
  *param_3 = piVar2[-4];
  lVar3 = *(long *)(param_1 + 0x100);
  piVar2 = (int *)(lVar3 + (ulong)*(uint *)(param_1 + 0x108) * 0x10 + -0x10);
LAB_02f42984:
  return piVar2[1] - *(int *)(lVar3 + 4);
}


