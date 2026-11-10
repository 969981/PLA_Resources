/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a4ae8; name: FUN_031a4ae8
 */


void FUN_031a4ae8(long param_1,long param_2,undefined8 param_3)

{
  undefined *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((1 << (ulong)(*(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0x20) + 0x98) & 0x1f) &
      *(uint *)(param_2 + 8)) != 0) {
    local_38 = *(undefined8 *)(param_2 + 0x48);
    local_48 = *(undefined8 *)(param_2 + 0x38);
    local_50 = *(undefined8 *)(param_2 + 0x30);
    local_40 = *(undefined8 *)(param_2 + 0x40);
    FUN_031a4b90(*(long *)(param_1 + 0x20) + 0x40,&local_50);
    local_60 = *(undefined8 *)(param_1 + 0x20);
    local_70 = &DAT_042f0678;
    lStack_68 = param_2;
    uStack_58 = param_3;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
              (*(long **)(param_1 + 0x18),&local_50,&local_70);
  }
  return;
}


