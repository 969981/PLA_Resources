/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb2610; name: FUN_02eb2610
 */


undefined8 FUN_02eb2610(long param_1,void *param_2,uint param_3,uint *param_4,uint param_5)

{
  void *__dest;
  long lVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  FUN_02eb2580();
  uVar4 = 0x1f;
  if ((((param_4 != (uint *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) && (param_5 != 0))
  {
    __dest = (void *)FUN_02f59e30(2,(ulong)(param_3 << 4));
    *(void **)(param_1 + 0x18) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,(ulong)(param_3 << 4));
      *(uint *)(param_1 + 0x20) = param_3;
      lVar1 = FUN_02f59e30(2,param_5 * 0x18);
      *(long *)(param_1 + 0x28) = lVar1;
      if (lVar1 != 0) {
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x80000000 | param_5 & 0x7fffffff;
        uVar3 = *param_4;
        *(uint *)(lVar1 + 8) = param_4[1];
        if (*param_4 < param_3) {
          lVar1 = 0;
          do {
            puVar2 = param_4 + 2;
            *(ulong *)(*(long *)(param_1 + 0x28) + lVar1) =
                 *(long *)(param_1 + 0x18) + (ulong)uVar3 * 0x10;
            *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar1 + 0xc) = 0;
            *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar1 + 0x10) = 0;
            *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar1 + 0x14) = 0;
            if ((ulong)param_5 * 0x18 == lVar1 + 0x18) {
              uVar4 = 1;
              goto LAB_02eb2730;
            }
            uVar3 = *puVar2;
            *(uint *)(*(long *)(param_1 + 0x28) + lVar1 + 0x20) = param_4[3];
            lVar1 = lVar1 + 0x18;
            param_4 = puVar2;
          } while (*puVar2 < param_3);
        }
        uVar4 = 2;
        goto LAB_02eb2730;
      }
    }
    uVar4 = 0x34;
  }
LAB_02eb2730:
  FUN_02eb2368(param_1);
  return uVar4;
}


