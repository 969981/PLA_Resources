/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fac58; name: FUN_001fac58
 */


undefined8 FUN_001fac58(byte *param_1,undefined1 *param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_2;
    do {
      bVar1 = *param_1;
      if (bVar1 == 0x3a) {
        if (param_1[1] == 0x2f) {
          if (param_2 != (undefined1 *)0x0) {
            *puVar4 = 0;
          }
          return 1;
        }
      }
      else if (bVar1 == 0) {
        return 0;
      }
      uVar3 = FUN_001e343c((ulong)bVar1);
      if ((int)uVar3 == 0) {
        if (0x2e < bVar1) {
          return uVar3;
        }
        if ((1L << ((ulong)bVar1 & 0x3f) & 0x680000000000U) == 0) {
          return uVar3;
        }
      }
      if (param_2 != (undefined1 *)0x0) {
        iVar2 = tolower((uint)bVar1);
        *puVar4 = (char)iVar2;
      }
      puVar4 = puVar4 + 1;
      param_3 = param_3 + -1;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return 0;
}


