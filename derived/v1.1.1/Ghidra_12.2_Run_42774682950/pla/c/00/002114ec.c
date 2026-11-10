/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002114ec; name: FUN_002114ec
 */


void FUN_002114ec(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    do {
      uVar5 = param_2 - 1 >> 1;
      iVar1 = (*(code *)param_1[4])
                        (*(undefined8 *)(*param_1 + param_2 * 8),
                         *(undefined8 *)(*param_1 + uVar5 * 8));
      if (iVar1 == 0) {
        return;
      }
      lVar2 = *param_1;
      puVar3 = *(ulong **)(lVar2 + param_2 * 8);
      puVar4 = *(ulong **)(lVar2 + uVar5 * 8);
      *(ulong **)(lVar2 + uVar5 * 8) = puVar3;
      *puVar3 = uVar5;
      *(ulong **)(*param_1 + param_2 * 8) = puVar4;
      *puVar4 = param_2;
      param_2 = uVar5;
    } while (uVar5 != 0);
  }
  return;
}


