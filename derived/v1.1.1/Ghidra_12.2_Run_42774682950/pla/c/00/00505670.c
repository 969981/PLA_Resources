/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00505670; name: FUN_00505670
 */


int FUN_00505670(ulong *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  
  iVar3 = 0;
  if (param_1 != (ulong *)0x0) {
    uVar4 = *param_1;
    if (uVar4 == 0) {
      return 0;
    }
    uVar5 = 0;
    piVar6 = (int *)param_1[1] + 4;
    if (*(int *)param_1[1] == 1) goto LAB_005056c4;
    do {
      do {
        uVar5 = uVar5 + 1;
        piVar2 = piVar6 + 8;
        if (uVar4 <= uVar5) {
          return 0;
        }
        piVar1 = piVar6 + 4;
        piVar6 = piVar2;
      } while (*piVar1 != 1);
LAB_005056c4:
      iVar3 = strcmp("grpc.default_compression_algorithm",*(char **)(piVar6 + -2));
    } while (iVar3 != 0);
    iVar3 = *piVar6;
    if (3 < iVar3) {
      iVar3 = 0;
    }
  }
  return iVar3;
}


