/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e3670; name: FUN_007e3670
 */


void FUN_007e3670(undefined8 param_1,long param_2,void *param_3)

{
  void *__s1;
  int iVar1;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if (param_3 == (void *)0x0) {
    local_40[0] = 0x10407;
  }
  else {
    __s1 = (void *)(param_2 + 8);
    iVar1 = memcmp(__s1,&DAT_03a7160c,0x10);
    if (iVar1 == 0) {
      memset(param_3,0,0x10);
    }
    else {
      iVar1 = memcmp(__s1,&DAT_03a7160c,0x10);
      if ((iVar1 == 0) || (iVar1 = memcmp((void *)(param_2 + 0xc),&DAT_03a7160c,0xc), iVar1 == 0)) {
        local_40[0] = 0x10408;
        goto LAB_007e372c;
      }
      memcpy(param_3,__s1,0x10);
    }
    local_40[0] = 0;
  }
LAB_007e372c:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


