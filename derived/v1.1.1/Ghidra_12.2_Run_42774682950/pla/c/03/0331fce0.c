/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331fce0; name: FUN_0331fce0
 */


bool FUN_0331fce0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_1030 [4095];
  undefined1 local_31;
  
  FUN_032c47e0(auStack_1030,0x1000,0xffffffff,"in \'%s\', condition: \'%s\'. %s",param_4,param_5,
               param_6);
  local_31 = 0;
  iVar1 = FUN_03320b10(param_1,auStack_1030,param_2,param_3);
  return iVar1 != 0;
}


