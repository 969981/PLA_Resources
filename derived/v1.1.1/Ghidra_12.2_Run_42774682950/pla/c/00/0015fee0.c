/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015fee0; name: FUN_0015fee0
 */


/* WARNING: Removing unreachable block (ram,0x0015ff20) */

bool FUN_0015fee0(undefined8 param_1,FILE *param_2,int param_3)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long local_2070;
  ulong local_2068;
  ulong local_2060;
  
  FUN_00155030(param_1,&local_2070);
  iVar3 = 0;
  do {
    if (iVar3 == 10) break;
    lVar4 = FUN_00154c30(&local_2070,0x2000);
    flockfile(param_2);
    uVar5 = 0;
    do {
      iVar3 = getc_unlocked(param_2);
      if ((iVar3 == -1) || (iVar3 == 10)) goto LAB_0015ff24;
      uVar1 = uVar5 + 1;
      *(char *)(lVar4 + uVar5) = (char)iVar3;
      uVar5 = uVar1;
    } while (uVar1 != 0x2000);
    uVar5 = 0x2000;
LAB_0015ff24:
    funlockfile(param_2);
    local_2060 = local_2060 + (uVar5 & 0xffffffff);
  } while (iVar3 != -1);
  if ((param_3 == 0) && (iVar3 == 10)) {
    if (local_2068 <= local_2060) {
      FUN_00154c30(&local_2070,1);
    }
    *(undefined1 *)(local_2070 + local_2060) = 10;
    local_2060 = local_2060 + 1;
  }
  FUN_00154ec0(&local_2070);
  if (iVar3 == 10) {
    bVar2 = true;
  }
  else {
    lVar4 = FUN_00150fc0(param_1,0xffffffff);
    bVar2 = lVar4 != 0;
  }
  return bVar2;
}


