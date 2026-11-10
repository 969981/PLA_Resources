/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081f374; name: FUN_0081f374
 */


int FUN_0081f374(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_50;
  long lStack_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  
  lVar2 = param_1[1];
  local_e0 = param_3;
  uStack_d8 = param_4;
  local_d0 = param_5;
  uStack_c8 = param_6;
  local_c0 = param_7;
  uStack_b8 = param_8;
  (**(code **)(*param_1 + 0x18))();
  if (*(char *)param_1[1] == '\0') {
LAB_0081f420:
    iVar6 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      if (uVar5 == 0x80000) goto LAB_0081f420;
      uVar3 = uVar5 + 1;
    } while (((char *)param_1[1])[uVar5 + 1] != '\0');
    iVar6 = 0;
    if (uVar5 >> 0x13 == 0) {
      iVar6 = (int)(uVar5 + 1);
    }
  }
  lVar7 = (long)(int)param_1[2] - (long)iVar6;
  uStack_38 = 0xffffff80ffffffd0;
  local_50 = (undefined1 *)register0x00000008;
  lStack_48 = (long)register0x00000008 + -0xb0;
  local_40 = &local_e0;
  iVar4 = FUN_008219e0(lVar2 + iVar6,lVar7,param_2,&local_50);
  iVar1 = (int)lVar7 + -1;
  if (-1 < iVar4) {
    iVar1 = iVar4;
  }
  return iVar1 + iVar6;
}


