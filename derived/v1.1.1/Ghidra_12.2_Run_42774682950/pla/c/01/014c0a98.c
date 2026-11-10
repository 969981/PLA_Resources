/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c0a98; name: FUN_014c0a98
 */


void FUN_014c0a98(undefined8 param_1,uint param_2)

{
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  param_2 = param_2 & 1;
  local_50 = 0x39076c7da8ba08d4;
  pcStack_48 = "InputPageL";
  local_40 = 10;
  FUN_014bff5c(param_1,&local_50,param_2);
  local_50 = 0x3907527da8b9dca6;
  pcStack_48 = "InputPageR";
  local_40 = 10;
  local_38 = 0;
  FUN_014bff5c(param_1,&local_50,param_2);
  local_50 = 0x3f1bc5b3288d3922;
  pcStack_48 = "InputWazaSelect";
  local_40 = 0xf;
  local_38 = 0;
  FUN_014bff5c(param_1,&local_50,param_2);
  local_50 = 0xebc98e8168169682;
  pcStack_48 = "InputMarking";
  local_40 = 0xc;
  local_38 = 0;
  FUN_014bff5c(param_1,&local_50,param_2);
  FUN_014bfdec(param_1,param_2);
  return;
}


