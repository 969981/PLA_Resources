/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c5ef0; name: FUN_003c5ef0
 */


long * FUN_003c5ef0(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  void *__s2;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = (long *)(param_1 + 0x20);
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    uVar5 = (ulong)(*param_2 >> 1);
    __s1 = *(byte **)(param_2 + 0x10);
    plVar7 = plVar6;
    if ((*param_2 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    else {
      uVar5 = *(ulong *)(param_2 + 8);
    }
    do {
      bVar2 = *(byte *)(plVar8 + 4);
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = plVar8[5];
      }
      __n = uVar1;
      if (uVar5 <= uVar1) {
        __n = uVar5;
      }
      if (__n == 0) {
LAB_003c5f2c:
        uVar4 = (uint)(uVar1 < uVar5);
        if (uVar5 < uVar1) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s2 = (void *)plVar8[6];
        if ((bVar2 & 1) == 0) {
          __s2 = (void *)((long)plVar8 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_003c5f2c;
      }
      plVar6 = plVar8;
      if (-1 < (int)uVar4) {
        plVar6 = plVar7;
      }
      plVar8 = (long *)plVar8[-1 < (int)uVar4];
      plVar7 = plVar6;
    } while (plVar8 != (long *)0x0);
  }
  if (plVar6 != *(long **)(param_1 + 0x18)) {
    plVar8 = (long *)*plVar6;
    plVar7 = plVar6;
    if ((long *)*plVar6 == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar3 = (long *)*plVar6 == plVar7;
        plVar7 = plVar6;
      } while (bVar3);
    }
    else {
      do {
        plVar6 = plVar8;
        plVar8 = (long *)plVar6[1];
      } while ((long *)plVar6[1] != (long *)0x0);
    }
  }
  return plVar6;
}


