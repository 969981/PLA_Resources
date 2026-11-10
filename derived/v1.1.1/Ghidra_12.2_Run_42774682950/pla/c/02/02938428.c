/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02938428; name: FUN_02938428
 */


undefined8
FUN_02938428(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,uint param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_154 [260];
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    iVar1 = FUN_02938514(param_1,param_2,param_4,param_3,auStack_154,0);
    if ((iVar1 == 1) &&
       (uVar2 = FUN_02938650(auStack_154,param_3,param_5 & 1,param_6), (int)uVar2 == 1)) {
      return uVar2;
    }
  }
  else {
    do {
      iVar1 = FUN_02938514(param_1,param_2,param_4,param_3,auStack_154,plVar3 + 1);
      if ((iVar1 == 1) &&
         (uVar2 = FUN_02938650(auStack_154,param_3,param_5 & 1,param_6), (int)uVar2 == 1)) {
        return uVar2;
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
  }
  return 2;
}


