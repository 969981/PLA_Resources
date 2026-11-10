/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d98c0c; name: FUN_02d98c0c
 */


void FUN_02d98c0c(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  void *__dest;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (param_3 != (void *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_2 + 8) + 0x28))();
    if (param_4 <= uVar1) {
      __dest = (void *)FUN_007f1f24(*(undefined8 *)(param_2 + 8));
      memcpy(__dest,param_3,(ulong)param_4);
      iVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x30))();
      *(uint *)(*(long *)(param_2 + 8) + 0x20) = iVar2 + param_4;
      local_48[0] = 0;
      goto LAB_02d98c90;
    }
  }
  local_48[0] = 0x10407;
LAB_02d98c90:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


