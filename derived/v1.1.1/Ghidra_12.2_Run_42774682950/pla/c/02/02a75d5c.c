/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a75d5c; name: FUN_02a75d5c
 */


byte FUN_02a75d5c(long *param_1,int param_2,void *param_3)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  short *psVar5;
  long lVar6;
  ulong __n;
  void *__src;
  ulong uVar7;
  undefined1 auStack_1c38 [7160];
  
  if (*param_1 == 0) {
    bVar2 = 0;
    goto LAB_02a75eb8;
  }
  lVar6 = *(long *)(*param_1 + 0x18);
  psVar5 = (short *)(lVar6 + (long)param_2 * 0x18);
  __n = (ulong)*(uint *)(psVar5 + 2);
  __src = *(void **)(psVar5 + 8);
  if (*psVar5 == 0) {
    memcpy(param_3,__src,__n);
LAB_02a75e10:
    bVar2 = 1;
    goto LAB_02a75eb8;
  }
  uVar1 = *(ushort *)(lVar6 + (long)param_2 * 0x18 + 2);
  if (7 < uVar1) goto LAB_02a75e10;
  uVar7 = (ulong)*(uint *)(psVar5 + 4);
  uVar4 = 0xc;
  switch(uVar1) {
  case 0:
    bVar2 = nn::util::DecompressZlib(param_3,__n,__src,uVar7,auStack_1c38,0x1bf8);
    goto LAB_02a75eb8;
  default:
    iVar3 = FUN_001003e0(__src,param_3,uVar7,__n);
    bVar2 = 0 < iVar3;
    goto LAB_02a75eb8;
  case 3:
    uVar4 = 8;
    break;
  case 4:
    uVar4 = 0xd;
    break;
  case 5:
    uVar4 = 9;
    break;
  case 6:
    uVar4 = 0xb;
    break;
  case 7:
    break;
  }
  iVar3 = FUN_001038f0(uVar4,0xffffffffffffffff);
  lVar6 = tpidr_el0;
  lVar6 = FUN_00104fc0(__src,uVar7,param_3,__n,1,0,0,0,0,0,0,lVar6 + 0x78,(long)iVar3,3);
  bVar2 = lVar6 != 0;
LAB_02a75eb8:
  return bVar2 & 1;
}


