/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060bd68; name: FUN_0060bd68
 */


void FUN_0060bd68(long *param_1,long *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  
  plVar7 = (long *)*param_2;
  if ((*(ushort *)(plVar7 + 1) & 0x4000 | 0xffff8000) != 0xffffc000) {
    iVar3 = (**(code **)(*plVar7 + 0x10))();
    iVar4 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined2 *)(*param_2 + 8));
    plVar7 = (long *)*param_2;
    if (iVar3 != iVar4) {
      uVar5 = (**(code **)(*plVar7 + 0x10))();
      uVar6 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined2 *)(*param_2 + 8));
                    /* WARNING: Subroutine does not return */
      FUN_00607c30("external/webrtc/p2p/base/stun.cc",0x54,
                   "attr->value_type() == GetAttributeValueType(attr->type())",PTR_DAT_043752d8,
                   uVar5,uVar6);
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,param_1);
  uVar2 = *(ushort *)(*param_2 + 10);
  sVar1 = 0;
  if ((uVar2 & 3) != 0) {
    sVar1 = 4 - (uVar2 & 3);
  }
  *(ushort *)((long)param_1 + 10) = uVar2 + *(short *)((long)param_1 + 10) + sVar1 + 4;
  FUN_0060be6c(param_1 + 5,param_2);
  return;
}


