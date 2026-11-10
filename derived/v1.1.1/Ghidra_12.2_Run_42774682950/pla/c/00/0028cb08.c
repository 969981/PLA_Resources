/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028cb08; name: FUN_0028cb08
 */


long FUN_0028cb08(int *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((param_3 == 0) || ((char)param_1[0xc] == '\0')) {
    return 0;
  }
  lVar4 = (long)*param_1;
  lVar5 = *(long *)(param_1 + lVar4 * 0x6c + 0x76);
  uVar1 = (*(long *)(param_1 + lVar4 * 0x6c + 0x70) + param_3 + -1 &
          -*(long *)(param_1 + lVar4 * 0x6c + 0x70)) + lVar5;
  if (uVar1 <= *(ulong *)(param_1 + lVar4 * 0x6c + 0x20)) {
    *(ulong *)(param_1 + lVar4 * 0x6c + 0x76) = uVar1;
    lVar5 = *(long *)(param_1 + lVar4 * 0x6c + 0x78) + lVar5;
    if (lVar5 != 0) {
      lVar2 = *(long *)(param_1 + lVar4 * 0x6c + 0x72);
      lVar3 = *(long *)(param_1 + lVar4 * 0x6c + 0x74);
      *param_2 = lVar2;
      param_2[1] = lVar3;
      *param_2 = (lVar5 - *(long *)(param_1 + lVar4 * 0x6c + 0x78)) + lVar2;
      lVar4 = (long)*param_1;
      *(long *)(param_1 + lVar4 * 2 + 4) =
           (*(long *)(param_1 + lVar4 * 0x6c + 0x70) + param_3 + -1 &
           -*(long *)(param_1 + lVar4 * 0x6c + 0x70)) + *(long *)(param_1 + lVar4 * 2 + 4);
      return lVar5;
    }
  }
  FUN_00271760(0,0x800);
  FUN_00271770("TemporaryBuffer Allocation Failed. Allocation size : %d Byte.\n",param_3);
  FUN_00271770("Current TemporaryBuffer Allocation : %d/%d.\n",
               *(undefined8 *)(param_1 + (long)*param_1 * 2 + 4),*(undefined8 *)(param_1 + 10));
  return 0;
}


