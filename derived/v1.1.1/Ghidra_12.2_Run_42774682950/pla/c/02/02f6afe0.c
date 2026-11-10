/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6afe0; name: FUN_02f6afe0
 */


void FUN_02f6afe0(long *param_1,uint *param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if (0 < param_3) {
    iVar6 = 0;
    do {
      lVar7 = param_1[2];
      switch(iVar6) {
      case 0:
        uVar5 = *param_2;
        break;
      case 1:
        uVar5 = param_2[1];
        break;
      case 2:
        uVar5 = param_2[2];
        break;
      case 3:
        uVar5 = param_2[3];
        break;
      default:
        uVar5 = 0;
      }
      uVar9 = (ulong)uVar5;
      plVar2 = *(long **)(*param_1 + 8);
      if (((plVar2 == (long *)0x0) ||
          (uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,6,*param_1 + 0x10,lVar7 + uVar9 * 0xc0),
          (uVar3 & 1) != 0)) && ((~*(uint *)(lVar7 + uVar9 * 0xc0 + 0x50) & 0xffffff) != 0)) {
        plVar2 = (long *)param_1[1];
        iVar4 = (int)plVar2[1];
        uVar8 = *(undefined8 *)(lVar7 + uVar9 * 0xc0 + 0xb0);
        iVar1 = iVar4 + 1;
        lVar7 = *plVar2;
        if ((int)(*(uint *)((long)plVar2 + 0xc) & 0x3fffffff) <= iVar4) {
          lVar7 = FUN_02f6b138(PTR_PTR_0434a080,iVar1);
          iVar4 = (int)plVar2[1];
          *plVar2 = lVar7;
        }
        *(undefined8 *)(lVar7 + (long)iVar4 * 8) = uVar8;
        *(int *)(plVar2 + 1) = iVar1;
      }
      iVar6 = iVar6 + 1;
    } while (param_3 != iVar6);
  }
  return;
}


