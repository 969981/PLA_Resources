/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00594200; name: FUN_00594200
 */


undefined8
FUN_00594200(long param_1,undefined8 param_2,byte param_3,byte param_4,byte param_5,
            undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *__ptr;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 local_48;
  
  if ((param_1 == 0) || (param_6 == (undefined8 *)0x0)) {
    if (param_7 == (undefined8 *)0x0) {
      uVar5 = 3;
    }
    else {
      pcVar6 = (char *)FUN_002ebd50(0x40);
      *param_7 = pcVar6;
      uVar2 = s_Invalid_nullptr_arguments_to_alt_03972b63._56_8_;
      uVar1 = s_Invalid_nullptr_arguments_to_alt_03972b63._48_8_;
      uVar5 = s_Invalid_nullptr_arguments_to_alt_03972b63._32_8_;
      *(undefined8 *)(pcVar6 + 0x28) = s_Invalid_nullptr_arguments_to_alt_03972b63._40_8_;
      *(undefined8 *)(pcVar6 + 0x20) = uVar5;
      *(undefined8 *)(pcVar6 + 0x38) = uVar2;
      *(undefined8 *)(pcVar6 + 0x30) = uVar1;
      uVar3 = s_Invalid_nullptr_arguments_to_alt_03972b63._24_8_;
      uVar2 = s_Invalid_nullptr_arguments_to_alt_03972b63._16_8_;
      uVar1 = s_Invalid_nullptr_arguments_to_alt_03972b63._0_8_;
      uVar5 = 3;
      *(undefined8 *)(pcVar6 + 8) = s_Invalid_nullptr_arguments_to_alt_03972b63._8_8_;
      *(undefined8 *)pcVar6 = uVar1;
      *(undefined8 *)(pcVar6 + 0x18) = uVar3;
      *(undefined8 *)(pcVar6 + 0x10) = uVar2;
    }
  }
  else {
    __ptr = (undefined8 *)FUN_002ebd80(0x20);
    local_48 = 0;
    iVar4 = FUN_0058f5f0(param_1,&local_48,param_7);
    if (((iVar4 == 0) &&
        (iVar4 = FUN_0058f140((param_3 ^ param_5) & 1,local_48,param_2,__ptr,param_7), iVar4 == 0))
       && (uVar5 = FUN_0058f660(param_1,__ptr + 2,param_7), (int)uVar5 == 0)) {
      __ptr[1] = param_1;
      *(byte *)(__ptr + 3) = param_4 & 1;
      *(byte *)((long)__ptr + 0x19) = param_5 & 1;
      *param_6 = __ptr;
    }
    else {
      FUN_0058f370(*__ptr);
      free(__ptr);
      uVar5 = 9;
    }
  }
  return uVar5;
}


