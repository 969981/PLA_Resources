/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00212738; name: FUN_00212738
 */


void * FUN_00212738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  void *__s;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined4 local_44;
  
  __s = (void *)FUN_002044c4(0x1f0);
  if (__s == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    memset(__s,0,0x1f0);
    lVar2 = FUN_00204514(0x1000,param_1);
    *(long *)((long)__s + 0x1d0) = lVar2;
    if (lVar2 == 0) {
      FUN_002044d4(__s);
      __s = (void *)0x0;
      uVar1 = 0xffffffff;
    }
    else {
      nnosGetCurrentThread();
      uVar1 = nnosGetThreadPriority();
      uVar1 = nnosCreateThread(__s,PTR_LAB_04372810,__s,lVar2,param_1,uVar1);
      uVar3 = nnResultIsFailure(uVar1);
      if ((uVar3 & 1) == 0) {
        local_44 = 0xffffffff;
        local_50 = 0;
        uVar4 = nnosGetCurrentThread();
        nnosGetThreadCoreMask(&local_44,&local_50,uVar4);
        nnosSetThreadCoreMask(__s,local_44,local_50);
        nnosSetThreadNamePointer(__s,"LibcurlResolver");
        *(undefined8 *)((long)__s + 0x1c0) = param_2;
        *(undefined8 *)((long)__s + 0x1c8) = param_3;
      }
    }
  }
  uVar3 = nnResultIsFailure(uVar1);
  if (((uVar3 & 1) != 0) && (__s != (void *)0x0)) {
    FUN_002128ac(__s);
    __s = (void *)0x0;
  }
  return __s;
}


