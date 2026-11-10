/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00863a10; name: FUN_00863a10
 */


void FUN_00863a10(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_98 [4];
  int local_88 [8];
  undefined4 local_68 [8];
  long local_48;
  undefined4 local_38 [2];
  
  FUN_0085c678(*(undefined8 *)(param_2 + 0x58),param_3 + 0x30,0x5c0,(uint *)(param_3 + 0x5f8),
               &local_48);
  if (*(int *)(param_3 + 0x5f8) == 0) {
    local_68[0] = 0x2c09;
    local_88[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_88);
    puVar2 = local_68;
  }
  else {
    FUN_007f0ce0(local_68);
    uVar5 = (uint)*(ushort *)(*(long *)(param_2 + 0x58) + 0x114e);
    if (uVar5 == 0) {
LAB_00863ac8:
      bVar3 = false;
    }
    else {
      uVar4 = 0;
      plVar1 = (long *)FUN_0085e8d4(*(undefined8 *)(param_2 + 0x88),0);
      if (plVar1 != (long *)0x0) goto LAB_00863a98;
      do {
        do {
          uVar4 = uVar4 + 1;
          if (uVar5 == uVar4) goto LAB_00863ac8;
          plVar1 = (long *)FUN_0085e8d4(*(undefined8 *)(param_2 + 0x88),uVar4);
        } while (plVar1 == (long *)0x0);
LAB_00863a98:
      } while (*plVar1 != local_48);
      FUN_0085c5b0(local_88,*(undefined8 *)(param_2 + 0x58));
      FUN_007f0f88(local_68,local_88);
      bVar3 = true;
    }
    FUN_007f0f88(param_3 + 0x628,local_68);
    FUN_007f0508(local_88,param_3);
    if (((local_88[0] == 0) && (bVar3)) &&
       (*(uint *)(param_3 + 0x5f8) <= **(uint **)PTR_DAT_04377480)) {
      local_98[0] = 0;
    }
    else {
      local_98[0] = 0x2c09;
    }
    puVar2 = local_98;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)puVar2 | 4),(Result *)local_38);
  }
  FUN_007ee578(param_1,puVar2);
  return;
}


