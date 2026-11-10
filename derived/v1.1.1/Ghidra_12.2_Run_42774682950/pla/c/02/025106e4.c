/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025106e4; name: FUN_025106e4
 */


void FUN_025106e4(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 uint *param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = FUN_025107f0();
  if ((uVar3 & 1) == 0) {
    iVar2 = FUN_00150310(param_2,param_3);
    *param_5 = (uint)(iVar2 != -1);
    uVar1 = param_5[1];
    if (iVar2 != -1) {
      uVar1 = uVar1 + 1;
    }
    param_5[1] = uVar1;
    *param_1 = 0;
  }
  else {
    lVar4 = FUN_001511d0(param_2,param_3);
    *param_5 = 1;
    param_5[1] = param_5[1] + 1;
    uVar7 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
    if ((*PTR_DAT_04387840 != '\0') &&
       (iVar2 = FUN_00155630(param_2,param_3,"class_cast"), iVar2 != 0)) {
      pcVar5 = (code *)FUN_001511d0(param_2,0xffffffff);
      uVar6 = FUN_0250de88();
      uVar7 = (*pcVar5)(uVar7,uVar6);
      FUN_0014ff10(param_2,0xfffffffe);
    }
    *param_1 = uVar7;
  }
  return;
}


