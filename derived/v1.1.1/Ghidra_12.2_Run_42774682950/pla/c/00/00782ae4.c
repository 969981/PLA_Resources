/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00782ae4; name: FUN_00782ae4
 */


undefined8 FUN_00782ae4(int *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  sockaddr *psVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  uint local_34;
  
  if ((*param_2 & 1) == 0) {
    uVar5 = (ulong)(*param_2 >> 1);
LAB_00782b1c:
                    /* try { // try from 00782b24 to 00782b2f has its CatchHandler @ 00782c40 */
    FUN_002a6910(param_2,0x5dc - uVar5,0);
  }
  else {
    uVar5 = *(ulong *)(param_2 + 8);
    if (uVar5 < 0x5dc) goto LAB_00782b1c;
    *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x5dc) = 0;
    param_2[8] = 0xdc;
    param_2[9] = 5;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  local_34 = FUN_007828d0();
  iVar2 = *param_1;
  if ((*param_2 & 1) == 0) {
    pbVar6 = param_2 + 1;
    uVar5 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_2 + 8);
    pbVar6 = *(byte **)(param_2 + 0x10);
  }
  psVar3 = (sockaddr *)FUN_0078284c(param_3);
  uVar5 = nn::socket::RecvFrom(iVar2,pbVar6,uVar5,0,psVar3,&local_34);
  if ((long)uVar5 < 0) {
    iVar2 = nn::socket::GetLastErrno();
    if (iVar2 != 0x16) {
      if (iVar2 == 0xb) {
        return 2;
      }
      if (iVar2 != 9) {
        return 1;
      }
    }
    return 3;
  }
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    lVar4 = uVar5 - (bVar1 >> 1);
    if (bVar1 >> 1 <= uVar5 && lVar4 != 0) {
LAB_00782bf0:
                    /* try { // try from 00782bf0 to 00782bfb has its CatchHandler @ 00782c3c */
      FUN_002a6910(param_2,lVar4,0);
      return 0;
    }
  }
  else {
    lVar4 = uVar5 - *(ulong *)(param_2 + 8);
    if (*(ulong *)(param_2 + 8) <= uVar5 && lVar4 != 0) goto LAB_00782bf0;
  }
  if ((bVar1 & 1) == 0) {
    param_2[uVar5 + 1] = 0;
    *param_2 = (byte)((int)uVar5 << 1);
  }
  else {
    *(undefined1 *)(*(long *)(param_2 + 0x10) + uVar5) = 0;
    *(ulong *)(param_2 + 8) = uVar5;
  }
  return 0;
}


