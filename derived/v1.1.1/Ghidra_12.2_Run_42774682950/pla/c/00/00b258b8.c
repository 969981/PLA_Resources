/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b258b8; name: FUN_00b258b8
 */


undefined1  [16] FUN_00b258b8(long param_1,undefined2 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  short sVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  sVar5 = param_2[2];
  uVar6 = CONCAT22(sVar5,*param_2);
  iVar4 = *(int *)(param_2 + 4);
  uVar1 = (ulong)*(byte *)((long)param_2 + 0xd) << 0x21;
  uVar2 = CONCAT14(iVar4 == 1,uVar6) | uVar1;
  lVar7 = FUN_00b078ec(*(undefined8 *)(param_1 + 0x98),uVar2,0);
  uVar8 = uVar2;
  if ((lVar7 == 0) && (lVar7 = FUN_00b078ec(*(undefined8 *)(param_1 + 0x98),uVar2,0), lVar7 == 0)) {
    uVar1 = uVar1 & 0x200000000;
    uVar3 = (ulong)CONCAT14(iVar4 != 1,uVar6);
    uVar8 = uVar1 | uVar3;
    lVar7 = FUN_00b078ec(*(undefined8 *)(param_1 + 0x98),uVar8,0);
    if ((lVar7 == 0) && (lVar7 = FUN_00b078ec(*(undefined8 *)(param_1 + 0x98),uVar8,0), lVar7 == 0))
    {
      if (sVar5 != 0) {
        uVar8 = uVar2 & 0x30000ffff;
        lVar7 = FUN_00b078ec(*(undefined8 *)(param_1 + 0x98),uVar8,0);
        if ((lVar7 != 0) ||
           (lVar7 = FUN_00b078ec(*(undefined8 *)(param_1 + 0x98),uVar8,0), lVar7 != 0))
        goto LAB_00b25918;
        uVar8 = uVar1 | uVar3 & 0x30000ffff;
        lVar7 = FUN_00b078ec(*(undefined8 *)(param_1 + 0x98),uVar8,0);
        if ((lVar7 != 0) ||
           (lVar7 = FUN_00b078ec(*(undefined8 *)(param_1 + 0x98),uVar8,0), lVar7 != 0))
        goto LAB_00b25918;
      }
      uVar8 = 0x1c0;
      FUN_00b078ec(*(undefined8 *)(param_1 + 0x98),0x1c0,0);
    }
  }
LAB_00b25918:
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar8;
  return auVar9;
}


