/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c4a8; name: FUN_0020c4a8
 */


undefined8 FUN_0020c4a8(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_3 != 0) {
    do {
      while( true ) {
        lVar3 = *(long *)(param_1 + 8);
        uVar2 = *(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 0x20);
        if (param_3 <= uVar2) {
          uVar2 = param_3;
        }
        if (uVar2 != 0) break;
        uVar1 = FUN_0020c52c(param_1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      uVar1 = FUN_00205b90(*(long *)(lVar3 + 0x20),param_2,uVar2);
      param_2 = param_2 + uVar2;
      param_3 = param_3 - uVar2;
      *(undefined8 *)(lVar3 + 0x20) = uVar1;
    } while (param_3 != 0);
  }
  return 0;
}


