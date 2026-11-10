/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f40970; name: FUN_02f40970
 */


void FUN_02f40970(long *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  *param_2 = 0;
  pbVar3 = (byte *)*param_1;
  *param_1 = (long)(pbVar3 + 1);
  bVar1 = *pbVar3;
  uVar2 = bVar1 & 0x7f | *param_2;
  *param_2 = uVar2;
  if ((char)bVar1 < '\0') {
    *param_2 = uVar2 << 7;
    pbVar3 = (byte *)*param_1;
    *param_1 = (long)(pbVar3 + 1);
    bVar1 = *pbVar3;
    uVar2 = bVar1 & 0x7f | *param_2;
    *param_2 = uVar2;
    if ((char)bVar1 < '\0') {
      *param_2 = uVar2 << 7;
      pbVar3 = (byte *)*param_1;
      *param_1 = (long)(pbVar3 + 1);
      bVar1 = *pbVar3;
      uVar2 = bVar1 & 0x7f | *param_2;
      *param_2 = uVar2;
      if ((char)bVar1 < '\0') {
        *param_2 = uVar2 << 7;
        pbVar3 = (byte *)*param_1;
        *param_1 = (long)(pbVar3 + 1);
        bVar1 = *pbVar3;
        uVar2 = bVar1 & 0x7f | *param_2;
        if ((bVar1 & 0x80) != 0) {
          uVar2 = 0xffffffff;
        }
        *param_2 = uVar2;
      }
    }
  }
  return;
}


