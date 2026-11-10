/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0174573c; name: FUN_0174573c
 */


void FUN_0174573c(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar4 = FUN_001511d0(param_1,1);
  lVar4 = *(long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_04380bb0 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_01745128();
    lVar4 = (*pcVar6)(lVar4,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar6 = *(code **)(lVar3 + 200);
  if ((*(ulong *)(lVar3 + 0xd0) & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(lVar4 + ((long)*(ulong *)(lVar3 + 0xd0) >> 1)));
  }
  uVar2 = (*pcVar6)();
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar2 & 1);
  return;
}


