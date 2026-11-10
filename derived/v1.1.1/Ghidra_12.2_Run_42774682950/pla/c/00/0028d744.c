/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028d744; name: FUN_0028d744
 */


void FUN_0028d744(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = *(ushort *)(param_1 + 0xdc);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0028d960(*(long *)(param_1 + 0x28) + lVar2,param_2);
      lVar2 = lVar2 + 0x78;
    } while ((ulong)uVar1 * 0x78 != lVar2);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar2 = *(long *)(param_1 + 0xa8);
    if (*(char *)(lVar2 + 0x110) != '\0') {
      FUN_00878520(lVar2,param_2);
      FUN_00878494(lVar2);
      return;
    }
  }
  return;
}


