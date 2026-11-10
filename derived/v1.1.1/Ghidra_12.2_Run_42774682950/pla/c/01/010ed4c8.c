/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ed4c8; name: FUN_010ed4c8
 */


undefined1  [16] FUN_010ed4c8(long *param_1,uint param_2,long param_3,ulong param_4)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  char local_4c [4];
  char local_48 [4];
  char local_44 [4];
  
  uVar8 = (ulong)param_2;
  if (param_4 < uVar8) {
    uVar9 = 0;
  }
  else {
    plVar3 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
    uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,1,plVar3[1]);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar3 + 0x10))(plVar3,local_4c,1,0);
      uVar5 = uVar5 & 0xffffffff;
    }
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar9 = 0;
    *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
    if (((uVar5 & 1) != 0) && (local_4c[0] == '\x03')) {
      if (param_2 == 0) {
        uVar9 = 1;
      }
      else {
        uVar5 = 0;
        do {
          plVar3 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
          plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
          uVar7 = (**(code **)(*plVar4 + 0x10))(plVar4,1,uVar5 + plVar3[1]);
          if ((uVar7 & 1) == 0) {
            cVar1 = '\0';
            uVar2 = 0;
          }
          else {
            uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,local_48,1,uVar5);
            cVar1 = local_48[0];
            if ((uVar2 & 1) == 0) {
              cVar1 = '\0';
            }
            uVar2 = uVar2 & 1;
          }
          uVar9 = 0;
          if ((uVar2 == 0) || (1 < (byte)(cVar1 - 1U))) goto LAB_010ed6c0;
          uVar5 = uVar5 + 1;
        } while (uVar8 != uVar5);
        uVar9 = 1;
        do {
          plVar3 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
          plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
          uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,1,plVar3[1]);
          if ((uVar5 & 1) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,local_44,1,0);
            uVar2 = uVar2 & 1;
          }
          lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
          *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
          uVar8 = uVar8 - 1;
          *(bool *)param_3 = uVar2 != 0 && local_44[0] == '\x02';
          param_3 = param_3 + 1;
        } while (uVar8 != 0);
      }
    }
  }
LAB_010ed6c0:
  auVar10._8_4_ = param_2;
  auVar10._0_8_ = uVar9;
  auVar10._12_4_ = 0;
  return auVar10;
}


