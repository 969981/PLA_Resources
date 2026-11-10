/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dee090; name: FUN_02dee090
 */


undefined8 FUN_02dee090(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *__s;
  ulong uVar3;
  ulong uVar4;
  
  *(uint *)(param_1 + 0x10) = param_2;
  puVar2 = (undefined8 *)
           (*DAT_0442d140)(5,-(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)param_2 << 4,
                           0x10);
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x28) = puVar2 + (int)param_2;
    DAT_04408fe0 = &LAB_02def700;
    *puVar2 = 0;
    **(undefined8 **)(param_1 + 0x28) = 0;
    uVar3 = (long)*(int *)(param_1 + 0x10) *
            ((long)*(int *)(*(long *)(param_1 + 0x18) + 4) & 0xfffffffffffffffcU) + 0xf;
    uVar4 = uVar3 & 0xfffffffffffffff0;
    __s = (void *)(*DAT_0442d140)(5,uVar4,0x10);
    **(undefined8 **)(param_1 + 0x28) = __s;
    if (__s != (void *)0x0) {
      memset(__s,0,uVar3 & 0xfffffff0);
      *(undefined1 *)(param_1 + 0x48) = 1;
      if ((0 < (int)param_2) && (**(undefined8 **)(param_1 + 0x28) = __s, param_2 != 1)) {
        iVar1 = 0;
        if (param_2 != 0) {
          iVar1 = (int)uVar4 / (int)param_2;
        }
        uVar3 = 1;
        do {
          __s = (void *)((long)__s + (long)iVar1);
          *(void **)(*(long *)(param_1 + 0x28) + uVar3 * 8) = __s;
          uVar3 = uVar3 + 1;
        } while (param_2 != uVar3);
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 0;
    }
  }
  return 0xffffffff;
}


