/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015a410; name: FUN_0015a410
 */


undefined4 FUN_0015a410(long param_1,code *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 local_188;
  __jmp_buf_tag _Stack_180;
  undefined4 local_48;
  
  uVar1 = *(undefined2 *)(param_1 + 0xc6);
  local_48 = 0;
  local_188 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 **)(param_1 + 0x58) = &local_188;
  iVar2 = _setjmp(&_Stack_180);
  if (iVar2 == 0) {
    (*param_2)(param_1,param_3);
  }
  *(undefined8 *)(param_1 + 0x58) = local_188;
  *(undefined2 *)(param_1 + 0xc6) = uVar1;
  return local_48;
}


