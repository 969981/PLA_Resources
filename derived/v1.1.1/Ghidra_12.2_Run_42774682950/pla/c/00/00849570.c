/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00849570; name: FUN_00849570
 */


void FUN_00849570(int *param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 local_60 [4];
  undefined4 local_48 [2];
  
  if (param_2[0xd] != 0) {
    local_60[0] = 0x10402;
    goto LAB_0084972c;
  }
  uVar1 = *(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50);
  *(ushort *)((long)param_2 + 0x5a) = uVar1;
  uVar2 = uVar1 - 1;
  uVar11 = (ulong)uVar2;
  uVar5 = FUN_007e336c();
  lVar6 = FUN_0081a750(uVar11 * 0x520,uVar5);
  if (lVar6 == 0) {
LAB_00849604:
    param_2[0xd] = lVar6;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
      FUN_0084acf0(param_1,lVar6,param_3,param_4,uVar4);
      if (*param_1 == 0) {
        lVar6 = 0;
        do {
          if (uVar11 * 0x520 == lVar6 + 0x520) goto LAB_00849708;
          lVar7 = param_2[0xd];
          uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
          FUN_0084acf0(param_1,lVar7 + lVar6 + 0x520,param_3,param_4,uVar4);
          lVar6 = lVar6 + 0x520;
        } while (*param_1 == 0);
      }
      puVar8 = (undefined8 *)param_2[0xd];
      *(undefined2 *)((long)param_2 + 0x5a) = 0;
      param_2[0xc] = 0;
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
      uVar11 = FUN_0081a840(puVar8);
      if (0x51f < uVar11) {
        uVar10 = 0;
        puVar9 = puVar8;
        do {
          (**(code **)*puVar9)(puVar9);
          uVar10 = uVar10 + 1;
          puVar9 = puVar9 + 0xa4;
        } while (uVar10 < uVar11 / 0x520);
      }
      FUN_0081a800(puVar8);
      param_2[0xd] = 0;
      return;
    }
  }
  else {
    if (uVar2 != 0) {
      lVar7 = lVar6;
      uVar10 = uVar11;
      do {
        FUN_0084a350(lVar7);
        uVar10 = uVar10 - 1;
        lVar7 = lVar7 + 0x520;
      } while (uVar10 != 0);
      goto LAB_00849604;
    }
    param_2[0xd] = lVar6;
  }
LAB_00849708:
  param_2[0xc] = 0xfffffff;
  puVar3 = PTR_DAT_043773b8;
  local_60[0] = 0;
  *(short *)(PTR_DAT_043773b8 + 0x3cc) = (short)uVar2 * (short)param_3;
  *(short *)(puVar3 + 0x3ce) = (short)uVar2 * (short)param_4;
LAB_0084972c:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_48);
  FUN_007ee578(param_1,local_60);
  return;
}


