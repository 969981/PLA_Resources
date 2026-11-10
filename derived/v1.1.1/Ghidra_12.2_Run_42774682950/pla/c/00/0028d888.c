/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028d888; name: FUN_0028d888
 */


void FUN_0028d888(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x6c);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0028dd48(*(long *)(param_1 + 0x38) + lVar2,param_2);
      lVar2 = lVar2 + 0xa8;
    } while ((ulong)uVar1 * 0xa8 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0x6a);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0028eac4(*(long *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
      lVar2 = lVar2 + 0x60;
    } while ((ulong)uVar1 * 0x60 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0x68);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0028e8b0(*(long *)(param_1 + 0x20) + lVar2,param_2,param_3,param_4);
      lVar2 = lVar2 + 0x58;
    } while ((ulong)uVar1 * 0x58 != lVar2);
  }
  return;
}


