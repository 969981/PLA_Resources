/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ec198; name: FUN_007ec198
 */


undefined8
FUN_007ec198(char *param_1,char *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  AddrInfo *pAVar4;
  AddrInfo aAStack_58 [4];
  undefined1 local_54;
  AddrInfo *local_28;
  
  memset(aAStack_58,0,0x30);
  local_54 = 2;
  iVar2 = nn::socket::GetAddrInfo(param_1,param_2,aAStack_58,&local_28);
  if (iVar2 != 0) {
    nn::socket::GAIStrError();
    return 0;
  }
  if (local_28 != (AddrInfo *)0x0) {
    pAVar4 = local_28;
    if (param_5 == 0) {
      do {
        pAVar4 = *(AddrInfo **)(pAVar4 + 0x28);
      } while (pAVar4 != (AddrInfo *)0x0);
    }
    else {
      do {
        if ((pAVar4[4] == (AddrInfo)0x2) && (uVar3 = FUN_007e3604(param_5), (uVar3 & 1) == 0)) {
          uVar1 = (*(uint *)(*(long *)(pAVar4 + 0x18) + 4) & 0xff00ff00) >> 8 |
                  (*(uint *)(*(long *)(pAVar4 + 0x18) + 4) & 0xff00ff) << 8;
          FUN_007e34ac(param_5,uVar1 >> 0x10 | uVar1 << 0x10);
        }
        pAVar4 = *(AddrInfo **)(pAVar4 + 0x28);
      } while (pAVar4 != (AddrInfo *)0x0);
    }
  }
  nn::socket::FreeAddrInfo(local_28);
  return 1;
}


