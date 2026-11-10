/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00938654; name: FUN_00938654
 */


void FUN_00938654(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  char *__dest;
  long lVar2;
  long lVar3;
  char acStack_a0 [128];
  char *local_18;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x68) + 1;
  }
  __dest = acStack_a0 + (0x80 - (lVar3 + 0xfU & 0xfffffffffffffff0));
  local_18 = __dest;
  *__dest = '\0';
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + 0x60);
  }
  strcat(__dest,(char *)*puVar1);
  FUN_009313e8(param_1,&local_18);
  return;
}


