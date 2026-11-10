/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02938744; name: FUN_02938744
 */


undefined8
FUN_02938744(long *param_1,ulong param_2,undefined4 param_3,uint *param_4,uint param_5,
            undefined8 param_6)

{
  char *__format;
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  char acStack_164 [16];
  undefined1 auStack_154 [260];
  
  if ((param_4 != (uint *)0x0) && (*param_4 < 2)) {
    __format = "%u.bnk";
    if (param_4[1] != 0) {
      __format = "%u.wem";
    }
    snprintf(acStack_164,0xf,__format,param_2 & 0xffffffff);
    plVar3 = (long *)*param_1;
    if (plVar3 == (long *)0x0) {
      iVar1 = FUN_02938514(param_1,acStack_164,param_4,param_3,auStack_154,0);
      if ((iVar1 == 1) &&
         (uVar2 = FUN_02938650(auStack_154,param_3,param_5 & 1,param_6), (int)uVar2 == 1)) {
        return uVar2;
      }
    }
    else {
      do {
        iVar1 = FUN_02938514(param_1,acStack_164,param_4,param_3,auStack_154,plVar3 + 1);
        if ((iVar1 == 1) &&
           (uVar2 = FUN_02938650(auStack_154,param_3,param_5 & 1,param_6), (int)uVar2 == 1)) {
          return uVar2;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  return 2;
}


