/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293c360; name: FUN_0293c360
 */


undefined2
FUN_0293c360(long param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,byte param_5,
            byte param_6)

{
  undefined8 *puVar1;
  undefined2 local_58 [4];
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  byte local_43;
  byte local_42;
  
  puVar1 = *(undefined8 **)(param_1 + 0x90);
  FUN_0295e190(puVar1[1],*puVar1);
  **(undefined8 **)(puVar1[5] + 0x10) = 0;
  uStack_48 = 0;
  local_44 = 1;
  local_50 = param_2;
  local_4f = param_3;
  local_4c = param_4;
  local_43 = param_5 & 1;
  local_42 = param_6 & 1;
  FUN_029f66ec(*(undefined8 *)(*(long *)(puVar1[5] + 0x130) + 0x1ce0),local_58,&local_50);
  return local_58[0];
}


