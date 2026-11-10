/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006171d8; name: FUN_006171d8
 */


long * FUN_006171d8(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  void *__s2;
  byte *__s1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  void *__s1_00;
  
  plVar6 = (long *)(param_1 + 8);
  plVar7 = (long *)*plVar6;
  if (plVar7 == (long *)0x0) {
    *param_2 = plVar6;
    return plVar6;
  }
  uVar5 = (ulong)(*param_3 >> 1);
  __s1 = *(byte **)(param_3 + 0x10);
  plVar6 = (long *)(param_1 + 8);
  if ((*param_3 & 1) == 0) {
    __s1 = param_3 + 1;
  }
  else {
    uVar5 = *(ulong *)(param_3 + 8);
  }
  do {
    bVar2 = *(byte *)(plVar7 + 4);
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = plVar7[5];
    }
    __n = uVar1;
    if (uVar5 <= uVar1) {
      __n = uVar5;
    }
    if (__n == 0) {
LAB_00617280:
      if (uVar1 <= uVar5) {
        if (__n != 0) {
          __s1_00 = (void *)plVar7[6];
          goto LAB_006172a0;
        }
LAB_00617220:
        if (uVar1 < uVar5) goto LAB_00617228;
LAB_006172bc:
        *param_2 = plVar7;
        return plVar6;
      }
LAB_00617288:
      plVar4 = (long *)*plVar7;
      if (plVar4 == (long *)0x0) {
        *param_2 = plVar7;
        return plVar7;
      }
      plVar6 = plVar7;
    }
    else {
      __s1_00 = (void *)plVar7[6];
      __s2 = __s1_00;
      if ((bVar2 & 1) == 0) {
        __s2 = (void *)((long)plVar7 + 0x21);
      }
      iVar3 = memcmp(__s1,__s2,__n);
      if (iVar3 == 0) goto LAB_00617280;
      if (iVar3 < 0) goto LAB_00617288;
LAB_006172a0:
      if ((bVar2 & 1) == 0) {
        __s1_00 = (void *)((long)plVar7 + 0x21);
      }
      iVar3 = memcmp(__s1_00,__s1,__n);
      if (iVar3 == 0) goto LAB_00617220;
      if (-1 < iVar3) goto LAB_006172bc;
LAB_00617228:
      plVar6 = plVar7 + 1;
      plVar4 = (long *)*plVar6;
      if (plVar4 == (long *)0x0) goto LAB_006172bc;
    }
    plVar7 = plVar4;
  } while( true );
}


