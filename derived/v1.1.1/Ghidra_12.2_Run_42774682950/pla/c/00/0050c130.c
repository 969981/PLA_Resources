/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050c130; name: FUN_0050c130
 */


void FUN_0050c130(void)

{
  undefined *puVar1;
  ulong *puVar2;
  void *__ptr;
  ulong uVar3;
  ulong *__s;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = DAT_0439ebd0;
  if (DAT_0439ebd0 == (ulong *)0x0) {
    DAT_0439ebd0 = (ulong *)0x0;
    return;
  }
  __ptr = (void *)DAT_0439ebd0[0xb];
  DAT_0439ebd0[0xb] = 0;
  if (__ptr != (void *)0x0) {
                    /* try { // try from 0050c15c to 0050c15f has its CatchHandler @ 0050c230 */
    free(__ptr);
  }
  puVar1 = PTR_LAB_04373088;
  uVar3 = *puVar2;
  if ((uVar3 & 1) == 0) {
    __s = puVar2 + 1;
joined_r0x0050c184:
    if (uVar3 >> 1 != 0) {
      uVar5 = uVar3 >> 1;
      do {
        uVar6 = uVar5 - 1;
        plVar4 = (long *)__s[uVar5 - 1];
        __s[uVar5 - 1] = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x20))(plVar4);
          FUN_002e2ea0(puVar1,plVar4);
        }
        uVar5 = uVar6;
      } while (uVar6 != 0);
    }
    memset(__s,0xab,(uVar3 >> 1) << 3);
    if ((*puVar2 & 1) == 0) goto LAB_0050c204;
    uVar3 = puVar2[1];
  }
  else {
    __s = (ulong *)puVar2[1];
    if (__s != (ulong *)0x0) goto joined_r0x0050c184;
    uVar3 = 0;
  }
  FUN_002e2ea0(PTR_LAB_04373088,uVar3);
LAB_0050c204:
  FUN_002e2ea0(PTR_LAB_04373088,puVar2);
  DAT_0439ebd0 = (ulong *)0x0;
  return;
}


