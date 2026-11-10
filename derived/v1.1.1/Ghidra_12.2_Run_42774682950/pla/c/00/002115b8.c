/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002115b8; name: FUN_002115b8
 */


void FUN_002115b8(long *param_1,ulong param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  do {
    uVar5 = param_2 << 1 | 1;
    lVar6 = 2;
    uVar4 = param_2;
    do {
      if ((ulong)param_1[2] <= uVar5) break;
      iVar1 = (*(code *)param_1[4])
                        (*(undefined8 *)(*param_1 + uVar5 * 8),*(undefined8 *)(*param_1 + uVar4 * 8)
                        );
      if (iVar1 != 0) {
        uVar4 = uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (uVar4 == param_2) {
      return;
    }
    lVar6 = *param_1;
    puVar2 = *(ulong **)(lVar6 + uVar4 * 8);
    puVar3 = *(ulong **)(lVar6 + param_2 * 8);
    *(ulong **)(lVar6 + param_2 * 8) = puVar2;
    *puVar2 = param_2;
    *(ulong **)(*param_1 + uVar4 * 8) = puVar3;
    *puVar3 = uVar4;
    param_2 = uVar4;
  } while( true );
}


