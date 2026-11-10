/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00850d04; name: FUN_00850d04
 */


void FUN_00850d04(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 local_60 [4];
  undefined4 local_48 [2];
  
  uVar3 = param_4 * 0x18;
  uVar9 = (ulong)uVar3;
  uVar4 = FUN_007e336c();
  puVar5 = (undefined8 *)FUN_0081a750(uVar9,uVar4);
  if ((uVar3 == 0) || (puVar5 == (undefined8 *)0x0)) {
    *(undefined8 **)(param_2 + 8) = puVar5;
    if (puVar5 != (undefined8 *)0x0) goto joined_r0x00850d78;
LAB_00850f24:
    local_60[0] = 0x10401;
  }
  else {
    uVar6 = 0;
    do {
      *(undefined4 *)((long)puVar5 + uVar6) = 0;
      uVar6 = uVar6 + 4;
    } while (uVar9 != uVar6);
    *(undefined8 **)(param_2 + 8) = puVar5;
joined_r0x00850d78:
    if (param_4 != 0) {
      *(undefined8 **)(param_2 + 0x48) = puVar5;
      lVar1 = param_2 + 0x30;
      *(uint *)(param_2 + 0x50) = param_4;
      *puVar5 = 0;
      puVar5[1] = 0;
      FUN_007e8fa0(lVar1,lVar1,(long)*(int *)(param_2 + 0x44) + (long)puVar5);
      if (param_4 != 1) {
        lVar10 = 0;
        lVar8 = (ulong)param_4 - 1;
        do {
          lVar2 = *(long *)(param_2 + 0x48) + lVar10;
          puVar5 = (undefined8 *)(lVar2 + 0x18);
          *puVar5 = 0;
          *(undefined8 *)(lVar2 + 0x20) = 0;
          FUN_007e8fa0(lVar1,lVar1,(long)*(int *)(param_2 + 0x44) + (long)puVar5);
          lVar10 = lVar10 + 0x18;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
    puVar5 = (undefined8 *)(param_2 + 0x18);
    if (*(undefined8 **)(param_2 + 0x20) != puVar5) {
      puVar7 = *(undefined8 **)(param_2 + 0x20);
      do {
        puVar11 = (undefined8 *)puVar7[1];
        *puVar7 = 0;
        puVar7[1] = 0;
        FUN_007e8fc4(param_2 + 0x30,param_2 + 0x30,(long)*(int *)(param_2 + 0x44) + (long)puVar7);
        puVar7 = puVar11;
      } while (puVar11 != puVar5);
    }
    FUN_007e8f94(puVar5);
    uVar4 = FUN_007e336c();
    puVar5 = (undefined8 *)FUN_0081a750(uVar9,uVar4);
    if ((uVar3 == 0) || (puVar5 == (undefined8 *)0x0)) {
      *(undefined8 **)(param_2 + 0x10) = puVar5;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00850f24;
    }
    else {
      uVar6 = 0;
      do {
        *(undefined4 *)((long)puVar5 + uVar6) = 0;
        uVar6 = uVar6 + 4;
      } while (uVar9 != uVar6);
      *(undefined8 **)(param_2 + 0x10) = puVar5;
    }
    if (param_4 != 0) {
      *(undefined8 **)(param_2 + 0x88) = puVar5;
      lVar1 = param_2 + 0x70;
      *(uint *)(param_2 + 0x90) = param_4;
      *puVar5 = 0;
      puVar5[1] = 0;
      FUN_007e8fa0(lVar1,lVar1,(long)*(int *)(param_2 + 0x84) + (long)puVar5);
      if (param_4 != 1) {
        lVar10 = 0;
        lVar8 = (ulong)param_4 - 1;
        do {
          lVar2 = *(long *)(param_2 + 0x88) + lVar10;
          puVar5 = (undefined8 *)(lVar2 + 0x18);
          *puVar5 = 0;
          *(undefined8 *)(lVar2 + 0x20) = 0;
          FUN_007e8fa0(lVar1,lVar1,(long)*(int *)(param_2 + 0x84) + (long)puVar5);
          lVar10 = lVar10 + 0x18;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
    puVar5 = (undefined8 *)(param_2 + 0x58);
    if (*(undefined8 **)(param_2 + 0x60) != puVar5) {
      puVar7 = *(undefined8 **)(param_2 + 0x60);
      do {
        puVar11 = (undefined8 *)puVar7[1];
        *puVar7 = 0;
        puVar7[1] = 0;
        FUN_007e8fc4(param_2 + 0x70,param_2 + 0x70,(long)*(int *)(param_2 + 0x84) + (long)puVar7);
        puVar7 = puVar11;
      } while (puVar11 != puVar5);
    }
    FUN_007e8f94(puVar5);
    local_60[0] = 0;
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_48);
  FUN_007ee578(param_1,local_60);
  return;
}


