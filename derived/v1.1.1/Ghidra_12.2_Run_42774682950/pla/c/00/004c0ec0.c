/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c0ec0; name: FUN_004c0ec0
 */


void FUN_004c0ec0(undefined4 param_1)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined4 local_48;
  
  local_48 = param_1;
  lVar1 = FUN_004c5350(auStack_60,&DAT_04181208,5);
  if ((lVar1 == 0) && (lVar1 = FUN_004c5350(auStack_60,&DAT_0417de78,0xa3), lVar1 == 0)) {
    FUN_004c5350(auStack_60,&DAT_04181168,2);
    return;
  }
  return;
}


