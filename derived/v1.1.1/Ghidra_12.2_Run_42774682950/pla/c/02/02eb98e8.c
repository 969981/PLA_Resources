/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb98e8; name: FUN_02eb98e8
 */


undefined8 FUN_02eb98e8(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  size_t __n;
  ulong __n_00;
  ulong uVar4;
  
  bVar1 = *(byte *)*param_2;
  __n_00 = (ulong)bVar1;
  *param_2 = (long)((byte *)*param_2 + 1);
  if (__n_00 != 0) {
    uVar4 = (ulong)(bVar1 + 4) & 0x1fc;
    __n = __n_00 * 8;
    pbVar2 = (byte *)FUN_02f59e30(0,uVar4 + __n);
    if (pbVar2 == (byte *)0x0) {
      return 0x34;
    }
    *pbVar2 = bVar1;
    memcpy(pbVar2 + 1,(void *)*param_2,__n_00);
    lVar3 = *param_2;
    *param_2 = (long)(lVar3 + __n_00);
    memcpy(pbVar2 + uVar4,(void *)(lVar3 + __n_00),__n);
    *param_2 = *param_2 + __n;
    *param_1 = pbVar2;
  }
  return 1;
}


