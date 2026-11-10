/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5a978; name: FUN_00d5a978
 */


undefined8 FUN_00d5a978(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  iVar5 = (int)param_1[0xdb];
  iVar6 = 0;
  if (iVar5 != 2) {
    iVar6 = iVar5;
  }
  lVar8 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar6 * 0x28);
  lVar8 = *(long *)(lVar8 + 0x8b0);
  iVar6 = *(int *)(lVar8 + 0x20);
  iVar1 = *(int *)(lVar8 + 0x10);
  iVar3 = *(int *)(lVar8 + 0x14);
  iVar2 = *(int *)(lVar8 + 0x24);
  iVar4 = *(int *)(lVar8 + 0x28);
  iVar7 = (**(code **)(*param_1 + 0x180))(param_1,(int)param_1[0xdd]);
  if ((iVar7 == 0) && ((int)param_1[0xdd] == iVar5)) {
    if (iVar4 != 0) {
      iVar6 = iVar2;
    }
    if (iVar3 + iVar6 * iVar1 == (uint)*(ushort *)((long)param_1 + 0x6ec)) {
      return 1;
    }
  }
  return 0;
}


