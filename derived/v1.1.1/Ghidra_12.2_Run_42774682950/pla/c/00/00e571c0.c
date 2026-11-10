/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e571c0; name: FUN_00e571c0
 */


undefined8 FUN_00e571c0(undefined8 param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  lVar4 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar5 = FUN_001511d0(param_1,1);
  lVar5 = *(long *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
  if ((*PTR_DAT_0437c440 != '\0') && (iVar3 = FUN_00155630(param_1,1,"class_cast"), iVar3 != 0)) {
    pcVar7 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_00e55f54();
    lVar5 = (*pcVar7)(lVar5,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  uVar6 = FUN_00150ba0(param_1,2,0);
  pcVar7 = *(code **)(lVar4 + 0x170);
  plVar1 = (long *)(lVar5 + ((long)*(ulong *)(lVar4 + 0x178) >> 1));
  if ((*(ulong *)(lVar4 + 0x178) & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *plVar1);
  }
  uVar2 = (*pcVar7)(plVar1,uVar6);
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar2 & 1);
  return 1;
}


