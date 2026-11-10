/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333bd70; name: FUN_0333bd70
 */


void FUN_0333bd70(long param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar2 = PTR_PTR_0434a080;
  uVar5 = *(uint *)(param_1 + 0x24);
  if ((int)(uVar5 & 0x3fffffff) < (int)param_2) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    if (0x3fffffff < (int)param_2) {
      FUN_032bd0a8(param_2);
      uVar5 = *(uint *)(param_1 + 0x24);
    }
    uVar5 = (uVar5 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    uVar4 = param_2;
    if ((int)param_2 <= (int)uVar5) {
      uVar4 = uVar5;
    }
    uVar3 = FUN_032bd1d4(puVar2,uVar4,0x18,uVar3,uVar1);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  uVar5 = *(uint *)(param_1 + 0x334);
  if ((int)param_3 <= (int)(uVar5 & 0x3fffffff)) goto LAB_0333bdbc;
  uVar3 = *(undefined8 *)(param_1 + 0x328);
  uVar1 = *(undefined4 *)(param_1 + 0x330);
  if (0x3fffffff < (int)param_3) {
    FUN_032bd0a8(param_3);
    uVar5 = *(uint *)(param_1 + 0x334);
  }
  uVar5 = (uVar5 & 0x3fffffff) * 2;
  if (uVar5 < 0x3fffffff) {
    if ((int)param_3 <= (int)uVar5) {
LAB_0333be10:
      param_3 = uVar5;
    }
  }
  else {
    uVar5 = 0x3fffffff;
    if ((int)param_3 < 0x40000000) goto LAB_0333be10;
  }
  uVar3 = FUN_032bd1d4(puVar2,param_3,4,uVar3,uVar1);
  *(undefined8 *)(param_1 + 0x328) = uVar3;
LAB_0333bdbc:
  if ((int)(*(uint *)(param_1 + 0x3c4) & 0x3fffffff) < (int)param_2) {
    uVar3 = FUN_0333c5f0(puVar2,param_2,*(undefined8 *)(param_1 + 0x3b8),
                         *(undefined4 *)(param_1 + 0x3c0),param_1 + 0x3c4);
    *(undefined8 *)(param_1 + 0x3b8) = uVar3;
  }
  return;
}


