/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00458c40; name: FUN_00458c40
 */


void FUN_00458c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  FUN_00402590(param_1,"%*s%s:\n%*s",param_4,&DAT_03996322,param_2,param_4 + 2);
  iVar2 = FUN_004217c0(param_3,0);
  bVar1 = iVar2 == 0;
  if (bVar1) {
    iVar2 = FUN_004217c0(param_3,1);
  }
  else {
    FUN_004044c0(param_1,"Unused");
    iVar2 = FUN_004217c0(param_3,1);
  }
  if (iVar2 != 0) {
    if (!bVar1) {
      FUN_004044c0(param_1,&DAT_0398d5c8);
    }
    FUN_004044c0(param_1,"Key Compromise");
    bVar1 = false;
  }
  iVar2 = FUN_004217c0(param_3,2);
  if (iVar2 != 0) {
    if (!bVar1) {
      FUN_004044c0(param_1,&DAT_0398d5c8);
    }
    FUN_004044c0(param_1,"CA Compromise");
    bVar1 = false;
  }
  iVar2 = FUN_004217c0(param_3,3);
  if (iVar2 != 0) {
    if (!bVar1) {
      FUN_004044c0(param_1,&DAT_0398d5c8);
    }
    FUN_004044c0(param_1,"Affiliation Changed");
    bVar1 = false;
  }
  iVar2 = FUN_004217c0(param_3,4);
  if (iVar2 != 0) {
    if (!bVar1) {
      FUN_004044c0(param_1,&DAT_0398d5c8);
    }
    FUN_004044c0(param_1,"Superseded");
    bVar1 = false;
  }
  iVar2 = FUN_004217c0(param_3,5);
  if (iVar2 != 0) {
    if (!bVar1) {
      FUN_004044c0(param_1,&DAT_0398d5c8);
    }
    FUN_004044c0(param_1,"Cessation Of Operation");
    bVar1 = false;
  }
  iVar2 = FUN_004217c0(param_3,6);
  if (iVar2 != 0) {
    if (!bVar1) {
      FUN_004044c0(param_1,&DAT_0398d5c8);
    }
    FUN_004044c0(param_1,"Certificate Hold");
    bVar1 = false;
  }
  iVar2 = FUN_004217c0(param_3,7);
  if (iVar2 != 0) {
    if (!bVar1) {
      FUN_004044c0(param_1,&DAT_0398d5c8);
    }
    FUN_004044c0(param_1,"Privilege Withdrawn");
    bVar1 = false;
  }
  iVar2 = FUN_004217c0(param_3,8);
  if (iVar2 == 0) {
    if (bVar1) {
      FUN_004044c0(param_1,"<EMPTY>\n");
      return;
    }
  }
  else {
    if (!bVar1) {
      FUN_004044c0(param_1,&DAT_0398d5c8);
    }
    FUN_004044c0(param_1,"AA Compromise");
  }
  FUN_004044c0(param_1,&DAT_0396725e);
  return;
}


