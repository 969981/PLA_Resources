/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00551750; name: FUN_00551750
 */


void FUN_00551750(ostream *param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  std::__put_character_sequence<char,std::char_traits<char>>(param_1,param_2,sVar1);
  return;
}


