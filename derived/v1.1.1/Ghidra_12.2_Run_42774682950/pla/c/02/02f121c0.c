/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f121c0; name: FUN_02f121c0
 */


void FUN_02f121c0(undefined4 param_1,float param_2,long param_3,float *param_4,undefined8 param_5)

{
  undefined1 auStack_50 [8];
  float local_48;
  float local_44;
  float local_40;
  undefined1 auStack_38 [8];
  undefined4 local_28;
  float fStack_24;
  
  local_28 = param_1;
  fStack_24 = param_2;
  if (param_2 <= 0.0) {
    FUN_02f1211c(&local_28,param_3 + 0x28,param_5);
    local_48 = -*param_4;
    local_44 = param_4[2];
    local_40 = -param_4[1];
    FUN_02f12298(auStack_50,&local_28,&local_48);
    param_3 = param_3 + 0x38;
  }
  else {
    FUN_02f1211c(&local_28,param_3 + 8,param_5);
    local_48 = -*param_4;
    local_44 = param_4[2];
    local_40 = -param_4[1];
    FUN_02f12298(auStack_38,&local_28,&local_48);
    param_3 = param_3 + 0x18;
  }
  FUN_02f1211c(&local_28,param_3,param_5);
  return;
}


