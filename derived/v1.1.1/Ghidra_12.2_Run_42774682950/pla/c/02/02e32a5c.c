/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e32a5c; name: FUN_02e32a5c
 */


undefined8 FUN_02e32a5c(long param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (*(char *)(param_1 + 0x138) == '\0') {
LAB_02e32b70:
    if (*(char *)(param_1 + 0x154) != '\0') {
      uVar1 = FUN_02e34370(param_1 + 0x70,*(undefined8 *)(param_1 + 0x10),
                           *(undefined1 *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x1c8),
                           *(undefined4 *)(param_1 + 0x164),0);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      if (*(int *)(param_1 + 0x13c) != 0) {
        uVar5 = *(uint *)(param_1 + 0x1c0);
        uVar3 = uVar5 & 0xff;
        if (uVar3 == 0) {
          return 1;
        }
        *(uint *)(param_1 + 0x10c) = uVar3;
        uVar5 = (uVar5 & 2) * 2 + uVar3 & 0x1fc | uVar5 & 1;
        *(undefined1 *)(param_1 + 0x110) = 1;
        uVar3 = uVar5 << 4;
        *(uint *)(param_1 + 0x108) = (uVar3 | 0xf) + 0x80;
        pvVar2 = (void *)(**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                                   (*(long **)(param_1 + 0x10));
        *(void **)(param_1 + 0xf8) = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_02e32c8c;
        memset(pvVar2,0,(ulong)*(uint *)(param_1 + 0x108));
        uVar7 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x1c8));
        uVar4 = *(long *)(param_1 + 0xf8) + 0xfU & 0xfffffffffffffff0;
        *(ulong *)(param_1 + 0xf0) = uVar4;
        *(ulong *)(param_1 + 0x100) = uVar4 + (ulong)(uVar5 << 2) * 4;
        *(uint *)(param_1 + 0x108) = uVar3;
        FUN_02e334b0(uVar7,*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x140),
                     *(undefined4 *)(param_1 + 0x148),&uStack_34,&local_38,&uStack_3c,&local_40,
                     &local_44,*(int *)(param_1 + 0x13c) + -1);
        FUN_02e09ab0(uStack_34,local_38,uStack_3c,local_40,local_44,param_1 + 0xf0);
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_02e34370(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10),
                         *(undefined1 *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x1c8),
                         *(undefined4 *)(param_1 + 0x164),0);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    if (*(int *)(param_1 + 0x120) == 0) goto LAB_02e32b70;
    uVar5 = *(uint *)(param_1 + 0x1c0);
    uVar3 = uVar5 & 0xff;
    if (uVar3 == 0) goto LAB_02e32b70;
    *(undefined1 *)(param_1 + 0xe8) = 1;
    uVar5 = (uVar5 & 2) * 2 + uVar3 & 0x1fc | uVar5 & 1;
    uVar6 = uVar5 << 4;
    *(uint *)(param_1 + 0xe0) = (uVar6 | 0xf) + 0x80;
    *(uint *)(param_1 + 0xe4) = uVar3;
    pvVar2 = (void *)(**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    *(void **)(param_1 + 0xd0) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      memset(pvVar2,0,(ulong)*(uint *)(param_1 + 0xe0));
      uVar7 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x1c8));
      uVar4 = *(long *)(param_1 + 0xd0) + 0xfU & 0xfffffffffffffff0;
      *(ulong *)(param_1 + 200) = uVar4;
      *(ulong *)(param_1 + 0xd8) = uVar4 + (ulong)(uVar5 << 2) * 4;
      *(uint *)(param_1 + 0xe0) = uVar6;
      FUN_02e334b0(uVar7,*(undefined4 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x124),
                   *(undefined4 *)(param_1 + 300),&uStack_34,&local_38,&uStack_3c,&local_40,
                   &local_44,*(int *)(param_1 + 0x120) + -1);
      FUN_02e09ab0(uStack_34,local_38,uStack_3c,local_40,local_44,param_1 + 200);
      goto LAB_02e32b70;
    }
LAB_02e32c8c:
    uVar1 = 0x34;
  }
  return uVar1;
}


