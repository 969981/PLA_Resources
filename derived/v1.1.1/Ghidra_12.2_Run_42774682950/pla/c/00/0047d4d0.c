/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0047d4d0; name: FUN_0047d4d0
 */


long FUN_0047d4d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_80 [96];
  
  lVar2 = 0x439e9c0;
  if (param_3 != 0) {
    lVar2 = param_3;
  }
  iVar1 = FUN_00450dd0(auStack_80);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_0044fbe0(auStack_80,param_1,param_2);
    FUN_00450ce0(lVar2,auStack_80);
    FUN_004006a0(auStack_80,0x60);
  }
  return lVar2;
}


