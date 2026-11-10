/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00159d60; name: FUN_00159d60
 */


void FUN_00159d60(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined2 local_6c [30];
  
  if (param_3 == 0) {
    local_6c[0] = 0x3f;
  }
  else {
    FUN_00163010(local_6c,param_3 + 0x18,0x3c);
  }
  FUN_00162fa0(param_1,"%s:%d: %s",local_6c,param_4,param_2);
  return;
}


