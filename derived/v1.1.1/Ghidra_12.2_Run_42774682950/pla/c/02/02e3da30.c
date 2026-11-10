/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e3da30; name: FUN_02e3da30
 */


undefined8 FUN_02e3da30(long *param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  void *__s;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  float fVar8;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    uVar6 = *(uint *)(param_1 + 2);
    if (uVar6 != 0) {
      uVar7 = 0;
      lVar5 = *plVar4;
      while( true ) {
        if (lVar5 != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
          uVar6 = *(uint *)(param_1 + 2);
        }
        uVar7 = uVar7 + 1;
        if (uVar6 <= uVar7) break;
        lVar5 = *(long *)(*param_1 + uVar7 * 8);
      }
      plVar4 = (long *)*param_1;
    }
    (**(code **)(*param_2 + 0x18))(param_2,plVar4);
  }
  uVar6 = param_4 & 0xff;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 7) = uVar6;
  cVar2 = *(char *)(param_3 + 0x14);
  *(char *)((long)param_1 + 0x44) = cVar2;
  if (((param_4 >> 0xf & 1) != 0) && (cVar2 == '\0')) {
    uVar6 = uVar6 - 1;
    *(uint *)(param_1 + 7) = uVar6;
  }
  if (uVar6 == 0) {
    return 2;
  }
  fVar8 = *(float *)(param_3 + 0x10);
  uVar1 = *(uint *)((long)param_1 + 0x3c);
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,(ulong)uVar6 << 3);
  *param_1 = (long)__s;
  if (__s == (void *)0x0) {
    return 0x34;
  }
  memset(__s,0,(ulong)uVar6 << 3 & 0xfffffff8);
  uVar1 = (int)(fVar8 * (float)uVar1) + 3U & 0xfffffffc;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(uint *)(param_1 + 2) = uVar6;
  *(uint *)(param_1 + 1) = uVar1;
  if (uVar1 != 0) {
    uVar3 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)uVar1 << 2);
    *(undefined8 *)*param_1 = uVar3;
    if (*(long *)*param_1 == 0) {
      return 0x34;
    }
    uVar7 = 1;
    while (uVar7 < *(uint *)(param_1 + 2)) {
      uVar3 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)*(uint *)(param_1 + 1) << 2);
      lVar5 = uVar7 * 8;
      uVar7 = uVar7 + 1;
      *(undefined8 *)(*param_1 + lVar5) = uVar3;
      if (*(long *)(*param_1 + lVar5) == 0) {
        return 0x34;
      }
    }
  }
  return 1;
}


