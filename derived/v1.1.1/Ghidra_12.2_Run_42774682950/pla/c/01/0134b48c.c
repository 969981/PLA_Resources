/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134b48c; name: FUN_0134b48c
 */


void FUN_0134b48c(undefined1 param_1 [16],undefined4 param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  
  iVar7 = *(int *)(*(long *)(param_3 + 0x5c0) + 0x88);
  iVar5 = -(uint)(iVar7 != 5);
  if (iVar7 == 0) {
    iVar5 = 1;
  }
  iVar4 = 2;
  if (iVar7 != 1) {
    iVar4 = iVar5;
  }
  iVar5 = 3;
  if (iVar7 != 2) {
    iVar5 = iVar4;
  }
  iVar4 = 4;
  if (iVar7 != 3) {
    iVar4 = iVar5;
  }
  iVar5 = 5;
  if (iVar7 != 4) {
    iVar5 = iVar4;
  }
  if (iVar7 != 6) {
    iVar7 = iVar5;
  }
  bVar2 = (param_4 & 1) != 0;
  iVar5 = 6;
  if (bVar2) {
    iVar5 = 1;
  }
  iVar4 = 1;
  if (bVar2) {
    iVar4 = -1;
  }
  iVar6 = 6;
  if (iVar7 == -1) {
    iVar6 = 7;
    iVar7 = iVar5;
  }
  while( true ) {
    iVar7 = iVar7 + iVar4;
    if (iVar7 < 0) {
      iVar7 = 6;
    }
    else if (6 < iVar7) {
      iVar7 = 0;
    }
    uVar1 = (&DAT_03a7b244)[iVar7];
    uVar3 = FUN_0131d328(uVar1);
    if ((uVar3 & 1) != 0) break;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
LAB_0134b57c:
      FUN_00d42438(param_3,1,1);
      return;
    }
  }
  local_48 = FUN_0134a29c(param_3,uVar1);
  uStack_44 = param_2;
  FUN_0134a394(param_3,&local_48,0,0);
  goto LAB_0134b57c;
}


