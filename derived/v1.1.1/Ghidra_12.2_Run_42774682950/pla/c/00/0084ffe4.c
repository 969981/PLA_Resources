/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084ffe4; name: FUN_0084ffe4
 */


void FUN_0084ffe4(undefined8 param_1,long *param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  Result *pRVar10;
  ulong local_88;
  undefined2 local_80;
  int local_78 [5];
  undefined1 auStack_64 [12];
  int local_58 [4];
  int local_48 [2];
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_043773c0;
  uVar4 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  FUN_00851594(local_48,uVar4,0);
  if (local_48[0] == 0) {
    local_58[0] = 0;
LAB_00850068:
    local_78[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_78);
  }
  else {
    cVar2 = FUN_008473d0(param_2);
    if ((cVar2 == -3) || (lVar8 = param_4[3], sVar3 = FUN_008473a0(param_2), (short)lVar8 == sVar3))
    {
      local_58[0] = 0x10408;
      goto LAB_00850068;
    }
    local_34 = 0;
    (**(code **)(*param_4 + 0x10))(local_58,param_4,auStack_64,&local_34,0xb);
    if (local_58[0] != 0) {
      local_78[0] = 0x10408;
      local_88 = local_88 & 0xffffffff00000000;
      pRVar10 = (Result *)&local_88;
LAB_008501ec:
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_78 | 4),pRVar10);
      piVar9 = local_78;
      goto LAB_00850080;
    }
    local_88 = 0;
    local_80 = 0;
    plVar5 = (long *)FUN_00847424(param_2);
    plVar6 = (long *)FUN_00854f4c(*(undefined8 *)puVar1);
    uVar7 = (**(code **)(*plVar6 + 0x48))();
    if ((uVar7 & 1) == 0) {
LAB_00850130:
      if (param_3 == 0) goto LAB_00850180;
      local_78[0] = (**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = (**(code **)(*plVar5 + 0x68))(plVar5,local_78,param_3,local_34,&local_88);
      if (lVar8 != 0) goto LAB_008501b4;
LAB_0085016c:
      local_78[0] = 0x4c0d;
LAB_008501e4:
      pRVar10 = (Result *)&local_38;
      local_38 = 0;
      goto LAB_008501ec;
    }
    plVar6 = (long *)FUN_00854f4c(*(undefined8 *)puVar1);
    uVar7 = (**(code **)(*plVar6 + 0x50))();
    if ((uVar7 & 1) == 0) goto LAB_00850130;
LAB_00850180:
    local_78[0] = (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = (**(code **)(*plVar5 + 0x70))(plVar5,local_78,local_34,&local_88);
    if (lVar8 == 0) goto LAB_0085016c;
LAB_008501b4:
    FUN_0084695c(local_78,plVar5,auStack_64);
    FUN_007ee660(local_58,local_78);
    if (local_58[0] == 0) {
      local_78[0] = 0;
      goto LAB_008501e4;
    }
  }
  piVar9 = local_58;
LAB_00850080:
  FUN_007ee578(param_1,piVar9);
  return;
}


