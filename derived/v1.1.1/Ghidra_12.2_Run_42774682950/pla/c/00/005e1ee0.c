/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e1ee0; name: FUN_005e1ee0
 */


void FUN_005e1ee0(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  ulong *puVar2;
  ulong *__s;
  ulong *puVar3;
  ulong uVar4;
  
  puVar2 = (ulong *)*param_1;
  *param_1 = 0;
  if (puVar2 == (ulong *)0x0) {
    return;
  }
  uVar1 = *puVar2;
  if ((uVar1 & 1) == 0) {
    __s = puVar2 + 1;
joined_r0x005e1f2c:
    if (uVar1 >> 1 != 0) {
      uVar4 = uVar1 >> 1;
      puVar3 = __s + uVar4 * 2 + -2;
      __ptr = (void *)*puVar3;
      *puVar3 = 0;
      while( true ) {
        if (__ptr != (void *)0x0) {
                    /* try { // try from 005e1f60 to 005e1f63 has its CatchHandler @ 005e1fb4 */
          free(__ptr);
        }
        uVar4 = uVar4 - 1;
        puVar3 = puVar3 + -2;
        if (uVar4 == 0) break;
        __ptr = (void *)*puVar3;
        *puVar3 = 0;
      }
    }
    memset(__s,0xab,(uVar1 >> 1) << 4);
    if ((*puVar2 & 1) == 0) goto LAB_005e1f98;
    uVar1 = puVar2[1];
  }
  else {
    __s = (ulong *)puVar2[1];
    if (__s != (ulong *)0x0) goto joined_r0x005e1f2c;
    uVar1 = 0;
  }
  FUN_002e2ea0(PTR_LAB_04373088,uVar1);
LAB_005e1f98:
  FUN_002e2ea0(PTR_LAB_04373088,puVar2);
  return;
}


