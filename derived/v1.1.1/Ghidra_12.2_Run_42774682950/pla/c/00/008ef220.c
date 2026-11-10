/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ef220; name: FUN_008ef220
 */


void FUN_008ef220(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double __x;
  undefined8 local_40;
  undefined4 local_34;
  
  lVar3 = FUN_001511d0(param_1,1);
  uVar7 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_04379780 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_008caebc();
    uVar7 = (*pcVar5)(uVar7,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  local_40 = 0x100000001;
  iVar1 = FUN_001504d0(param_1,2);
  if (iVar1 == 0) {
    __x = (double)FUN_00150a90(param_1,2,0);
    lVar4 = llround(__x);
    local_34 = (undefined4)lVar4;
  }
  else {
    local_34 = FUN_00150ba0(param_1,2,0);
  }
  uVar2 = FUN_008ef334(param_1,&local_40,param_2,uVar7,&local_34);
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar2 & 1);
  return;
}


