/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203d70; name: FUN_00203d70
 */


void FUN_00203d70(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x1158);
  if ((lVar1 != 0) &&
     ((*(byte **)(param_1 + 0xe8) == (byte *)0x0 || ((**(byte **)(param_1 + 0xe8) >> 4 & 1) == 0))))
  {
    if (*(long *)(param_1 + 0xbf8) != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        FUN_00203d10(lVar1 + lVar2);
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0xb8;
        lVar1 = *(long *)(param_1 + 0x1158);
      } while (uVar3 < *(ulong *)(param_1 + 0xbf8));
    }
    FUN_002044d4();
    *(undefined8 *)(param_1 + 0x1158) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00203df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)PTR_PTR_04372758 + 0x80))(param_1);
  return;
}


