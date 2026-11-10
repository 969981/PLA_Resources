/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eef8b0; name: FUN_02eef8b0
 */


int FUN_02eef8b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x40) != 0) {
    lVar1 = **(long **)(param_1 + 0x38);
    if (lVar1 != 0) {
      if (((*(uint *)(param_1 + 0x40) < 2) || (lVar2 = (*(long **)(param_1 + 0x38))[1], lVar2 == 0))
         && (lVar2 = DAT_0440a410, DAT_0440a410 == 0)) {
        FUN_02e43d1c();
        lVar2 = DAT_0440a410;
      }
      return *(int *)(lVar2 + 0xb0) * (uint)*(ushort *)(lVar1 + 0x38);
    }
  }
  return 0;
}


