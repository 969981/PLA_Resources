/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a43d0; name: FUN_002a43d0
 */


void FUN_002a43d0(long *param_1,long param_2,char *param_3,undefined8 *param_4)

{
  long lVar1;
  size_t sVar2;
  void *pvVar3;
  char *__s;
  ulong uVar4;
  
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x50);
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 002a4524 to 002a452b has its CatchHandler @ 002a4574 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar3 = (void *)(lVar1 + 0x21);
    *(char *)(lVar1 + 0x20) = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_002a4474;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    *(ulong *)(lVar1 + 0x20) = uVar4 | 1;
    *(size_t *)(lVar1 + 0x28) = sVar2;
    *(void **)(lVar1 + 0x30) = pvVar3;
LAB_002a4474:
    memcpy(pvVar3,param_3,sVar2);
  }
  *(undefined1 *)((long)pvVar3 + sVar2) = 0;
  __s = (char *)*param_4;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  sVar2 = strlen(__s);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 002a452c to 002a4533 has its CatchHandler @ 002a4534 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar3 = (void *)(lVar1 + 0x39);
    *(char *)(lVar1 + 0x38) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_002a4500;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    *(ulong *)(lVar1 + 0x38) = uVar4 | 1;
    *(size_t *)(lVar1 + 0x40) = sVar2;
    *(void **)(lVar1 + 0x48) = pvVar3;
  }
  memcpy(pvVar3,__s,sVar2);
LAB_002a4500:
  *(undefined1 *)((long)pvVar3 + sVar2) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


