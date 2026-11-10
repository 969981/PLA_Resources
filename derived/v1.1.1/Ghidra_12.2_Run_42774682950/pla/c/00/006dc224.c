/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dc224; name: FUN_006dc224
 */


bool FUN_006dc224(long param_1,char *param_2)

{
  ulong uVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  size_t __n;
  byte *__s1;
  byte *pbVar6;
  
  pbVar6 = *(byte **)(param_1 + 0x20);
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (pbVar6 == pbVar3) {
    return true;
  }
  __n = strlen(param_2);
  if (__n == 0xffffffffffffffff) {
    do {
      uVar1 = (ulong)(*pbVar6 >> 1);
      if ((*pbVar6 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      if (uVar1 == 0xffffffffffffffff) {
                    /* try { // try from 006dc324 to 006dc32b has its CatchHandler @ 006dc32c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar6 = pbVar6 + 0x20;
    } while (pbVar3 != pbVar6);
  }
  else if (__n == 0) {
    do {
      uVar1 = (ulong)(*pbVar6 >> 1);
      if ((*pbVar6 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      if (uVar1 == 0) goto LAB_006dc2f8;
      pbVar6 = pbVar6 + 0x20;
    } while (pbVar3 != pbVar6);
  }
  else {
    do {
      bVar4 = *pbVar6;
      sVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar2 = *(size_t *)(pbVar6 + 8);
      }
      if (__n == sVar2) {
        __s1 = *(byte **)(pbVar6 + 0x10);
        if ((bVar4 & 1) == 0) {
          __s1 = pbVar6 + 1;
        }
        iVar5 = memcmp(__s1,param_2,__n);
        if (iVar5 == 0) goto LAB_006dc2f8;
      }
      pbVar6 = pbVar6 + 0x20;
    } while (pbVar3 != pbVar6);
  }
  pbVar6 = pbVar3;
LAB_006dc2f8:
  return pbVar3 != pbVar6;
}


