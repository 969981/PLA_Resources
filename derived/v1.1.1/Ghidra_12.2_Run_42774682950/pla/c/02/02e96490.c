/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e96490; name: FUN_02e96490
 */


void FUN_02e96490(undefined4 param_1,long *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int local_58;
  int iStack_54;
  undefined1 auStack_50 [8];
  short *local_48;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  iVar1 = FUN_02ead870(*param_2,*param_3,auStack_50,0,auStack_34,auStack_38,&iStack_54,&local_58,0,0
                       ,1);
  if ((iVar1 == 1) && ((uint)(local_58 + iStack_54) <= *param_3)) {
    if ((*local_48 == -1) || (*local_48 == 0x3040)) {
      uVar2 = FUN_02e961c8(auStack_50);
      lVar3 = (*DAT_0442d140)(param_1,uVar2,4);
      if (lVar3 != 0) {
        iVar1 = FUN_02e96218(lVar3,uVar2,*param_2,*param_3,(int)local_48 - (int)*param_2,local_58,
                             (ulong)(ushort)local_48[1] << 1,auStack_50);
        if (iVar1 == 1) {
          (*DAT_0442d158)(param_1,*param_2);
          *param_2 = lVar3;
          *param_3 = uVar2;
        }
        else {
          (*DAT_0442d158)(param_1,lVar3);
        }
      }
    }
  }
  return;
}


