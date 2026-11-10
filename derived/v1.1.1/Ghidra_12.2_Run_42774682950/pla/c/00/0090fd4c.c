/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0090fd4c; name: FUN_0090fd4c
 */


void FUN_0090fd4c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  param_1[1] = uVar4;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar5 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar5;
  lVar7 = *(long *)(param_2 + 0x20);
  param_1[4] = lVar7;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar7 != 0) {
    uVar8 = param_1[2];
    uVar6 = *(ulong *)(lVar5 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar6 = uVar8 - 1 & uVar6;
    }
    else if (uVar8 <= uVar6) {
      uVar3 = 0;
      if (uVar8 != 0) {
        uVar3 = uVar6 / uVar8;
      }
      uVar6 = uVar6 - uVar3 * uVar8;
    }
    *(undefined8 **)(param_1[1] + uVar6 * 8) = param_1 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = uVar4;
  param_1[7] = uVar1;
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined1 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *param_1 = &PTR_LAB_041b7300;
  *(undefined1 *)(param_1 + 0xb) = uVar2;
  memcpy(param_1 + 0xc,(void *)(param_2 + 0x60),0x90);
  return;
}


