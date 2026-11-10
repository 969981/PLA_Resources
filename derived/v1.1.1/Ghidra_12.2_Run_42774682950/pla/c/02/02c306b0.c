/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c306b0; name: FUN_02c306b0
 */


undefined8 FUN_02c306b0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *param_1;
  if (uVar1 == *param_2) {
    do {
      if (uVar1 == 0x10) {
        puVar2 = param_1 + 1;
        uVar3 = (ulong)*puVar2;
        lVar4 = uVar3 * 2 + 4;
        param_1 = param_1 + uVar3 + 2;
        while (lVar4 != 0) {
          param_2 = param_2 + 1;
          lVar4 = lVar4 + -2;
          uVar1 = *puVar2;
          puVar2 = puVar2 + 1;
          if (uVar1 != *param_2) {
            return 0;
          }
        }
        uVar1 = *param_1;
      }
      if (uVar1 == 0) {
        return 1;
      }
      param_1 = param_1 + 1;
      uVar1 = *param_1;
      param_2 = param_2 + 1;
    } while (uVar1 == *param_2);
  }
  return 0;
}


