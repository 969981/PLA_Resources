/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00271820; name: FUN_00271820
 */


void FUN_00271820(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *__s;
  long *plVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_04372eb0;
  plVar3 = *(long **)PTR_DAT_04372e80;
  uVar4 = (-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3) + 0x1f &
          0xffffffffffffffe0;
  *(int *)PTR_DAT_04372eb0 = (int)param_1;
  __s = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,0x80);
  puVar1 = PTR_DAT_04372e88;
  *(void **)PTR_DAT_04372ea8 = __s;
  *(ulong *)puVar1 = *(long *)puVar1 + uVar4;
  memset(__s,0,(long)*(int *)puVar2 << 3);
  *(undefined4 *)PTR_DAT_04372ea0 = 0;
  return;
}


