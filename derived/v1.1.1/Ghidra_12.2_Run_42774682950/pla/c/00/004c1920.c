/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c1920; name: FUN_004c1920
 */


undefined8 FUN_004c1920(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(*(long *)(param_1 + 0xa8) + 0x104) != 0) {
    iVar1 = FUN_004c5d50(param_1 + 0x7f8);
    if (((iVar1 == 0) && (iVar1 = FUN_004c5db0(param_1 + 0x7f8), iVar1 == 0)) &&
       ((param_2 != 0 || (iVar1 = FUN_004c9920(param_1), iVar1 == 0)))) {
      FUN_004c9990(param_1);
      lVar2 = *(long *)(param_1 + 0xa8);
      *(undefined4 *)(lVar2 + 0x104) = 0;
      *(ulong *)(lVar2 + 0x108) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar2 + 0x108) >> 0x20) + 1,
                    (int)*(undefined8 *)(lVar2 + 0x108) + 1);
      return 1;
    }
  }
  return 0;
}


