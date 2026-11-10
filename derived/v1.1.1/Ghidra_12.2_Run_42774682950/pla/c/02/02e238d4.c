/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e238d4; name: FUN_02e238d4
 */


undefined8 FUN_02e238d4(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  void *__s;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (*(char *)(param_1 + 0xc0) != '\0') {
    uVar2 = FUN_02e24d6c(*(undefined4 *)(param_1 + 0x90),param_1 + 0x18,
                         *(undefined8 *)(param_1 + 0x10),*(char *)(param_1 + 0xc0),
                         *(undefined4 *)(param_1 + 200));
    if ((int)uVar2 != 1) {
      return uVar2;
    }
    if (*(float *)(param_1 + 0x80) == 1.0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (((*(int *)(param_1 + 0x2c) != 0) &&
          (**(undefined4 **)(param_1 + 0x20) = 0, 1 < *(uint *)(param_1 + 0x2c))) &&
         (*(undefined4 *)(*(long *)(param_1 + 0x20) + 4) = 0, 2 < *(uint *)(param_1 + 0x2c))) {
        uVar3 = 2;
        do {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + uVar3 * 4) = 0;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 0x2c));
      }
    }
    else {
      *(float *)(param_1 + 0x28) = 1.0 - *(float *)(param_1 + 0x80);
    }
    if (*(int *)(param_1 + 0x70) == 0) {
      return 1;
    }
    uVar1 = *(uint *)(param_1 + 0xc0);
    uVar4 = (uVar1 & 2) * 2 + (uVar1 & 0xff) & 0x1fc | uVar1 & 1;
    *(undefined1 *)(param_1 + 0x58) = 1;
    uVar5 = uVar4 << 4;
    *(uint *)(param_1 + 0x50) = (uVar5 | 0xf) + 0x80;
    *(uint *)(param_1 + 0x54) = uVar1 & 0xff;
    __s = (void *)(**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10));
    *(void **)(param_1 + 0x40) = __s;
    if (__s == (void *)0x0) {
      return 0x34;
    }
    memset(__s,0,(ulong)*(uint *)(param_1 + 0x50));
    uVar6 = NEON_ucvtf(*(undefined4 *)(param_1 + 200));
    uVar3 = *(long *)(param_1 + 0x40) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_1 + 0x38) = uVar3;
    *(ulong *)(param_1 + 0x48) = uVar3 + (ulong)(uVar4 << 2) * 4;
    *(uint *)(param_1 + 0x50) = uVar5;
    FUN_02e240e0(uVar6,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x74),
                 *(undefined4 *)(param_1 + 0x7c),&uStack_34,&local_38,&uStack_3c,&local_40,&local_44
                 ,*(int *)(param_1 + 0x70) + -1);
    FUN_02e09ab0(uStack_34,local_38,uStack_3c,local_40,local_44,param_1 + 0x38);
  }
  return 1;
}


