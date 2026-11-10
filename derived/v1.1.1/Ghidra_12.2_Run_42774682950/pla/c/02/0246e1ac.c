/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0246e1ac; name: FUN_0246e1ac
 */


void FUN_0246e1ac(undefined8 param_1)

{
  long *plVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  lVar5 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar6 = FUN_001511d0(param_1,1);
  lVar6 = *(long *)(lVar6 + ((ulong)(uint)-(int)lVar6 & 7));
  if ((*PTR_DAT_04387418 != '\0') && (iVar4 = FUN_00155630(param_1,1,"class_cast"), iVar4 != 0)) {
    pcVar8 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_0246e0dc();
    lVar6 = (*pcVar8)(lVar6,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  uVar3 = FUN_00150ba0(param_1,2,0);
  dVar2 = (double)FUN_00150a90(param_1,3,0);
  pcVar8 = *(code **)(lVar5 + 0x68);
  plVar1 = (long *)(lVar6 + ((long)*(ulong *)(lVar5 + 0x70) >> 1));
  if ((*(ulong *)(lVar5 + 0x70) & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *plVar1);
  }
  (*pcVar8)((float)dVar2,plVar1,uVar3);
  FUN_0014ff10(param_1,0);
  return;
}


