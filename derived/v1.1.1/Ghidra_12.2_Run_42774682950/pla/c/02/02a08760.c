/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a08760; name: FUN_02a08760
 */


uint FUN_02a08760(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  char local_38 [4];
  char local_34 [4];
  
  local_34[0] = '\0';
  local_38[0] = '\x1f';
  uVar2 = FUN_0298f234(*(undefined8 *)(param_1 + 0x38),param_2,param_4,param_3,local_38,local_34);
  if ((uVar2 & 1) == 0) {
    if (local_34[0] == '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
    }
  }
  else {
    FUN_02a08854(param_1,param_2,param_3,param_4);
    FUN_0298f904(*(undefined8 *)(param_1 + 0x38),param_2);
    cVar1 = local_38[0];
    if ((*(byte *)(param_2 + 0x387) & 0x78) != 0) {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x6f,
                   *(undefined1 *)(param_2 + 0x7d),1);
    }
    if (cVar1 != '\x1f') {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x6f,cVar1,1);
    }
  }
  return uVar2 & 1;
}


