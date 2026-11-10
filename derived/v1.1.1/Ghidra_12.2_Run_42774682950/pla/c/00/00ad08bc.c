/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad08bc; name: FUN_00ad08bc
 */


void FUN_00ad08bc(long param_1)

{
  char cVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + 0x2d4) != '\0') && (*(char *)(param_1 + 0x2d5) != '\0')) {
    lVar2 = param_1 + -0x48;
    (**(code **)(*(long *)(param_1 + -0x48) + 0x120))(lVar2);
    if (*(char *)(param_1 + 0x358) == '\0') {
      cVar1 = *(char *)(param_1 + 0x388);
    }
    else {
      FUN_00ad0028(lVar2);
      cVar1 = *(char *)(param_1 + 0x388);
    }
    if (cVar1 != '\0') {
      FUN_00ad045c(lVar2);
      return;
    }
  }
  return;
}


