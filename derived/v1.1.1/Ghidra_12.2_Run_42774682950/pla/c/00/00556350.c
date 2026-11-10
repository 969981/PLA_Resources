/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00556350; name: FUN_00556350
 */


void * FUN_00556350(long param_1,void *param_2,ulong param_3)

{
  int __c;
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  lVar1 = uVar3 - 1;
  if (uVar3 == 0 || lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(prefix_size_) >= (2)","external/com_github_google_re2/re2/prog.cc",0x3b0,
                  "PrefixAccel_FrontAndBack");
  }
  if (param_3 < uVar3) {
    pvVar2 = (void *)0x0;
  }
  else {
    __c = *(int *)(param_1 + 0x20);
    uVar3 = 0;
    pvVar2 = param_2;
    while ((pvVar2 = memchr(pvVar2,__c,(param_3 - lVar1) - uVar3), pvVar2 != (void *)0x0 &&
           (*(uint *)(param_1 + 0x24) != (uint)*(byte *)((long)pvVar2 + lVar1)))) {
      pvVar2 = (void *)((long)pvVar2 + 1);
      uVar3 = (long)pvVar2 - (long)param_2;
      if (param_3 - lVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(size) >= (static_cast<size_t>(p-p0))",
                      "external/com_github_google_re2/re2/prog.cc",0x3d5,"PrefixAccel_FrontAndBack")
        ;
      }
    }
  }
  return pvVar2;
}


