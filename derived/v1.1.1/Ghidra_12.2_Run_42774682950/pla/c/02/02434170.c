/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02434170; name: FUN_02434170
 */


void FUN_02434170(undefined8 *param_1,undefined8 param_2,int param_3)

{
  void *__s;
  
  if (param_3 == 0) {
    __s = (void *)*param_1;
    memset(__s,0,0x130);
    *(undefined8 *)((long)__s + 0xf4) = 0;
    *(undefined4 *)((long)__s + 200) = 1;
    *(undefined1 *)((long)__s + 0xf0) = 0;
    *(undefined8 *)((long)__s + 0xfc) = 0;
    *(undefined8 *)((long)__s + 0x104) = 0;
    *(undefined8 *)((long)__s + 0x10c) = 0;
    *(undefined8 *)((long)__s + 0x114) = 0;
    *(undefined8 *)((long)__s + 0x11c) = 0;
    *(undefined8 *)((long)__s + 0x124) = 0;
    FUN_0014ff10(param_2,0);
    return;
  }
  FUN_00154110(param_2,
               "sol: no matching function call takes this number of arguments and the specified types"
              );
  return;
}


