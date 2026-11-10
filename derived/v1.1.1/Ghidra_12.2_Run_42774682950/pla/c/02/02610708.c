/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02610708; name: FUN_02610708
 */


void FUN_02610708(long param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x37c);
  if (cVar1 != '\0') {
    if (((((((*(long *)(param_1 + 0x348) == 0) || (*(int *)(*(long *)(param_1 + 0x348) + 0xc) == 0))
           || (*(long *)(param_1 + 0x318) == 0)) ||
          ((*(int *)(*(long *)(param_1 + 0x318) + 0xc) == 0 || (*(long *)(param_1 + 0x328) == 0))))
         || ((*(int *)(*(long *)(param_1 + 0x328) + 0xc) == 0 ||
             ((*(long *)(param_1 + 0x338) == 0 || (*(int *)(*(long *)(param_1 + 0x338) + 0xc) == 0))
             )))) || (*(long *)(param_1 + 0x358) == 0)) ||
       ((*(int *)(*(long *)(param_1 + 0x358) + 0xc) == 0 || (*(long *)(param_1 + 0x368) == 0)))) {
      if (cVar1 != '\0') goto LAB_02610760;
    }
    else if (*(int *)(*(long *)(param_1 + 0x368) + 0xc) == 0) {
LAB_02610760:
      FUN_0260ca3c(param_1);
      *(char *)(param_1 + 0x37c) = cVar1;
      cVar1 = *(char *)(param_1 + 0x390);
      goto joined_r0x02610770;
    }
  }
  cVar1 = *(char *)(param_1 + 0x390);
joined_r0x02610770:
  if ((cVar1 != '\0') &&
     ((*(long *)(param_1 + 0x380) == 0 || (*(int *)(*(long *)(param_1 + 0x380) + 0xc) == 0)))) {
    FUN_0260e730(param_1);
    *(char *)(param_1 + 0x390) = cVar1;
  }
  FUN_00b182e0(param_1 + 0x3d0,param_2);
  return;
}


