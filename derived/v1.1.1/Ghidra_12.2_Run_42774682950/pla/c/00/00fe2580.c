/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fe2580; name: FUN_00fe2580
 */


void FUN_00fe2580(undefined8 *param_1,undefined8 param_2,int param_3)

{
  void *__s;
  
  if (param_3 == 0) {
    __s = (void *)*param_1;
    memset(__s,0,0x420);
    FUN_00fe25dc(__s);
    FUN_0014ff10(param_2,0);
    return;
  }
  FUN_00154110(param_2,
               "sol: no matching function call takes this number of arguments and the specified types"
              );
  return;
}


