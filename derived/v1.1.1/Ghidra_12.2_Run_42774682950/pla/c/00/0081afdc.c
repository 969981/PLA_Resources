/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081afdc; name: FUN_0081afdc
 */


void FUN_0081afdc(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_1 + 0xd8;
  lVar3 = (long)*(int *)(param_1 + 0xec);
  if (*(long *)(param_1 + 0xe0) == lVar5) {
    uVar4 = 0;
LAB_0081b070:
    if ((*(int *)(param_1 + 0xe8) != 0) &&
       (lVar1 = *(long *)(uVar4 + 0x18) + 0x20,
       lVar1 + uVar4 + (ulong)*(ushort *)(uVar4 + 0x12) == param_2)) {
      *(ulong *)(uVar4 + 0x18) =
           lVar1 + (ulong)*(ushort *)(param_2 + 0x12) + *(long *)(param_2 + 0x18);
      return;
    }
    goto LAB_0081b0f4;
  }
  uVar6 = *(long *)(param_1 + 0xe0) - lVar3;
  if (param_2 < uVar6) {
LAB_0081b068:
    bVar2 = false;
    uVar4 = param_2;
  }
  else {
    do {
      uVar4 = uVar6;
      uVar6 = *(long *)(uVar4 + lVar3 + 8) - lVar3;
      if (uVar6 == lVar5 - lVar3) goto LAB_0081b070;
    } while (uVar6 <= param_2);
    if ((uVar4 == 0) ||
       (lVar5 = *(long *)(uVar4 + 0x18) + 0x20,
       lVar5 + uVar4 + (ulong)*(ushort *)(uVar4 + 0x12) != param_2)) goto LAB_0081b068;
    *(ulong *)(uVar4 + 0x18) =
         lVar5 + (ulong)*(ushort *)(param_2 + 0x12) + *(long *)(param_2 + 0x18);
    bVar2 = true;
  }
  lVar5 = *(long *)(uVar4 + 0x18);
  if (uVar4 + *(ushort *)(uVar4 + 0x12) + lVar5 + 0x20 == uVar6) {
    if (!bVar2) {
      FUN_0081aab0(uVar6 + lVar3,lVar3 + uVar4);
      lVar3 = (long)*(int *)(param_1 + 0xec);
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      lVar5 = *(long *)(uVar4 + 0x18);
    }
    *(ulong *)(uVar4 + 0x18) =
         lVar5 + (ulong)*(ushort *)(uVar6 + 0x12) + *(long *)(uVar6 + 0x18) + 0x20;
    FUN_0081aac8(uVar6 + lVar3);
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
    return;
  }
  if (bVar2) {
    return;
  }
  lVar5 = uVar6 + lVar3;
  param_2 = uVar4;
LAB_0081b0f4:
  FUN_0081aab0(lVar5,lVar3 + param_2);
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  return;
}


