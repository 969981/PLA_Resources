/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01015f5c; name: FUN_01015f5c
 */


void FUN_01015f5c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437c708 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00ea12ac();
    lVar3 = (*pcVar5)(lVar3,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  dVar6 = (double)FUN_00150a90(param_1,2,0);
  dVar7 = (double)FUN_00150a90(param_1,3,0);
  dVar8 = (double)FUN_00150a90(param_1,4,0);
  pcVar5 = *(code **)(lVar2 + 0xf8);
  if ((*(ulong *)(lVar2 + 0x100) & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0x100) >> 1)));
  }
  (*pcVar5)((float)dVar6,(float)dVar7,(float)dVar8);
  FUN_0014ff10(param_1,0);
  return;
}


