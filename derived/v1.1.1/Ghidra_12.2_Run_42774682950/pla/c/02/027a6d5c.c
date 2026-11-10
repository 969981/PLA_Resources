/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a6d5c; name: FUN_027a6d5c
 */


undefined8 FUN_027a6d5c(undefined8 *param_1,undefined8 param_2)

{
  char *param0;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((param_1[0x188] == 0) && (*(int *)(param_1 + 0x187) != 1)) {
    param0 = (char *)(param_1 + 0x18c);
    memset(param0,0,5000);
    iVar1 = snprintf(param0,5000,
                     "{\"nuid\":\"%s\",\"rom\":\"%02d\",\"serialcode\":\"%s\",\"tok\":\"%s\",\"langcode\":\"%02d\"}"
                     ,(char *)(param_1 + 1),(uint)*(byte *)((long)param_1 + 0xc36),
                     (char *)((long)param_1 + 0xc25),(char *)((long)param_1 + 0x25),
                     (uint)*(byte *)((long)param_1 + 0xc37));
    FUN_027a6ed0(&local_50,*param_1,param_1);
    lVar2 = local_50;
    local_50 = 0;
    lVar4 = param_1[0x188];
    param_1[0x188] = lVar2;
    if (lVar4 == 0) {
      param_1[0x18b] = local_38;
    }
    else {
      FUN_027a7010(param_1 + 0x189);
      param_1[0x18b] = local_38;
      lVar2 = param_1[0x188];
    }
    param_1[0x18a] = uStack_40;
    param_1[0x189] = local_48;
    if (lVar2 != 0) {
      uVar3 = FUN_02cc3818(lVar2,param_2,param0,(long)iVar1);
      return uVar3;
    }
  }
  return 0;
}


