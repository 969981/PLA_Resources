/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005403e0; name: FUN_005403e0
 */


bool FUN_005403e0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  bool bVar1;
  int iVar2;
  long local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  __jmp_buf_tag _Stack_168;
  
  local_180 = param_1 + param_2;
  local_170 = DAT_0388a788;
  uStack_178 = param_5;
  iVar2 = setjmp(&_Stack_168);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      bVar1 = true;
    }
    else {
      FUN_00540470(&local_180,param_1,param_3,param_4);
      bVar1 = local_170._4_4_ == 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


