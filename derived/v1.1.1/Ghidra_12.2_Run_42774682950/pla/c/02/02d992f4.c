/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d992f4; name: FUN_02d992f4
 */


void FUN_02d992f4(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  void *__dest;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (((param_3 == (void *)0x0) && (param_4 != 0)) ||
     (uVar1 = (**(code **)(**(long **)(param_2 + 8) + 0x28))(), uVar1 < param_4)) {
    local_48[0] = 0x10407;
  }
  else {
    if (param_4 != 0) {
      __dest = (void *)FUN_007f2968(*(undefined8 *)(param_2 + 8));
      memcpy(__dest,param_3,(ulong)param_4);
    }
    iVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x30))();
    *(uint *)(*(long *)(param_2 + 8) + 0x18) = iVar2 + param_4;
    *(ushort *)(*(long *)(param_2 + 8) + 8) = *(ushort *)(*(long *)(param_2 + 8) + 8) | 1;
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


