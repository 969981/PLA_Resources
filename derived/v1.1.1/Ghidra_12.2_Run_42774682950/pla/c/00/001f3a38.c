/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f3a38; name: FUN_001f3a38
 */


undefined4 FUN_001f3a38(long param_1,uint param_2,void *param_3,size_t param_4)

{
  undefined4 uVar1;
  void *__dest;
  
  if (*(long *)(param_1 + 0x738) == 0) {
    if ((param_2 < 3) && (__dest = (void *)FUN_002044c4(param_4 + 1), __dest != (void *)0x0)) {
      memcpy(__dest,param_3,param_4);
      *(undefined1 *)((long)__dest + param_4) = 0;
      FUN_002044d4(__dest);
    }
    uVar1 = 0;
  }
  else {
    FUN_001e95f0(param_1,1);
    uVar1 = (**(code **)(param_1 + 0x738))
                      (param_1,param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x670));
    FUN_001e95f0(param_1,0);
  }
  return uVar1;
}


