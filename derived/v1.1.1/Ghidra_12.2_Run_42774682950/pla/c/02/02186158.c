/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02186158; name: FUN_02186158
 */


void FUN_02186158(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined4 local_34;
  
  lVar2 = FUN_001511d0(param_1,1);
  uVar5 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437d0e8 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00efadec();
    uVar5 = (*pcVar3)(uVar5,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  local_40 = 0x100000001;
  local_34 = FUN_00150ba0(param_1,2,0);
  FUN_02185e90(param_1,&local_40,param_2,uVar5,&local_34);
  FUN_0014ff10(param_1,0);
  return;
}


