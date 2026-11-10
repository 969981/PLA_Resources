/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e5660; name: FUN_004e5660
 */


undefined8 FUN_004e5660(long param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (((*(int *)(param_1 + 0x38) != 0) && (*(int *)(param_1 + 200) != 0)) &&
     (bVar1 = *(byte *)(*(long *)(param_1 + 0x508) + 0x280),
     (bVar1 != 0 && param_3 == 0) && bVar1 < 5)) {
    FUN_004c99a0(param_1,0x6d,0x22d,0x6e,"external/openssl/ssl/statem/extensions.c",0x68d);
    return 0;
  }
  if (((*(long *)(param_1 + 0x508) == 0) ||
      (uVar2 = *(byte *)(*(long *)(param_1 + 0x508) + 0x280) - 1, 3 < uVar2)) ||
     (((ulong)(uint)(0x200 << (ulong)(uVar2 & 0x1f)) <= *(ulong *)(param_1 + 0x5f8) ||
      (uVar3 = FUN_004c97a0(), (int)uVar3 != 0)))) {
    uVar3 = 1;
  }
  return uVar3;
}


