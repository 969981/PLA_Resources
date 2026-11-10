/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dee54; name: FUN_001dee54
 */


uint FUN_001dee54(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = thunk_FUN_002046b4();
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_001f392c(param_1,param_2), (uVar2 & 1) == 0)) {
    uVar1 = FUN_001f3550(*(undefined4 *)(param_1 + (long)param_2 * 4 + 600),0xffffffff,0xffffffff,0)
    ;
    uVar1 = uVar1 & 0 < (int)uVar1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


