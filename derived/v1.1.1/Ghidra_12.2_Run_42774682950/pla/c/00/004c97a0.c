/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c97a0; name: FUN_004c97a0
 */


bool FUN_004c97a0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x818);
  uVar1 = 0x4148;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
    uVar1 = 0x4150;
  }
  if (lVar4 == 0) {
    iVar3 = FUN_004da9e0(param_1);
    if (iVar3 != 0) {
      uVar1 = uVar1 | 0x400;
    }
    uVar2 = *(ulong *)(param_1 + 0x820);
    if (*(ulong *)(param_1 + 0x820) <= uVar1) {
      uVar2 = uVar1;
    }
    lVar4 = FUN_00400260(uVar2,"external/openssl/ssl/record/ssl3_buffer.c",0x3f);
    if (lVar4 == 0) {
      FUN_004c99a0(param_1,0xffffffff,0x9c,0x41,"external/openssl/ssl/record/ssl3_buffer.c",0x46);
      return false;
    }
    *(long *)(param_1 + 0x818) = lVar4;
    *(ulong *)(param_1 + 0x828) = uVar2;
  }
  *(long *)(param_1 + 0x1740) = lVar4;
  iVar3 = FUN_004c9650(param_1,1,0);
  return iVar3 != 0;
}


