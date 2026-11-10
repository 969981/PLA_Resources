/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fd74cc; name: FUN_02fd74cc
 */


void FUN_02fd74cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  void *__s;
  long lVar4;
  int iVar5;
  ulong __n;
  
  bVar2 = *(char *)(param_4 + 0x4d) != '\0';
  iVar5 = 0x1e;
  if (!bVar2) {
    iVar5 = 6;
  }
  __n = (ulong)((iVar5 + (uint)bVar2 * 8) * 4 + 0x1a7) & 0x3f0;
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
  }
  plVar3 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  __s = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,__n,0);
  memset(__s,0,__n);
  FUN_02fd6a7c(param_2,__s,param_3,param_4);
  *(ulong *)((long)__s + 8) = __n;
  *param_1 = __s;
  return;
}


