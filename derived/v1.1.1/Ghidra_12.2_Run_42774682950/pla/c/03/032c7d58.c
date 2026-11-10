/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c7d58; name: FUN_032c7d58
 */


ulong * FUN_032c7d58(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  size_t sVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *__dest;
  long lVar8;
  ulong uVar9;
  char *__s;
  
  puVar4 = PTR_PTR_0434a080;
  iVar2 = *(int *)(param_2 + 1);
  uVar9 = *param_1;
  __s = (char *)*param_2;
  if (iVar2 != 0 || __s != (char *)(uVar9 & 0xfffffffffffffffe)) {
    if (__s == (char *)0x0) {
      *param_1 = 0;
    }
    else {
      if (iVar2 < 1) {
        sVar5 = strlen(__s);
        uVar1 = (int)sVar5 + 1;
        puVar6 = (undefined8 *)
                 (**(code **)(*(long *)puVar4 + 0x10))
                           (puVar4,(long)((sVar5 << 0x20) + 0x1100000000) >> 0x20,0);
        *puVar6 = puVar4;
        __dest = puVar6 + 2;
        *(uint *)(puVar6 + 1) = uVar1;
        memcpy(__dest,__s,(ulong)uVar1);
      }
      else {
        __dest = (undefined8 *)FUN_032c4ae0(__s,iVar2 + -1);
      }
      *param_1 = (ulong)__dest | 1;
    }
    if ((uVar9 & 1) != 0) {
      lVar3 = tpidr_el0;
      lVar8 = *(long *)(lVar3 + 0x38d490);
      if (lVar8 == 0) {
        lVar8 = FUN_0333d16c(0,1);
        *(long *)(lVar3 + 0x38d490) = lVar8;
      }
      plVar7 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
      *(undefined8 *)(uVar9 - 0x11) = 0;
      (**(code **)(*plVar7 + 0x18))
                (plVar7,(undefined8 *)(uVar9 - 0x11),(long)*(int *)(uVar9 - 9) + 0x10);
    }
  }
  return param_1;
}


