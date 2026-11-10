/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00404d50; name: FUN_00404d50
 */


int FUN_00404d50(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = auStack_90;
  ppuStack_48 = &local_50;
  uStack_38 = 0xffffff80ffffffc8;
  local_88 = param_2;
  uStack_80 = param_3;
  local_78 = param_4;
  uStack_70 = param_5;
  local_68 = param_6;
  uStack_60 = param_7;
  local_58 = param_8;
  local_50 = (undefined1 *)register0x00000008;
  iVar1 = vfprintf(*(FILE **)PTR_stderr_04372330,param_1,&local_50);
  return iVar1;
}


