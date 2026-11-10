/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051f578; name: FUN_0051f578
 */


void FUN_0051f578(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *__s;
  ulong uVar3;
  long lVar4;
  
  if ((*(ulong *)(param_1 + 0x10) & 1) == 0) {
    __s = (void *)(param_1 + 0x18);
LAB_0051f5a0:
    uVar3 = *(ulong *)(param_1 + 0x10) >> 1;
    puVar2 = (undefined8 *)((long)__s + uVar3 * 0x90 + -8);
    lVar4 = uVar3 + 1;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      uVar1 = *puVar2;
      puVar2 = puVar2 + -0x12;
                    /* try { // try from 0051f5c4 to 0051f5c7 has its CatchHandler @ 0051f620 */
      FUN_002e4a10(uVar1);
    }
    memset(__s,0xab,uVar3 * 0x90);
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_0051f604;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    __s = *(void **)(param_1 + 0x18);
    if (__s != (void *)0x0) goto LAB_0051f5a0;
    uVar1 = 0;
  }
  FUN_002e2ea0(PTR_LAB_04373088,uVar1);
LAB_0051f604:
  FUN_0051f4ac(param_1 + 8);
  FUN_0051f4ac(param_1);
  return;
}


