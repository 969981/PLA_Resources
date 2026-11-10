/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405410; name: FUN_00405410
 */


bool FUN_00405410(int param_1,char *param_2,size_t param_3)

{
  char *pcVar1;
  
  pcVar1 = strerror_r(param_1,param_2,param_3);
  return (int)pcVar1 == 0;
}


