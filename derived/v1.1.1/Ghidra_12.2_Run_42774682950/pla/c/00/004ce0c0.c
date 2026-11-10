/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ce0c0; name: FUN_004ce0c0
 */


undefined8 FUN_004ce0c0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xb0);
  uVar1 = *(int *)(lVar4 + 0x1f0) + 1;
  *(uint *)(lVar4 + 0x1f0) = uVar1;
  if (2 < uVar1) {
    uVar1 = FUN_004c5320(param_1);
    if ((uVar1 >> 0xc & 1) != 0) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0xb0) + 0x1f0);
      goto joined_r0x004ce168;
    }
    uVar2 = FUN_004c3380(param_1);
    uVar3 = FUN_00404920(uVar2,0x2f,0,0);
    lVar4 = *(long *)(param_1 + 0xb0);
    if (uVar3 < *(ulong *)(lVar4 + 0x130)) {
      *(ulong *)(lVar4 + 0x130) = uVar3;
    }
  }
  uVar1 = *(uint *)(lVar4 + 0x1f0);
joined_r0x004ce168:
  if (uVar1 < 0xd) {
    return 0;
  }
  FUN_004c99a0(param_1,0xffffffff,0x13e,0x138,"external/openssl/ssl/d1_lib.c",0x182);
  return 0xffffffff;
}


