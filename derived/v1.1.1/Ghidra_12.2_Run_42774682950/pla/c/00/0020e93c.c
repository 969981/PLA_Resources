/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020e93c; name: FUN_0020e93c
 */


undefined8 FUN_0020e93c(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long local_58;
  long lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uStack_44 = CONCAT31(uStack_44._1_3_,*(char *)(param_1 + 0xea) != '\0');
  lVar2 = *(long *)(param_1 + 0x98);
  lVar3 = *(long *)(param_1 + 0xa0);
  local_58 = lVar2;
  lStack_50 = lVar3;
  local_48 = FUN_0020ed78(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
  if ((*(char *)(param_1 + 0xe9) == '\0') ||
     (uVar1 = FUN_0020fb80(param_1,&local_58,0,0), (int)uVar1 == 0)) {
    uVar1 = 0;
    param_2[1] = lStack_50;
    param_2[2] = CONCAT44(uStack_44,local_48);
    *param_2 = local_58;
    *(long *)(param_1 + 0xa8) = lVar2;
    *(long *)(param_1 + 0xb0) = lVar3;
    *(long *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return uVar1;
}


