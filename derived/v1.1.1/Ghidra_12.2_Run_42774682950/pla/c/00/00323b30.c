/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00323b30; name: FUN_00323b30
 */


byte * FUN_00323b30(undefined8 param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  byte *local_28;
  
  local_28 = param_2;
  while( true ) {
    uVar3 = FUN_0030c7bc(param_3,&local_28,*(undefined4 *)(param_3 + 0x5c));
    if ((uVar3 & 1) != 0) {
      return local_28;
    }
    uVar4 = (uint)*local_28;
    pbVar2 = local_28 + 1;
    if ((char)*local_28 < '\0') {
      uVar4 = (uVar4 + (uint)local_28[1] * 0x80) - 0x80;
      pbVar2 = local_28 + 2;
      if ((char)local_28[1] < '\0') {
        bVar1 = local_28[2];
        uVar4 = (uVar4 + (uint)bVar1 * 0x4000) - 0x4000;
        if ((char)bVar1 < '\0') {
          uVar4 = (uVar4 + (uint)local_28[3] * 0x200000) - 0x200000;
          if ((char)local_28[3] < '\0') {
            if ((char)local_28[4] < 0) {
              return (byte *)0x0;
            }
            lVar5 = 4;
            uVar4 = uVar4 + (char)local_28[4] * 0x10000000 + 0xf0000000;
          }
          else {
            lVar5 = 3;
          }
        }
        else {
          lVar5 = 2;
        }
        pbVar2 = local_28 + 1 + lVar5;
      }
    }
    local_28 = pbVar2;
    if ((uVar4 == 0) || ((uVar4 & 7) == 4)) break;
    local_28 = (byte *)FUN_00323c80(uVar4,param_1,local_28,param_3);
    if (local_28 == (byte *)0x0) {
      return (byte *)0x0;
    }
  }
  *(uint *)(param_3 + 0x50) = uVar4 - 1;
  return local_28;
}


