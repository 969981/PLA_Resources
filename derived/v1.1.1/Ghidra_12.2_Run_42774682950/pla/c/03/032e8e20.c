/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e8e20; name: FUN_032e8e20
 */


void FUN_032e8e20(undefined8 *param_1,ulong *param_2)

{
  bool bVar1;
  void *__s;
  long *plVar2;
  undefined8 uVar3;
  ulong *puVar4;
  uint uVar5;
  size_t __n;
  ulong uVar6;
  
  puVar4 = param_2;
  while( true ) {
    uVar5 = (uint)*puVar4;
    if ((uVar5 >> 0x14 & 1) != 0) break;
    if (((*puVar4 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0))
    goto LAB_032e8e5c;
  }
  if (puVar4 != (ulong *)0x0) {
    uVar5 = (uVar5 & 0xfffff) - (uVar5 >> 1 & 0x55555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    __n = (size_t)(ushort)puVar4[(ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2
                                ];
    goto LAB_032e8ea8;
  }
LAB_032e8e5c:
  __n = 0;
LAB_032e8ea8:
  __s = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))(PTR_PTR_0434a080,__n,0);
  memset(__s,0,__n);
  if (param_2 == (ulong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_032e3508(param_2);
    if ((uVar6 & 1) != 0) {
      FUN_032e0c28(uVar6 & 0xfffffffffffffffe);
      bVar1 = false;
      goto LAB_032e8ed8;
    }
  }
  bVar1 = true;
LAB_032e8ed8:
  plVar2 = (long *)(**(code **)(*DAT_04449ee8 + 0x80))();
  if (plVar2 != (long *)0x0) {
    uVar3 = FUN_032e239c(param_2);
    (**(code **)(*plVar2 + 200))(plVar2,__s,uVar3);
  }
  *param_1 = __s;
  param_1[1] = param_2;
  param_1[2] = uVar6;
  if (bVar1) {
    return;
  }
  FUN_032e0c28(uVar6 & 0xfffffffffffffffe);
  FUN_032e0c40(uVar6 & 0xfffffffffffffffe);
  return;
}


