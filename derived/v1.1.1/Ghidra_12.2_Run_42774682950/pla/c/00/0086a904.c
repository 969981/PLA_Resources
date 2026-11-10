/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086a904; name: FUN_0086a904
 */


undefined8 FUN_0086a904(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  puVar1 = PTR_DAT_04377550;
  iVar2 = FUN_0082ad44(*(undefined8 *)PTR_DAT_04377550);
  if (iVar2 == 2) {
    if (*(int *)(*(long *)(*(long *)puVar1 + 0x10) + 0x784) == 4) {
      local_30[0] = 0x8c6e;
    }
    else {
      local_30[0] = 0x8c52;
    }
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  }
  else {
    if (iVar2 != 3) {
      return 1;
    }
    (**(code **)(**(long **)PTR_DAT_043780f8 + 0xf8))(local_30);
  }
  FUN_007ee660(param_1 + 0xc0,local_30);
  return 0;
}


