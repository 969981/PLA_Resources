/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b31168; name: FUN_01b31168
 */


void FUN_01b31168(undefined8 param_1,long *param_2,char *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *pcVar3;
  char *__dest;
  long lVar4;
  long lVar5;
  char acStack_40 [8];
  char *local_38;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    lVar4 = 9;
  }
  else {
    lVar4 = *(long *)(lVar5 + 0x68) + 9;
  }
  sVar2 = strlen(param_3);
  __dest = acStack_40 + -(lVar4 + sVar2 + 0xf & 0xfffffffffffffff0);
  local_38 = __dest;
  *__dest = '\0';
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + 0x60);
  }
  pcVar3 = strcat(__dest,(char *)*puVar1);
  pcVar3 = strcat(pcVar3,param_3);
  sVar2 = strlen(pcVar3);
  *(undefined8 *)(__dest + sVar2) = s__ao_bntx_0397f518._0_8_;
  (__dest + sVar2)[8] = '\0';
  FUN_009313e8(param_1,&local_38);
  return;
}


