/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ef82c; name: FUN_008ef82c
 */


void FUN_008ef82c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double __x;
  undefined8 local_40;
  undefined4 local_34;
  
  lVar2 = FUN_001511d0(param_1,1);
  uVar6 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_04379780 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_008caebc();
    uVar6 = (*pcVar4)(uVar6,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  local_40 = 0x100000001;
  iVar1 = FUN_001504d0(param_1,2);
  if (iVar1 == 0) {
    __x = (double)FUN_00150a90(param_1,2,0);
    lVar3 = llround(__x);
    local_34 = (undefined4)lVar3;
  }
  else {
    local_34 = FUN_00150ba0(param_1,2,0);
  }
  iVar1 = FUN_008ef6e8(param_1,&local_40,param_2,uVar6,&local_34);
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,(long)iVar1);
  return;
}


